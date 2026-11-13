/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/model/CallAnalyticsJobSettings.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace TranscribeService {
namespace Model {

CallAnalyticsJobSettings::CallAnalyticsJobSettings(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

CallAnalyticsJobSettings& CallAnalyticsJobSettings::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "VocabularyName") {
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
              }

              else if (initialKeyStr == "VocabularyFilterName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_vocabularyFilterName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_vocabularyFilterName = ss.str();
                  }
                }
                m_vocabularyFilterNameHasBeenSet = true;
              }

              else if (initialKeyStr == "VocabularyFilterMethod") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_vocabularyFilterMethod = VocabularyFilterMethodMapper::GetVocabularyFilterMethodForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_vocabularyFilterMethodHasBeenSet = true;
              }

              else if (initialKeyStr == "LanguageModelName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_languageModelName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_languageModelName = ss.str();
                  }
                }
                m_languageModelNameHasBeenSet = true;
              }

              else if (initialKeyStr == "ContentRedaction") {
                m_contentRedaction = ContentRedaction(decoder);
                m_contentRedactionHasBeenSet = true;
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

              else if (initialKeyStr == "Summarization") {
                m_summarization = Summarization(decoder);
                m_summarizationHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("CallAnalyticsJobSettings", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "VocabularyName") {
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
            }

            else if (initialKeyStr == "VocabularyFilterName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_vocabularyFilterName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_vocabularyFilterName = ss.str();
                }
              }
              m_vocabularyFilterNameHasBeenSet = true;
            }

            else if (initialKeyStr == "VocabularyFilterMethod") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_vocabularyFilterMethod = VocabularyFilterMethodMapper::GetVocabularyFilterMethodForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_vocabularyFilterMethodHasBeenSet = true;
            }

            else if (initialKeyStr == "LanguageModelName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_languageModelName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_languageModelName = ss.str();
                }
              }
              m_languageModelNameHasBeenSet = true;
            }

            else if (initialKeyStr == "ContentRedaction") {
              m_contentRedaction = ContentRedaction(decoder);
              m_contentRedactionHasBeenSet = true;
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

            else if (initialKeyStr == "Summarization") {
              m_summarization = Summarization(decoder);
              m_summarizationHasBeenSet = true;
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

void CallAnalyticsJobSettings::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_vocabularyNameHasBeenSet) {
    mapSize++;
  }
  if (m_vocabularyFilterNameHasBeenSet) {
    mapSize++;
  }
  if (m_vocabularyFilterMethodHasBeenSet) {
    mapSize++;
  }
  if (m_languageModelNameHasBeenSet) {
    mapSize++;
  }
  if (m_contentRedactionHasBeenSet) {
    mapSize++;
  }
  if (m_languageOptionsHasBeenSet) {
    mapSize++;
  }
  if (m_languageIdSettingsHasBeenSet) {
    mapSize++;
  }
  if (m_summarizationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_vocabularyNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VocabularyName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_vocabularyName.c_str()));
  }

  if (m_vocabularyFilterNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VocabularyFilterName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_vocabularyFilterName.c_str()));
  }

  if (m_vocabularyFilterMethodHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("VocabularyFilterMethod"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(VocabularyFilterMethodMapper::GetNameForVocabularyFilterMethod(m_vocabularyFilterMethod).c_str()));
  }

  if (m_languageModelNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LanguageModelName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_languageModelName.c_str()));
  }

  if (m_contentRedactionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ContentRedaction"));
    m_contentRedaction.CborEncode(encoder);
  }

  if (m_languageOptionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LanguageOptions"));
    encoder.WriteArrayStart(m_languageOptions.size());
    for (const auto& item_0 : m_languageOptions) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(LanguageCodeMapper::GetNameForLanguageCode(item_0).c_str()));
    }
  }

  if (m_languageIdSettingsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LanguageIdSettings"));
    encoder.WriteMapStart(m_languageIdSettings.size());
    for (const auto& item_0 : m_languageIdSettings) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(LanguageCodeMapper::GetNameForLanguageCode(item_0.first).c_str()));
      item_0.second.CborEncode(encoder);
    }
  }

  if (m_summarizationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Summarization"));
    m_summarization.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws