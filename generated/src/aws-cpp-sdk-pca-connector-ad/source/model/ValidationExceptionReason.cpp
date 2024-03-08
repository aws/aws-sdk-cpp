/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/ValidationExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PcaConnectorAd
  {
    namespace Model
    {
      namespace ValidationExceptionReasonMapper
      {

        static const int FIELD_VALIDATION_FAILED_HASH = HashingUtils::HashString("FIELD_VALIDATION_FAILED");
        static const int INVALID_PERMISSION_HASH = HashingUtils::HashString("INVALID_PERMISSION");
        static const int INVALID_STATE_HASH = HashingUtils::HashString("INVALID_STATE");
        static const int MISMATCHED_CONNECTOR_HASH = HashingUtils::HashString("MISMATCHED_CONNECTOR");
        static const int MISMATCHED_VPC_HASH = HashingUtils::HashString("MISMATCHED_VPC");
        static const int NO_CLIENT_TOKEN_HASH = HashingUtils::HashString("NO_CLIENT_TOKEN");
        static const int UNKNOWN_OPERATION_HASH = HashingUtils::HashString("UNKNOWN_OPERATION");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");


        ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FIELD_VALIDATION_FAILED_HASH)
          {
            return ValidationExceptionReason::FIELD_VALIDATION_FAILED;
          }
          else if (hashCode == INVALID_PERMISSION_HASH)
          {
            return ValidationExceptionReason::INVALID_PERMISSION;
          }
          else if (hashCode == INVALID_STATE_HASH)
          {
            return ValidationExceptionReason::INVALID_STATE;
          }
          else if (hashCode == MISMATCHED_CONNECTOR_HASH)
          {
            return ValidationExceptionReason::MISMATCHED_CONNECTOR;
          }
          else if (hashCode == MISMATCHED_VPC_HASH)
          {
            return ValidationExceptionReason::MISMATCHED_VPC;
          }
          else if (hashCode == NO_CLIENT_TOKEN_HASH)
          {
            return ValidationExceptionReason::NO_CLIENT_TOKEN;
          }
          else if (hashCode == UNKNOWN_OPERATION_HASH)
          {
            return ValidationExceptionReason::UNKNOWN_OPERATION;
          }
          else if (hashCode == OTHER_HASH)
          {
            return ValidationExceptionReason::OTHER;
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
          case ValidationExceptionReason::FIELD_VALIDATION_FAILED:
            return "FIELD_VALIDATION_FAILED";
          case ValidationExceptionReason::INVALID_PERMISSION:
            return "INVALID_PERMISSION";
          case ValidationExceptionReason::INVALID_STATE:
            return "INVALID_STATE";
          case ValidationExceptionReason::MISMATCHED_CONNECTOR:
            return "MISMATCHED_CONNECTOR";
          case ValidationExceptionReason::MISMATCHED_VPC:
            return "MISMATCHED_VPC";
          case ValidationExceptionReason::NO_CLIENT_TOKEN:
            return "NO_CLIENT_TOKEN";
          case ValidationExceptionReason::UNKNOWN_OPERATION:
            return "UNKNOWN_OPERATION";
          case ValidationExceptionReason::OTHER:
            return "OTHER";
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
  } // namespace PcaConnectorAd
} // namespace Aws
