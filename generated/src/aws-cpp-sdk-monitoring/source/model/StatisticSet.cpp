/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/StatisticSet.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatch {
namespace Model {

StatisticSet::StatisticSet(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

StatisticSet& StatisticSet::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "SampleCount") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_sampleCount = val.value();
                }
                m_sampleCountHasBeenSet = true;
              }

              else if (initialKeyStr == "Sum") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_sum = val.value();
                }
                m_sumHasBeenSet = true;
              }

              else if (initialKeyStr == "Minimum") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_minimum = val.value();
                }
                m_minimumHasBeenSet = true;
              }

              else if (initialKeyStr == "Maximum") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_maximum = val.value();
                }
                m_maximumHasBeenSet = true;
              }

              else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("StatisticSet", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "SampleCount") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_sampleCount = val.value();
              }
              m_sampleCountHasBeenSet = true;
            }

            else if (initialKeyStr == "Sum") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_sum = val.value();
              }
              m_sumHasBeenSet = true;
            }

            else if (initialKeyStr == "Minimum") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_minimum = val.value();
              }
              m_minimumHasBeenSet = true;
            }

            else if (initialKeyStr == "Maximum") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_maximum = val.value();
              }
              m_maximumHasBeenSet = true;
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

void StatisticSet::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_sampleCountHasBeenSet) {
    mapSize++;
  }
  if (m_sumHasBeenSet) {
    mapSize++;
  }
  if (m_minimumHasBeenSet) {
    mapSize++;
  }
  if (m_maximumHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_sampleCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SampleCount"));
    encoder.WriteFloat(m_sampleCount);
  }

  if (m_sumHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Sum"));
    encoder.WriteFloat(m_sum);
  }

  if (m_minimumHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Minimum"));
    encoder.WriteFloat(m_minimum);
  }

  if (m_maximumHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Maximum"));
    encoder.WriteFloat(m_maximum);
  }
}

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws