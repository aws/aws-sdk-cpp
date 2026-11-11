/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/textract/model/AdapterVersionEvaluationMetric.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Textract {
namespace Model {

AdapterVersionEvaluationMetric::AdapterVersionEvaluationMetric(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

AdapterVersionEvaluationMetric& AdapterVersionEvaluationMetric::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Baseline") {
                m_baseline = EvaluationMetric(decoder);
                m_baselineHasBeenSet = true;
              }

              else if (initialKeyStr == "AdapterVersion") {
                m_adapterVersion = EvaluationMetric(decoder);
                m_adapterVersionHasBeenSet = true;
              }

              else if (initialKeyStr == "FeatureType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_featureType = FeatureTypeMapper::GetFeatureTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_featureTypeHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("AdapterVersionEvaluationMetric", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Baseline") {
              m_baseline = EvaluationMetric(decoder);
              m_baselineHasBeenSet = true;
            }

            else if (initialKeyStr == "AdapterVersion") {
              m_adapterVersion = EvaluationMetric(decoder);
              m_adapterVersionHasBeenSet = true;
            }

            else if (initialKeyStr == "FeatureType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_featureType =
                    FeatureTypeMapper::GetFeatureTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_featureTypeHasBeenSet = true;
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

void AdapterVersionEvaluationMetric::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_baselineHasBeenSet) {
    mapSize++;
  }
  if (m_adapterVersionHasBeenSet) {
    mapSize++;
  }
  if (m_featureTypeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_baselineHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Baseline"));
    m_baseline.CborEncode(encoder);
  }

  if (m_adapterVersionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("AdapterVersion"));
    m_adapterVersion.CborEncode(encoder);
  }

  if (m_featureTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FeatureType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(FeatureTypeMapper::GetNameForFeatureType(m_featureType).c_str()));
  }
}

}  // namespace Model
}  // namespace Textract
}  // namespace Aws