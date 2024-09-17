/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-scep/model/ValidationExceptionReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace PcaConnectorScep
  {
    namespace Model
    {
      namespace ValidationExceptionReasonMapper
      {

        static const int CA_CERT_VALIDITY_TOO_SHORT_HASH = HashingUtils::HashString("CA_CERT_VALIDITY_TOO_SHORT");
        static const int INVALID_CA_USAGE_MODE_HASH = HashingUtils::HashString("INVALID_CA_USAGE_MODE");
        static const int INVALID_CONNECTOR_TYPE_HASH = HashingUtils::HashString("INVALID_CONNECTOR_TYPE");
        static const int INVALID_STATE_HASH = HashingUtils::HashString("INVALID_STATE");
        static const int NO_CLIENT_TOKEN_HASH = HashingUtils::HashString("NO_CLIENT_TOKEN");
        static const int UNKNOWN_OPERATION_HASH = HashingUtils::HashString("UNKNOWN_OPERATION");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");


        ValidationExceptionReason GetValidationExceptionReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CA_CERT_VALIDITY_TOO_SHORT_HASH)
          {
            return ValidationExceptionReason::CA_CERT_VALIDITY_TOO_SHORT;
          }
          else if (hashCode == INVALID_CA_USAGE_MODE_HASH)
          {
            return ValidationExceptionReason::INVALID_CA_USAGE_MODE;
          }
          else if (hashCode == INVALID_CONNECTOR_TYPE_HASH)
          {
            return ValidationExceptionReason::INVALID_CONNECTOR_TYPE;
          }
          else if (hashCode == INVALID_STATE_HASH)
          {
            return ValidationExceptionReason::INVALID_STATE;
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
          case ValidationExceptionReason::CA_CERT_VALIDITY_TOO_SHORT:
            return "CA_CERT_VALIDITY_TOO_SHORT";
          case ValidationExceptionReason::INVALID_CA_USAGE_MODE:
            return "INVALID_CA_USAGE_MODE";
          case ValidationExceptionReason::INVALID_CONNECTOR_TYPE:
            return "INVALID_CONNECTOR_TYPE";
          case ValidationExceptionReason::INVALID_STATE:
            return "INVALID_STATE";
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
  } // namespace PcaConnectorScep
} // namespace Aws
