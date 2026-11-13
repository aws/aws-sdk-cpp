/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/workspaces/model/ClientProperties.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace WorkSpaces {
namespace Model {

ClientProperties::ClientProperties(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ClientProperties& ClientProperties::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "ReconnectEnabled") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_reconnectEnabled = ReconnectEnumMapper::GetReconnectEnumForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_reconnectEnabledHasBeenSet = true;
              }

              else if (initialKeyStr == "LogUploadEnabled") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_logUploadEnabled = LogUploadEnumMapper::GetLogUploadEnumForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_logUploadEnabledHasBeenSet = true;
              }

              else if (initialKeyStr == "ClientExperiencePolicy") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_clientExperiencePolicy = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_clientExperiencePolicy = ss.str();
                  }
                }
                m_clientExperiencePolicyHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ClientProperties", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "ReconnectEnabled") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_reconnectEnabled = ReconnectEnumMapper::GetReconnectEnumForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_reconnectEnabledHasBeenSet = true;
            }

            else if (initialKeyStr == "LogUploadEnabled") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_logUploadEnabled = LogUploadEnumMapper::GetLogUploadEnumForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_logUploadEnabledHasBeenSet = true;
            }

            else if (initialKeyStr == "ClientExperiencePolicy") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_clientExperiencePolicy = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_clientExperiencePolicy = ss.str();
                }
              }
              m_clientExperiencePolicyHasBeenSet = true;
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

void ClientProperties::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_reconnectEnabledHasBeenSet) {
    mapSize++;
  }
  if (m_logUploadEnabledHasBeenSet) {
    mapSize++;
  }
  if (m_clientExperiencePolicyHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_reconnectEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ReconnectEnabled"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ReconnectEnumMapper::GetNameForReconnectEnum(m_reconnectEnabled).c_str()));
  }

  if (m_logUploadEnabledHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LogUploadEnabled"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(LogUploadEnumMapper::GetNameForLogUploadEnum(m_logUploadEnabled).c_str()));
  }

  if (m_clientExperiencePolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClientExperiencePolicy"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientExperiencePolicy.c_str()));
  }
}

}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws