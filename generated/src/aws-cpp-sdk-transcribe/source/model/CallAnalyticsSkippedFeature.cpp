/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/model/CallAnalyticsSkippedFeature.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace TranscribeService {
namespace Model {

CallAnalyticsSkippedFeature::CallAnalyticsSkippedFeature(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

CallAnalyticsSkippedFeature& CallAnalyticsSkippedFeature::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Feature") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_feature = CallAnalyticsFeatureMapper::GetCallAnalyticsFeatureForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_featureHasBeenSet = true;
              }

              else if (initialKeyStr == "ReasonCode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_reasonCode = CallAnalyticsSkippedReasonCodeMapper::GetCallAnalyticsSkippedReasonCodeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_reasonCodeHasBeenSet = true;
              }

              else if (initialKeyStr == "Message") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_message = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_message = ss.str();
                  }
                }
                m_messageHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("CallAnalyticsSkippedFeature", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Feature") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_feature = CallAnalyticsFeatureMapper::GetCallAnalyticsFeatureForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_featureHasBeenSet = true;
            }

            else if (initialKeyStr == "ReasonCode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_reasonCode = CallAnalyticsSkippedReasonCodeMapper::GetCallAnalyticsSkippedReasonCodeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_reasonCodeHasBeenSet = true;
            }

            else if (initialKeyStr == "Message") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_message = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_message = ss.str();
                }
              }
              m_messageHasBeenSet = true;
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

void CallAnalyticsSkippedFeature::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_featureHasBeenSet) {
    mapSize++;
  }
  if (m_reasonCodeHasBeenSet) {
    mapSize++;
  }
  if (m_messageHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_featureHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Feature"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(CallAnalyticsFeatureMapper::GetNameForCallAnalyticsFeature(m_feature).c_str()));
  }

  if (m_reasonCodeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ReasonCode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        CallAnalyticsSkippedReasonCodeMapper::GetNameForCallAnalyticsSkippedReasonCode(m_reasonCode).c_str()));
  }

  if (m_messageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Message"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_message.c_str()));
  }
}

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws