/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/model/ApproverOutcome.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

ApproverOutcome::ApproverOutcome(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

ApproverOutcome& ApproverOutcome::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "emailApproverOutcome") {
                m_emailApproverOutcome = EmailApproverOutcome(decoder);
                m_emailApproverOutcomeHasBeenSet = true;
              }

              else if (initialKeyStr == "procurementToolApproverOutcome") {
                m_procurementToolApproverOutcome = ProcurementToolApproverOutcome(decoder);
                m_procurementToolApproverOutcomeHasBeenSet = true;
              }

              else if (initialKeyStr == "awsOrganizationApproverOutcome") {
                m_awsOrganizationApproverOutcome = AwsOrganizationApproverOutcome(decoder);
                m_awsOrganizationApproverOutcomeHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("ApproverOutcome", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "emailApproverOutcome") {
              m_emailApproverOutcome = EmailApproverOutcome(decoder);
              m_emailApproverOutcomeHasBeenSet = true;
            }

            else if (initialKeyStr == "procurementToolApproverOutcome") {
              m_procurementToolApproverOutcome = ProcurementToolApproverOutcome(decoder);
              m_procurementToolApproverOutcomeHasBeenSet = true;
            }

            else if (initialKeyStr == "awsOrganizationApproverOutcome") {
              m_awsOrganizationApproverOutcome = AwsOrganizationApproverOutcome(decoder);
              m_awsOrganizationApproverOutcomeHasBeenSet = true;
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

void ApproverOutcome::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_emailApproverOutcomeHasBeenSet) {
    mapSize++;
  }
  if (m_procurementToolApproverOutcomeHasBeenSet) {
    mapSize++;
  }
  if (m_awsOrganizationApproverOutcomeHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_emailApproverOutcomeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("emailApproverOutcome"));
    m_emailApproverOutcome.CborEncode(encoder);
  }

  if (m_procurementToolApproverOutcomeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("procurementToolApproverOutcome"));
    m_procurementToolApproverOutcome.CborEncode(encoder);
  }

  if (m_awsOrganizationApproverOutcomeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("awsOrganizationApproverOutcome"));
    m_awsOrganizationApproverOutcome.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws