/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/model/ImageFieldType.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {

ImageFieldType::ImageFieldType(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ImageFieldType& ImageFieldType::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "MaxSizeBytes") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_maxSizeBytes = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_maxSizeBytes = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_maxSizeBytesHasBeenSet = true;
              }

              else if (initialKeyStr == "AllowedFormats") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto val = decoder->PopNextTextVal();
                        if (val.has_value()) {
                          m_allowedFormats.push_back(ImageFormatMapper::GetImageFormatForName(
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
                        m_allowedFormats.push_back(ImageFormatMapper::GetImageFormatForName(
                            Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                      }
                    }
                  }
                }
                m_allowedFormatsHasBeenSet = true;
              }

              else if (initialKeyStr == "DefaultValue") {
                m_defaultValue = LayoutPreview(decoder);
                m_defaultValueHasBeenSet = true;
              }

              else if (initialKeyStr == "RecommendedWidthPixels") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_recommendedWidthPixels = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_recommendedWidthPixels = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_recommendedWidthPixelsHasBeenSet = true;
              }

              else if (initialKeyStr == "RecommendedHeightPixels") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_recommendedHeightPixels = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_recommendedHeightPixels = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_recommendedHeightPixelsHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ImageFieldType", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "MaxSizeBytes") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_maxSizeBytes = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_maxSizeBytes = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_maxSizeBytesHasBeenSet = true;
            }

            else if (initialKeyStr == "AllowedFormats") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        m_allowedFormats.push_back(ImageFormatMapper::GetImageFormatForName(
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
                      m_allowedFormats.push_back(ImageFormatMapper::GetImageFormatForName(
                          Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len)));
                    }
                  }
                }
              }
              m_allowedFormatsHasBeenSet = true;
            }

            else if (initialKeyStr == "DefaultValue") {
              m_defaultValue = LayoutPreview(decoder);
              m_defaultValueHasBeenSet = true;
            }

            else if (initialKeyStr == "RecommendedWidthPixels") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_recommendedWidthPixels = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_recommendedWidthPixels = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_recommendedWidthPixelsHasBeenSet = true;
            }

            else if (initialKeyStr == "RecommendedHeightPixels") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_recommendedHeightPixels = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_recommendedHeightPixels = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_recommendedHeightPixelsHasBeenSet = true;
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

void ImageFieldType::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_maxSizeBytesHasBeenSet) {
    mapSize++;
  }
  if (m_allowedFormatsHasBeenSet) {
    mapSize++;
  }
  if (m_defaultValueHasBeenSet) {
    mapSize++;
  }
  if (m_recommendedWidthPixelsHasBeenSet) {
    mapSize++;
  }
  if (m_recommendedHeightPixelsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_maxSizeBytesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxSizeBytes"));
    (m_maxSizeBytes >= 0) ? encoder.WriteUInt(m_maxSizeBytes) : encoder.WriteNegInt(m_maxSizeBytes);
  }

  if (m_allowedFormatsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AllowedFormats"));
    encoder.WriteArrayStart(m_allowedFormats.size());
    for (const auto& item_0 : m_allowedFormats) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(ImageFormatMapper::GetNameForImageFormat(item_0).c_str()));
    }
  }

  if (m_defaultValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DefaultValue"));
    m_defaultValue.CborEncode(encoder);
  }

  if (m_recommendedWidthPixelsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RecommendedWidthPixels"));
    (m_recommendedWidthPixels >= 0) ? encoder.WriteUInt(m_recommendedWidthPixels) : encoder.WriteNegInt(m_recommendedWidthPixels);
  }

  if (m_recommendedHeightPixelsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RecommendedHeightPixels"));
    (m_recommendedHeightPixels >= 0) ? encoder.WriteUInt(m_recommendedHeightPixels) : encoder.WriteNegInt(m_recommendedHeightPixels);
  }
}

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws