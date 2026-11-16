/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>

namespace Aws {
namespace OpenSearchMemory {
namespace Model {
enum class ValidationExceptionReason {
  NOT_SET,
  disallowedQueryType,
  nonFilterableField,
  unknownField,
  fieldIndexMismatch,
  queryNestingTooDeep,
  unboundedPattern,
  queryBodyTooLarge,
  malformedQueryBody,
  invalidNextToken,
  fieldValidationFailed,
  unsupportedParameter,
  unsupportedField,
  other
};

namespace ValidationExceptionReasonMapper {
AWS_OPENSEARCHMEMORY_API ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name);

AWS_OPENSEARCHMEMORY_API Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason value);
}  // namespace ValidationExceptionReasonMapper
}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
