/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/model/AcceptedTerm.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

AcceptedTerm::AcceptedTerm(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

AcceptedTerm& AcceptedTerm::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "legalTerm") {
                m_legalTerm = LegalTerm(decoder);
                m_legalTermHasBeenSet = true;
              }

              else if (initialKeyStr == "supportTerm") {
                m_supportTerm = SupportTerm(decoder);
                m_supportTermHasBeenSet = true;
              }

              else if (initialKeyStr == "renewalTerm") {
                m_renewalTerm = RenewalTerm(decoder);
                m_renewalTermHasBeenSet = true;
              }

              else if (initialKeyStr == "usageBasedPricingTerm") {
                m_usageBasedPricingTerm = UsageBasedPricingTerm(decoder);
                m_usageBasedPricingTermHasBeenSet = true;
              }

              else if (initialKeyStr == "configurableUpfrontPricingTerm") {
                m_configurableUpfrontPricingTerm = ConfigurableUpfrontPricingTerm(decoder);
                m_configurableUpfrontPricingTermHasBeenSet = true;
              }

              else if (initialKeyStr == "byolPricingTerm") {
                m_byolPricingTerm = ByolPricingTerm(decoder);
                m_byolPricingTermHasBeenSet = true;
              }

              else if (initialKeyStr == "recurringPaymentTerm") {
                m_recurringPaymentTerm = RecurringPaymentTerm(decoder);
                m_recurringPaymentTermHasBeenSet = true;
              }

              else if (initialKeyStr == "validityTerm") {
                m_validityTerm = ValidityTerm(decoder);
                m_validityTermHasBeenSet = true;
              }

              else if (initialKeyStr == "paymentScheduleTerm") {
                m_paymentScheduleTerm = PaymentScheduleTerm(decoder);
                m_paymentScheduleTermHasBeenSet = true;
              }

              else if (initialKeyStr == "freeTrialPricingTerm") {
                m_freeTrialPricingTerm = FreeTrialPricingTerm(decoder);
                m_freeTrialPricingTermHasBeenSet = true;
              }

              else if (initialKeyStr == "fixedUpfrontPricingTerm") {
                m_fixedUpfrontPricingTerm = FixedUpfrontPricingTerm(decoder);
                m_fixedUpfrontPricingTermHasBeenSet = true;
              }

              else if (initialKeyStr == "variablePaymentTerm") {
                m_variablePaymentTerm = VariablePaymentTerm(decoder);
                m_variablePaymentTermHasBeenSet = true;
              }

              else if (initialKeyStr == "netPaymentTerm") {
                m_netPaymentTerm = NetPaymentTerm(decoder);
                m_netPaymentTermHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("AcceptedTerm", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "legalTerm") {
              m_legalTerm = LegalTerm(decoder);
              m_legalTermHasBeenSet = true;
            }

            else if (initialKeyStr == "supportTerm") {
              m_supportTerm = SupportTerm(decoder);
              m_supportTermHasBeenSet = true;
            }

            else if (initialKeyStr == "renewalTerm") {
              m_renewalTerm = RenewalTerm(decoder);
              m_renewalTermHasBeenSet = true;
            }

            else if (initialKeyStr == "usageBasedPricingTerm") {
              m_usageBasedPricingTerm = UsageBasedPricingTerm(decoder);
              m_usageBasedPricingTermHasBeenSet = true;
            }

            else if (initialKeyStr == "configurableUpfrontPricingTerm") {
              m_configurableUpfrontPricingTerm = ConfigurableUpfrontPricingTerm(decoder);
              m_configurableUpfrontPricingTermHasBeenSet = true;
            }

            else if (initialKeyStr == "byolPricingTerm") {
              m_byolPricingTerm = ByolPricingTerm(decoder);
              m_byolPricingTermHasBeenSet = true;
            }

            else if (initialKeyStr == "recurringPaymentTerm") {
              m_recurringPaymentTerm = RecurringPaymentTerm(decoder);
              m_recurringPaymentTermHasBeenSet = true;
            }

            else if (initialKeyStr == "validityTerm") {
              m_validityTerm = ValidityTerm(decoder);
              m_validityTermHasBeenSet = true;
            }

            else if (initialKeyStr == "paymentScheduleTerm") {
              m_paymentScheduleTerm = PaymentScheduleTerm(decoder);
              m_paymentScheduleTermHasBeenSet = true;
            }

            else if (initialKeyStr == "freeTrialPricingTerm") {
              m_freeTrialPricingTerm = FreeTrialPricingTerm(decoder);
              m_freeTrialPricingTermHasBeenSet = true;
            }

            else if (initialKeyStr == "fixedUpfrontPricingTerm") {
              m_fixedUpfrontPricingTerm = FixedUpfrontPricingTerm(decoder);
              m_fixedUpfrontPricingTermHasBeenSet = true;
            }

            else if (initialKeyStr == "variablePaymentTerm") {
              m_variablePaymentTerm = VariablePaymentTerm(decoder);
              m_variablePaymentTermHasBeenSet = true;
            }

            else if (initialKeyStr == "netPaymentTerm") {
              m_netPaymentTerm = NetPaymentTerm(decoder);
              m_netPaymentTermHasBeenSet = true;
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

void AcceptedTerm::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_legalTermHasBeenSet) {
    mapSize++;
  }
  if (m_supportTermHasBeenSet) {
    mapSize++;
  }
  if (m_renewalTermHasBeenSet) {
    mapSize++;
  }
  if (m_usageBasedPricingTermHasBeenSet) {
    mapSize++;
  }
  if (m_configurableUpfrontPricingTermHasBeenSet) {
    mapSize++;
  }
  if (m_byolPricingTermHasBeenSet) {
    mapSize++;
  }
  if (m_recurringPaymentTermHasBeenSet) {
    mapSize++;
  }
  if (m_validityTermHasBeenSet) {
    mapSize++;
  }
  if (m_paymentScheduleTermHasBeenSet) {
    mapSize++;
  }
  if (m_freeTrialPricingTermHasBeenSet) {
    mapSize++;
  }
  if (m_fixedUpfrontPricingTermHasBeenSet) {
    mapSize++;
  }
  if (m_variablePaymentTermHasBeenSet) {
    mapSize++;
  }
  if (m_netPaymentTermHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_legalTermHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("legalTerm"));
    m_legalTerm.CborEncode(encoder);
  }

  if (m_supportTermHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("supportTerm"));
    m_supportTerm.CborEncode(encoder);
  }

  if (m_renewalTermHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("renewalTerm"));
    m_renewalTerm.CborEncode(encoder);
  }

  if (m_usageBasedPricingTermHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("usageBasedPricingTerm"));
    m_usageBasedPricingTerm.CborEncode(encoder);
  }

  if (m_configurableUpfrontPricingTermHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("configurableUpfrontPricingTerm"));
    m_configurableUpfrontPricingTerm.CborEncode(encoder);
  }

  if (m_byolPricingTermHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("byolPricingTerm"));
    m_byolPricingTerm.CborEncode(encoder);
  }

  if (m_recurringPaymentTermHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("recurringPaymentTerm"));
    m_recurringPaymentTerm.CborEncode(encoder);
  }

  if (m_validityTermHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("validityTerm"));
    m_validityTerm.CborEncode(encoder);
  }

  if (m_paymentScheduleTermHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("paymentScheduleTerm"));
    m_paymentScheduleTerm.CborEncode(encoder);
  }

  if (m_freeTrialPricingTermHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("freeTrialPricingTerm"));
    m_freeTrialPricingTerm.CborEncode(encoder);
  }

  if (m_fixedUpfrontPricingTermHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("fixedUpfrontPricingTerm"));
    m_fixedUpfrontPricingTerm.CborEncode(encoder);
  }

  if (m_variablePaymentTermHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("variablePaymentTerm"));
    m_variablePaymentTerm.CborEncode(encoder);
  }

  if (m_netPaymentTermHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("netPaymentTerm"));
    m_netPaymentTerm.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws