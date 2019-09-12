/**
* packetcapture API generated from packetcapture.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


#pragma once


#include "../base/FiltersBase.h"


class Packetcapture;

using namespace polycube::service::model;

class Filters : public FiltersBase {


  bool set_srcIp, set_dstIp, set_srcPort, set_dstPort, set_l4proto;

  std::string srcIp = "0.0.0.0/24";
  std::string dstIp = "0.0.0.0/24";

  uint16_t srcPort = 0;
  uint16_t dstPort = 0;

  std::string l4proto = "";

  uint32_t snaplen = 0;

 public:
  Filters(Packetcapture &parent, const FiltersJsonObject &conf);
  virtual ~Filters();

  /// <summary>
  /// Snapshot length
  /// </summary>
  uint32_t getSnaplen() override;
  void setSnaplen(const uint32_t &value) override;

  /// <summary>
  /// IP source filter
  /// </summary>
  std::string getSrc() override;
  void setSrc(const std::string &value) override;
  bool srcIp_is_set(){ return set_srcIp; };

  /// <summary>
  /// IP destination filter
  /// </summary>
  std::string getDst() override;
  void setDst(const std::string &value) override;
  bool dstIp_is_set(){ return set_dstIp; };

  /// <summary>
  /// Level 4 protocol filter
  /// </summary>
  std::string getL4proto() override;
  void setL4proto(const std::string &value) override;
  bool l4proto_is_set(){ return set_l4proto; };

  /// <summary>
  /// Source port filter
  /// </summary>
  uint16_t getSport() override;
  void setSport(const uint16_t &value) override;
  bool srcPort_is_set(){ return set_srcPort; };

  /// <summary>
  /// Destination port filter
  /// </summary>
  uint16_t getDport() override;
  void setDport(const uint16_t &value) override;
  bool dstPort_is_set(){ return set_dstPort; };
};
