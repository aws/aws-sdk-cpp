/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces-instances/model/InstanceNetworkInterfaceSpecification.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace WorkspacesInstances {
namespace Model {

InstanceNetworkInterfaceSpecification::InstanceNetworkInterfaceSpecification(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

InstanceNetworkInterfaceSpecification& InstanceNetworkInterfaceSpecification::operator=(
    const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  if (decoder != nullptr) {
    auto initialMapType = decoder->PeekType();
    if (initialMapType.has_value() && (initialMapType.value() == CborType::MapStart || initialMapType.value() == CborType::IndefMapStart)) {
      if (initialMapType.value() == CborType::MapStart) {
        auto mapSize = decoder->PopNextMapStart();
        if (mapSize.has_value()) {
          for (size_t i = 0; i < mapSize.value(); ++i) {
            auto initialKey = decoder->PopNextTextVal();
            if (initialKey.has_value()) {
              Aws::String initialKeyStr(reinterpret_cast<const char*>(initialKey.value().ptr), initialKey.value().len);

              if (initialKeyStr == "AssociateCarrierIpAddress") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_associateCarrierIpAddress = val.value();
                }
                m_associateCarrierIpAddressHasBeenSet = true;
              }

              else if (initialKeyStr == "AssociatePublicIpAddress") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_associatePublicIpAddress = val.value();
                }
                m_associatePublicIpAddressHasBeenSet = true;
              }

              else if (initialKeyStr == "ConnectionTrackingSpecification") {
                m_connectionTrackingSpecification = ConnectionTrackingSpecificationRequest(decoder);
                m_connectionTrackingSpecificationHasBeenSet = true;
              }

              else if (initialKeyStr == "Description") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_description = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_description = ss.str();
                  }
                }
                m_descriptionHasBeenSet = true;
              }

              else if (initialKeyStr == "DeviceIndex") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_deviceIndex = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_deviceIndex = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_deviceIndexHasBeenSet = true;
              }

              else if (initialKeyStr == "EnaSrdSpecification") {
                m_enaSrdSpecification = EnaSrdSpecificationRequest(decoder);
                m_enaSrdSpecificationHasBeenSet = true;
              }

              else if (initialKeyStr == "InterfaceType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_interfaceType = InterfaceTypeEnumMapper::GetInterfaceTypeEnumForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_interfaceTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "Ipv4Prefixes") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_ipv4Prefixes.push_back(Ipv4PrefixSpecificationRequest(decoder));
                      }
                    }
                  } else  // IndefArrayStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      m_ipv4Prefixes.push_back(Ipv4PrefixSpecificationRequest(decoder));
                    }
                  }
                }
                m_ipv4PrefixesHasBeenSet = true;
              }

              else if (initialKeyStr == "Ipv4PrefixCount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_ipv4PrefixCount = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_ipv4PrefixCount = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_ipv4PrefixCountHasBeenSet = true;
              }

              else if (initialKeyStr == "Ipv6AddressCount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_ipv6AddressCount = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_ipv6AddressCount = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_ipv6AddressCountHasBeenSet = true;
              }

              else if (initialKeyStr == "Ipv6Addresses") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_ipv6Addresses.push_back(InstanceIpv6Address(decoder));
                      }
                    }
                  } else  // IndefArrayStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      m_ipv6Addresses.push_back(InstanceIpv6Address(decoder));
                    }
                  }
                }
                m_ipv6AddressesHasBeenSet = true;
              }

              else if (initialKeyStr == "Ipv6Prefixes") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_ipv6Prefixes.push_back(Ipv6PrefixSpecificationRequest(decoder));
                      }
                    }
                  } else  // IndefArrayStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      m_ipv6Prefixes.push_back(Ipv6PrefixSpecificationRequest(decoder));
                    }
                  }
                }
                m_ipv6PrefixesHasBeenSet = true;
              }

              else if (initialKeyStr == "Ipv6PrefixCount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_ipv6PrefixCount = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_ipv6PrefixCount = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_ipv6PrefixCountHasBeenSet = true;
              }

              else if (initialKeyStr == "NetworkCardIndex") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_networkCardIndex = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_networkCardIndex = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_networkCardIndexHasBeenSet = true;
              }

              else if (initialKeyStr == "NetworkInterfaceId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_networkInterfaceId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_networkInterfaceId = ss.str();
                  }
                }
                m_networkInterfaceIdHasBeenSet = true;
              }

              else if (initialKeyStr == "PrimaryIpv6") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_primaryIpv6 = val.value();
                }
                m_primaryIpv6HasBeenSet = true;
              }

              else if (initialKeyStr == "PrivateIpAddress") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_privateIpAddress = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_privateIpAddress = ss.str();
                  }
                }
                m_privateIpAddressHasBeenSet = true;
              }

              else if (initialKeyStr == "PrivateIpAddresses") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_privateIpAddresses.push_back(PrivateIpAddressSpecification(decoder));
                      }
                    }
                  } else  // IndefArrayStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      m_privateIpAddresses.push_back(PrivateIpAddressSpecification(decoder));
                    }
                  }
                }
                m_privateIpAddressesHasBeenSet = true;
              }

              else if (initialKeyStr == "SecondaryPrivateIpAddressCount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_secondaryPrivateIpAddressCount = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_secondaryPrivateIpAddressCount = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_secondaryPrivateIpAddressCountHasBeenSet = true;
              }

              else if (initialKeyStr == "Groups") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1.has_value()) {
                          if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                            auto val = decoder->PopNextTextVal();
                            if (val.has_value()) {
                              m_groups.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                            }
                          } else {
                            decoder->ConsumeNextSingleElement();
                            Aws::StringStream ss_1;
                            while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                              auto nextType_1 = decoder->PeekType();
                              if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                                if (nextType_1.has_value()) {
                                  decoder->ConsumeNextSingleElement();  // consume the Break
                                }
                                break;
                              }
                              auto val = decoder->PopNextTextVal();
                              if (val.has_value()) {
                                ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                              }
                            }
                            m_groups.push_back(ss_1.str());
                            ss_1.clear();
                          }
                        }
                      }
                    }
                  } else  // IndefArrayStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value()) {
                        if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                          auto val = decoder->PopNextTextVal();
                          if (val.has_value()) {
                            m_groups.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                          }
                        } else {
                          decoder->ConsumeNextSingleElement();
                          Aws::StringStream ss_1;
                          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                            auto nextType_1 = decoder->PeekType();
                            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                              if (nextType_1.has_value()) {
                                decoder->ConsumeNextSingleElement();  // consume the Break
                              }
                              break;
                            }
                            auto val = decoder->PopNextTextVal();
                            if (val.has_value()) {
                              ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                            }
                          }
                          m_groups.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
                    }
                  }
                }
                m_groupsHasBeenSet = true;
              }

              else if (initialKeyStr == "SubnetId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_subnetId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_subnetId = ss.str();
                  }
                }
                m_subnetIdHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("InstanceNetworkInterfaceSpecification", "Invalid data received for %s", initialKeyStr.c_str());
                break;
              }
            }
          }
        }
      } else  // IndefMapStart
      {
        decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
          auto outerMapNextType = decoder->PeekType();
          if (!outerMapNextType.has_value() || outerMapNextType.value() == CborType::Break) {
            if (outerMapNextType.has_value()) {
              decoder->ConsumeNextSingleElement();  // consume the Break
            }
            break;
          }

          auto initialKey = decoder->PopNextTextVal();
          if (initialKey.has_value()) {
            Aws::String initialKeyStr(reinterpret_cast<const char*>(initialKey.value().ptr), initialKey.value().len);

            if (initialKeyStr == "AssociateCarrierIpAddress") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_associateCarrierIpAddress = val.value();
              }
              m_associateCarrierIpAddressHasBeenSet = true;
            }

            else if (initialKeyStr == "AssociatePublicIpAddress") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_associatePublicIpAddress = val.value();
              }
              m_associatePublicIpAddressHasBeenSet = true;
            }

            else if (initialKeyStr == "ConnectionTrackingSpecification") {
              m_connectionTrackingSpecification = ConnectionTrackingSpecificationRequest(decoder);
              m_connectionTrackingSpecificationHasBeenSet = true;
            }

            else if (initialKeyStr == "Description") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_description = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_description = ss.str();
                }
              }
              m_descriptionHasBeenSet = true;
            }

            else if (initialKeyStr == "DeviceIndex") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_deviceIndex = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_deviceIndex = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_deviceIndexHasBeenSet = true;
            }

            else if (initialKeyStr == "EnaSrdSpecification") {
              m_enaSrdSpecification = EnaSrdSpecificationRequest(decoder);
              m_enaSrdSpecificationHasBeenSet = true;
            }

            else if (initialKeyStr == "InterfaceType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_interfaceType = InterfaceTypeEnumMapper::GetInterfaceTypeEnumForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_interfaceTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "Ipv4Prefixes") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_ipv4Prefixes.push_back(Ipv4PrefixSpecificationRequest(decoder));
                    }
                  }
                } else  // IndefArrayStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    m_ipv4Prefixes.push_back(Ipv4PrefixSpecificationRequest(decoder));
                  }
                }
              }
              m_ipv4PrefixesHasBeenSet = true;
            }

            else if (initialKeyStr == "Ipv4PrefixCount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_ipv4PrefixCount = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_ipv4PrefixCount = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_ipv4PrefixCountHasBeenSet = true;
            }

            else if (initialKeyStr == "Ipv6AddressCount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_ipv6AddressCount = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_ipv6AddressCount = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_ipv6AddressCountHasBeenSet = true;
            }

            else if (initialKeyStr == "Ipv6Addresses") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_ipv6Addresses.push_back(InstanceIpv6Address(decoder));
                    }
                  }
                } else  // IndefArrayStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    m_ipv6Addresses.push_back(InstanceIpv6Address(decoder));
                  }
                }
              }
              m_ipv6AddressesHasBeenSet = true;
            }

            else if (initialKeyStr == "Ipv6Prefixes") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_ipv6Prefixes.push_back(Ipv6PrefixSpecificationRequest(decoder));
                    }
                  }
                } else  // IndefArrayStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    m_ipv6Prefixes.push_back(Ipv6PrefixSpecificationRequest(decoder));
                  }
                }
              }
              m_ipv6PrefixesHasBeenSet = true;
            }

            else if (initialKeyStr == "Ipv6PrefixCount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_ipv6PrefixCount = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_ipv6PrefixCount = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_ipv6PrefixCountHasBeenSet = true;
            }

            else if (initialKeyStr == "NetworkCardIndex") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_networkCardIndex = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_networkCardIndex = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_networkCardIndexHasBeenSet = true;
            }

            else if (initialKeyStr == "NetworkInterfaceId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_networkInterfaceId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_networkInterfaceId = ss.str();
                }
              }
              m_networkInterfaceIdHasBeenSet = true;
            }

            else if (initialKeyStr == "PrimaryIpv6") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_primaryIpv6 = val.value();
              }
              m_primaryIpv6HasBeenSet = true;
            }

            else if (initialKeyStr == "PrivateIpAddress") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_privateIpAddress = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_privateIpAddress = ss.str();
                }
              }
              m_privateIpAddressHasBeenSet = true;
            }

            else if (initialKeyStr == "PrivateIpAddresses") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_privateIpAddresses.push_back(PrivateIpAddressSpecification(decoder));
                    }
                  }
                } else  // IndefArrayStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    m_privateIpAddresses.push_back(PrivateIpAddressSpecification(decoder));
                  }
                }
              }
              m_privateIpAddressesHasBeenSet = true;
            }

            else if (initialKeyStr == "SecondaryPrivateIpAddressCount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_secondaryPrivateIpAddressCount = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_secondaryPrivateIpAddressCount = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_secondaryPrivateIpAddressCountHasBeenSet = true;
            }

            else if (initialKeyStr == "Groups") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value()) {
                        if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                          auto val = decoder->PopNextTextVal();
                          if (val.has_value()) {
                            m_groups.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                          }
                        } else {
                          decoder->ConsumeNextSingleElement();
                          Aws::StringStream ss_1;
                          while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                            auto nextType_1 = decoder->PeekType();
                            if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                              if (nextType_1.has_value()) {
                                decoder->ConsumeNextSingleElement();  // consume the Break
                              }
                              break;
                            }
                            auto val = decoder->PopNextTextVal();
                            if (val.has_value()) {
                              ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                            }
                          }
                          m_groups.push_back(ss_1.str());
                          ss_1.clear();
                        }
                      }
                    }
                  }
                } else  // IndefArrayStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto peekType_1 = decoder->PeekType();
                    if (peekType_1.has_value()) {
                      if (peekType_1.value() == Aws::Crt::Cbor::CborType::Text) {
                        auto val = decoder->PopNextTextVal();
                        if (val.has_value()) {
                          m_groups.push_back(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                        }
                      } else {
                        decoder->ConsumeNextSingleElement();
                        Aws::StringStream ss_1;
                        while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                          auto nextType_1 = decoder->PeekType();
                          if (!nextType_1.has_value() || nextType_1.value() == CborType::Break) {
                            if (nextType_1.has_value()) {
                              decoder->ConsumeNextSingleElement();  // consume the Break
                            }
                            break;
                          }
                          auto val = decoder->PopNextTextVal();
                          if (val.has_value()) {
                            ss_1 << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                          }
                        }
                        m_groups.push_back(ss_1.str());
                        ss_1.clear();
                      }
                    }
                  }
                }
              }
              m_groupsHasBeenSet = true;
            }

            else if (initialKeyStr == "SubnetId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_subnetId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_subnetId = ss.str();
                }
              }
              m_subnetIdHasBeenSet = true;
            } else {
              // Unknown key, skip the value
              decoder->ConsumeNextWholeDataItem();
            }
          }
        }
      }
    }
  }

  return *this;
}

void InstanceNetworkInterfaceSpecification::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_associateCarrierIpAddressHasBeenSet) {
    mapSize++;
  }
  if (m_associatePublicIpAddressHasBeenSet) {
    mapSize++;
  }
  if (m_connectionTrackingSpecificationHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_deviceIndexHasBeenSet) {
    mapSize++;
  }
  if (m_enaSrdSpecificationHasBeenSet) {
    mapSize++;
  }
  if (m_interfaceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_ipv4PrefixesHasBeenSet) {
    mapSize++;
  }
  if (m_ipv4PrefixCountHasBeenSet) {
    mapSize++;
  }
  if (m_ipv6AddressCountHasBeenSet) {
    mapSize++;
  }
  if (m_ipv6AddressesHasBeenSet) {
    mapSize++;
  }
  if (m_ipv6PrefixesHasBeenSet) {
    mapSize++;
  }
  if (m_ipv6PrefixCountHasBeenSet) {
    mapSize++;
  }
  if (m_networkCardIndexHasBeenSet) {
    mapSize++;
  }
  if (m_networkInterfaceIdHasBeenSet) {
    mapSize++;
  }
  if (m_primaryIpv6HasBeenSet) {
    mapSize++;
  }
  if (m_privateIpAddressHasBeenSet) {
    mapSize++;
  }
  if (m_privateIpAddressesHasBeenSet) {
    mapSize++;
  }
  if (m_secondaryPrivateIpAddressCountHasBeenSet) {
    mapSize++;
  }
  if (m_groupsHasBeenSet) {
    mapSize++;
  }
  if (m_subnetIdHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_associateCarrierIpAddressHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AssociateCarrierIpAddress"));
    encoder.WriteBool(m_associateCarrierIpAddress);
  }

  if (m_associatePublicIpAddressHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AssociatePublicIpAddress"));
    encoder.WriteBool(m_associatePublicIpAddress);
  }

  if (m_connectionTrackingSpecificationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ConnectionTrackingSpecification"));
    m_connectionTrackingSpecification.CborEncode(encoder);
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_deviceIndexHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeviceIndex"));
    (m_deviceIndex >= 0) ? encoder.WriteUInt(m_deviceIndex) : encoder.WriteNegInt(m_deviceIndex);
  }

  if (m_enaSrdSpecificationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EnaSrdSpecification"));
    m_enaSrdSpecification.CborEncode(encoder);
  }

  if (m_interfaceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InterfaceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(InterfaceTypeEnumMapper::GetNameForInterfaceTypeEnum(m_interfaceType).c_str()));
  }

  if (m_ipv4PrefixesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Ipv4Prefixes"));
    encoder.WriteArrayStart(m_ipv4Prefixes.size());
    for (const auto& item_0 : m_ipv4Prefixes) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_ipv4PrefixCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Ipv4PrefixCount"));
    (m_ipv4PrefixCount >= 0) ? encoder.WriteUInt(m_ipv4PrefixCount) : encoder.WriteNegInt(m_ipv4PrefixCount);
  }

  if (m_ipv6AddressCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Ipv6AddressCount"));
    (m_ipv6AddressCount >= 0) ? encoder.WriteUInt(m_ipv6AddressCount) : encoder.WriteNegInt(m_ipv6AddressCount);
  }

  if (m_ipv6AddressesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Ipv6Addresses"));
    encoder.WriteArrayStart(m_ipv6Addresses.size());
    for (const auto& item_0 : m_ipv6Addresses) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_ipv6PrefixesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Ipv6Prefixes"));
    encoder.WriteArrayStart(m_ipv6Prefixes.size());
    for (const auto& item_0 : m_ipv6Prefixes) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_ipv6PrefixCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Ipv6PrefixCount"));
    (m_ipv6PrefixCount >= 0) ? encoder.WriteUInt(m_ipv6PrefixCount) : encoder.WriteNegInt(m_ipv6PrefixCount);
  }

  if (m_networkCardIndexHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NetworkCardIndex"));
    (m_networkCardIndex >= 0) ? encoder.WriteUInt(m_networkCardIndex) : encoder.WriteNegInt(m_networkCardIndex);
  }

  if (m_networkInterfaceIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NetworkInterfaceId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_networkInterfaceId.c_str()));
  }

  if (m_primaryIpv6HasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PrimaryIpv6"));
    encoder.WriteBool(m_primaryIpv6);
  }

  if (m_privateIpAddressHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PrivateIpAddress"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_privateIpAddress.c_str()));
  }

  if (m_privateIpAddressesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PrivateIpAddresses"));
    encoder.WriteArrayStart(m_privateIpAddresses.size());
    for (const auto& item_0 : m_privateIpAddresses) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_secondaryPrivateIpAddressCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SecondaryPrivateIpAddressCount"));
    (m_secondaryPrivateIpAddressCount >= 0) ? encoder.WriteUInt(m_secondaryPrivateIpAddressCount)
                                            : encoder.WriteNegInt(m_secondaryPrivateIpAddressCount);
  }

  if (m_groupsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Groups"));
    encoder.WriteArrayStart(m_groups.size());
    for (const auto& item_0 : m_groups) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_subnetIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SubnetId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_subnetId.c_str()));
  }
}

}  // namespace Model
}  // namespace WorkspacesInstances
}  // namespace Aws