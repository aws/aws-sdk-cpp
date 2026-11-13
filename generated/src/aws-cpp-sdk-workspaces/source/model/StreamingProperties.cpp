/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/StreamingProperties.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace WorkSpaces {
namespace Model {

StreamingProperties::StreamingProperties(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

StreamingProperties& StreamingProperties::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "StreamingExperiencePreferredProtocol") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_streamingExperiencePreferredProtocol =
                      StreamingExperiencePreferredProtocolEnumMapper::GetStreamingExperiencePreferredProtocolEnumForName(
                          Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_streamingExperiencePreferredProtocolHasBeenSet = true;
              }

              else if (initialKeyStr == "UserSettings") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_userSettings.push_back(UserSetting(decoder));
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
                      m_userSettings.push_back(UserSetting(decoder));
                    }
                  }
                }
                m_userSettingsHasBeenSet = true;
              }

              else if (initialKeyStr == "StorageConnectors") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_storageConnectors.push_back(StorageConnector(decoder));
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
                      m_storageConnectors.push_back(StorageConnector(decoder));
                    }
                  }
                }
                m_storageConnectorsHasBeenSet = true;
              }

              else if (initialKeyStr == "GlobalAccelerator") {
                m_globalAccelerator = GlobalAcceleratorForDirectory(decoder);
                m_globalAcceleratorHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("StreamingProperties", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "StreamingExperiencePreferredProtocol") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_streamingExperiencePreferredProtocol =
                    StreamingExperiencePreferredProtocolEnumMapper::GetStreamingExperiencePreferredProtocolEnumForName(
                        Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_streamingExperiencePreferredProtocolHasBeenSet = true;
            }

            else if (initialKeyStr == "UserSettings") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_userSettings.push_back(UserSetting(decoder));
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
                    m_userSettings.push_back(UserSetting(decoder));
                  }
                }
              }
              m_userSettingsHasBeenSet = true;
            }

            else if (initialKeyStr == "StorageConnectors") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_storageConnectors.push_back(StorageConnector(decoder));
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
                    m_storageConnectors.push_back(StorageConnector(decoder));
                  }
                }
              }
              m_storageConnectorsHasBeenSet = true;
            }

            else if (initialKeyStr == "GlobalAccelerator") {
              m_globalAccelerator = GlobalAcceleratorForDirectory(decoder);
              m_globalAcceleratorHasBeenSet = true;
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

void StreamingProperties::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_streamingExperiencePreferredProtocolHasBeenSet) {
    mapSize++;
  }
  if (m_userSettingsHasBeenSet) {
    mapSize++;
  }
  if (m_storageConnectorsHasBeenSet) {
    mapSize++;
  }
  if (m_globalAcceleratorHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_streamingExperiencePreferredProtocolHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StreamingExperiencePreferredProtocol"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(StreamingExperiencePreferredProtocolEnumMapper::GetNameForStreamingExperiencePreferredProtocolEnum(
                                            m_streamingExperiencePreferredProtocol)
                                            .c_str()));
  }

  if (m_userSettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UserSettings"));
    encoder.WriteArrayStart(m_userSettings.size());
    for (const auto& item_0 : m_userSettings) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_storageConnectorsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StorageConnectors"));
    encoder.WriteArrayStart(m_storageConnectors.size());
    for (const auto& item_0 : m_storageConnectors) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_globalAcceleratorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("GlobalAccelerator"));
    m_globalAccelerator.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws