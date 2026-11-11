/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/model/LanguageModel.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace TranscribeService {
namespace Model {

LanguageModel::LanguageModel(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

LanguageModel& LanguageModel::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "ModelName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_modelName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_modelName = ss.str();
                  }
                }
                m_modelNameHasBeenSet = true;
              }

              else if (initialKeyStr == "CreateTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_createTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_createTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_createTimeHasBeenSet = true;
              }

              else if (initialKeyStr == "LastModifiedTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_lastModifiedTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_lastModifiedTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_lastModifiedTimeHasBeenSet = true;
              }

              else if (initialKeyStr == "LanguageCode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_languageCode = CLMLanguageCodeMapper::GetCLMLanguageCodeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_languageCodeHasBeenSet = true;
              }

              else if (initialKeyStr == "BaseModelName") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_baseModelName = BaseModelNameMapper::GetBaseModelNameForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_baseModelNameHasBeenSet = true;
              }

              else if (initialKeyStr == "ModelStatus") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_modelStatus = ModelStatusMapper::GetModelStatusForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_modelStatusHasBeenSet = true;
              }

              else if (initialKeyStr == "UpgradeAvailability") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_upgradeAvailability = val.value();
                }
                m_upgradeAvailabilityHasBeenSet = true;
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

              else if (initialKeyStr == "InputDataConfig") {
                m_inputDataConfig = InputDataConfig(decoder);
                m_inputDataConfigHasBeenSet = true;
              }

              else if (initialKeyStr == "EncryptionConfiguration") {
                m_encryptionConfiguration = EncryptionConfiguration(decoder);
                m_encryptionConfigurationHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("LanguageModel", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "ModelName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_modelName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_modelName = ss.str();
                }
              }
              m_modelNameHasBeenSet = true;
            }

            else if (initialKeyStr == "CreateTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_createTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_createTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_createTimeHasBeenSet = true;
            }

            else if (initialKeyStr == "LastModifiedTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_lastModifiedTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_lastModifiedTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_lastModifiedTimeHasBeenSet = true;
            }

            else if (initialKeyStr == "LanguageCode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_languageCode = CLMLanguageCodeMapper::GetCLMLanguageCodeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_languageCodeHasBeenSet = true;
            }

            else if (initialKeyStr == "BaseModelName") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_baseModelName = BaseModelNameMapper::GetBaseModelNameForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_baseModelNameHasBeenSet = true;
            }

            else if (initialKeyStr == "ModelStatus") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_modelStatus =
                    ModelStatusMapper::GetModelStatusForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_modelStatusHasBeenSet = true;
            }

            else if (initialKeyStr == "UpgradeAvailability") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_upgradeAvailability = val.value();
              }
              m_upgradeAvailabilityHasBeenSet = true;
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

            else if (initialKeyStr == "InputDataConfig") {
              m_inputDataConfig = InputDataConfig(decoder);
              m_inputDataConfigHasBeenSet = true;
            }

            else if (initialKeyStr == "EncryptionConfiguration") {
              m_encryptionConfiguration = EncryptionConfiguration(decoder);
              m_encryptionConfigurationHasBeenSet = true;
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

void LanguageModel::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_modelNameHasBeenSet) {
    mapSize++;
  }
  if (m_createTimeHasBeenSet) {
    mapSize++;
  }
  if (m_lastModifiedTimeHasBeenSet) {
    mapSize++;
  }
  if (m_languageCodeHasBeenSet) {
    mapSize++;
  }
  if (m_baseModelNameHasBeenSet) {
    mapSize++;
  }
  if (m_modelStatusHasBeenSet) {
    mapSize++;
  }
  if (m_upgradeAvailabilityHasBeenSet) {
    mapSize++;
  }
  if (m_failureReasonHasBeenSet) {
    mapSize++;
  }
  if (m_inputDataConfigHasBeenSet) {
    mapSize++;
  }
  if (m_encryptionConfigurationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_modelNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ModelName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_modelName.c_str()));
  }

  if (m_createTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("CreateTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_createTime.Seconds());
  }

  if (m_lastModifiedTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LastModifiedTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_lastModifiedTime.Seconds());
  }

  if (m_languageCodeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LanguageCode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(CLMLanguageCodeMapper::GetNameForCLMLanguageCode(m_languageCode).c_str()));
  }

  if (m_baseModelNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BaseModelName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(BaseModelNameMapper::GetNameForBaseModelName(m_baseModelName).c_str()));
  }

  if (m_modelStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ModelStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ModelStatusMapper::GetNameForModelStatus(m_modelStatus).c_str()));
  }

  if (m_upgradeAvailabilityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UpgradeAvailability"));
    encoder.WriteBool(m_upgradeAvailability);
  }

  if (m_failureReasonHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FailureReason"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_failureReason.c_str()));
  }

  if (m_inputDataConfigHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InputDataConfig"));
    m_inputDataConfig.CborEncode(encoder);
  }

  if (m_encryptionConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EncryptionConfiguration"));
    m_encryptionConfiguration.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws