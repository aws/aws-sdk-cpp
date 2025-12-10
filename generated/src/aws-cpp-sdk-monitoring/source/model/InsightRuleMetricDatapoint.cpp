/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/InsightRuleMetricDatapoint.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatch {
namespace Model {

InsightRuleMetricDatapoint::InsightRuleMetricDatapoint(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

InsightRuleMetricDatapoint& InsightRuleMetricDatapoint::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Timestamp") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_timestamp = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_timestamp = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_timestampHasBeenSet = true;
              }

              else if (initialKeyStr == "UniqueContributors") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_uniqueContributors = val.value();
                }
                m_uniqueContributorsHasBeenSet = true;
              }

              else if (initialKeyStr == "MaxContributorValue") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_maxContributorValue = val.value();
                }
                m_maxContributorValueHasBeenSet = true;
              }

              else if (initialKeyStr == "SampleCount") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_sampleCount = val.value();
                }
                m_sampleCountHasBeenSet = true;
              }

              else if (initialKeyStr == "Average") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_average = val.value();
                }
                m_averageHasBeenSet = true;
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
                AWS_LOG_ERROR("InsightRuleMetricDatapoint", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Timestamp") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_timestamp = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_timestamp = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_timestampHasBeenSet = true;
            }

            else if (initialKeyStr == "UniqueContributors") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_uniqueContributors = val.value();
              }
              m_uniqueContributorsHasBeenSet = true;
            }

            else if (initialKeyStr == "MaxContributorValue") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_maxContributorValue = val.value();
              }
              m_maxContributorValueHasBeenSet = true;
            }

            else if (initialKeyStr == "SampleCount") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_sampleCount = val.value();
              }
              m_sampleCountHasBeenSet = true;
            }

            else if (initialKeyStr == "Average") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_average = val.value();
              }
              m_averageHasBeenSet = true;
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

void InsightRuleMetricDatapoint::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_timestampHasBeenSet) {
    mapSize++;
  }
  if (m_uniqueContributorsHasBeenSet) {
    mapSize++;
  }
  if (m_maxContributorValueHasBeenSet) {
    mapSize++;
  }
  if (m_sampleCountHasBeenSet) {
    mapSize++;
  }
  if (m_averageHasBeenSet) {
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

  if (m_timestampHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Timestamp"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_timestamp.Seconds());
  }

  if (m_uniqueContributorsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("UniqueContributors"));
    encoder.WriteFloat(m_uniqueContributors);
  }

  if (m_maxContributorValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaxContributorValue"));
    encoder.WriteFloat(m_maxContributorValue);
  }

  if (m_sampleCountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SampleCount"));
    encoder.WriteFloat(m_sampleCount);
  }

  if (m_averageHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Average"));
    encoder.WriteFloat(m_average);
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