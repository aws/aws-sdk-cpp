/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/marketplace-agreement/model/ValidationExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {
namespace ValidationExceptionReasonMapper {

static const int CLOSED_AGREEMENT_APPROVAL_HASH = HashingUtils::HashString("CLOSED_AGREEMENT_APPROVAL");
static const int QUEUED_AGREEMENT_APPROVAL_HASH = HashingUtils::HashString("QUEUED_AGREEMENT_APPROVAL");
static const int INVALID_AGREEMENT_APPROVAL_ID_HASH = HashingUtils::HashString("INVALID_AGREEMENT_APPROVAL_ID");
static const int MISSING_AGREEMENT_APPROVAL_ID_HASH = HashingUtils::HashString("MISSING_AGREEMENT_APPROVAL_ID");
static const int DUPLICATE_PLAN_REFERENCE_HASH = HashingUtils::HashString("DUPLICATE_PLAN_REFERENCE");
static const int INVALID_PLAN_INPUTS_HASH = HashingUtils::HashString("INVALID_PLAN_INPUTS");
static const int PENDING_APPROVAL_AGREEMENT_REQUEST_HASH = HashingUtils::HashString("PENDING_APPROVAL_AGREEMENT_REQUEST");
static const int MISSING_BILLING_ADJUSTMENTS_HASH = HashingUtils::HashString("MISSING_BILLING_ADJUSTMENTS");
static const int BILLING_ADJUSTMENTS_LIMIT_EXCEEDED_HASH = HashingUtils::HashString("BILLING_ADJUSTMENTS_LIMIT_EXCEEDED");
static const int MISSING_INVOICE_ID_HASH = HashingUtils::HashString("MISSING_INVOICE_ID");
static const int INVALID_ADJUSTMENT_AMOUNT_HASH = HashingUtils::HashString("INVALID_ADJUSTMENT_AMOUNT");
static const int MISSING_ADJUSTMENT_AMOUNT_HASH = HashingUtils::HashString("MISSING_ADJUSTMENT_AMOUNT");
static const int INVALID_REASON_CODE_HASH = HashingUtils::HashString("INVALID_REASON_CODE");
static const int MISSING_REASON_CODE_HASH = HashingUtils::HashString("MISSING_REASON_CODE");
static const int MISSING_DESCRIPTION_HASH = HashingUtils::HashString("MISSING_DESCRIPTION");
static const int INVALID_INVOICE_ADJUSTMENT_PERIOD_HASH = HashingUtils::HashString("INVALID_INVOICE_ADJUSTMENT_PERIOD");
static const int INVALID_CURRENCY_CODE_HASH = HashingUtils::HashString("INVALID_CURRENCY_CODE");
static const int MISSING_CURRENCY_CODE_HASH = HashingUtils::HashString("MISSING_CURRENCY_CODE");
static const int EXCEEDED_MAXIMUM_ADJUSTMENT_AMOUNT_HASH = HashingUtils::HashString("EXCEEDED_MAXIMUM_ADJUSTMENT_AMOUNT");
static const int MISSING_BILLING_ADJUSTMENT_REQUEST_ENTRY_HASH = HashingUtils::HashString("MISSING_BILLING_ADJUSTMENT_REQUEST_ENTRY");
static const int MULTIPLE_AGREEMENT_IDS_HASH = HashingUtils::HashString("MULTIPLE_AGREEMENT_IDS");
static const int INVALID_AGREEMENT_CANCELLATION_REQUEST_ID_HASH = HashingUtils::HashString("INVALID_AGREEMENT_CANCELLATION_REQUEST_ID");
static const int MISSING_AGREEMENT_CANCELLATION_REQUEST_ID_HASH = HashingUtils::HashString("MISSING_AGREEMENT_CANCELLATION_REQUEST_ID");
static const int MISSING_REASON_HASH = HashingUtils::HashString("MISSING_REASON");
static const int INVALID_REASON_HASH = HashingUtils::HashString("INVALID_REASON");
static const int INVALID_STATUS_HASH = HashingUtils::HashString("INVALID_STATUS");
static const int INVALID_AGREEMENT_ID_HASH = HashingUtils::HashString("INVALID_AGREEMENT_ID");
static const int MISSING_AGREEMENT_ID_HASH = HashingUtils::HashString("MISSING_AGREEMENT_ID");
static const int INVALID_CATALOG_HASH = HashingUtils::HashString("INVALID_CATALOG");
static const int INVALID_FILTERS_HASH = HashingUtils::HashString("INVALID_FILTERS");
static const int INVALID_FILTER_NAME_HASH = HashingUtils::HashString("INVALID_FILTER_NAME");
static const int MISSING_FILTER_NAME_HASH = HashingUtils::HashString("MISSING_FILTER_NAME");
static const int INVALID_FILTER_VALUES_HASH = HashingUtils::HashString("INVALID_FILTER_VALUES");
static const int MISSING_FILTER_VALUES_HASH = HashingUtils::HashString("MISSING_FILTER_VALUES");
static const int INVALID_SORT_BY_HASH = HashingUtils::HashString("INVALID_SORT_BY");
static const int INVALID_SORT_ORDER_HASH = HashingUtils::HashString("INVALID_SORT_ORDER");
static const int INVALID_NEXT_TOKEN_HASH = HashingUtils::HashString("INVALID_NEXT_TOKEN");
static const int INVALID_MAX_RESULTS_HASH = HashingUtils::HashString("INVALID_MAX_RESULTS");
static const int INVALID_TERM_ID_HASH = HashingUtils::HashString("INVALID_TERM_ID");
static const int MISSING_TERM_ID_HASH = HashingUtils::HashString("MISSING_TERM_ID");
static const int MISSING_NAME_HASH = HashingUtils::HashString("MISSING_NAME");
static const int INVALID_NAME_HASH = HashingUtils::HashString("INVALID_NAME");
static const int INVALID_DESCRIPTION_HASH = HashingUtils::HashString("INVALID_DESCRIPTION");
static const int MISSING_CHARGE_AMOUNT_HASH = HashingUtils::HashString("MISSING_CHARGE_AMOUNT");
static const int INVALID_CHARGE_AMOUNT_HASH = HashingUtils::HashString("INVALID_CHARGE_AMOUNT");
static const int MISSING_PAYMENT_REQUEST_ID_HASH = HashingUtils::HashString("MISSING_PAYMENT_REQUEST_ID");
static const int INVALID_PAYMENT_REQUEST_ID_HASH = HashingUtils::HashString("INVALID_PAYMENT_REQUEST_ID");
static const int MISSING_PARTY_TYPE_HASH = HashingUtils::HashString("MISSING_PARTY_TYPE");
static const int INVALID_PARTY_TYPE_HASH = HashingUtils::HashString("INVALID_PARTY_TYPE");
static const int UNSUPPORTED_FILTERS_HASH = HashingUtils::HashString("UNSUPPORTED_FILTERS");
static const int INVALID_CLIENT_TOKEN_HASH = HashingUtils::HashString("INVALID_CLIENT_TOKEN");
static const int INVALID_INTENT_HASH = HashingUtils::HashString("INVALID_INTENT");
static const int MISSING_INTENT_HASH = HashingUtils::HashString("MISSING_INTENT");
static const int INVALID_SOURCE_AGREEMENT_IDENTIFIER_HASH = HashingUtils::HashString("INVALID_SOURCE_AGREEMENT_IDENTIFIER");
static const int MISSING_SOURCE_AGREEMENT_IDENTIFIER_HASH = HashingUtils::HashString("MISSING_SOURCE_AGREEMENT_IDENTIFIER");
static const int INVALID_AGREEMENT_PROPOSAL_IDENTIFIER_HASH = HashingUtils::HashString("INVALID_AGREEMENT_PROPOSAL_IDENTIFIER");
static const int MISSING_AGREEMENT_PROPOSAL_IDENTIFIER_HASH = HashingUtils::HashString("MISSING_AGREEMENT_PROPOSAL_IDENTIFIER");
static const int INVALID_REQUESTED_TERMS_HASH = HashingUtils::HashString("INVALID_REQUESTED_TERMS");
static const int MISSING_REQUESTED_TERMS_HASH = HashingUtils::HashString("MISSING_REQUESTED_TERMS");
static const int INVALID_REQUESTED_TERM_ID_HASH = HashingUtils::HashString("INVALID_REQUESTED_TERM_ID");
static const int MISSING_REQUESTED_TERM_ID_HASH = HashingUtils::HashString("MISSING_REQUESTED_TERM_ID");
static const int INVALID_REQUESTED_TERM_CONFIGURATION_HASH = HashingUtils::HashString("INVALID_REQUESTED_TERM_CONFIGURATION");
static const int MISSING_REQUESTED_TERM_CONFIGURATION_HASH = HashingUtils::HashString("MISSING_REQUESTED_TERM_CONFIGURATION");
static const int INVALID_AGREEMENT_REQUEST_ID_HASH = HashingUtils::HashString("INVALID_AGREEMENT_REQUEST_ID");
static const int MISSING_AGREEMENT_REQUEST_ID_HASH = HashingUtils::HashString("MISSING_AGREEMENT_REQUEST_ID");
static const int INVALID_PURCHASE_ORDERS_HASH = HashingUtils::HashString("INVALID_PURCHASE_ORDERS");
static const int MISSING_PURCHASE_ORDERS_HASH = HashingUtils::HashString("MISSING_PURCHASE_ORDERS");
static const int INVALID_CHARGE_ID_HASH = HashingUtils::HashString("INVALID_CHARGE_ID");
static const int MISSING_CHARGE_ID_HASH = HashingUtils::HashString("MISSING_CHARGE_ID");
static const int INVALID_CHARGE_REVISION_HASH = HashingUtils::HashString("INVALID_CHARGE_REVISION");
static const int MISSING_CHARGE_REVISION_HASH = HashingUtils::HashString("MISSING_CHARGE_REVISION");
static const int INVALID_AGREEMENT_TYPE_HASH = HashingUtils::HashString("INVALID_AGREEMENT_TYPE");
static const int INVALID_PURCHASE_ORDER_REFERENCE_HASH = HashingUtils::HashString("INVALID_PURCHASE_ORDER_REFERENCE");
static const int INACTIVE_AGREEMENT_HASH = HashingUtils::HashString("INACTIVE_AGREEMENT");
static const int SUPERSEDED_AGREEMENT_PROPOSAL_HASH = HashingUtils::HashString("SUPERSEDED_AGREEMENT_PROPOSAL");
static const int EXPIRED_AGREEMENT_PROPOSAL_HASH = HashingUtils::HashString("EXPIRED_AGREEMENT_PROPOSAL");
static const int INVALID_ACCEPTOR_CONTACT_HASH = HashingUtils::HashString("INVALID_ACCEPTOR_CONTACT");
static const int MISSING_MANDATORY_TERMS_HASH = HashingUtils::HashString("MISSING_MANDATORY_TERMS");
static const int INCOMPATIBLE_TERMS_HASH = HashingUtils::HashString("INCOMPATIBLE_TERMS");
static const int MISSING_USAGE_AGREEMENT_HASH = HashingUtils::HashString("MISSING_USAGE_AGREEMENT");
static const int INVALID_INCREMENTAL_CHARGE_HASH = HashingUtils::HashString("INVALID_INCREMENTAL_CHARGE");
static const int MISSING_ACCOUNT_ADDRESS_HASH = HashingUtils::HashString("MISSING_ACCOUNT_ADDRESS");
static const int UNSUPPORTED_ACTION_HASH = HashingUtils::HashString("UNSUPPORTED_ACTION");
static const int INVALID_REJECTION_REASON_HASH = HashingUtils::HashString("INVALID_REJECTION_REASON");
static const int INVALID_PAYMENT_REQUEST_STATUS_HASH = HashingUtils::HashString("INVALID_PAYMENT_REQUEST_STATUS");
static const int OTHER_HASH = HashingUtils::HashString("OTHER");
static const int DUPLICATE_CHARGES_HASH = HashingUtils::HashString("DUPLICATE_CHARGES");
static const int UNSUPPORTED_ACCOUNT_PLAN_HASH = HashingUtils::HashString("UNSUPPORTED_ACCOUNT_PLAN");
static const int DUPLICATE_AGREEMENT_IN_ORGANIZATION_HASH = HashingUtils::HashString("DUPLICATE_AGREEMENT_IN_ORGANIZATION");
static const int MISSING_AWS_LICENSE_MANAGER_USER_SUBSCRIPTIONS_SLR_HASH =
    HashingUtils::HashString("MISSING_AWS_LICENSE_MANAGER_USER_SUBSCRIPTIONS_SLR");
static const int MISSING_PURCHASE_ORDER_REFERENCE_HASH = HashingUtils::HashString("MISSING_PURCHASE_ORDER_REFERENCE");
static const int INVALID_RESOURCE_ID_HASH = HashingUtils::HashString("INVALID_RESOURCE_ID");
static const int CLOSED_AGREEMENT_REQUEST_HASH = HashingUtils::HashString("CLOSED_AGREEMENT_REQUEST");
static const int INCOMPATIBLE_AGREEMENT_REQUEST_HASH = HashingUtils::HashString("INCOMPATIBLE_AGREEMENT_REQUEST");
static const int REJECTED_BY_AGREEMENT_APPROVAL_POLICY_HASH = HashingUtils::HashString("REJECTED_BY_AGREEMENT_APPROVAL_POLICY");
static const int MISSING_PLAN_INPUTS_HASH = HashingUtils::HashString("MISSING_PLAN_INPUTS");
static const int INVALID_APPROVER_OUTCOME_ID_TO_OVERRIDE_HASH = HashingUtils::HashString("INVALID_APPROVER_OUTCOME_ID_TO_OVERRIDE");
static const int INVALID_NOTE_HASH = HashingUtils::HashString("INVALID_NOTE");
static const int MISSING_NOTE_HASH = HashingUtils::HashString("MISSING_NOTE");
static const int INVALID_APPROVAL_TYPE_HASH = HashingUtils::HashString("INVALID_APPROVAL_TYPE");
static const int MISSING_SORT_BY_HASH = HashingUtils::HashString("MISSING_SORT_BY");

ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CLOSED_AGREEMENT_APPROVAL_HASH) {
    return ValidationExceptionReason::CLOSED_AGREEMENT_APPROVAL;
  } else if (hashCode == QUEUED_AGREEMENT_APPROVAL_HASH) {
    return ValidationExceptionReason::QUEUED_AGREEMENT_APPROVAL;
  } else if (hashCode == INVALID_AGREEMENT_APPROVAL_ID_HASH) {
    return ValidationExceptionReason::INVALID_AGREEMENT_APPROVAL_ID;
  } else if (hashCode == MISSING_AGREEMENT_APPROVAL_ID_HASH) {
    return ValidationExceptionReason::MISSING_AGREEMENT_APPROVAL_ID;
  } else if (hashCode == DUPLICATE_PLAN_REFERENCE_HASH) {
    return ValidationExceptionReason::DUPLICATE_PLAN_REFERENCE;
  } else if (hashCode == INVALID_PLAN_INPUTS_HASH) {
    return ValidationExceptionReason::INVALID_PLAN_INPUTS;
  } else if (hashCode == PENDING_APPROVAL_AGREEMENT_REQUEST_HASH) {
    return ValidationExceptionReason::PENDING_APPROVAL_AGREEMENT_REQUEST;
  } else if (hashCode == MISSING_BILLING_ADJUSTMENTS_HASH) {
    return ValidationExceptionReason::MISSING_BILLING_ADJUSTMENTS;
  } else if (hashCode == BILLING_ADJUSTMENTS_LIMIT_EXCEEDED_HASH) {
    return ValidationExceptionReason::BILLING_ADJUSTMENTS_LIMIT_EXCEEDED;
  } else if (hashCode == MISSING_INVOICE_ID_HASH) {
    return ValidationExceptionReason::MISSING_INVOICE_ID;
  } else if (hashCode == INVALID_ADJUSTMENT_AMOUNT_HASH) {
    return ValidationExceptionReason::INVALID_ADJUSTMENT_AMOUNT;
  } else if (hashCode == MISSING_ADJUSTMENT_AMOUNT_HASH) {
    return ValidationExceptionReason::MISSING_ADJUSTMENT_AMOUNT;
  } else if (hashCode == INVALID_REASON_CODE_HASH) {
    return ValidationExceptionReason::INVALID_REASON_CODE;
  } else if (hashCode == MISSING_REASON_CODE_HASH) {
    return ValidationExceptionReason::MISSING_REASON_CODE;
  } else if (hashCode == MISSING_DESCRIPTION_HASH) {
    return ValidationExceptionReason::MISSING_DESCRIPTION;
  } else if (hashCode == INVALID_INVOICE_ADJUSTMENT_PERIOD_HASH) {
    return ValidationExceptionReason::INVALID_INVOICE_ADJUSTMENT_PERIOD;
  } else if (hashCode == INVALID_CURRENCY_CODE_HASH) {
    return ValidationExceptionReason::INVALID_CURRENCY_CODE;
  } else if (hashCode == MISSING_CURRENCY_CODE_HASH) {
    return ValidationExceptionReason::MISSING_CURRENCY_CODE;
  } else if (hashCode == EXCEEDED_MAXIMUM_ADJUSTMENT_AMOUNT_HASH) {
    return ValidationExceptionReason::EXCEEDED_MAXIMUM_ADJUSTMENT_AMOUNT;
  } else if (hashCode == MISSING_BILLING_ADJUSTMENT_REQUEST_ENTRY_HASH) {
    return ValidationExceptionReason::MISSING_BILLING_ADJUSTMENT_REQUEST_ENTRY;
  } else if (hashCode == MULTIPLE_AGREEMENT_IDS_HASH) {
    return ValidationExceptionReason::MULTIPLE_AGREEMENT_IDS;
  } else if (hashCode == INVALID_AGREEMENT_CANCELLATION_REQUEST_ID_HASH) {
    return ValidationExceptionReason::INVALID_AGREEMENT_CANCELLATION_REQUEST_ID;
  } else if (hashCode == MISSING_AGREEMENT_CANCELLATION_REQUEST_ID_HASH) {
    return ValidationExceptionReason::MISSING_AGREEMENT_CANCELLATION_REQUEST_ID;
  } else if (hashCode == MISSING_REASON_HASH) {
    return ValidationExceptionReason::MISSING_REASON;
  } else if (hashCode == INVALID_REASON_HASH) {
    return ValidationExceptionReason::INVALID_REASON;
  } else if (hashCode == INVALID_STATUS_HASH) {
    return ValidationExceptionReason::INVALID_STATUS;
  } else if (hashCode == INVALID_AGREEMENT_ID_HASH) {
    return ValidationExceptionReason::INVALID_AGREEMENT_ID;
  } else if (hashCode == MISSING_AGREEMENT_ID_HASH) {
    return ValidationExceptionReason::MISSING_AGREEMENT_ID;
  } else if (hashCode == INVALID_CATALOG_HASH) {
    return ValidationExceptionReason::INVALID_CATALOG;
  } else if (hashCode == INVALID_FILTERS_HASH) {
    return ValidationExceptionReason::INVALID_FILTERS;
  } else if (hashCode == INVALID_FILTER_NAME_HASH) {
    return ValidationExceptionReason::INVALID_FILTER_NAME;
  } else if (hashCode == MISSING_FILTER_NAME_HASH) {
    return ValidationExceptionReason::MISSING_FILTER_NAME;
  } else if (hashCode == INVALID_FILTER_VALUES_HASH) {
    return ValidationExceptionReason::INVALID_FILTER_VALUES;
  } else if (hashCode == MISSING_FILTER_VALUES_HASH) {
    return ValidationExceptionReason::MISSING_FILTER_VALUES;
  } else if (hashCode == INVALID_SORT_BY_HASH) {
    return ValidationExceptionReason::INVALID_SORT_BY;
  } else if (hashCode == INVALID_SORT_ORDER_HASH) {
    return ValidationExceptionReason::INVALID_SORT_ORDER;
  } else if (hashCode == INVALID_NEXT_TOKEN_HASH) {
    return ValidationExceptionReason::INVALID_NEXT_TOKEN;
  } else if (hashCode == INVALID_MAX_RESULTS_HASH) {
    return ValidationExceptionReason::INVALID_MAX_RESULTS;
  } else if (hashCode == INVALID_TERM_ID_HASH) {
    return ValidationExceptionReason::INVALID_TERM_ID;
  } else if (hashCode == MISSING_TERM_ID_HASH) {
    return ValidationExceptionReason::MISSING_TERM_ID;
  } else if (hashCode == MISSING_NAME_HASH) {
    return ValidationExceptionReason::MISSING_NAME;
  } else if (hashCode == INVALID_NAME_HASH) {
    return ValidationExceptionReason::INVALID_NAME;
  } else if (hashCode == INVALID_DESCRIPTION_HASH) {
    return ValidationExceptionReason::INVALID_DESCRIPTION;
  } else if (hashCode == MISSING_CHARGE_AMOUNT_HASH) {
    return ValidationExceptionReason::MISSING_CHARGE_AMOUNT;
  } else if (hashCode == INVALID_CHARGE_AMOUNT_HASH) {
    return ValidationExceptionReason::INVALID_CHARGE_AMOUNT;
  } else if (hashCode == MISSING_PAYMENT_REQUEST_ID_HASH) {
    return ValidationExceptionReason::MISSING_PAYMENT_REQUEST_ID;
  } else if (hashCode == INVALID_PAYMENT_REQUEST_ID_HASH) {
    return ValidationExceptionReason::INVALID_PAYMENT_REQUEST_ID;
  } else if (hashCode == MISSING_PARTY_TYPE_HASH) {
    return ValidationExceptionReason::MISSING_PARTY_TYPE;
  } else if (hashCode == INVALID_PARTY_TYPE_HASH) {
    return ValidationExceptionReason::INVALID_PARTY_TYPE;
  } else if (hashCode == UNSUPPORTED_FILTERS_HASH) {
    return ValidationExceptionReason::UNSUPPORTED_FILTERS;
  } else if (hashCode == INVALID_CLIENT_TOKEN_HASH) {
    return ValidationExceptionReason::INVALID_CLIENT_TOKEN;
  } else if (hashCode == INVALID_INTENT_HASH) {
    return ValidationExceptionReason::INVALID_INTENT;
  } else if (hashCode == MISSING_INTENT_HASH) {
    return ValidationExceptionReason::MISSING_INTENT;
  } else if (hashCode == INVALID_SOURCE_AGREEMENT_IDENTIFIER_HASH) {
    return ValidationExceptionReason::INVALID_SOURCE_AGREEMENT_IDENTIFIER;
  } else if (hashCode == MISSING_SOURCE_AGREEMENT_IDENTIFIER_HASH) {
    return ValidationExceptionReason::MISSING_SOURCE_AGREEMENT_IDENTIFIER;
  } else if (hashCode == INVALID_AGREEMENT_PROPOSAL_IDENTIFIER_HASH) {
    return ValidationExceptionReason::INVALID_AGREEMENT_PROPOSAL_IDENTIFIER;
  } else if (hashCode == MISSING_AGREEMENT_PROPOSAL_IDENTIFIER_HASH) {
    return ValidationExceptionReason::MISSING_AGREEMENT_PROPOSAL_IDENTIFIER;
  } else if (hashCode == INVALID_REQUESTED_TERMS_HASH) {
    return ValidationExceptionReason::INVALID_REQUESTED_TERMS;
  } else if (hashCode == MISSING_REQUESTED_TERMS_HASH) {
    return ValidationExceptionReason::MISSING_REQUESTED_TERMS;
  } else if (hashCode == INVALID_REQUESTED_TERM_ID_HASH) {
    return ValidationExceptionReason::INVALID_REQUESTED_TERM_ID;
  } else if (hashCode == MISSING_REQUESTED_TERM_ID_HASH) {
    return ValidationExceptionReason::MISSING_REQUESTED_TERM_ID;
  } else if (hashCode == INVALID_REQUESTED_TERM_CONFIGURATION_HASH) {
    return ValidationExceptionReason::INVALID_REQUESTED_TERM_CONFIGURATION;
  } else if (hashCode == MISSING_REQUESTED_TERM_CONFIGURATION_HASH) {
    return ValidationExceptionReason::MISSING_REQUESTED_TERM_CONFIGURATION;
  } else if (hashCode == INVALID_AGREEMENT_REQUEST_ID_HASH) {
    return ValidationExceptionReason::INVALID_AGREEMENT_REQUEST_ID;
  } else if (hashCode == MISSING_AGREEMENT_REQUEST_ID_HASH) {
    return ValidationExceptionReason::MISSING_AGREEMENT_REQUEST_ID;
  } else if (hashCode == INVALID_PURCHASE_ORDERS_HASH) {
    return ValidationExceptionReason::INVALID_PURCHASE_ORDERS;
  } else if (hashCode == MISSING_PURCHASE_ORDERS_HASH) {
    return ValidationExceptionReason::MISSING_PURCHASE_ORDERS;
  } else if (hashCode == INVALID_CHARGE_ID_HASH) {
    return ValidationExceptionReason::INVALID_CHARGE_ID;
  } else if (hashCode == MISSING_CHARGE_ID_HASH) {
    return ValidationExceptionReason::MISSING_CHARGE_ID;
  } else if (hashCode == INVALID_CHARGE_REVISION_HASH) {
    return ValidationExceptionReason::INVALID_CHARGE_REVISION;
  } else if (hashCode == MISSING_CHARGE_REVISION_HASH) {
    return ValidationExceptionReason::MISSING_CHARGE_REVISION;
  } else if (hashCode == INVALID_AGREEMENT_TYPE_HASH) {
    return ValidationExceptionReason::INVALID_AGREEMENT_TYPE;
  } else if (hashCode == INVALID_PURCHASE_ORDER_REFERENCE_HASH) {
    return ValidationExceptionReason::INVALID_PURCHASE_ORDER_REFERENCE;
  } else if (hashCode == INACTIVE_AGREEMENT_HASH) {
    return ValidationExceptionReason::INACTIVE_AGREEMENT;
  } else if (hashCode == SUPERSEDED_AGREEMENT_PROPOSAL_HASH) {
    return ValidationExceptionReason::SUPERSEDED_AGREEMENT_PROPOSAL;
  } else if (hashCode == EXPIRED_AGREEMENT_PROPOSAL_HASH) {
    return ValidationExceptionReason::EXPIRED_AGREEMENT_PROPOSAL;
  } else if (hashCode == INVALID_ACCEPTOR_CONTACT_HASH) {
    return ValidationExceptionReason::INVALID_ACCEPTOR_CONTACT;
  } else if (hashCode == MISSING_MANDATORY_TERMS_HASH) {
    return ValidationExceptionReason::MISSING_MANDATORY_TERMS;
  } else if (hashCode == INCOMPATIBLE_TERMS_HASH) {
    return ValidationExceptionReason::INCOMPATIBLE_TERMS;
  } else if (hashCode == MISSING_USAGE_AGREEMENT_HASH) {
    return ValidationExceptionReason::MISSING_USAGE_AGREEMENT;
  } else if (hashCode == INVALID_INCREMENTAL_CHARGE_HASH) {
    return ValidationExceptionReason::INVALID_INCREMENTAL_CHARGE;
  } else if (hashCode == MISSING_ACCOUNT_ADDRESS_HASH) {
    return ValidationExceptionReason::MISSING_ACCOUNT_ADDRESS;
  } else if (hashCode == UNSUPPORTED_ACTION_HASH) {
    return ValidationExceptionReason::UNSUPPORTED_ACTION;
  } else if (hashCode == INVALID_REJECTION_REASON_HASH) {
    return ValidationExceptionReason::INVALID_REJECTION_REASON;
  } else if (hashCode == INVALID_PAYMENT_REQUEST_STATUS_HASH) {
    return ValidationExceptionReason::INVALID_PAYMENT_REQUEST_STATUS;
  } else if (hashCode == OTHER_HASH) {
    return ValidationExceptionReason::OTHER;
  } else if (hashCode == DUPLICATE_CHARGES_HASH) {
    return ValidationExceptionReason::DUPLICATE_CHARGES;
  } else if (hashCode == UNSUPPORTED_ACCOUNT_PLAN_HASH) {
    return ValidationExceptionReason::UNSUPPORTED_ACCOUNT_PLAN;
  } else if (hashCode == DUPLICATE_AGREEMENT_IN_ORGANIZATION_HASH) {
    return ValidationExceptionReason::DUPLICATE_AGREEMENT_IN_ORGANIZATION;
  } else if (hashCode == MISSING_AWS_LICENSE_MANAGER_USER_SUBSCRIPTIONS_SLR_HASH) {
    return ValidationExceptionReason::MISSING_AWS_LICENSE_MANAGER_USER_SUBSCRIPTIONS_SLR;
  } else if (hashCode == MISSING_PURCHASE_ORDER_REFERENCE_HASH) {
    return ValidationExceptionReason::MISSING_PURCHASE_ORDER_REFERENCE;
  } else if (hashCode == INVALID_RESOURCE_ID_HASH) {
    return ValidationExceptionReason::INVALID_RESOURCE_ID;
  } else if (hashCode == CLOSED_AGREEMENT_REQUEST_HASH) {
    return ValidationExceptionReason::CLOSED_AGREEMENT_REQUEST;
  } else if (hashCode == INCOMPATIBLE_AGREEMENT_REQUEST_HASH) {
    return ValidationExceptionReason::INCOMPATIBLE_AGREEMENT_REQUEST;
  } else if (hashCode == REJECTED_BY_AGREEMENT_APPROVAL_POLICY_HASH) {
    return ValidationExceptionReason::REJECTED_BY_AGREEMENT_APPROVAL_POLICY;
  } else if (hashCode == MISSING_PLAN_INPUTS_HASH) {
    return ValidationExceptionReason::MISSING_PLAN_INPUTS;
  } else if (hashCode == INVALID_APPROVER_OUTCOME_ID_TO_OVERRIDE_HASH) {
    return ValidationExceptionReason::INVALID_APPROVER_OUTCOME_ID_TO_OVERRIDE;
  } else if (hashCode == INVALID_NOTE_HASH) {
    return ValidationExceptionReason::INVALID_NOTE;
  } else if (hashCode == MISSING_NOTE_HASH) {
    return ValidationExceptionReason::MISSING_NOTE;
  } else if (hashCode == INVALID_APPROVAL_TYPE_HASH) {
    return ValidationExceptionReason::INVALID_APPROVAL_TYPE;
  } else if (hashCode == MISSING_SORT_BY_HASH) {
    return ValidationExceptionReason::MISSING_SORT_BY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ValidationExceptionReason>(hashCode);
  }

  return ValidationExceptionReason::NOT_SET;
}

Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason enumValue) {
  switch (enumValue) {
    case ValidationExceptionReason::NOT_SET:
      return {};
    case ValidationExceptionReason::CLOSED_AGREEMENT_APPROVAL:
      return "CLOSED_AGREEMENT_APPROVAL";
    case ValidationExceptionReason::QUEUED_AGREEMENT_APPROVAL:
      return "QUEUED_AGREEMENT_APPROVAL";
    case ValidationExceptionReason::INVALID_AGREEMENT_APPROVAL_ID:
      return "INVALID_AGREEMENT_APPROVAL_ID";
    case ValidationExceptionReason::MISSING_AGREEMENT_APPROVAL_ID:
      return "MISSING_AGREEMENT_APPROVAL_ID";
    case ValidationExceptionReason::DUPLICATE_PLAN_REFERENCE:
      return "DUPLICATE_PLAN_REFERENCE";
    case ValidationExceptionReason::INVALID_PLAN_INPUTS:
      return "INVALID_PLAN_INPUTS";
    case ValidationExceptionReason::PENDING_APPROVAL_AGREEMENT_REQUEST:
      return "PENDING_APPROVAL_AGREEMENT_REQUEST";
    case ValidationExceptionReason::MISSING_BILLING_ADJUSTMENTS:
      return "MISSING_BILLING_ADJUSTMENTS";
    case ValidationExceptionReason::BILLING_ADJUSTMENTS_LIMIT_EXCEEDED:
      return "BILLING_ADJUSTMENTS_LIMIT_EXCEEDED";
    case ValidationExceptionReason::MISSING_INVOICE_ID:
      return "MISSING_INVOICE_ID";
    case ValidationExceptionReason::INVALID_ADJUSTMENT_AMOUNT:
      return "INVALID_ADJUSTMENT_AMOUNT";
    case ValidationExceptionReason::MISSING_ADJUSTMENT_AMOUNT:
      return "MISSING_ADJUSTMENT_AMOUNT";
    case ValidationExceptionReason::INVALID_REASON_CODE:
      return "INVALID_REASON_CODE";
    case ValidationExceptionReason::MISSING_REASON_CODE:
      return "MISSING_REASON_CODE";
    case ValidationExceptionReason::MISSING_DESCRIPTION:
      return "MISSING_DESCRIPTION";
    case ValidationExceptionReason::INVALID_INVOICE_ADJUSTMENT_PERIOD:
      return "INVALID_INVOICE_ADJUSTMENT_PERIOD";
    case ValidationExceptionReason::INVALID_CURRENCY_CODE:
      return "INVALID_CURRENCY_CODE";
    case ValidationExceptionReason::MISSING_CURRENCY_CODE:
      return "MISSING_CURRENCY_CODE";
    case ValidationExceptionReason::EXCEEDED_MAXIMUM_ADJUSTMENT_AMOUNT:
      return "EXCEEDED_MAXIMUM_ADJUSTMENT_AMOUNT";
    case ValidationExceptionReason::MISSING_BILLING_ADJUSTMENT_REQUEST_ENTRY:
      return "MISSING_BILLING_ADJUSTMENT_REQUEST_ENTRY";
    case ValidationExceptionReason::MULTIPLE_AGREEMENT_IDS:
      return "MULTIPLE_AGREEMENT_IDS";
    case ValidationExceptionReason::INVALID_AGREEMENT_CANCELLATION_REQUEST_ID:
      return "INVALID_AGREEMENT_CANCELLATION_REQUEST_ID";
    case ValidationExceptionReason::MISSING_AGREEMENT_CANCELLATION_REQUEST_ID:
      return "MISSING_AGREEMENT_CANCELLATION_REQUEST_ID";
    case ValidationExceptionReason::MISSING_REASON:
      return "MISSING_REASON";
    case ValidationExceptionReason::INVALID_REASON:
      return "INVALID_REASON";
    case ValidationExceptionReason::INVALID_STATUS:
      return "INVALID_STATUS";
    case ValidationExceptionReason::INVALID_AGREEMENT_ID:
      return "INVALID_AGREEMENT_ID";
    case ValidationExceptionReason::MISSING_AGREEMENT_ID:
      return "MISSING_AGREEMENT_ID";
    case ValidationExceptionReason::INVALID_CATALOG:
      return "INVALID_CATALOG";
    case ValidationExceptionReason::INVALID_FILTERS:
      return "INVALID_FILTERS";
    case ValidationExceptionReason::INVALID_FILTER_NAME:
      return "INVALID_FILTER_NAME";
    case ValidationExceptionReason::MISSING_FILTER_NAME:
      return "MISSING_FILTER_NAME";
    case ValidationExceptionReason::INVALID_FILTER_VALUES:
      return "INVALID_FILTER_VALUES";
    case ValidationExceptionReason::MISSING_FILTER_VALUES:
      return "MISSING_FILTER_VALUES";
    case ValidationExceptionReason::INVALID_SORT_BY:
      return "INVALID_SORT_BY";
    case ValidationExceptionReason::INVALID_SORT_ORDER:
      return "INVALID_SORT_ORDER";
    case ValidationExceptionReason::INVALID_NEXT_TOKEN:
      return "INVALID_NEXT_TOKEN";
    case ValidationExceptionReason::INVALID_MAX_RESULTS:
      return "INVALID_MAX_RESULTS";
    case ValidationExceptionReason::INVALID_TERM_ID:
      return "INVALID_TERM_ID";
    case ValidationExceptionReason::MISSING_TERM_ID:
      return "MISSING_TERM_ID";
    case ValidationExceptionReason::MISSING_NAME:
      return "MISSING_NAME";
    case ValidationExceptionReason::INVALID_NAME:
      return "INVALID_NAME";
    case ValidationExceptionReason::INVALID_DESCRIPTION:
      return "INVALID_DESCRIPTION";
    case ValidationExceptionReason::MISSING_CHARGE_AMOUNT:
      return "MISSING_CHARGE_AMOUNT";
    case ValidationExceptionReason::INVALID_CHARGE_AMOUNT:
      return "INVALID_CHARGE_AMOUNT";
    case ValidationExceptionReason::MISSING_PAYMENT_REQUEST_ID:
      return "MISSING_PAYMENT_REQUEST_ID";
    case ValidationExceptionReason::INVALID_PAYMENT_REQUEST_ID:
      return "INVALID_PAYMENT_REQUEST_ID";
    case ValidationExceptionReason::MISSING_PARTY_TYPE:
      return "MISSING_PARTY_TYPE";
    case ValidationExceptionReason::INVALID_PARTY_TYPE:
      return "INVALID_PARTY_TYPE";
    case ValidationExceptionReason::UNSUPPORTED_FILTERS:
      return "UNSUPPORTED_FILTERS";
    case ValidationExceptionReason::INVALID_CLIENT_TOKEN:
      return "INVALID_CLIENT_TOKEN";
    case ValidationExceptionReason::INVALID_INTENT:
      return "INVALID_INTENT";
    case ValidationExceptionReason::MISSING_INTENT:
      return "MISSING_INTENT";
    case ValidationExceptionReason::INVALID_SOURCE_AGREEMENT_IDENTIFIER:
      return "INVALID_SOURCE_AGREEMENT_IDENTIFIER";
    case ValidationExceptionReason::MISSING_SOURCE_AGREEMENT_IDENTIFIER:
      return "MISSING_SOURCE_AGREEMENT_IDENTIFIER";
    case ValidationExceptionReason::INVALID_AGREEMENT_PROPOSAL_IDENTIFIER:
      return "INVALID_AGREEMENT_PROPOSAL_IDENTIFIER";
    case ValidationExceptionReason::MISSING_AGREEMENT_PROPOSAL_IDENTIFIER:
      return "MISSING_AGREEMENT_PROPOSAL_IDENTIFIER";
    case ValidationExceptionReason::INVALID_REQUESTED_TERMS:
      return "INVALID_REQUESTED_TERMS";
    case ValidationExceptionReason::MISSING_REQUESTED_TERMS:
      return "MISSING_REQUESTED_TERMS";
    case ValidationExceptionReason::INVALID_REQUESTED_TERM_ID:
      return "INVALID_REQUESTED_TERM_ID";
    case ValidationExceptionReason::MISSING_REQUESTED_TERM_ID:
      return "MISSING_REQUESTED_TERM_ID";
    case ValidationExceptionReason::INVALID_REQUESTED_TERM_CONFIGURATION:
      return "INVALID_REQUESTED_TERM_CONFIGURATION";
    case ValidationExceptionReason::MISSING_REQUESTED_TERM_CONFIGURATION:
      return "MISSING_REQUESTED_TERM_CONFIGURATION";
    case ValidationExceptionReason::INVALID_AGREEMENT_REQUEST_ID:
      return "INVALID_AGREEMENT_REQUEST_ID";
    case ValidationExceptionReason::MISSING_AGREEMENT_REQUEST_ID:
      return "MISSING_AGREEMENT_REQUEST_ID";
    case ValidationExceptionReason::INVALID_PURCHASE_ORDERS:
      return "INVALID_PURCHASE_ORDERS";
    case ValidationExceptionReason::MISSING_PURCHASE_ORDERS:
      return "MISSING_PURCHASE_ORDERS";
    case ValidationExceptionReason::INVALID_CHARGE_ID:
      return "INVALID_CHARGE_ID";
    case ValidationExceptionReason::MISSING_CHARGE_ID:
      return "MISSING_CHARGE_ID";
    case ValidationExceptionReason::INVALID_CHARGE_REVISION:
      return "INVALID_CHARGE_REVISION";
    case ValidationExceptionReason::MISSING_CHARGE_REVISION:
      return "MISSING_CHARGE_REVISION";
    case ValidationExceptionReason::INVALID_AGREEMENT_TYPE:
      return "INVALID_AGREEMENT_TYPE";
    case ValidationExceptionReason::INVALID_PURCHASE_ORDER_REFERENCE:
      return "INVALID_PURCHASE_ORDER_REFERENCE";
    case ValidationExceptionReason::INACTIVE_AGREEMENT:
      return "INACTIVE_AGREEMENT";
    case ValidationExceptionReason::SUPERSEDED_AGREEMENT_PROPOSAL:
      return "SUPERSEDED_AGREEMENT_PROPOSAL";
    case ValidationExceptionReason::EXPIRED_AGREEMENT_PROPOSAL:
      return "EXPIRED_AGREEMENT_PROPOSAL";
    case ValidationExceptionReason::INVALID_ACCEPTOR_CONTACT:
      return "INVALID_ACCEPTOR_CONTACT";
    case ValidationExceptionReason::MISSING_MANDATORY_TERMS:
      return "MISSING_MANDATORY_TERMS";
    case ValidationExceptionReason::INCOMPATIBLE_TERMS:
      return "INCOMPATIBLE_TERMS";
    case ValidationExceptionReason::MISSING_USAGE_AGREEMENT:
      return "MISSING_USAGE_AGREEMENT";
    case ValidationExceptionReason::INVALID_INCREMENTAL_CHARGE:
      return "INVALID_INCREMENTAL_CHARGE";
    case ValidationExceptionReason::MISSING_ACCOUNT_ADDRESS:
      return "MISSING_ACCOUNT_ADDRESS";
    case ValidationExceptionReason::UNSUPPORTED_ACTION:
      return "UNSUPPORTED_ACTION";
    case ValidationExceptionReason::INVALID_REJECTION_REASON:
      return "INVALID_REJECTION_REASON";
    case ValidationExceptionReason::INVALID_PAYMENT_REQUEST_STATUS:
      return "INVALID_PAYMENT_REQUEST_STATUS";
    case ValidationExceptionReason::OTHER:
      return "OTHER";
    case ValidationExceptionReason::DUPLICATE_CHARGES:
      return "DUPLICATE_CHARGES";
    case ValidationExceptionReason::UNSUPPORTED_ACCOUNT_PLAN:
      return "UNSUPPORTED_ACCOUNT_PLAN";
    case ValidationExceptionReason::DUPLICATE_AGREEMENT_IN_ORGANIZATION:
      return "DUPLICATE_AGREEMENT_IN_ORGANIZATION";
    case ValidationExceptionReason::MISSING_AWS_LICENSE_MANAGER_USER_SUBSCRIPTIONS_SLR:
      return "MISSING_AWS_LICENSE_MANAGER_USER_SUBSCRIPTIONS_SLR";
    case ValidationExceptionReason::MISSING_PURCHASE_ORDER_REFERENCE:
      return "MISSING_PURCHASE_ORDER_REFERENCE";
    case ValidationExceptionReason::INVALID_RESOURCE_ID:
      return "INVALID_RESOURCE_ID";
    case ValidationExceptionReason::CLOSED_AGREEMENT_REQUEST:
      return "CLOSED_AGREEMENT_REQUEST";
    case ValidationExceptionReason::INCOMPATIBLE_AGREEMENT_REQUEST:
      return "INCOMPATIBLE_AGREEMENT_REQUEST";
    case ValidationExceptionReason::REJECTED_BY_AGREEMENT_APPROVAL_POLICY:
      return "REJECTED_BY_AGREEMENT_APPROVAL_POLICY";
    case ValidationExceptionReason::MISSING_PLAN_INPUTS:
      return "MISSING_PLAN_INPUTS";
    case ValidationExceptionReason::INVALID_APPROVER_OUTCOME_ID_TO_OVERRIDE:
      return "INVALID_APPROVER_OUTCOME_ID_TO_OVERRIDE";
    case ValidationExceptionReason::INVALID_NOTE:
      return "INVALID_NOTE";
    case ValidationExceptionReason::MISSING_NOTE:
      return "MISSING_NOTE";
    case ValidationExceptionReason::INVALID_APPROVAL_TYPE:
      return "INVALID_APPROVAL_TYPE";
    case ValidationExceptionReason::MISSING_SORT_BY:
      return "MISSING_SORT_BY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ValidationExceptionReasonMapper
}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
