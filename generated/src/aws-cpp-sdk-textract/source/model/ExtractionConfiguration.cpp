/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/model/ExtractionConfiguration.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Textract {
namespace Model {

ExtractionConfiguration::ExtractionConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ExtractionConfiguration& ExtractionConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "BoundingBox") {
                m_boundingBox = BoundingBoxConfiguration(decoder);
                m_boundingBoxHasBeenSet = true;
              }

              else if (initialKeyStr == "Granularity") {
                m_granularity = ExtractionGranularity(decoder);
                m_granularityHasBeenSet = true;
              }

              else if (initialKeyStr == "OutputFormat") {
                m_outputFormat = OutputFormat(decoder);
                m_outputFormatHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ExtractionConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "BoundingBox") {
              m_boundingBox = BoundingBoxConfiguration(decoder);
              m_boundingBoxHasBeenSet = true;
            }

            else if (initialKeyStr == "Granularity") {
              m_granularity = ExtractionGranularity(decoder);
              m_granularityHasBeenSet = true;
            }

            else if (initialKeyStr == "OutputFormat") {
              m_outputFormat = OutputFormat(decoder);
              m_outputFormatHasBeenSet = true;
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

void ExtractionConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_boundingBoxHasBeenSet) {
    mapSize++;
  }
  if (m_granularityHasBeenSet) {
    mapSize++;
  }
  if (m_outputFormatHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_boundingBoxHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BoundingBox"));
    m_boundingBox.CborEncode(encoder);
  }

  if (m_granularityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Granularity"));
    m_granularity.CborEncode(encoder);
  }

  if (m_outputFormatHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OutputFormat"));
    m_outputFormat.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace Textract
}  // namespace Aws