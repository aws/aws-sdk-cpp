/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/Datapoint.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatch {
namespace Model {

Datapoint::Datapoint(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

Datapoint& Datapoint::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              else if (initialKeyStr == "Unit") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_unit = StandardUnitMapper::GetStandardUnitForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_unitHasBeenSet = true;
              }

              else if (initialKeyStr == "ExtendedStatistics") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart)) {
                  if (peekType_0.value() == CborType::MapStart) {
                    auto mapSize_0 = decoder->PopNextMapStart();
                    if (mapSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                        auto key_1 = decoder->PopNextTextVal();
                        if (key_1.has_value()) {
                          Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                          auto val = decoder->PopNextFloatVal();
                          if (val.has_value()) {
                            m_extendedStatistics[keyStr_1] = val.value();
                          }
                        }
                      }
                    }
                  } else  // IndefMapStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto key_1 = decoder->PopNextTextVal();
                      if (key_1.has_value()) {
                        Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                        auto val = decoder->PopNextFloatVal();
                        if (val.has_value()) {
                          m_extendedStatistics[keyStr_1] = val.value();
                        }
                      }
                    }
                  }
                }
                m_extendedStatisticsHasBeenSet = true;
              }

              else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("Datapoint", "Invalid data received for %s", initialKeyStr.c_str());
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

            else if (initialKeyStr == "Unit") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_unit = StandardUnitMapper::GetStandardUnitForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_unitHasBeenSet = true;
            }

            else if (initialKeyStr == "ExtendedStatistics") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() && (peekType_0.value() == CborType::MapStart || peekType_0.value() == CborType::IndefMapStart)) {
                if (peekType_0.value() == CborType::MapStart) {
                  auto mapSize_0 = decoder->PopNextMapStart();
                  if (mapSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < mapSize_0.value(); j_0++) {
                      auto key_1 = decoder->PopNextTextVal();
                      if (key_1.has_value()) {
                        Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                        auto val = decoder->PopNextFloatVal();
                        if (val.has_value()) {
                          m_extendedStatistics[keyStr_1] = val.value();
                        }
                      }
                    }
                  }
                } else  // IndefMapStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefMapStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto key_1 = decoder->PopNextTextVal();
                    if (key_1.has_value()) {
                      Aws::String keyStr_1 = Aws::String(reinterpret_cast<const char*>(key_1.value().ptr), key_1.value().len);
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_extendedStatistics[keyStr_1] = val.value();
                      }
                    }
                  }
                }
              }
              m_extendedStatisticsHasBeenSet = true;
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

void Datapoint::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_timestampHasBeenSet) {
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
  if (m_unitHasBeenSet) {
    mapSize++;
  }
  if (m_extendedStatisticsHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_timestampHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Timestamp"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_timestamp.Seconds());
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

  if (m_unitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Unit"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(StandardUnitMapper::GetNameForStandardUnit(m_unit).c_str()));
  }

  if (m_extendedStatisticsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ExtendedStatistics"));
    encoder.WriteMapStart(m_extendedStatistics.size());
    for (const auto& item_0 : m_extendedStatistics) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      encoder.WriteFloat(item_0.second);
    }
  }
}

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws