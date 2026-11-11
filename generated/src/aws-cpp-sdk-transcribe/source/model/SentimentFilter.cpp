/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/model/SentimentFilter.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace TranscribeService {
namespace Model {

SentimentFilter::SentimentFilter(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

SentimentFilter& SentimentFilter::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Sentiments") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto val = decoder->PopNextTextVal();
                        if (val.has_value()) {
                          m_sentiments.push_back(SentimentValueMapper::GetSentimentValueForName(
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
                        m_sentiments.push_back(SentimentValueMapper::GetSentimentValueForName(
                            Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                      }
                    }
                  }
                }
                m_sentimentsHasBeenSet = true;
              }

              else if (initialKeyStr == "AbsoluteTimeRange") {
                m_absoluteTimeRange = AbsoluteTimeRange(decoder);
                m_absoluteTimeRangeHasBeenSet = true;
              }

              else if (initialKeyStr == "RelativeTimeRange") {
                m_relativeTimeRange = RelativeTimeRange(decoder);
                m_relativeTimeRangeHasBeenSet = true;
              }

              else if (initialKeyStr == "ParticipantRole") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_participantRole = ParticipantRoleMapper::GetParticipantRoleForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_participantRoleHasBeenSet = true;
              }

              else if (initialKeyStr == "Negate") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_negate = val.value();
                }
                m_negateHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("SentimentFilter", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Sentiments") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        m_sentiments.push_back(SentimentValueMapper::GetSentimentValueForName(
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
                      m_sentiments.push_back(SentimentValueMapper::GetSentimentValueForName(
                          Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                    }
                  }
                }
              }
              m_sentimentsHasBeenSet = true;
            }

            else if (initialKeyStr == "AbsoluteTimeRange") {
              m_absoluteTimeRange = AbsoluteTimeRange(decoder);
              m_absoluteTimeRangeHasBeenSet = true;
            }

            else if (initialKeyStr == "RelativeTimeRange") {
              m_relativeTimeRange = RelativeTimeRange(decoder);
              m_relativeTimeRangeHasBeenSet = true;
            }

            else if (initialKeyStr == "ParticipantRole") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_participantRole = ParticipantRoleMapper::GetParticipantRoleForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_participantRoleHasBeenSet = true;
            }

            else if (initialKeyStr == "Negate") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_negate = val.value();
              }
              m_negateHasBeenSet = true;
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

void SentimentFilter::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_sentimentsHasBeenSet) {
    mapSize++;
  }
  if (m_absoluteTimeRangeHasBeenSet) {
    mapSize++;
  }
  if (m_relativeTimeRangeHasBeenSet) {
    mapSize++;
  }
  if (m_participantRoleHasBeenSet) {
    mapSize++;
  }
  if (m_negateHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_sentimentsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Sentiments"));
    encoder.WriteArrayStart(m_sentiments.size());
    for (const auto& item_0 : m_sentiments) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(SentimentValueMapper::GetNameForSentimentValue(item_0).c_str()));
    }
  }

  if (m_absoluteTimeRangeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AbsoluteTimeRange"));
    m_absoluteTimeRange.CborEncode(encoder);
  }

  if (m_relativeTimeRangeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RelativeTimeRange"));
    m_relativeTimeRange.CborEncode(encoder);
  }

  if (m_participantRoleHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ParticipantRole"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ParticipantRoleMapper::GetNameForParticipantRole(m_participantRole).c_str()));
  }

  if (m_negateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Negate"));
    encoder.WriteBool(m_negate);
  }
}

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws