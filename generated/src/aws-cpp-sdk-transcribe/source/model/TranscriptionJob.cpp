/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/model/TranscriptionJob.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace TranscribeService {
namespace Model {

TranscriptionJob::TranscriptionJob(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

TranscriptionJob& TranscriptionJob::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "TranscriptionJobName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_transcriptionJobName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_transcriptionJobName = ss.str();
                  }
                }
                m_transcriptionJobNameHasBeenSet = true;
              }

              else if (initialKeyStr == "TranscriptionJobStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_transcriptionJobStatus = TranscriptionJobStatusMapper::GetTranscriptionJobStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_transcriptionJobStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "LanguageCode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_languageCodeHasBeenSet = true;
              }

              else if (initialKeyStr == "MediaSampleRateHertz") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_mediaSampleRateHertz = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_mediaSampleRateHertz = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_mediaSampleRateHertzHasBeenSet = true;
              }

              else if (initialKeyStr == "MediaFormat") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_mediaFormat = MediaFormatMapper::GetMediaFormatForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_mediaFormatHasBeenSet = true;
              }

              else if (initialKeyStr == "Media") {
                m_media = Media(decoder);
                m_mediaHasBeenSet = true;
              }

              else if (initialKeyStr == "Transcript") {
                m_transcript = Transcript(decoder);
                m_transcriptHasBeenSet = true;
              }

              else if (initialKeyStr == "StartTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_startTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_startTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_startTimeHasBeenSet = true;
              }

              else if (initialKeyStr == "CreationTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_creationTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_creationTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_creationTimeHasBeenSet = true;
              }

              else if (initialKeyStr == "CompletionTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_completionTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_completionTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_completionTimeHasBeenSet = true;
              }

              else if (initialKeyStr == "FailureReason") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_failureReason = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_failureReason = ss.str();
                  }
                }
                m_failureReasonHasBeenSet = true;
              }

              else if (initialKeyStr == "Settings") {
                m_settings = Settings(decoder);
                m_settingsHasBeenSet = true;
              }

              else if (initialKeyStr == "ModelSettings") {
                m_modelSettings = ModelSettings(decoder);
                m_modelSettingsHasBeenSet = true;
              }

              else if (initialKeyStr == "JobExecutionSettings") {
                m_jobExecutionSettings = JobExecutionSettings(decoder);
                m_jobExecutionSettingsHasBeenSet = true;
              }

              else if (initialKeyStr == "ContentRedaction") {
                m_contentRedaction = ContentRedaction(decoder);
                m_contentRedactionHasBeenSet = true;
              }

              else if (initialKeyStr == "IdentifyLanguage") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_identifyLanguage = val.value();
                }
                m_identifyLanguageHasBeenSet = true;
              }

              else if (initialKeyStr == "IdentifyMultipleLanguages") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_identifyMultipleLanguages = val.value();
                }
                m_identifyMultipleLanguagesHasBeenSet = true;
              }

              else if (initialKeyStr == "LanguageOptions") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto val = decoder->PopNextTextVal();
                        if (val.has_value()) {
                          m_languageOptions.push_back(LanguageCodeMapper::GetLanguageCodeForName(
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
                        m_languageOptions.push_back(LanguageCodeMapper::GetLanguageCodeForName(
                            Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                      }
                    }
                  }
                }
                m_languageOptionsHasBeenSet = true;
              }

              else if (initialKeyStr == "IdentifiedLanguageScore") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_identifiedLanguageScore = val.value();
                }
                m_identifiedLanguageScoreHasBeenSet = true;
              }

              else if (initialKeyStr == "LanguageCodes") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_languageCodes.push_back(LanguageCodeItem(decoder));
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
                      m_languageCodes.push_back(LanguageCodeItem(decoder));
                    }
                  }
                }
                m_languageCodesHasBeenSet = true;
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

              else if (initialKeyStr == "Subtitles") {
                m_subtitles = SubtitlesOutput(decoder);
                m_subtitlesHasBeenSet = true;
              }

              else if (initialKeyStr == "LanguageIdSettings") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart)) {
                  if (peekType_0.value() == CborType::MapStart) {
                    auto mapSize_0 = decoder->PopNextMapStart();
                    if (mapSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                        auto key_1 = decoder->PopNextTextVal();
                        if (key_1.has_value()) {
                          Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                          m_languageIdSettings[LanguageCodeMapper::GetLanguageCodeForName(keyStr_1)] = LanguageIdSettings(decoder);
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
                        m_languageIdSettings[LanguageCodeMapper::GetLanguageCodeForName(keyStr_1)] = LanguageIdSettings(decoder);
                      }
                    }
                  }
                }
                m_languageIdSettingsHasBeenSet = true;
              }

              else if (initialKeyStr == "ToxicityDetection") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_toxicityDetection.push_back(ToxicityDetectionSettings(decoder));
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
                      m_toxicityDetection.push_back(ToxicityDetectionSettings(decoder));
                    }
                  }
                }
                m_toxicityDetectionHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("TranscriptionJob", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "TranscriptionJobName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_transcriptionJobName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_transcriptionJobName = ss.str();
                }
              }
              m_transcriptionJobNameHasBeenSet = true;
            }

            else if (initialKeyStr == "TranscriptionJobStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_transcriptionJobStatus = TranscriptionJobStatusMapper::GetTranscriptionJobStatusForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_transcriptionJobStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "LanguageCode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_languageCodeHasBeenSet = true;
            }

            else if (initialKeyStr == "MediaSampleRateHertz") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_mediaSampleRateHertz = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_mediaSampleRateHertz = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_mediaSampleRateHertzHasBeenSet = true;
            }

            else if (initialKeyStr == "MediaFormat") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_mediaFormat =
                    MediaFormatMapper::GetMediaFormatForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_mediaFormatHasBeenSet = true;
            }

            else if (initialKeyStr == "Media") {
              m_media = Media(decoder);
              m_mediaHasBeenSet = true;
            }

            else if (initialKeyStr == "Transcript") {
              m_transcript = Transcript(decoder);
              m_transcriptHasBeenSet = true;
            }

            else if (initialKeyStr == "StartTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_startTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_startTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_startTimeHasBeenSet = true;
            }

            else if (initialKeyStr == "CreationTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_creationTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_creationTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_creationTimeHasBeenSet = true;
            }

            else if (initialKeyStr == "CompletionTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_completionTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_completionTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_completionTimeHasBeenSet = true;
            }

            else if (initialKeyStr == "FailureReason") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_failureReason = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_failureReason = ss.str();
                }
              }
              m_failureReasonHasBeenSet = true;
            }

            else if (initialKeyStr == "Settings") {
              m_settings = Settings(decoder);
              m_settingsHasBeenSet = true;
            }

            else if (initialKeyStr == "ModelSettings") {
              m_modelSettings = ModelSettings(decoder);
              m_modelSettingsHasBeenSet = true;
            }

            else if (initialKeyStr == "JobExecutionSettings") {
              m_jobExecutionSettings = JobExecutionSettings(decoder);
              m_jobExecutionSettingsHasBeenSet = true;
            }

            else if (initialKeyStr == "ContentRedaction") {
              m_contentRedaction = ContentRedaction(decoder);
              m_contentRedactionHasBeenSet = true;
            }

            else if (initialKeyStr == "IdentifyLanguage") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_identifyLanguage = val.value();
              }
              m_identifyLanguageHasBeenSet = true;
            }

            else if (initialKeyStr == "IdentifyMultipleLanguages") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_identifyMultipleLanguages = val.value();
              }
              m_identifyMultipleLanguagesHasBeenSet = true;
            }

            else if (initialKeyStr == "LanguageOptions") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        m_languageOptions.push_back(LanguageCodeMapper::GetLanguageCodeForName(
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
                      m_languageOptions.push_back(LanguageCodeMapper::GetLanguageCodeForName(
                          Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                    }
                  }
                }
              }
              m_languageOptionsHasBeenSet = true;
            }

            else if (initialKeyStr == "IdentifiedLanguageScore") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_identifiedLanguageScore = val.value();
              }
              m_identifiedLanguageScoreHasBeenSet = true;
            }

            else if (initialKeyStr == "LanguageCodes") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_languageCodes.push_back(LanguageCodeItem(decoder));
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
                    m_languageCodes.push_back(LanguageCodeItem(decoder));
                  }
                }
              }
              m_languageCodesHasBeenSet = true;
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

            else if (initialKeyStr == "Subtitles") {
              m_subtitles = SubtitlesOutput(decoder);
              m_subtitlesHasBeenSet = true;
            }

            else if (initialKeyStr == "LanguageIdSettings") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart)) {
                if (peekType_0.value() == CborType::MapStart) {
                  auto mapSize_0 = decoder->PopNextMapStart();
                  if (mapSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                      auto key_1 = decoder->PopNextTextVal();
                      if (key_1.has_value()) {
                        Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                        m_languageIdSettings[LanguageCodeMapper::GetLanguageCodeForName(keyStr_1)] = LanguageIdSettings(decoder);
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
                      m_languageIdSettings[LanguageCodeMapper::GetLanguageCodeForName(keyStr_1)] = LanguageIdSettings(decoder);
                    }
                  }
                }
              }
              m_languageIdSettingsHasBeenSet = true;
            }

            else if (initialKeyStr == "ToxicityDetection") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_toxicityDetection.push_back(ToxicityDetectionSettings(decoder));
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
                    m_toxicityDetection.push_back(ToxicityDetectionSettings(decoder));
                  }
                }
              }
              m_toxicityDetectionHasBeenSet = true;
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

void TranscriptionJob::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_transcriptionJobNameHasBeenSet) {
    mapSize++;
  }
  if (m_transcriptionJobStatusHasBeenSet) {
    mapSize++;
  }
  if (m_languageCodeHasBeenSet) {
    mapSize++;
  }
  if (m_mediaSampleRateHertzHasBeenSet) {
    mapSize++;
  }
  if (m_mediaFormatHasBeenSet) {
    mapSize++;
  }
  if (m_mediaHasBeenSet) {
    mapSize++;
  }
  if (m_transcriptHasBeenSet) {
    mapSize++;
  }
  if (m_startTimeHasBeenSet) {
    mapSize++;
  }
  if (m_creationTimeHasBeenSet) {
    mapSize++;
  }
  if (m_completionTimeHasBeenSet) {
    mapSize++;
  }
  if (m_failureReasonHasBeenSet) {
    mapSize++;
  }
  if (m_settingsHasBeenSet) {
    mapSize++;
  }
  if (m_modelSettingsHasBeenSet) {
    mapSize++;
  }
  if (m_jobExecutionSettingsHasBeenSet) {
    mapSize++;
  }
  if (m_contentRedactionHasBeenSet) {
    mapSize++;
  }
  if (m_identifyLanguageHasBeenSet) {
    mapSize++;
  }
  if (m_identifyMultipleLanguagesHasBeenSet) {
    mapSize++;
  }
  if (m_languageOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_identifiedLanguageScoreHasBeenSet) {
    mapSize++;
  }
  if (m_languageCodesHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_subtitlesHasBeenSet) {
    mapSize++;
  }
  if (m_languageIdSettingsHasBeenSet) {
    mapSize++;
  }
  if (m_toxicityDetectionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_transcriptionJobNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TranscriptionJobName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_transcriptionJobName.c_str()));
  }

  if (m_transcriptionJobStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TranscriptionJobStatus"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(TranscriptionJobStatusMapper::GetNameForTranscriptionJobStatus(m_transcriptionJobStatus).c_str()));
  }

  if (m_languageCodeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LanguageCode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(LanguageCodeMapper::GetNameForLanguageCode(m_languageCode).c_str()));
  }

  if (m_mediaSampleRateHertzHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MediaSampleRateHertz"));
    (m_mediaSampleRateHertz >= 0) ? encoder.WriteUInt(m_mediaSampleRateHertz) : encoder.WriteNegInt(m_mediaSampleRateHertz);
  }

  if (m_mediaFormatHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MediaFormat"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(MediaFormatMapper::GetNameForMediaFormat(m_mediaFormat).c_str()));
  }

  if (m_mediaHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Media"));
    m_media.CborEncode(encoder);
  }

  if (m_transcriptHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Transcript"));
    m_transcript.CborEncode(encoder);
  }

  if (m_startTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StartTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_startTime.Seconds());
  }

  if (m_creationTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CreationTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_creationTime.Seconds());
  }

  if (m_completionTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CompletionTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_completionTime.Seconds());
  }

  if (m_failureReasonHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FailureReason"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_failureReason.c_str()));
  }

  if (m_settingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Settings"));
    m_settings.CborEncode(encoder);
  }

  if (m_modelSettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ModelSettings"));
    m_modelSettings.CborEncode(encoder);
  }

  if (m_jobExecutionSettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("JobExecutionSettings"));
    m_jobExecutionSettings.CborEncode(encoder);
  }

  if (m_contentRedactionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ContentRedaction"));
    m_contentRedaction.CborEncode(encoder);
  }

  if (m_identifyLanguageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IdentifyLanguage"));
    encoder.WriteBool(m_identifyLanguage);
  }

  if (m_identifyMultipleLanguagesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IdentifyMultipleLanguages"));
    encoder.WriteBool(m_identifyMultipleLanguages);
  }

  if (m_languageOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LanguageOptions"));
    encoder.WriteArrayStart(m_languageOptions.size());
    for (const auto& item_0 : m_languageOptions) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(LanguageCodeMapper::GetNameForLanguageCode(item_0).c_str()));
    }
  }

  if (m_identifiedLanguageScoreHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IdentifiedLanguageScore"));
    encoder.WriteFloat(m_identifiedLanguageScore);
  }

  if (m_languageCodesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LanguageCodes"));
    encoder.WriteArrayStart(m_languageCodes.size());
    for (const auto& item_0 : m_languageCodes) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_subtitlesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Subtitles"));
    m_subtitles.CborEncode(encoder);
  }

  if (m_languageIdSettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LanguageIdSettings"));
    encoder.WriteMapStart(m_languageIdSettings.size());
    for (const auto& item_0 : m_languageIdSettings) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(LanguageCodeMapper::GetNameForLanguageCode(item_0.first).c_str()));
      item_0.second.CborEncode(encoder);
    }
  }

  if (m_toxicityDetectionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ToxicityDetection"));
    encoder.WriteArrayStart(m_toxicityDetection.size());
    for (const auto& item_0 : m_toxicityDetection) {
      item_0.CborEncode(encoder);
    }
  }
}

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws