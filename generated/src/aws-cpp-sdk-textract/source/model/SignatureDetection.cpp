/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/model/SignatureDetection.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Textract {
namespace Model {

SignatureDetection::SignatureDetection(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

SignatureDetection& SignatureDetection::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Confidence") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_confidence = val.value();
                }
                m_confidenceHasBeenSet = true;
              }

              else if (initialKeyStr == "Geometry") {
                m_geometry = Geometry(decoder);
                m_geometryHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("SignatureDetection", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Confidence") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_confidence = val.value();
              }
              m_confidenceHasBeenSet = true;
            }

            else if (initialKeyStr == "Geometry") {
              m_geometry = Geometry(decoder);
              m_geometryHasBeenSet = true;
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

void SignatureDetection::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_confidenceHasBeenSet) {
    mapSize++;
  }
  if (m_geometryHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_confidenceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Confidence"));
    encoder.WriteFloat(m_confidence);
  }

  if (m_geometryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Geometry"));
    m_geometry.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace Textract
}  // namespace Aws