/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/monitoring/model/MetricDatum.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatch {
namespace Model {

MetricDatum::MetricDatum(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

MetricDatum& MetricDatum::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "MetricName") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_metricName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_metricName = ss.str();
                  }
                }
                m_metricNameHasBeenSet = true;
              }

              else if (initialKeyStr == "Dimensions") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        m_dimensions.push_back(Dimension(decoder));
                      }
                    }
                  } else  // IndefArrayStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      m_dimensions.push_back(Dimension(decoder));
                    }
                  }
                }
                m_dimensionsHasBeenSet = true;
              }

              else if (initialKeyStr == "Timestamp") {
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

              else if (initialKeyStr == "Value") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_value = val.value();
                }
                m_valueHasBeenSet = true;
              }

              else if (initialKeyStr == "StatisticValues") {
                m_statisticValues = StatisticSet(decoder);
                m_statisticValuesHasBeenSet = true;
              }

              else if (initialKeyStr == "Values") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto val = decoder->PopNextFloatVal();
                        if (val.has_value()) {
                          m_values.push_back(val.value());
                        }
                      }
                    }
                  } else  // IndefArrayStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_values.push_back(val.value());
                      }
                    }
                  }
                }
                m_valuesHasBeenSet = true;
              }

              else if (initialKeyStr == "Counts") {
                auto peekType_0 = decoder->PeekType();
                if (peekType_0.has_value() &&
                    (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                  if (peekType_0.value() == CborType::ArrayStart) {
                    auto listSize_0 = decoder->PopNextArrayStart();
                    if (listSize_0.has_value()) {
                      for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                        auto val = decoder->PopNextFloatVal();
                        if (val.has_value()) {
                          m_counts.push_back(val.value());
                        }
                      }
                    }
                  } else  // IndefArrayStart
                  {
                    decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                    while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                      auto nextType_0 = decoder->PeekType();
                      if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                        if (nextType_0.has_value()) {
                          decoder->ConsumeNextSingleElement();  // consume the Break
                        }
                        break;
                      }
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_counts.push_back(val.value());
                      }
                    }
                  }
                }
                m_countsHasBeenSet = true;
              }

              else if (initialKeyStr == "Unit") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_unit = StandardUnitMapper::GetStandardUnitForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_unitHasBeenSet = true;
              }

              else if (initialKeyStr == "StorageResolution") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_storageResolution = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_storageResolution = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_storageResolutionHasBeenSet = true;
              }

              else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("MetricDatum", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "MetricName") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_metricName = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_metricName = ss.str();
                }
              }
              m_metricNameHasBeenSet = true;
            }

            else if (initialKeyStr == "Dimensions") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      m_dimensions.push_back(Dimension(decoder));
                    }
                  }
                } else  // IndefArrayStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    m_dimensions.push_back(Dimension(decoder));
                  }
                }
              }
              m_dimensionsHasBeenSet = true;
            }

            else if (initialKeyStr == "Timestamp") {
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

            else if (initialKeyStr == "Value") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_value = val.value();
              }
              m_valueHasBeenSet = true;
            }

            else if (initialKeyStr == "StatisticValues") {
              m_statisticValues = StatisticSet(decoder);
              m_statisticValuesHasBeenSet = true;
            }

            else if (initialKeyStr == "Values") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_values.push_back(val.value());
                      }
                    }
                  }
                } else  // IndefArrayStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_values.push_back(val.value());
                    }
                  }
                }
              }
              m_valuesHasBeenSet = true;
            }

            else if (initialKeyStr == "Counts") {
              auto peekType_0 = decoder->PeekType();
              if (peekType_0.has_value() &&
                  (peekType_0.value() == CborType::ArrayStart || peekType_0.value() == CborType::IndefArrayStart)) {
                if (peekType_0.value() == CborType::ArrayStart) {
                  auto listSize_0 = decoder->PopNextArrayStart();
                  if (listSize_0.has_value()) {
                    for (size_t j_0 = 0; j_0 < listSize_0.value(); j_0++) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_counts.push_back(val.value());
                      }
                    }
                  }
                } else  // IndefArrayStart
                {
                  decoder->ConsumeNextSingleElement();  // consume the IndefArrayStart
                  while (decoder->LastError() == AWS_ERROR_UNKNOWN) {
                    auto nextType_0 = decoder->PeekType();
                    if (!nextType_0.has_value() || nextType_0.value() == CborType::Break) {
                      if (nextType_0.has_value()) {
                        decoder->ConsumeNextSingleElement();  // consume the Break
                      }
                      break;
                    }
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_counts.push_back(val.value());
                    }
                  }
                }
              }
              m_countsHasBeenSet = true;
            }

            else if (initialKeyStr == "Unit") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_unit = StandardUnitMapper::GetStandardUnitForName(
                    Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_unitHasBeenSet = true;
            }

            else if (initialKeyStr == "StorageResolution") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_storageResolution = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_storageResolution = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_storageResolutionHasBeenSet = true;
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

void MetricDatum::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_metricNameHasBeenSet) {
    mapSize++;
  }
  if (m_dimensionsHasBeenSet) {
    mapSize++;
  }
  if (m_timestampHasBeenSet) {
    mapSize++;
  }
  if (m_valueHasBeenSet) {
    mapSize++;
  }
  if (m_statisticValuesHasBeenSet) {
    mapSize++;
  }
  if (m_valuesHasBeenSet) {
    mapSize++;
  }
  if (m_countsHasBeenSet) {
    mapSize++;
  }
  if (m_unitHasBeenSet) {
    mapSize++;
  }
  if (m_storageResolutionHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_metricNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MetricName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_metricName.c_str()));
  }

  if (m_dimensionsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Dimensions"));
    encoder.WriteArrayStart(m_dimensions.size());
    for (const auto& item_0 : m_dimensions) {
      item_0.CborEncode(encoder);
    }
  }

  if (m_timestampHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Timestamp"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_timestamp.Seconds());
  }

  if (m_valueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Value"));
    encoder.WriteFloat(m_value);
  }

  if (m_statisticValuesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StatisticValues"));
    m_statisticValues.CborEncode(encoder);
  }

  if (m_valuesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Values"));
    encoder.WriteArrayStart(m_values.size());
    for (const auto& item_0 : m_values) {
      encoder.WriteFloat(item_0);
    }
  }

  if (m_countsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Counts"));
    encoder.WriteArrayStart(m_counts.size());
    for (const auto& item_0 : m_counts) {
      encoder.WriteFloat(item_0);
    }
  }

  if (m_unitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Unit"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(StandardUnitMapper::GetNameForStandardUnit(m_unit).c_str()));
  }

  if (m_storageResolutionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StorageResolution"));
    (m_storageResolution >= 0) ? encoder.WriteUInt(m_storageResolution) : encoder.WriteNegInt(m_storageResolution);
  }
}

}  // namespace Model
}  // namespace CloudWatch
}  // namespace Aws