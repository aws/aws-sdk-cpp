/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/model/RequestedTermConfiguration.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

RequestedTermConfiguration::RequestedTermConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

RequestedTermConfiguration& RequestedTermConfiguration::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "configurableUpfrontPricingTermConfiguration") {
                m_configurableUpfrontPricingTermConfiguration = ConfigurableUpfrontPricingTermConfiguration(decoder);
                m_configurableUpfrontPricingTermConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "renewalTermConfiguration") {
                m_renewalTermConfiguration = RenewalTermConfiguration(decoder);
                m_renewalTermConfigurationHasBeenSet = true;
              }

              else if (initialKeyStr == "variablePaymentTermConfiguration") {
                m_variablePaymentTermConfiguration = VariablePaymentTermConfiguration(decoder);
                m_variablePaymentTermConfigurationHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("RequestedTermConfiguration", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "configurableUpfrontPricingTermConfiguration") {
              m_configurableUpfrontPricingTermConfiguration = ConfigurableUpfrontPricingTermConfiguration(decoder);
              m_configurableUpfrontPricingTermConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "renewalTermConfiguration") {
              m_renewalTermConfiguration = RenewalTermConfiguration(decoder);
              m_renewalTermConfigurationHasBeenSet = true;
            }

            else if (initialKeyStr == "variablePaymentTermConfiguration") {
              m_variablePaymentTermConfiguration = VariablePaymentTermConfiguration(decoder);
              m_variablePaymentTermConfigurationHasBeenSet = true;
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

void RequestedTermConfiguration::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_configurableUpfrontPricingTermConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_renewalTermConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_variablePaymentTermConfigurationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_configurableUpfrontPricingTermConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("configurableUpfrontPricingTermConfiguration"));
    m_configurableUpfrontPricingTermConfiguration.CborEncode(encoder);
  }

  if (m_renewalTermConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("renewalTermConfiguration"));
    m_renewalTermConfiguration.CborEncode(encoder);
  }

  if (m_variablePaymentTermConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("variablePaymentTermConfiguration"));
    m_variablePaymentTermConfiguration.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws