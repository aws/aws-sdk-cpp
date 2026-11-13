/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/Firewall.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

Firewall::Firewall(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

Firewall& Firewall::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "FirewallName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_firewallName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_firewallName = ss.str();
                  }
                }
                m_firewallNameHasBeenSet = true;
              }

              else if (initialKeyStr == "FirewallArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_firewallArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_firewallArn = ss.str();
                  }
                }
                m_firewallArnHasBeenSet = true;
              }

              else if (initialKeyStr == "FirewallPolicyArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_firewallPolicyArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_firewallPolicyArn = ss.str();
                  }
                }
                m_firewallPolicyArnHasBeenSet = true;
              }

              else if (initialKeyStr == "VpcId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_vpcId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_vpcId = ss.str();
                  }
                }
                m_vpcIdHasBeenSet = true;
              }

              else if (initialKeyStr == "SubnetMappings") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_subnetMappings.push_back(SubnetMapping(decoder));
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
                      m_subnetMappings.push_back(SubnetMapping(decoder));
                    }
                  }
                }
                m_subnetMappingsHasBeenSet = true;
              }

              else if (initialKeyStr == "DeleteProtection") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_deleteProtection = val.value();
                }
                m_deleteProtectionHasBeenSet = true;
              }

              else if (initialKeyStr == "SubnetChangeProtection") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_subnetChangeProtection = val.value();
                }
                m_subnetChangeProtectionHasBeenSet = true;
              }

              else if (initialKeyStr == "FirewallPolicyChangeProtection") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_firewallPolicyChangeProtection = val.value();
                }
                m_firewallPolicyChangeProtectionHasBeenSet = true;
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

              else if (initialKeyStr == "FirewallId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_firewallId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_firewallId = ss.str();
                  }
                }
                m_firewallIdHasBeenSet = true;
              }

              else if (initialKeyStr == "Tags") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_tags.push_back(Tag(decoder));
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
                      m_tags.push_back(Tag(decoder));
                    }
                  }
                }
                m_tagsHasBeenSet = true;
              }

              else if (initialKeyStr == "EncryptionConfiguration") {
                m_encryptionConfiguration = EncryptionConfiguration(decoder);
                m_encryptionConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "NumberOfAssociations") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_numberOfAssociations = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_numberOfAssociations = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_numberOfAssociationsHasBeenSet = true;
              }

              else if (initialKeyStr == "EnabledAnalysisTypes") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto val = decoder->PopNextTextVal();
                        if (val.has_value()) {
                          m_enabledAnalysisTypes.push_back(EnabledAnalysisTypeMapper::GetEnabledAnalysisTypeForName(
                              Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
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
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        m_enabledAnalysisTypes.push_back(EnabledAnalysisTypeMapper::GetEnabledAnalysisTypeForName(
                            Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                      }
                    }
                  }
                }
                m_enabledAnalysisTypesHasBeenSet = true;
              }

              else if (initialKeyStr == "TransitGatewayId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_transitGatewayId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_transitGatewayId = ss.str();
                  }
                }
                m_transitGatewayIdHasBeenSet = true;
              }

              else if (initialKeyStr == "TransitGatewayOwnerAccountId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_transitGatewayOwnerAccountId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_transitGatewayOwnerAccountId = ss.str();
                  }
                }
                m_transitGatewayOwnerAccountIdHasBeenSet = true;
              }

              else if (initialKeyStr == "AvailabilityZoneMappings") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_availabilityZoneMappings.push_back(AvailabilityZoneMapping(decoder));
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
                      m_availabilityZoneMappings.push_back(AvailabilityZoneMapping(decoder));
                    }
                  }
                }
                m_availabilityZoneMappingsHasBeenSet = true;
              }

              else if (initialKeyStr == "AvailabilityZoneChangeProtection") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_availabilityZoneChangeProtection = val.value();
                }
                m_availabilityZoneChangeProtectionHasBeenSet = true;
              }

              else if (initialKeyStr == "NatGatewayCreateMappings") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_natGatewayCreateMappings.push_back(NatGatewayCreateMapping(decoder));
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
                      m_natGatewayCreateMappings.push_back(NatGatewayCreateMapping(decoder));
                    }
                  }
                }
                m_natGatewayCreateMappingsHasBeenSet = true;
              }

              else if (initialKeyStr == "ProxySettings") {
                m_proxySettings = ProxySettings(decoder);
                m_proxySettingsHasBeenSet = true;
              }

              else if (initialKeyStr == "VpcEndpoint") {
                m_vpcEndpoint = VpcEndpoint(decoder);
                m_vpcEndpointHasBeenSet = true;
              }

              else if (initialKeyStr == "TransparentFilteringNatScope") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_transparentFilteringNatScope = TransparentFilteringNatScopeMapper::GetTransparentFilteringNatScopeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_transparentFilteringNatScopeHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("Firewall", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "FirewallName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_firewallName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_firewallName = ss.str();
                }
              }
              m_firewallNameHasBeenSet = true;
            }

            else if (initialKeyStr == "FirewallArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_firewallArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_firewallArn = ss.str();
                }
              }
              m_firewallArnHasBeenSet = true;
            }

            else if (initialKeyStr == "FirewallPolicyArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_firewallPolicyArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_firewallPolicyArn = ss.str();
                }
              }
              m_firewallPolicyArnHasBeenSet = true;
            }

            else if (initialKeyStr == "VpcId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_vpcId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_vpcId = ss.str();
                }
              }
              m_vpcIdHasBeenSet = true;
            }

            else if (initialKeyStr == "SubnetMappings") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_subnetMappings.push_back(SubnetMapping(decoder));
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
                    m_subnetMappings.push_back(SubnetMapping(decoder));
                  }
                }
              }
              m_subnetMappingsHasBeenSet = true;
            }

            else if (initialKeyStr == "DeleteProtection") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_deleteProtection = val.value();
              }
              m_deleteProtectionHasBeenSet = true;
            }

            else if (initialKeyStr == "SubnetChangeProtection") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_subnetChangeProtection = val.value();
              }
              m_subnetChangeProtectionHasBeenSet = true;
            }

            else if (initialKeyStr == "FirewallPolicyChangeProtection") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_firewallPolicyChangeProtection = val.value();
              }
              m_firewallPolicyChangeProtectionHasBeenSet = true;
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

            else if (initialKeyStr == "FirewallId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_firewallId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_firewallId = ss.str();
                }
              }
              m_firewallIdHasBeenSet = true;
            }

            else if (initialKeyStr == "Tags") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_tags.push_back(Tag(decoder));
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
                    m_tags.push_back(Tag(decoder));
                  }
                }
              }
              m_tagsHasBeenSet = true;
            }

            else if (initialKeyStr == "EncryptionConfiguration") {
              m_encryptionConfiguration = EncryptionConfiguration(decoder);
              m_encryptionConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "NumberOfAssociations") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_numberOfAssociations = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_numberOfAssociations = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_numberOfAssociationsHasBeenSet = true;
            }

            else if (initialKeyStr == "EnabledAnalysisTypes") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        m_enabledAnalysisTypes.push_back(EnabledAnalysisTypeMapper::GetEnabledAnalysisTypeForName(
                            Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
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
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_enabledAnalysisTypes.push_back(EnabledAnalysisTypeMapper::GetEnabledAnalysisTypeForName(
                          Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                    }
                  }
                }
              }
              m_enabledAnalysisTypesHasBeenSet = true;
            }

            else if (initialKeyStr == "TransitGatewayId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_transitGatewayId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_transitGatewayId = ss.str();
                }
              }
              m_transitGatewayIdHasBeenSet = true;
            }

            else if (initialKeyStr == "TransitGatewayOwnerAccountId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_transitGatewayOwnerAccountId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_transitGatewayOwnerAccountId = ss.str();
                }
              }
              m_transitGatewayOwnerAccountIdHasBeenSet = true;
            }

            else if (initialKeyStr == "AvailabilityZoneMappings") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_availabilityZoneMappings.push_back(AvailabilityZoneMapping(decoder));
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
                    m_availabilityZoneMappings.push_back(AvailabilityZoneMapping(decoder));
                  }
                }
              }
              m_availabilityZoneMappingsHasBeenSet = true;
            }

            else if (initialKeyStr == "AvailabilityZoneChangeProtection") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_availabilityZoneChangeProtection = val.value();
              }
              m_availabilityZoneChangeProtectionHasBeenSet = true;
            }

            else if (initialKeyStr == "NatGatewayCreateMappings") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_natGatewayCreateMappings.push_back(NatGatewayCreateMapping(decoder));
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
                    m_natGatewayCreateMappings.push_back(NatGatewayCreateMapping(decoder));
                  }
                }
              }
              m_natGatewayCreateMappingsHasBeenSet = true;
            }

            else if (initialKeyStr == "ProxySettings") {
              m_proxySettings = ProxySettings(decoder);
              m_proxySettingsHasBeenSet = true;
            }

            else if (initialKeyStr == "VpcEndpoint") {
              m_vpcEndpoint = VpcEndpoint(decoder);
              m_vpcEndpointHasBeenSet = true;
            }

            else if (initialKeyStr == "TransparentFilteringNatScope") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_transparentFilteringNatScope = TransparentFilteringNatScopeMapper::GetTransparentFilteringNatScopeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_transparentFilteringNatScopeHasBeenSet = true;
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

void Firewall::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_firewallNameHasBeenSet) {
    mapSize++;
  }
  if (m_firewallArnHasBeenSet) {
    mapSize++;
  }
  if (m_firewallPolicyArnHasBeenSet) {
    mapSize++;
  }
  if (m_vpcIdHasBeenSet) {
    mapSize++;
  }
  if (m_subnetMappingsHasBeenSet) {
    mapSize++;
  }
  if (m_deleteProtectionHasBeenSet) {
    mapSize++;
  }
  if (m_subnetChangeProtectionHasBeenSet) {
    mapSize++;
  }
  if (m_firewallPolicyChangeProtectionHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_firewallIdHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_encryptionConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_numberOfAssociationsHasBeenSet) {
    mapSize++;
  }
  if (m_enabledAnalysisTypesHasBeenSet) {
    mapSize++;
  }
  if (m_transitGatewayIdHasBeenSet) {
    mapSize++;
  }
  if (m_transitGatewayOwnerAccountIdHasBeenSet) {
    mapSize++;
  }
  if (m_availabilityZoneMappingsHasBeenSet) {
    mapSize++;
  }
  if (m_availabilityZoneChangeProtectionHasBeenSet) {
    mapSize++;
  }
  if (m_natGatewayCreateMappingsHasBeenSet) {
    mapSize++;
  }
  if (m_proxySettingsHasBeenSet) {
    mapSize++;
  }
  if (m_vpcEndpointHasBeenSet) {
    mapSize++;
  }
  if (m_transparentFilteringNatScopeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_firewallNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_firewallName.c_str()));
  }

  if (m_firewallArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_firewallArn.c_str()));
  }

  if (m_firewallPolicyArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallPolicyArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_firewallPolicyArn.c_str()));
  }

  if (m_vpcIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VpcId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_vpcId.c_str()));
  }

  if (m_subnetMappingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SubnetMappings"));
    encoder.WriteArrayStart(m_subnetMappings.size());
    for (const auto& item_0 : m_subnetMappings) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_deleteProtectionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeleteProtection"));
    encoder.WriteBool(m_deleteProtection);
  }

  if (m_subnetChangeProtectionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SubnetChangeProtection"));
    encoder.WriteBool(m_subnetChangeProtection);
  }

  if (m_firewallPolicyChangeProtectionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallPolicyChangeProtection"));
    encoder.WriteBool(m_firewallPolicyChangeProtection);
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_firewallIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FirewallId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_firewallId.c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_encryptionConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EncryptionConfiguration"));
    m_encryptionConfiguration.CborEncode(encoder);
  }

  if (m_numberOfAssociationsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NumberOfAssociations"));
    (m_numberOfAssociations >= 0) ? encoder.WriteUInt(m_numberOfAssociations) : encoder.WriteNegInt(m_numberOfAssociations);
  }

  if (m_enabledAnalysisTypesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EnabledAnalysisTypes"));
    encoder.WriteArrayStart(m_enabledAnalysisTypes.size());
    for (const auto& item_0 : m_enabledAnalysisTypes) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(EnabledAnalysisTypeMapper::GetNameForEnabledAnalysisType(item_0).c_str()));
    }
  }

  if (m_transitGatewayIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TransitGatewayId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_transitGatewayId.c_str()));
  }

  if (m_transitGatewayOwnerAccountIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TransitGatewayOwnerAccountId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_transitGatewayOwnerAccountId.c_str()));
  }

  if (m_availabilityZoneMappingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AvailabilityZoneMappings"));
    encoder.WriteArrayStart(m_availabilityZoneMappings.size());
    for (const auto& item_0 : m_availabilityZoneMappings) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_availabilityZoneChangeProtectionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AvailabilityZoneChangeProtection"));
    encoder.WriteBool(m_availabilityZoneChangeProtection);
  }

  if (m_natGatewayCreateMappingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NatGatewayCreateMappings"));
    encoder.WriteArrayStart(m_natGatewayCreateMappings.size());
    for (const auto& item_0 : m_natGatewayCreateMappings) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_proxySettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ProxySettings"));
    m_proxySettings.CborEncode(encoder);
  }

  if (m_vpcEndpointHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VpcEndpoint"));
    m_vpcEndpoint.CborEncode(encoder);
  }

  if (m_transparentFilteringNatScopeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TransparentFilteringNatScope"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        TransparentFilteringNatScopeMapper::GetNameForTransparentFilteringNatScope(m_transparentFilteringNatScope).c_str()));
  }
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws