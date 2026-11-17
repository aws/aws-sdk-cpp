/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/ResourceType.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace ResourceTypeMapper {

static const int Agreement_HASH = HashingUtils::HashString("Agreement");
static const int AgreementRequest_HASH = HashingUtils::HashString("AgreementRequest");
static const int AgreementProposal_HASH = HashingUtils::HashString("AgreementProposal");
static const int Charge_HASH = HashingUtils::HashString("Charge");
static const int PaymentRequest_HASH = HashingUtils::HashString("PaymentRequest");
static const int Invoice_HASH = HashingUtils::HashString("Invoice");
static const int AgreementCancellationRequest_HASH = HashingUtils::HashString("AgreementCancellationRequest");
static const int BillingAdjustmentRequest_HASH = HashingUtils::HashString("BillingAdjustmentRequest");
static const int AgreementApproval_HASH = HashingUtils::HashString("AgreementApproval");
static const int AgreementRequestApprovalPlan_HASH = HashingUtils::HashString("AgreementRequestApprovalPlan");

ResourceType GetResourceTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Agreement_HASH) {
    return ResourceType::Agreement;
  } else if (hashCode == AgreementRequest_HASH) {
    return ResourceType::AgreementRequest;
  } else if (hashCode == AgreementProposal_HASH) {
    return ResourceType::AgreementProposal;
  } else if (hashCode == Charge_HASH) {
    return ResourceType::Charge;
  } else if (hashCode == PaymentRequest_HASH) {
    return ResourceType::PaymentRequest;
  } else if (hashCode == Invoice_HASH) {
    return ResourceType::Invoice;
  } else if (hashCode == AgreementCancellationRequest_HASH) {
    return ResourceType::AgreementCancellationRequest;
  } else if (hashCode == BillingAdjustmentRequest_HASH) {
    return ResourceType::BillingAdjustmentRequest;
  } else if (hashCode == AgreementApproval_HASH) {
    return ResourceType::AgreementApproval;
  } else if (hashCode == AgreementRequestApprovalPlan_HASH) {
    return ResourceType::AgreementRequestApprovalPlan;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ResourceType>(hashCode);
  }

  return ResourceType::NOT_SET;
}

Aws::String GetNameForResourceType(ResourceType enumValue) {
  switch (enumValue) {
    case ResourceType::NOT_SET:
      return {};
    case ResourceType::Agreement:
      return "Agreement";
    case ResourceType::AgreementRequest:
      return "AgreementRequest";
    case ResourceType::AgreementProposal:
      return "AgreementProposal";
    case ResourceType::Charge:
      return "Charge";
    case ResourceType::PaymentRequest:
      return "PaymentRequest";
    case ResourceType::Invoice:
      return "Invoice";
    case ResourceType::AgreementCancellationRequest:
      return "AgreementCancellationRequest";
    case ResourceType::BillingAdjustmentRequest:
      return "BillingAdjustmentRequest";
    case ResourceType::AgreementApproval:
      return "AgreementApproval";
    case ResourceType::AgreementRequestApprovalPlan:
      return "AgreementRequestApprovalPlan";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ResourceTypeMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
