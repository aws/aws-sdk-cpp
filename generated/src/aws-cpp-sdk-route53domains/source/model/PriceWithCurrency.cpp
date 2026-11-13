/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/route53domains/model/PriceWithCurrency.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Route53Domains {
namespace Model {

PriceWithCurrency::PriceWithCurrency(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

PriceWithCurrency& PriceWithCurrency::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Price") {
                auto val = decoder->PopNextFloatVal();
                if (val.has_value()) {
                  m_price = val.value();
                }
                m_priceHasBeenSet = true;
              }

              else if (initialKeyStr == "Currency") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_currency = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_currency = ss.str();
                  }
                }
                m_currencyHasBeenSet = true;
              }

              else if (initialKeyStr == "PriceType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_priceType =
                      PriceTypeMapper::GetPriceTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_priceTypeHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("PriceWithCurrency", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Price") {
              auto val = decoder->PopNextFloatVal();
              if (val.has_value()) {
                m_price = val.value();
              }
              m_priceHasBeenSet = true;
            }

            else if (initialKeyStr == "Currency") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_currency = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_currency = ss.str();
                }
              }
              m_currencyHasBeenSet = true;
            }

            else if (initialKeyStr == "PriceType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_priceType =
                    PriceTypeMapper::GetPriceTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_priceTypeHasBeenSet = true;
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

void PriceWithCurrency::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_priceHasBeenSet) {
    mapSize++;
  }
  if (m_currencyHasBeenSet) {
    mapSize++;
  }
  if (m_priceTypeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_priceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Price"));
    encoder.WriteFloat(m_price);
  }

  if (m_currencyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Currency"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_currency.c_str()));
  }

  if (m_priceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PriceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(PriceTypeMapper::GetNameForPriceType(m_priceType).c_str()));
  }
}

}  // namespace Model
}  // namespace Route53Domains
}  // namespace Aws