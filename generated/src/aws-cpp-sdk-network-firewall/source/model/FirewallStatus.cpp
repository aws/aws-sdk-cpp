/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/network-firewall/model/FirewallStatus.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace NetworkFirewall {
namespace Model {

FirewallStatus::FirewallStatus(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

FirewallStatus& FirewallStatus::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Status") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_status = FirewallStatusValueMapper::GetFirewallStatusValueForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_statusHasBeenSet = true;
              }

              else if (initialKeyStr == "ConfigurationSyncStateSummary") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_configurationSyncStateSummary = ConfigurationSyncStateMapper::GetConfigurationSyncStateForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_configurationSyncStateSummaryHasBeenSet = true;
              }

              else if (initialKeyStr == "SyncStates") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart)) {
                  if (peekType_0.value() == CborType::MapStart) {
                    auto mapSize_0 = decoder->PopNextMapStart();
                    if (mapSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                        auto key_1 = decoder->PopNextTextVal();
                        if (key_1.has_value()) {
                          Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                          m_syncStates[keyStr_1] = SyncState(decoder);
                        }
                      }
                    }
                  } else  // IndefMapStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto key_1 = decoder->PopNextTextVal();
                      if (key_1.has_value()) {
                        Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                        m_syncStates[keyStr_1] = SyncState(decoder);
                      }
                    }
                  }
                }
                m_syncStatesHasBeenSet = true;
              }

              else if (initialKeyStr == "CapacityUsageSummary") {
                m_capacityUsageSummary = CapacityUsageSummary(decoder);
                m_capacityUsageSummaryHasBeenSet = true;
              }

              else if (initialKeyStr == "TransitGatewayAttachmentSyncState") {
                m_transitGatewayAttachmentSyncState = TransitGatewayAttachmentSyncState(decoder);
                m_transitGatewayAttachmentSyncStateHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("FirewallStatus", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Status") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_status = FirewallStatusValueMapper::GetFirewallStatusValueForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_statusHasBeenSet = true;
            }

            else if (initialKeyStr == "ConfigurationSyncStateSummary") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_configurationSyncStateSummary = ConfigurationSyncStateMapper::GetConfigurationSyncStateForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_configurationSyncStateSummaryHasBeenSet = true;
            }

            else if (initialKeyStr == "SyncStates") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart)) {
                if (peekType_0.value() == CborType::MapStart) {
                  auto mapSize_0 = decoder->PopNextMapStart();
                  if (mapSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                      auto key_1 = decoder->PopNextTextVal();
                      if (key_1.has_value()) {
                        Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                        m_syncStates[keyStr_1] = SyncState(decoder);
                      }
                    }
                  }
                } else  // IndefMapStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto key_1 = decoder->PopNextTextVal();
                    if (key_1.has_value()) {
                      Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                      m_syncStates[keyStr_1] = SyncState(decoder);
                    }
                  }
                }
              }
              m_syncStatesHasBeenSet = true;
            }

            else if (initialKeyStr == "CapacityUsageSummary") {
              m_capacityUsageSummary = CapacityUsageSummary(decoder);
              m_capacityUsageSummaryHasBeenSet = true;
            }

            else if (initialKeyStr == "TransitGatewayAttachmentSyncState") {
              m_transitGatewayAttachmentSyncState = TransitGatewayAttachmentSyncState(decoder);
              m_transitGatewayAttachmentSyncStateHasBeenSet = true;
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

void FirewallStatus::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_statusHasBeenSet) {
    mapSize++;
  }
  if (m_configurationSyncStateSummaryHasBeenSet) {
    mapSize++;
  }
  if (m_syncStatesHasBeenSet) {
    mapSize++;
  }
  if (m_capacityUsageSummaryHasBeenSet) {
    mapSize++;
  }
  if (m_transitGatewayAttachmentSyncStateHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_statusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Status"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(FirewallStatusValueMapper::GetNameForFirewallStatusValue(m_status).c_str()));
  }

  if (m_configurationSyncStateSummaryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ConfigurationSyncStateSummary"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        ConfigurationSyncStateMapper::GetNameForConfigurationSyncState(m_configurationSyncStateSummary).c_str()));
  }

  if (m_syncStatesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SyncStates"));
    encoder.WriteMapStart(m_syncStates.size());
    for (const auto& item_0 : m_syncStates) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      item_0.second.CborEncode(encoder);
    }
  }

  if (m_capacityUsageSummaryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CapacityUsageSummary"));
    m_capacityUsageSummary.CborEncode(encoder);
  }

  if (m_transitGatewayAttachmentSyncStateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TransitGatewayAttachmentSyncState"));
    m_transitGatewayAttachmentSyncState.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace NetworkFirewall
}  // namespace Aws