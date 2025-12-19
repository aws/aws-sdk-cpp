/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/AnomalyDetector.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatch {
namespace Model {

AnomalyDetector::AnomalyDetector(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

AnomalyDetector& AnomalyDetector::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Configuration") {
                m_configuration = AnomalyDetectorConfiguration(decoder);
                m_configurationHasBeenSet = true;
              }

              else if (initialKeyStr == "StateValue") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_stateValue = AnomalyDetectorStateValueMapper::GetAnomalyDetectorStateValueForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_stateValueHasBeenSet = true;
              }

              else if (initialKeyStr == "MetricCharacteristics") {
                m_metricCharacteristics = MetricCharacteristics(decoder);
                m_metricCharacteristicsHasBeenSet = true;
              }

              else if (initialKeyStr == "SingleMetricAnomalyDetector") {
                m_singleMetricAnomalyDetector = SingleMetricAnomalyDetector(decoder);
                m_singleMetricAnomalyDetectorHasBeenSet = true;
              }

              else if (initialKeyStr == "MetricMathAnomalyDetector") {
                m_metricMathAnomalyDetector = MetricMathAnomalyDetector(decoder);
                m_metricMathAnomalyDetectorHasBeenSet = true;
              }

              else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("AnomalyDetector", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Configuration") {
              m_configuration = AnomalyDetectorConfiguration(decoder);
              m_configurationHasBeenSet = true;
            }

            else if (initialKeyStr == "StateValue") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_stateValue = AnomalyDetectorStateValueMapper::GetAnomalyDetectorStateValueForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_stateValueHasBeenSet = true;
            }

            else if (initialKeyStr == "MetricCharacteristics") {
              m_metricCharacteristics = MetricCharacteristics(decoder);
              m_metricCharacteristicsHasBeenSet = true;
            }

            else if (initialKeyStr == "SingleMetricAnomalyDetector") {
              m_singleMetricAnomalyDetector = SingleMetricAnomalyDetector(decoder);
              m_singleMetricAnomalyDetectorHasBeenSet = true;
            }

            else if (initialKeyStr == "MetricMathAnomalyDetector") {
              m_metricMathAnomalyDetector = MetricMathAnomalyDetector(decoder);
              m_metricMathAnomalyDetectorHasBeenSet = true;
            }

            else {
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

void AnomalyDetector::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_configurationHasBeenSet) {
    mapSize++;
  }
  if (m_stateValueHasBeenSet) {
    mapSize++;
  }
  if (m_metricCharacteristicsHasBeenSet) {
    mapSize++;
  }
  if (m_singleMetricAnomalyDetectorHasBeenSet) {
    mapSize++;
  }
  if (m_metricMathAnomalyDetectorHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_configurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Configuration"));
    m_configuration.CborEncode(encoder);
  }

  if (m_stateValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StateValue"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(AnomalyDetectorStateValueMapper::GetNameForAnomalyDetectorStateValue(m_stateValue).c_str()));
  }

  if (m_metricCharacteristicsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MetricCharacteristics"));
    m_metricCharacteristics.CborEncode(encoder);
  }

  if (m_singleMetricAnomalyDetectorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SingleMetricAnomalyDetector"));
    m_singleMetricAnomalyDetector.CborEncode(encoder);
  }

  if (m_metricMathAnomalyDetectorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MetricMathAnomalyDetector"));
    m_metricMathAnomalyDetector.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws