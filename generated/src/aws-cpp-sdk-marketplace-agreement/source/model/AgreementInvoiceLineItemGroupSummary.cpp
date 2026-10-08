/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/model/AgreementInvoiceLineItemGroupSummary.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

AgreementInvoiceLineItemGroupSummary::AgreementInvoiceLineItemGroupSummary(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
  *this = decoder;
}

AgreementInvoiceLineItemGroupSummary& AgreementInvoiceLineItemGroupSummary::operator=(
    const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "agreementId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_agreementId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_agreementId = ss.str();
                  }
                }
                m_agreementIdHasBeenSet = true;
              }

              else if (initialKeyStr == "invoiceId") {
                auto peekType = decoder->PeekType();
                if (peekType.has_value()) {
                  if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                    auto val = decoder->PopNextTextVal();
                    if (val.has_value()) {
                      m_invoiceId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                    m_invoiceId = ss.str();
                  }
                }
                m_invoiceIdHasBeenSet = true;
              }

              else if (initialKeyStr == "pricingCurrencyAmount") {
                m_pricingCurrencyAmount = PricingCurrencyAmount(decoder);
                m_pricingCurrencyAmountHasBeenSet = true;
              }

              else if (initialKeyStr == "invoiceBillingPeriod") {
                m_invoiceBillingPeriod = InvoiceBillingPeriod(decoder);
                m_invoiceBillingPeriodHasBeenSet = true;
              }

              else if (initialKeyStr == "issuedTime") {
                auto tag = decoder->PopNextTagVal();
                if (tag.has_value() &&
                    tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
                {
                  auto dateType = decoder->PeekType();
                  if (dateType.has_value()) {
                    if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                      auto val = decoder->PopNextFloatVal();
                      if (val.has_value()) {
                        m_issuedTime = Aws::Utils::DateTime(val.value());
                      }
                    } else {
                      auto val = decoder->PopNextUnsignedIntVal();
                      if (val.has_value()) {
                        m_issuedTime = Aws::Utils::DateTime(val.value());
                      }
                    }
                  }
                }
                m_issuedTimeHasBeenSet = true;
              }

              else if (initialKeyStr == "invoiceType") {
                auto val = decoder->PopNextTextVal();
                if (val.has_value()) {
                  m_invoiceType = InvoiceTypeMapper::GetInvoiceTypeForName(
                      Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
                }
                m_invoiceTypeHasBeenSet = true;
              }

              else if (initialKeyStr == "invoicingEntity") {
                m_invoicingEntity = InvoicingEntity(decoder);
                m_invoicingEntityHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("AgreementInvoiceLineItemGroupSummary", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "agreementId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_agreementId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_agreementId = ss.str();
                }
              }
              m_agreementIdHasBeenSet = true;
            }

            else if (initialKeyStr == "invoiceId") {
              auto peekType = decoder->PeekType();
              if (peekType.has_value()) {
                if (peekType.value() == Aws::Crt::Cbor::CborType::Text) {
                  auto val = decoder->PopNextTextVal();
                  if (val.has_value()) {
                    m_invoiceId = Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len);
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
                  m_invoiceId = ss.str();
                }
              }
              m_invoiceIdHasBeenSet = true;
            }

            else if (initialKeyStr == "pricingCurrencyAmount") {
              m_pricingCurrencyAmount = PricingCurrencyAmount(decoder);
              m_pricingCurrencyAmountHasBeenSet = true;
            }

            else if (initialKeyStr == "invoiceBillingPeriod") {
              m_invoiceBillingPeriod = InvoiceBillingPeriod(decoder);
              m_invoiceBillingPeriodHasBeenSet = true;
            }

            else if (initialKeyStr == "issuedTime") {
              auto tag = decoder->PopNextTagVal();
              if (tag.has_value() &&
                  tag.value() == 1)  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
              {
                auto dateType = decoder->PeekType();
                if (dateType.has_value()) {
                  if (dateType.value() == Aws::Crt::Cbor::CborType::Float) {
                    auto val = decoder->PopNextFloatVal();
                    if (val.has_value()) {
                      m_issuedTime = Aws::Utils::DateTime(val.value());
                    }
                  } else {
                    auto val = decoder->PopNextUnsignedIntVal();
                    if (val.has_value()) {
                      m_issuedTime = Aws::Utils::DateTime(val.value());
                    }
                  }
                }
              }
              m_issuedTimeHasBeenSet = true;
            }

            else if (initialKeyStr == "invoiceType") {
              auto val = decoder->PopNextTextVal();
              if (val.has_value()) {
                m_invoiceType =
                    InvoiceTypeMapper::GetInvoiceTypeForName(Aws::String(reinterpret_cast<const char*>(val.value().ptr), val.value().len));
              }
              m_invoiceTypeHasBeenSet = true;
            }

            else if (initialKeyStr == "invoicingEntity") {
              m_invoicingEntity = InvoicingEntity(decoder);
              m_invoicingEntityHasBeenSet = true;
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

void AgreementInvoiceLineItemGroupSummary::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_agreementIdHasBeenSet) {
    mapSize++;
  }
  if (m_invoiceIdHasBeenSet) {
    mapSize++;
  }
  if (m_pricingCurrencyAmountHasBeenSet) {
    mapSize++;
  }
  if (m_invoiceBillingPeriodHasBeenSet) {
    mapSize++;
  }
  if (m_issuedTimeHasBeenSet) {
    mapSize++;
  }
  if (m_invoiceTypeHasBeenSet) {
    mapSize++;
  }
  if (m_invoicingEntityHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_agreementIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("agreementId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_agreementId.c_str()));
  }

  if (m_invoiceIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("invoiceId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_invoiceId.c_str()));
  }

  if (m_pricingCurrencyAmountHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("pricingCurrencyAmount"));
    m_pricingCurrencyAmount.CborEncode(encoder);
  }

  if (m_invoiceBillingPeriodHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("invoiceBillingPeriod"));
    m_invoiceBillingPeriod.CborEncode(encoder);
  }

  if (m_issuedTimeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("issuedTime"));
    encoder.WriteTag(1);  // 1 represents Epoch-based date/time. See https://www.rfc-editor.org/rfc/rfc8949.html#tags
    encoder.WriteUInt(m_issuedTime.Seconds());
  }

  if (m_invoiceTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("invoiceType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(InvoiceTypeMapper::GetNameForInvoiceType(m_invoiceType).c_str()));
  }

  if (m_invoicingEntityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("invoicingEntity"));
    m_invoicingEntity.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws