/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/partnercentral-marketing/model/FieldType.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralMarketing {
namespace Model {

FieldType::FieldType(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

FieldType& FieldType::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Text") {
                m_text = TextFieldType(decoder);
                m_textHasBeenSet = true;
              }

              else if (initialKeyStr == "RichText") {
                m_richText = RichTextFieldType(decoder);
                m_richTextHasBeenSet = true;
              }

              else if (initialKeyStr == "Image") {
                m_image = ImageFieldType(decoder);
                m_imageHasBeenSet = true;
              }

              else if (initialKeyStr == "AssetLink") {
                m_assetLink = AssetLinkFieldType(decoder);
                m_assetLinkHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("FieldType", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Text") {
              m_text = TextFieldType(decoder);
              m_textHasBeenSet = true;
            }

            else if (initialKeyStr == "RichText") {
              m_richText = RichTextFieldType(decoder);
              m_richTextHasBeenSet = true;
            }

            else if (initialKeyStr == "Image") {
              m_image = ImageFieldType(decoder);
              m_imageHasBeenSet = true;
            }

            else if (initialKeyStr == "AssetLink") {
              m_assetLink = AssetLinkFieldType(decoder);
              m_assetLinkHasBeenSet = true;
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

void FieldType::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_textHasBeenSet) {
    mapSize++;
  }
  if (m_richTextHasBeenSet) {
    mapSize++;
  }
  if (m_imageHasBeenSet) {
    mapSize++;
  }
  if (m_assetLinkHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_textHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Text"));
    m_text.CborEncode(encoder);
  }

  if (m_richTextHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RichText"));
    m_richText.CborEncode(encoder);
  }

  if (m_imageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Image"));
    m_image.CborEncode(encoder);
  }

  if (m_assetLinkHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AssetLink"));
    m_assetLink.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace PartnerCentralMarketing
}  // namespace Aws