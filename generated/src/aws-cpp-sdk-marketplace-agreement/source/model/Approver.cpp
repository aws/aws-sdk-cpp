/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/cbor/CborValue.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/marketplace-agreement/model/Approver.h>

#include <utility>

using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

Approver::Approver(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) { *this = decoder; }

Approver& Approver::operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder) {
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

              if (initialKeyStr == "emailApprover") {
                m_emailApprover = EmailApprover(decoder);
                m_emailApproverHasBeenSet = true;
              }

              else if (initialKeyStr == "procurementToolApprover") {
                m_procurementToolApprover = ProcurementToolApprover(decoder);
                m_procurementToolApproverHasBeenSet = true;
              }

              else if (initialKeyStr == "awsOrganizationAdminApprover") {
                m_awsOrganizationAdminApprover = AwsOrganizationAdminApprover(decoder);
                m_awsOrganizationAdminApproverHasBeenSet = true;
              } else {
                // Unknown key, skip the value
                decoder->ConsumeNextWholeDataItem();
              }
              if ((decoder->LastError() != AWS_ERROR_UNKNOWN)) {
                AWS_LOG_ERROR("Approver", "Invalid data received for %s", initialKeyStr.c_str());
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

            if (initialKeyStr == "emailApprover") {
              m_emailApprover = EmailApprover(decoder);
              m_emailApproverHasBeenSet = true;
            }

            else if (initialKeyStr == "procurementToolApprover") {
              m_procurementToolApprover = ProcurementToolApprover(decoder);
              m_procurementToolApproverHasBeenSet = true;
            }

            else if (initialKeyStr == "awsOrganizationAdminApprover") {
              m_awsOrganizationAdminApprover = AwsOrganizationAdminApprover(decoder);
              m_awsOrganizationAdminApproverHasBeenSet = true;
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

void Approver::CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const {
  // Calculate map size
  size_t mapSize = 0;
  if (m_emailApproverHasBeenSet) {
    mapSize++;
  }
  if (m_procurementToolApproverHasBeenSet) {
    mapSize++;
  }
  if (m_awsOrganizationAdminApproverHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_emailApproverHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("emailApprover"));
    m_emailApprover.CborEncode(encoder);
  }

  if (m_procurementToolApproverHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("procurementToolApprover"));
    m_procurementToolApprover.CborEncode(encoder);
  }

  if (m_awsOrganizationAdminApproverHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("awsOrganizationAdminApprover"));
    m_awsOrganizationAdminApprover.CborEncode(encoder);
  }
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws