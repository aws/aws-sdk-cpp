/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/ServerCertificateScope.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

ServerCertificateScope::ServerCertificateScope(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ServerCertificateScope& ServerCertificateScope::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Sources") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_sources.push_back(Address(decoder));
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
                      m_sources.push_back(Address(decoder));
                    }
                  }
                }
                m_sourcesHasBeenSet = true;
              }

              else if (initialKeyStr == "Destinations") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_destinations.push_back(Address(decoder));
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
                      m_destinations.push_back(Address(decoder));
                    }
                  }
                }
                m_destinationsHasBeenSet = true;
              }

              else if (initialKeyStr == "SourcePorts") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_sourcePorts.push_back(PortRange(decoder));
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
                      m_sourcePorts.push_back(PortRange(decoder));
                    }
                  }
                }
                m_sourcePortsHasBeenSet = true;
              }

              else if (initialKeyStr == "DestinationPorts") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_destinationPorts.push_back(PortRange(decoder));
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
                      m_destinationPorts.push_back(PortRange(decoder));
                    }
                  }
                }
                m_destinationPortsHasBeenSet = true;
              }

              else if (initialKeyStr == "Protocols") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto peekType_1 = decoder->PeekType();
                        if (peekType_1.has_value()) {
                          if (peekType_1.value() == Aws::Crt::Cbor::CborType::UInt) {
                            auto val = decoder->PopNextUnsignedIntVal();
                            if (val.has_value()) {
                              m_protocols.push_back(static_cast<int64_t>(val.value()));
                            }
                          } else {
                            auto val = decoder->PopNextNegativeIntVal();
                            if (val.has_value()) {
                              m_protocols.push_back(static_cast<int64_t>(1 - val.value()));
                            }
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
                        if (peekType_1.value() == Aws::Crt::Cbor::CborType::UInt) {
                          auto val = decoder->PopNextUnsignedIntVal();
                          if (val.has_value()) {
                            m_protocols.push_back(static_cast<int64_t>(val.value()));
                          }
                        } else {
                          auto val = decoder->PopNextNegativeIntVal();
                          if (val.has_value()) {
                            m_protocols.push_back(static_cast<int64_t>(1 - val.value()));
                          }
                        }
                      }
                    }
                  }
                }
                m_protocolsHasBeenSet = true;
              }

              else if (initialKeyStr == "DomainMatch") {
                m_domainMatch = DomainMatch(decoder);
                m_domainMatchHasBeenSet = true;
              }

              else if (initialKeyStr == "DecryptionAction") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_decryptionAction = DecryptionActionMapper::GetDecryptionActionForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_decryptionActionHasBeenSet = true;
              }

              else if (initialKeyStr == "DeploymentMode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_deploymentMode = TLSInspectionScopeDeploymentModeMapper::GetTLSInspectionScopeDeploymentModeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_deploymentModeHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ServerCertificateScope", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Sources") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_sources.push_back(Address(decoder));
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
                    m_sources.push_back(Address(decoder));
                  }
                }
              }
              m_sourcesHasBeenSet = true;
            }

            else if (initialKeyStr == "Destinations") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_destinations.push_back(Address(decoder));
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
                    m_destinations.push_back(Address(decoder));
                  }
                }
              }
              m_destinationsHasBeenSet = true;
            }

            else if (initialKeyStr == "SourcePorts") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_sourcePorts.push_back(PortRange(decoder));
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
                    m_sourcePorts.push_back(PortRange(decoder));
                  }
                }
              }
              m_sourcePortsHasBeenSet = true;
            }

            else if (initialKeyStr == "DestinationPorts") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_destinationPorts.push_back(PortRange(decoder));
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
                    m_destinationPorts.push_back(PortRange(decoder));
                  }
                }
              }
              m_destinationPortsHasBeenSet = true;
            }

            else if (initialKeyStr == "Protocols") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto peekType_1 = decoder->PeekType();
                      if (peekType_1.has_value()) {
                        if (peekType_1.value() == Aws::Crt::Cbor::CborType::UInt) {
                          auto val = decoder->PopNextUnsignedIntVal();
                          if (val.has_value()) {
                            m_protocols.push_back(static_cast<int64_t>(val.value()));
                          }
                        } else {
                          auto val = decoder->PopNextNegativeIntVal();
                          if (val.has_value()) {
                            m_protocols.push_back(static_cast<int64_t>(1 - val.value()));
                          }
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
                      if (peekType_1.value() == Aws::Crt::Cbor::CborType::UInt) {
                        auto val = decoder->PopNextUnsignedIntVal();
                        if (val.has_value()) {
                          m_protocols.push_back(static_cast<int64_t>(val.value()));
                        }
                      } else {
                        auto val = decoder->PopNextNegativeIntVal();
                        if (val.has_value()) {
                          m_protocols.push_back(static_cast<int64_t>(1 - val.value()));
                        }
                      }
                    }
                  }
                }
              }
              m_protocolsHasBeenSet = true;
            }

            else if (initialKeyStr == "DomainMatch") {
              m_domainMatch = DomainMatch(decoder);
              m_domainMatchHasBeenSet = true;
            }

            else if (initialKeyStr == "DecryptionAction") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_decryptionAction = DecryptionActionMapper::GetDecryptionActionForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_decryptionActionHasBeenSet = true;
            }

            else if (initialKeyStr == "DeploymentMode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_deploymentMode = TLSInspectionScopeDeploymentModeMapper::GetTLSInspectionScopeDeploymentModeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_deploymentModeHasBeenSet = true;
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

void ServerCertificateScope::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_sourcesHasBeenSet) {
    mapSize++;
  }
  if (m_destinationsHasBeenSet) {
    mapSize++;
  }
  if (m_sourcePortsHasBeenSet) {
    mapSize++;
  }
  if (m_destinationPortsHasBeenSet) {
    mapSize++;
  }
  if (m_protocolsHasBeenSet) {
    mapSize++;
  }
  if (m_domainMatchHasBeenSet) {
    mapSize++;
  }
  if (m_decryptionActionHasBeenSet) {
    mapSize++;
  }
  if (m_deploymentModeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_sourcesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Sources"));
    encoder.WriteArrayStart(m_sources.size());
    for (const auto& item_0 : m_sources) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_destinationsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Destinations"));
    encoder.WriteArrayStart(m_destinations.size());
    for (const auto& item_0 : m_destinations) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_sourcePortsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SourcePorts"));
    encoder.WriteArrayStart(m_sourcePorts.size());
    for (const auto& item_0 : m_sourcePorts) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_destinationPortsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DestinationPorts"));
    encoder.WriteArrayStart(m_destinationPorts.size());
    for (const auto& item_0 : m_destinationPorts) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_protocolsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Protocols"));
    encoder.WriteArrayStart(m_protocols.size());
    for (const auto& item_0 : m_protocols) {
      (item_0 >= 0) ? encoder.WriteUInt(item_0) : encoder.WriteNegInt(item_0);
    }
  }

  if (m_domainMatchHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DomainMatch"));
    m_domainMatch.CborEncode(encoder);
  }

  if (m_decryptionActionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DecryptionAction"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(DecryptionActionMapper::GetNameForDecryptionAction(m_decryptionAction).c_str()));
  }

  if (m_deploymentModeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DeploymentMode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        TLSInspectionScopeDeploymentModeMapper::GetNameForTLSInspectionScopeDeploymentMode(m_deploymentMode).c_str()));
  }
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws