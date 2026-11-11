/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/route53domains/model/DomainPrice.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace Route53Domains {
namespace Model {

DomainPrice::DomainPrice(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

DomainPrice& DomainPrice::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "Name") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_name = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_name = ss.str();
                  }
                }
                m_nameHasBeenSet = true;
              }

              else if (initialKeyStr == "RegistrationPrice") {
                m_registrationPrice = PriceWithCurrency(decoder);
                m_registrationPriceHasBeenSet = true;
              }

              else if (initialKeyStr == "TransferPrice") {
                m_transferPrice = PriceWithCurrency(decoder);
                m_transferPriceHasBeenSet = true;
              }

              else if (initialKeyStr == "RenewalPrice") {
                m_renewalPrice = PriceWithCurrency(decoder);
                m_renewalPriceHasBeenSet = true;
              }

              else if (initialKeyStr == "ChangeOwnershipPrice") {
                m_changeOwnershipPrice = PriceWithCurrency(decoder);
                m_changeOwnershipPriceHasBeenSet = true;
              }

              else if (initialKeyStr == "RestorationPrice") {
                m_restorationPrice = PriceWithCurrency(decoder);
                m_restorationPriceHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("DomainPrice", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "Name") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_name = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_name = ss.str();
                }
              }
              m_nameHasBeenSet = true;
            }

            else if (initialKeyStr == "RegistrationPrice") {
              m_registrationPrice = PriceWithCurrency(decoder);
              m_registrationPriceHasBeenSet = true;
            }

            else if (initialKeyStr == "TransferPrice") {
              m_transferPrice = PriceWithCurrency(decoder);
              m_transferPriceHasBeenSet = true;
            }

            else if (initialKeyStr == "RenewalPrice") {
              m_renewalPrice = PriceWithCurrency(decoder);
              m_renewalPriceHasBeenSet = true;
            }

            else if (initialKeyStr == "ChangeOwnershipPrice") {
              m_changeOwnershipPrice = PriceWithCurrency(decoder);
              m_changeOwnershipPriceHasBeenSet = true;
            }

            else if (initialKeyStr == "RestorationPrice") {
              m_restorationPrice = PriceWithCurrency(decoder);
              m_restorationPriceHasBeenSet = true;
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

void DomainPrice::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_registrationPriceHasBeenSet) {
    mapSize++;
  }
  if (m_transferPriceHasBeenSet) {
    mapSize++;
  }
  if (m_renewalPriceHasBeenSet) {
    mapSize++;
  }
  if (m_changeOwnershipPriceHasBeenSet) {
    mapSize++;
  }
  if (m_restorationPriceHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_registrationPriceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RegistrationPrice"));
    m_registrationPrice.CborEncode(encoder);
  }

  if (m_transferPriceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TransferPrice"));
    m_transferPrice.CborEncode(encoder);
  }

  if (m_renewalPriceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RenewalPrice"));
    m_renewalPrice.CborEncode(encoder);
  }

  if (m_changeOwnershipPriceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ChangeOwnershipPrice"));
    m_changeOwnershipPrice.CborEncode(encoder);
  }

  if (m_restorationPriceHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RestorationPrice"));
    m_restorationPrice.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace Route53Domains
}  // namespace Aws