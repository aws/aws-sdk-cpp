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

static const int INVALID_AGREEMENT_ID_HASH = HashingUtils::HashString("INVALID_AGREEMENT_ID");
static const int MISSING_AGREEMENT_ID_HASH = HashingUtils::HashString("MISSING_AGREEMENT_ID");
static const int INVALID_CATALOG_HASH = HashingUtils::HashString("INVALID_CATALOG");
static const int INVALID_FILTER_NAME_HASH = HashingUtils::HashString("INVALID_FILTER_NAME");
static const int INVALID_FILTER_VALUES_HASH = HashingUtils::HashString("INVALID_FILTER_VALUES");
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
static const int INVALID_REJECTION_REASON_HASH = HashingUtils::HashString("INVALID_REJECTION_REASON");
static const int INVALID_PAYMENT_REQUEST_STATUS_HASH = HashingUtils::HashString("INVALID_PAYMENT_REQUEST_STATUS");
static const int OTHER_HASH = HashingUtils::HashString("OTHER");

ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == INVALID_AGREEMENT_ID_HASH) {
    return ValidationExceptionReason::INVALID_AGREEMENT_ID;
  } else if (hashCode == MISSING_AGREEMENT_ID_HASH) {
    return ValidationExceptionReason::MISSING_AGREEMENT_ID;
  } else if (hashCode == INVALID_CATALOG_HASH) {
    return ValidationExceptionReason::INVALID_CATALOG;
  } else if (hashCode == INVALID_FILTER_NAME_HASH) {
    return ValidationExceptionReason::INVALID_FILTER_NAME;
  } else if (hashCode == INVALID_FILTER_VALUES_HASH) {
    return ValidationExceptionReason::INVALID_FILTER_VALUES;
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
  } else if (hashCode == INVALID_REJECTION_REASON_HASH) {
    return ValidationExceptionReason::INVALID_REJECTION_REASON;
  } else if (hashCode == INVALID_PAYMENT_REQUEST_STATUS_HASH) {
    return ValidationExceptionReason::INVALID_PAYMENT_REQUEST_STATUS;
  } else if (hashCode == OTHER_HASH) {
    return ValidationExceptionReason::OTHER;
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
    case ValidationExceptionReason::INVALID_AGREEMENT_ID:
      return "INVALID_AGREEMENT_ID";
    case ValidationExceptionReason::MISSING_AGREEMENT_ID:
      return "MISSING_AGREEMENT_ID";
    case ValidationExceptionReason::INVALID_CATALOG:
      return "INVALID_CATALOG";
    case ValidationExceptionReason::INVALID_FILTER_NAME:
      return "INVALID_FILTER_NAME";
    case ValidationExceptionReason::INVALID_FILTER_VALUES:
      return "INVALID_FILTER_VALUES";
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
    case ValidationExceptionReason::INVALID_REJECTION_REASON:
      return "INVALID_REJECTION_REASON";
    case ValidationExceptionReason::INVALID_PAYMENT_REQUEST_STATUS:
      return "INVALID_PAYMENT_REQUEST_STATUS";
    case ValidationExceptionReason::OTHER:
      return "OTHER";
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
