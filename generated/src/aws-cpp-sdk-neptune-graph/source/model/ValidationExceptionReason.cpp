/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/ValidationExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NeptuneGraph
  {
    namespace Model
    {
      namespace ValidationExceptionReasonMapper
      {

        static const int CONSTRAINT_VIOLATION_HASH = HashingUtils::HashString("CONSTRAINT_VIOLATION");
        static const int ILLEGAL_ARGUMENT_HASH = HashingUtils::HashString("ILLEGAL_ARGUMENT");
        static const int MALFORMED_QUERY_HASH = HashingUtils::HashString("MALFORMED_QUERY");
        static const int QUERY_CANCELLED_HASH = HashingUtils::HashString("QUERY_CANCELLED");
        static const int QUERY_TOO_LARGE_HASH = HashingUtils::HashString("QUERY_TOO_LARGE");
        static const int UNSUPPORTED_OPERATION_HASH = HashingUtils::HashString("UNSUPPORTED_OPERATION");
        static const int BAD_REQUEST_HASH = HashingUtils::HashString("BAD_REQUEST");


        ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONSTRAINT_VIOLATION_HASH)
          {
            return ValidationExceptionReason::CONSTRAINT_VIOLATION;
          }
          else if (hashCode == ILLEGAL_ARGUMENT_HASH)
          {
            return ValidationExceptionReason::ILLEGAL_ARGUMENT;
          }
          else if (hashCode == MALFORMED_QUERY_HASH)
          {
            return ValidationExceptionReason::MALFORMED_QUERY;
          }
          else if (hashCode == QUERY_CANCELLED_HASH)
          {
            return ValidationExceptionReason::QUERY_CANCELLED;
          }
          else if (hashCode == QUERY_TOO_LARGE_HASH)
          {
            return ValidationExceptionReason::QUERY_TOO_LARGE;
          }
          else if (hashCode == UNSUPPORTED_OPERATION_HASH)
          {
            return ValidationExceptionReason::UNSUPPORTED_OPERATION;
          }
          else if (hashCode == BAD_REQUEST_HASH)
          {
            return ValidationExceptionReason::BAD_REQUEST;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ValidationExceptionReason>(hashCode);
          }

          return ValidationExceptionReason::NOT_SET;
        }

        Aws::String GetNameForValidationExceptionReason(ValidationExceptionReason enumValue)
        {
          switch(enumValue)
          {
          case ValidationExceptionReason::NOT_SET:
            return {};
          case ValidationExceptionReason::CONSTRAINT_VIOLATION:
            return "CONSTRAINT_VIOLATION";
          case ValidationExceptionReason::ILLEGAL_ARGUMENT:
            return "ILLEGAL_ARGUMENT";
          case ValidationExceptionReason::MALFORMED_QUERY:
            return "MALFORMED_QUERY";
          case ValidationExceptionReason::QUERY_CANCELLED:
            return "QUERY_CANCELLED";
          case ValidationExceptionReason::QUERY_TOO_LARGE:
            return "QUERY_TOO_LARGE";
          case ValidationExceptionReason::UNSUPPORTED_OPERATION:
            return "UNSUPPORTED_OPERATION";
          case ValidationExceptionReason::BAD_REQUEST:
            return "BAD_REQUEST";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ValidationExceptionReasonMapper
    } // namespace Model
  } // namespace NeptuneGraph
} // namespace Aws
