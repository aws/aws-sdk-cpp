/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/model/MedicalTranscriptionJobSummary.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace TranscribeService {
namespace Model {

MedicalTranscriptionJobSummary::MedicalTranscriptionJobSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

MedicalTranscriptionJobSummary& MedicalTranscriptionJobSummary::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "MedicalTranscriptionJobName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_medicalTranscriptionJobName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_medicalTranscriptionJobName = ss.str();
                  }
                }
                m_medicalTranscriptionJobNameHasBeenSet = true;
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

              else if (initialKeyStr == "LanguageCode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_languageCodeHasBeenSet = true;
              }

              else if (initialKeyStr == "TranscriptionJobStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_transcriptionJobStatus = TranscriptionJobStatusMapper::GetTranscriptionJobStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_transcriptionJobStatusHasBeenSet = true;
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

              else if (initialKeyStr == "OutputLocationType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_outputLocationType = OutputLocationTypeMapper::GetOutputLocationTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_outputLocationTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "Specialty") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_specialty =
                      SpecialtyMapper::GetSpecialtyForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_specialtyHasBeenSet = true;
              }

              else if (initialKeyStr == "ContentIdentificationType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_contentIdentificationType = MedicalContentIdentificationTypeMapper::GetMedicalContentIdentificationTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_contentIdentificationTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "Type") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_type = TypeMapper::GetTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_typeHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("MedicalTranscriptionJobSummary", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "MedicalTranscriptionJobName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_medicalTranscriptionJobName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_medicalTranscriptionJobName = ss.str();
                }
              }
              m_medicalTranscriptionJobNameHasBeenSet = true;
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

            else if (initialKeyStr == "LanguageCode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_languageCode = LanguageCodeMapper::GetLanguageCodeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_languageCodeHasBeenSet = true;
            }

            else if (initialKeyStr == "TranscriptionJobStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_transcriptionJobStatus = TranscriptionJobStatusMapper::GetTranscriptionJobStatusForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_transcriptionJobStatusHasBeenSet = true;
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

            else if (initialKeyStr == "OutputLocationType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_outputLocationType = OutputLocationTypeMapper::GetOutputLocationTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_outputLocationTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "Specialty") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_specialty =
                    SpecialtyMapper::GetSpecialtyForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_specialtyHasBeenSet = true;
            }

            else if (initialKeyStr == "ContentIdentificationType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_contentIdentificationType = MedicalContentIdentificationTypeMapper::GetMedicalContentIdentificationTypeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_contentIdentificationTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "Type") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_type = TypeMapper::GetTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_typeHasBeenSet = true;
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

void MedicalTranscriptionJobSummary::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_medicalTranscriptionJobNameHasBeenSet) {
    mapSize++;
  }
  if (m_creationTimeHasBeenSet) {
    mapSize++;
  }
  if (m_startTimeHasBeenSet) {
    mapSize++;
  }
  if (m_completionTimeHasBeenSet) {
    mapSize++;
  }
  if (m_languageCodeHasBeenSet) {
    mapSize++;
  }
  if (m_transcriptionJobStatusHasBeenSet) {
    mapSize++;
  }
  if (m_failureReasonHasBeenSet) {
    mapSize++;
  }
  if (m_outputLocationTypeHasBeenSet) {
    mapSize++;
  }
  if (m_specialtyHasBeenSet) {
    mapSize++;
  }
  if (m_contentIdentificationTypeHasBeenSet) {
    mapSize++;
  }
  if (m_typeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_medicalTranscriptionJobNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MedicalTranscriptionJobName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_medicalTranscriptionJobName.c_str()));
  }

  if (m_creationTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CreationTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_creationTime.Seconds());
  }

  if (m_startTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StartTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_startTime.Seconds());
  }

  if (m_completionTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CompletionTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_completionTime.Seconds());
  }

  if (m_languageCodeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LanguageCode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(LanguageCodeMapper::GetNameForLanguageCode(m_languageCode).c_str()));
  }

  if (m_transcriptionJobStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TranscriptionJobStatus"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(TranscriptionJobStatusMapper::GetNameForTranscriptionJobStatus(m_transcriptionJobStatus).c_str()));
  }

  if (m_failureReasonHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FailureReason"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_failureReason.c_str()));
  }

  if (m_outputLocationTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OutputLocationType"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(OutputLocationTypeMapper::GetNameForOutputLocationType(m_outputLocationType).c_str()));
  }

  if (m_specialtyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Specialty"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SpecialtyMapper::GetNameForSpecialty(m_specialty).c_str()));
  }

  if (m_contentIdentificationTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ContentIdentificationType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(
        MedicalContentIdentificationTypeMapper::GetNameForMedicalContentIdentificationType(m_contentIdentificationType).c_str()));
  }

  if (m_typeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Type"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(TypeMapper::GetNameForType(m_type).c_str()));
  }
}

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws