/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/model/MedicalScribeJob.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace TranscribeService {
namespace Model {

MedicalScribeJob::MedicalScribeJob(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

MedicalScribeJob& MedicalScribeJob::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "MedicalScribeJobName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_medicalScribeJobName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_medicalScribeJobName = ss.str();
                  }
                }
                m_medicalScribeJobNameHasBeenSet = true;
              }

              else if (initialKeyStr == "MedicalScribeJobStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_medicalScribeJobStatus = MedicalScribeJobStatusMapper::GetMedicalScribeJobStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_medicalScribeJobStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "LanguageCode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_languageCode = MedicalScribeLanguageCodeMapper::GetMedicalScribeLanguageCodeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_languageCodeHasBeenSet = true;
              }

              else if (initialKeyStr == "Media") {
                m_media = Media(decoder);
                m_mediaHasBeenSet = true;
              }

              else if (initialKeyStr == "MedicalScribeOutput") {
                m_medicalScribeOutput = MedicalScribeOutput(decoder);
                m_medicalScribeOutputHasBeenSet = true;
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
                m_settings = MedicalScribeSettings(decoder);
                m_settingsHasBeenSet = true;
              }

              else if (initialKeyStr == "DataAccessRoleArn") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_dataAccessRoleArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_dataAccessRoleArn = ss.str();
                  }
                }
                m_dataAccessRoleArnHasBeenSet = true;
              }

              else if (initialKeyStr == "ChannelDefinitions") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_channelDefinitions.push_back(MedicalScribeChannelDefinition(decoder));
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
                      m_channelDefinitions.push_back(MedicalScribeChannelDefinition(decoder));
                    }
                  }
                }
                m_channelDefinitionsHasBeenSet = true;
              }

              else if (initialKeyStr == "MedicalScribeContextProvided") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_medicalScribeContextProvided = val.value();
                }
                m_medicalScribeContextProvidedHasBeenSet = true;
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
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("MedicalScribeJob", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "MedicalScribeJobName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_medicalScribeJobName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_medicalScribeJobName = ss.str();
                }
              }
              m_medicalScribeJobNameHasBeenSet = true;
            }

            else if (initialKeyStr == "MedicalScribeJobStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_medicalScribeJobStatus = MedicalScribeJobStatusMapper::GetMedicalScribeJobStatusForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_medicalScribeJobStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "LanguageCode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_languageCode = MedicalScribeLanguageCodeMapper::GetMedicalScribeLanguageCodeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_languageCodeHasBeenSet = true;
            }

            else if (initialKeyStr == "Media") {
              m_media = Media(decoder);
              m_mediaHasBeenSet = true;
            }

            else if (initialKeyStr == "MedicalScribeOutput") {
              m_medicalScribeOutput = MedicalScribeOutput(decoder);
              m_medicalScribeOutputHasBeenSet = true;
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
              m_settings = MedicalScribeSettings(decoder);
              m_settingsHasBeenSet = true;
            }

            else if (initialKeyStr == "DataAccessRoleArn") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_dataAccessRoleArn = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_dataAccessRoleArn = ss.str();
                }
              }
              m_dataAccessRoleArnHasBeenSet = true;
            }

            else if (initialKeyStr == "ChannelDefinitions") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_channelDefinitions.push_back(MedicalScribeChannelDefinition(decoder));
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
                    m_channelDefinitions.push_back(MedicalScribeChannelDefinition(decoder));
                  }
                }
              }
              m_channelDefinitionsHasBeenSet = true;
            }

            else if (initialKeyStr == "MedicalScribeContextProvided") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_medicalScribeContextProvided = val.value();
              }
              m_medicalScribeContextProvidedHasBeenSet = true;
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

void MedicalScribeJob::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_medicalScribeJobNameHasBeenSet) {
    mapSize++;
  }
  if (m_medicalScribeJobStatusHasBeenSet) {
    mapSize++;
  }
  if (m_languageCodeHasBeenSet) {
    mapSize++;
  }
  if (m_mediaHasBeenSet) {
    mapSize++;
  }
  if (m_medicalScribeOutputHasBeenSet) {
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
  if (m_dataAccessRoleArnHasBeenSet) {
    mapSize++;
  }
  if (m_channelDefinitionsHasBeenSet) {
    mapSize++;
  }
  if (m_medicalScribeContextProvidedHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_medicalScribeJobNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MedicalScribeJobName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_medicalScribeJobName.c_str()));
  }

  if (m_medicalScribeJobStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MedicalScribeJobStatus"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(MedicalScribeJobStatusMapper::GetNameForMedicalScribeJobStatus(m_medicalScribeJobStatus).c_str()));
  }

  if (m_languageCodeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LanguageCode"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(MedicalScribeLanguageCodeMapper::GetNameForMedicalScribeLanguageCode(m_languageCode).c_str()));
  }

  if (m_mediaHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Media"));
    m_media.CborEncode(encoder);
  }

  if (m_medicalScribeOutputHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MedicalScribeOutput"));
    m_medicalScribeOutput.CborEncode(encoder);
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

  if (m_dataAccessRoleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DataAccessRoleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_dataAccessRoleArn.c_str()));
  }

  if (m_channelDefinitionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ChannelDefinitions"));
    encoder.WriteArrayStart(m_channelDefinitions.size());
    for (const auto& item_0 : m_channelDefinitions) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_medicalScribeContextProvidedHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MedicalScribeContextProvided"));
    encoder.WriteBool(m_medicalScribeContextProvided);
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteArrayStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      item_0.CborEncode(encoder);
    }
  }
}

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws