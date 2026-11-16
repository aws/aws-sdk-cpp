/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearchmemory/model/ValidationExceptionReason.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {
namespace ValidationExceptionReasonMapper {

static const int disallowedQueryType_HASH = HashingUtils::HashString("disallowedQueryType");
static const int nonFilterableField_HASH = HashingUtils::HashString("nonFilterableField");
static const int unknownField_HASH = HashingUtils::HashString("unknownField");
static const int fieldIndexMismatch_HASH = HashingUtils::HashString("fieldIndexMismatch");
static const int queryNestingTooDeep_HASH = HashingUtils::HashString("queryNestingTooDeep");
static const int unboundedPattern_HASH = HashingUtils::HashString("unboundedPattern");
static const int queryBodyTooLarge_HASH = HashingUtils::HashString("queryBodyTooLarge");
static const int malformedQueryBody_HASH = HashingUtils::HashString("malformedQueryBody");
static const int invalidNextToken_HASH = HashingUtils::HashString("invalidNextToken");
static const int fieldValidationFailed_HASH = HashingUtils::HashString("fieldValidationFailed");
static const int unsupportedParameter_HASH = HashingUtils::HashString("unsupportedParameter");
static const int unsupportedField_HASH = HashingUtils::HashString("unsupportedField");
static const int other_HASH = HashingUtils::HashString("other");

ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == disallowedQueryType_HASH) {
    return ValidationExceptionReason::disallowedQueryType;
  } else if (hashCode == nonFilterableField_HASH) {
    return ValidationExceptionReason::nonFilterableField;
  } else if (hashCode == unknownField_HASH) {
    return ValidationExceptionReason::unknownField;
  } else if (hashCode == fieldIndexMismatch_HASH) {
    return ValidationExceptionReason::fieldIndexMismatch;
  } else if (hashCode == queryNestingTooDeep_HASH) {
    return ValidationExceptionReason::queryNestingTooDeep;
  } else if (hashCode == unboundedPattern_HASH) {
    return ValidationExceptionReason::unboundedPattern;
  } else if (hashCode == queryBodyTooLarge_HASH) {
    return ValidationExceptionReason::queryBodyTooLarge;
  } else if (hashCode == malformedQueryBody_HASH) {
    return ValidationExceptionReason::malformedQueryBody;
  } else if (hashCode == invalidNextToken_HASH) {
    return ValidationExceptionReason::invalidNextToken;
  } else if (hashCode == fieldValidationFailed_HASH) {
    return ValidationExceptionReason::fieldValidationFailed;
  } else if (hashCode == unsupportedParameter_HASH) {
    return ValidationExceptionReason::unsupportedParameter;
  } else if (hashCode == unsupportedField_HASH) {
    return ValidationExceptionReason::unsupportedField;
  } else if (hashCode == other_HASH) {
    return ValidationExceptionReason::other;
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
    case ValidationExceptionReason::disallowedQueryType:
      return "disallowedQueryType";
    case ValidationExceptionReason::nonFilterableField:
      return "nonFilterableField";
    case ValidationExceptionReason::unknownField:
      return "unknownField";
    case ValidationExceptionReason::fieldIndexMismatch:
      return "fieldIndexMismatch";
    case ValidationExceptionReason::queryNestingTooDeep:
      return "queryNestingTooDeep";
    case ValidationExceptionReason::unboundedPattern:
      return "unboundedPattern";
    case ValidationExceptionReason::queryBodyTooLarge:
      return "queryBodyTooLarge";
    case ValidationExceptionReason::malformedQueryBody:
      return "malformedQueryBody";
    case ValidationExceptionReason::invalidNextToken:
      return "invalidNextToken";
    case ValidationExceptionReason::fieldValidationFailed:
      return "fieldValidationFailed";
    case ValidationExceptionReason::unsupportedParameter:
      return "unsupportedParameter";
    case ValidationExceptionReason::unsupportedField:
      return "unsupportedField";
    case ValidationExceptionReason::other:
      return "other";
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
}  // namespace OpenSearchMemory
}  // namespace Aws
