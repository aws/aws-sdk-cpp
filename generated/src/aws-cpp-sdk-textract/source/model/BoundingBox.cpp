/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/model/BoundingBox.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Textract {
namespace Model {

BoundingBox::BoundingBox(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

BoundingBox& BoundingBox::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Width") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_width = val.value();
                }
                m_widthHasBeenSet = true;
              }

              else if (initialKeyStr == "Height") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_height = val.value();
                }
                m_heightHasBeenSet = true;
              }

              else if (initialKeyStr == "Left") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_left = val.value();
                }
                m_leftHasBeenSet = true;
              }

              else if (initialKeyStr == "Top") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_top = val.value();
                }
                m_topHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("BoundingBox", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Width") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_width = val.value();
              }
              m_widthHasBeenSet = true;
            }

            else if (initialKeyStr == "Height") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_height = val.value();
              }
              m_heightHasBeenSet = true;
            }

            else if (initialKeyStr == "Left") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_left = val.value();
              }
              m_leftHasBeenSet = true;
            }

            else if (initialKeyStr == "Top") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_top = val.value();
              }
              m_topHasBeenSet = true;
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

void BoundingBox::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_widthHasBeenSet) {
    mapSize++;
  }
  if (m_heightHasBeenSet) {
    mapSize++;
  }
  if (m_leftHasBeenSet) {
    mapSize++;
  }
  if (m_topHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_widthHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Width"));
    encoder.WriteFloat(m_width);
  }

  if (m_heightHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Height"));
    encoder.WriteFloat(m_height);
  }

  if (m_leftHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Left"));
    encoder.WriteFloat(m_left);
  }

  if (m_topHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Top"));
    encoder.WriteFloat(m_top);
  }
}

}  // namespace Model
}  // namespace Textract
}  // namespace Aws