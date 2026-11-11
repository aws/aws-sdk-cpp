/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/model/MedicalTranscriptionSetting.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace TranscribeService {
namespace Model {

MedicalTranscriptionSetting::MedicalTranscriptionSetting(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

MedicalTranscriptionSetting& MedicalTranscriptionSetting::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "ShowSpeakerLabels") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_showSpeakerLabels = val.value();
                }
                m_showSpeakerLabelsHasBeenSet = true;
              }

              else if (initialKeyStr == "MaxSpeakerLabels") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_maxSpeakerLabels = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_maxSpeakerLabels = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_maxSpeakerLabelsHasBeenSet = true;
              }

              else if (initialKeyStr == "ChannelIdentification") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_channelIdentification = val.value();
                }
                m_channelIdentificationHasBeenSet = true;
              }

              else if (initialKeyStr == "ShowAlternatives") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_showAlternatives = val.value();
                }
                m_showAlternativesHasBeenSet = true;
              }

              else if (initialKeyStr == "MaxAlternatives") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_maxAlternatives = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_maxAlternatives = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_maxAlternativesHasBeenSet = true;
              }

              else if (initialKeyStr == "VocabularyName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_vocabularyName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_vocabularyName = ss.str();
                  }
                }
                m_vocabularyNameHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("MedicalTranscriptionSetting", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "ShowSpeakerLabels") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_showSpeakerLabels = val.value();
              }
              m_showSpeakerLabelsHasBeenSet = true;
            }

            else if (initialKeyStr == "MaxSpeakerLabels") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_maxSpeakerLabels = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_maxSpeakerLabels = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_maxSpeakerLabelsHasBeenSet = true;
            }

            else if (initialKeyStr == "ChannelIdentification") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_channelIdentification = val.value();
              }
              m_channelIdentificationHasBeenSet = true;
            }

            else if (initialKeyStr == "ShowAlternatives") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_showAlternatives = val.value();
              }
              m_showAlternativesHasBeenSet = true;
            }

            else if (initialKeyStr == "MaxAlternatives") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_maxAlternatives = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_maxAlternatives = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_maxAlternativesHasBeenSet = true;
            }

            else if (initialKeyStr == "VocabularyName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_vocabularyName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_vocabularyName = ss.str();
                }
              }
              m_vocabularyNameHasBeenSet = true;
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

void MedicalTranscriptionSetting::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_showSpeakerLabelsHasBeenSet) {
    mapSize++;
  }
  if (m_maxSpeakerLabelsHasBeenSet) {
    mapSize++;
  }
  if (m_channelIdentificationHasBeenSet) {
    mapSize++;
  }
  if (m_showAlternativesHasBeenSet) {
    mapSize++;
  }
  if (m_maxAlternativesHasBeenSet) {
    mapSize++;
  }
  if (m_vocabularyNameHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_showSpeakerLabelsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ShowSpeakerLabels"));
    encoder.WriteBool(m_showSpeakerLabels);
  }

  if (m_maxSpeakerLabelsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxSpeakerLabels"));
    (m_maxSpeakerLabels >= 0) ? encoder.WriteUInt(m_maxSpeakerLabels) : encoder.WriteNegInt(m_maxSpeakerLabels);
  }

  if (m_channelIdentificationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ChannelIdentification"));
    encoder.WriteBool(m_channelIdentification);
  }

  if (m_showAlternativesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ShowAlternatives"));
    encoder.WriteBool(m_showAlternatives);
  }

  if (m_maxAlternativesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxAlternatives"));
    (m_maxAlternatives >= 0) ? encoder.WriteUInt(m_maxAlternatives) : encoder.WriteNegInt(m_maxAlternatives);
  }

  if (m_vocabularyNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VocabularyName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_vocabularyName.c_str()));
  }
}

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws