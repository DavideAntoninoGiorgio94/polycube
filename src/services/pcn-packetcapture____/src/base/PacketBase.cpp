/**
* packetcapture API generated from packetcapture.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */


#include "PacketBase.h"
#include "../Packetcapture.h"


PacketBase::PacketBase(Packetcapture &parent)
    : parent_(parent) {}

PacketBase::~PacketBase() {}

void PacketBase::update(const PacketJsonObject &conf) {

  if (conf.capturelenIsSet()) {
    setCapturelen(conf.getCapturelen());
  }
  if (conf.packetlenIsSet()) {
    setPacketlen(conf.getPacketlen());
  }
  if (conf.timestampSecondsIsSet()) {
    setTimestampSeconds(conf.getTimestampSeconds());
  }
  if (conf.timestampMicrosecondsIsSet()) {
    setTimestampMicroseconds(conf.getTimestampMicroseconds());
  }
}

PacketJsonObject PacketBase::toJsonObject() {
  PacketJsonObject conf;

  conf.setCapturelen(getCapturelen());
  conf.setPacketlen(getPacketlen());
  conf.setTimestampSeconds(getTimestampSeconds());
  conf.setTimestampMicroseconds(getTimestampMicroseconds());

  return conf;
}

std::shared_ptr<spdlog::logger> PacketBase::logger() {
  return parent_.logger();
}

