/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/MetricStat.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatch {
namespace Model {

MetricStat::MetricStat(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

MetricStat& MetricStat::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Metric") {
                m_metric = Metric(decoder);
                m_metricHasBeenSet = true;
              }

              else if (initialKeyStr == "Period") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_period = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_period = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_periodHasBeenSet = true;
              }

              else if (initialKeyStr == "Stat") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_stat = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  } else {
                    decoder->ConsumeNextSingleElement();
                    Aws::StringStream ss;
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType = decoder->PeekType();
                      if (!nextType.has_value() || nextType.value() == CborType::Break) {
                        if (nextType.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextTextVal();
                      if (val.has_value()) {
                        ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                      }
                    }
                    m_stat = ss.str();
                  }
                }
                m_statHasBeenSet = true;
              }

              else if (initialKeyStr == "Unit") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_unit = StandardUnitMapper::GetStandardUnitForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_unitHasBeenSet = true;
              }

              else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("MetricStat", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Metric") {
              m_metric = Metric(decoder);
              m_metricHasBeenSet = true;
            }

            else if (initialKeyStr == "Period") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_period = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_period = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_periodHasBeenSet = true;
            }

            else if (initialKeyStr == "Stat") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_stat = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                  }
                } else {
                  decoder->ConsumeNextSingleElement();
                  Aws::StringStream ss;
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType = decoder->PeekType();
                    if (!nextType.has_value() || nextType.value() == CborType::Break) {
                      if (nextType.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      ss << Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
                    }
                  }
                  m_stat = ss.str();
                }
              }
              m_statHasBeenSet = true;
            }

            else if (initialKeyStr == "Unit") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_unit = StandardUnitMapper::GetStandardUnitForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_unitHasBeenSet = true;
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

void MetricStat::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_metricHasBeenSet) {
    mapSize++;
  }
  if (m_periodHasBeenSet) {
    mapSize++;
  }
  if (m_statHasBeenSet) {
    mapSize++;
  }
  if (m_unitHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_metricHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Metric"));
    m_metric.CborEncode(encoder);
  }

  if (m_periodHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Period"));
    (m_period >= 0) ? encoder.WriteUInt(m_period) : encoder.WriteNegInt(m_period);
  }

  if (m_statHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Stat"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_stat.c_str()));
  }

  if (m_unitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Unit"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(StandardUnitMapper::GetNameForStandardUnit(m_unit).c_str()));
  }
}

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws