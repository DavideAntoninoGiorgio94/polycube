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

  /// <summary>
  /// IP destination filter
  /// </summary>
  std::string getDst() override;
  void setDst(const std::string &value) override;

  /// <summary>
  /// Level 4 protocol filter
  /// </summary>
  std::string getL4proto() override;
  void setL4proto(const std::string &value) override;

  /// <summary>
  /// Source port filter
  /// </summary>
  uint16_t getSport() override;
  void setSport(const uint16_t &value) override;

  /// <summary>
  /// Destination port filter
  /// </summary>
  uint16_t getDport() override;
  void setDport(const uint16_t &value) override;
};
