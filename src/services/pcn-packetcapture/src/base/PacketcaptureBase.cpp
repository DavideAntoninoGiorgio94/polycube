/**
* packetcapture API generated from packetcapture.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */


#include "PacketcaptureBase.h"

PacketcaptureBase::PacketcaptureBase(const std::string name) {
  logger()->set_pattern("[%Y-%m-%d %H:%M:%S.%e] [Packetcapture] [%n] [%l] %v");
}



PacketcaptureBase::~PacketcaptureBase() {}

void PacketcaptureBase::update(const PacketcaptureJsonObject &conf) {
  set_conf(conf.getBase());

  if (conf.captureIsSet()) {
    setCapture(conf.getCapture());
  }
  if (conf.anomimizeIsSet()) {
    setAnomimize(conf.getAnomimize());
  }
  if (conf.linktypeIsSet()) {
    setLinktype(conf.getLinktype());
  }
  if (conf.dumpIsSet()) {
    setDump(conf.getDump());
  }
  if (conf.filtersIsSet()) {
    auto m = getFilters();
    m->update(conf.getFilters());
  }
  if (conf.packetIsSet()) {
    auto m = getPacket();
    m->update(conf.getPacket());
  }
}

PacketcaptureJsonObject PacketcaptureBase::toJsonObject() {
  PacketcaptureJsonObject conf;
  conf.setBase(to_json());

  conf.setName(getName());
  conf.setCapture(getCapture());
  conf.setAnomimize(getAnomimize());
  conf.setLinktype(getLinktype());
  conf.setDump(getDump());
  conf.setFilters(getFilters()->toJsonObject());
  conf.setPacket(getPacket()->toJsonObject());

  return conf;
}

void PacketcaptureBase::replaceFilters(const FiltersJsonObject &conf) {
  // TODO: This is a basic default implementation, maybe you want to improve it
  delFilters();
  addFilters(conf);
}

void PacketcaptureBase::replacePacket(const PacketJsonObject &conf) {
  // TODO: This is a basic default implementation, maybe you want to improve it
  delPacket();
  addPacket(conf);
}


