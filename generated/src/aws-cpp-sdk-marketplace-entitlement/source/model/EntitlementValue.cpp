/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-entitlement/model/EntitlementValue.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceEntitlementService {
namespace Model {

EntitlementValue::EntitlementValue(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

EntitlementValue& EntitlementValue::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "IntegerValue") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_integerValue = static_cast<int64_t>(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextNegativeIntVal();
                    if (val.has_value()) {
                      m_integerValue = static_cast<int64_t>(1 - val.value());
                    }
                  }
                }
                m_integerValueHasBeenSet = true;
              }

              else if (initialKeyStr == "DoubleValue") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_doubleValue = val.value();
                }
                m_doubleValueHasBeenSet = true;
              }

              else if (initialKeyStr == "BooleanValue") {
                auto val = decoder->PopNextBooleanVal();
                if (val.has_value()) {
                  m_booleanValue = val.value();
                }
                m_booleanValueHasBeenSet = true;
              }

              else if (initialKeyStr == "StringValue") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_stringValue = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_stringValue = ss.str();
                  }
                }
                m_stringValueHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("EntitlementValue", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "IntegerValue") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::UInt) {
                  auto val = decoder->PopNextUnsignedIntVal();
                  if (val.has_value()) {
                    m_integerValue = static_cast<int64_t>(val.value());
                  }
                } else {
                  auto val = decoder->PopNextNegativeIntVal();
                  if (val.has_value()) {
                    m_integerValue = static_cast<int64_t>(1 - val.value());
                  }
                }
              }
              m_integerValueHasBeenSet = true;
            }

            else if (initialKeyStr == "DoubleValue") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_doubleValue = val.value();
              }
              m_doubleValueHasBeenSet = true;
            }

            else if (initialKeyStr == "BooleanValue") {
              auto val = decoder->PopNextBooleanVal();
              if (val.has_value()) {
                m_booleanValue = val.value();
              }
              m_booleanValueHasBeenSet = true;
            }

            else if (initialKeyStr == "StringValue") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_stringValue = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_stringValue = ss.str();
                }
              }
              m_stringValueHasBeenSet = true;
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

void EntitlementValue::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_integerValueHasBeenSet) {
    mapSize++;
  }
  if (m_doubleValueHasBeenSet) {
    mapSize++;
  }
  if (m_booleanValueHasBeenSet) {
    mapSize++;
  }
  if (m_stringValueHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_integerValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IntegerValue"));
    (m_integerValue >= 0) ? encoder.WriteUInt(m_integerValue) : encoder.WriteNegInt(m_integerValue);
  }

  if (m_doubleValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("DoubleValue"));
    encoder.WriteFloat(m_doubleValue);
  }

  if (m_booleanValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BooleanValue"));
    encoder.WriteBool(m_booleanValue);
  }

  if (m_stringValueHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StringValue"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_stringValue.c_str()));
  }
}

}  // namespace Model
}  // namespace MarketplaceEntitlementService
}  // namespace Aws