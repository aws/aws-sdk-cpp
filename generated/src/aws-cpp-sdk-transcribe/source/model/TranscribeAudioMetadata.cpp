/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/transcribe/model/TranscribeAudioMetadata.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace TranscribeService {
namespace Model {

TranscribeAudioMetadata::TranscribeAudioMetadata(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

TranscribeAudioMetadata& TranscribeAudioMetadata::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "LanguageCode") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_languageCode = SyncLanguageCodeMapper::GetSyncLanguageCodeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_languageCodeHasBeenSet = true;
              }

              else if (initialKeyStr == "LanguageCodes") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_languageCodes.push_back(SyncLanguageCodeItem(decoder));
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
                      m_languageCodes.push_back(SyncLanguageCodeItem(decoder));
                    }
                  }
                }
                m_languageCodesHasBeenSet = true;
              }

              else if (initialKeyStr == "MediaFormat") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_mediaFormat = MediaFormatMapper::GetMediaFormatForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_mediaFormatHasBeenSet = true;
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

              else if (initialKeyStr == "SpeakersCount") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_speakersCount = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_speakersCount = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_speakersCountHasBeenSet = true;
              }

              else if (initialKeyStr == "NumberOfChannels") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_numberOfChannels = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_numberOfChannels = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_numberOfChannelsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("TranscribeAudioMetadata", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "LanguageCode") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_languageCode = SyncLanguageCodeMapper::GetSyncLanguageCodeForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_languageCodeHasBeenSet = true;
            }

            else if (initialKeyStr == "LanguageCodes") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_languageCodes.push_back(SyncLanguageCodeItem(decoder));
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
                    m_languageCodes.push_back(SyncLanguageCodeItem(decoder));
                  }
                }
              }
              m_languageCodesHasBeenSet = true;
            }

            else if (initialKeyStr == "MediaFormat") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_mediaFormat =
                    MediaFormatMapper::GetMediaFormatForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_mediaFormatHasBeenSet = true;
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

            else if (initialKeyStr == "SpeakersCount") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_speakersCount = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_speakersCount = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_speakersCountHasBeenSet = true;
            }

            else if (initialKeyStr == "NumberOfChannels") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_numberOfChannels = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_numberOfChannels = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_numberOfChannelsHasBeenSet = true;
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

void TranscribeAudioMetadata::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_languageCodeHasBeenSet) {
    mapSize++;
  }
  if (m_languageCodesHasBeenSet) {
    mapSize++;
  }
  if (m_mediaFormatHasBeenSet) {
    mapSize++;
  }
  if (m_mediaSampleRateHertzHasBeenSet) {
    mapSize++;
  }
  if (m_speakersCountHasBeenSet) {
    mapSize++;
  }
  if (m_numberOfChannelsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_languageCodeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LanguageCode"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SyncLanguageCodeMapper::GetNameForSyncLanguageCode(m_languageCode).c_str()));
  }

  if (m_languageCodesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LanguageCodes"));
    encoder.WriteArrayStart(m_languageCodes.size());
    for (const auto& item_0 : m_languageCodes) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_mediaFormatHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MediaFormat"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(MediaFormatMapper::GetNameForMediaFormat(m_mediaFormat).c_str()));
  }

  if (m_mediaSampleRateHertzHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MediaSampleRateHertz"));
    (m_mediaSampleRateHertz >= 0) ? encoder.WriteUInt(m_mediaSampleRateHertz) : encoder.WriteNegInt(m_mediaSampleRateHertz);
  }

  if (m_speakersCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SpeakersCount"));
    (m_speakersCount >= 0) ? encoder.WriteUInt(m_speakersCount) : encoder.WriteNegInt(m_speakersCount);
  }

  if (m_numberOfChannelsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NumberOfChannels"));
    (m_numberOfChannels >= 0) ? encoder.WriteUInt(m_numberOfChannels) : encoder.WriteNegInt(m_numberOfChannels);
  }
}

}  // namespace Model
}  // namespace TranscribeService
}  // namespace Aws