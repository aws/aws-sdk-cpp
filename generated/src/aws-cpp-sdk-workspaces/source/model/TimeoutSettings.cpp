/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/TimeoutSettings.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace WorkSpaces {
namespace Model {

TimeoutSettings::TimeoutSettings(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

TimeoutSettings& TimeoutSettings::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "DisconnectTimeoutInSeconds") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_disconnectTimeoutInSeconds = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_disconnectTimeoutInSeconds = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_disconnectTimeoutInSecondsHasBeenSet = true;
              }

              else if (initialKeyStr == "IdleDisconnectTimeoutInSeconds") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_idleDisconnectTimeoutInSeconds = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_idleDisconnectTimeoutInSeconds = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_idleDisconnectTimeoutInSecondsHasBeenSet = true;
              }

              else if (initialKeyStr == "MaxUserDurationInSeconds") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_maxUserDurationInSeconds = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_maxUserDurationInSeconds = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_maxUserDurationInSecondsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("TimeoutSettings", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "DisconnectTimeoutInSeconds") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_disconnectTimeoutInSeconds = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_disconnectTimeoutInSeconds = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_disconnectTimeoutInSecondsHasBeenSet = true;
            }

            else if (initialKeyStr == "IdleDisconnectTimeoutInSeconds") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_idleDisconnectTimeoutInSeconds = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_idleDisconnectTimeoutInSeconds = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_idleDisconnectTimeoutInSecondsHasBeenSet = true;
            }

            else if (initialKeyStr == "MaxUserDurationInSeconds") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_maxUserDurationInSeconds = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_maxUserDurationInSeconds = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_maxUserDurationInSecondsHasBeenSet = true;
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

void TimeoutSettings::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_disconnectTimeoutInSecondsHasBeenSet) {
    mapSize++;
  }
  if (m_idleDisconnectTimeoutInSecondsHasBeenSet) {
    mapSize++;
  }
  if (m_maxUserDurationInSecondsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_disconnectTimeoutInSecondsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DisconnectTimeoutInSeconds"));
    (m_disconnectTimeoutInSeconds >= 0) ? encoder.WriteUInt(m_disconnectTimeoutInSeconds)
                                        : encoder.WriteNegInt(m_disconnectTimeoutInSeconds);
  }

  if (m_idleDisconnectTimeoutInSecondsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IdleDisconnectTimeoutInSeconds"));
    (m_idleDisconnectTimeoutInSeconds >= 0) ? encoder.WriteUInt(m_idleDisconnectTimeoutInSeconds)
                                            : encoder.WriteNegInt(m_idleDisconnectTimeoutInSeconds);
  }

  if (m_maxUserDurationInSecondsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxUserDurationInSeconds"));
    (m_maxUserDurationInSeconds >= 0) ? encoder.WriteUInt(m_maxUserDurationInSeconds) : encoder.WriteNegInt(m_maxUserDurationInSeconds);
  }
}

}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws