/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/CentralizationFailureReason.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ObservabilityAdmin
  {
    namespace Model
    {
      namespace CentralizationFailureReasonMapper
      {

        static const int TRUSTED_ACCESS_NOT_ENABLED_HASH = HashingUtils::HashString("TRUSTED_ACCESS_NOT_ENABLED");
        static const int DESTINATION_ACCOUNT_NOT_IN_ORGANIZATION_HASH = HashingUtils::HashString("DESTINATION_ACCOUNT_NOT_IN_ORGANIZATION");
        static const int INTERNAL_SERVER_ERROR_HASH = HashingUtils::HashString("INTERNAL_SERVER_ERROR");


        CentralizationFailureReason GetCentralizationFailureReasonForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == TRUSTED_ACCESS_NOT_ENABLED_HASH)
          {
            return CentralizationFailureReason::TRUSTED_ACCESS_NOT_ENABLED;
          }
          else if (hashCode == DESTINATION_ACCOUNT_NOT_IN_ORGANIZATION_HASH)
          {
            return CentralizationFailureReason::DESTINATION_ACCOUNT_NOT_IN_ORGANIZATION;
          }
          else if (hashCode == INTERNAL_SERVER_ERROR_HASH)
          {
            return CentralizationFailureReason::INTERNAL_SERVER_ERROR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CentralizationFailureReason>(hashCode);
          }

          return CentralizationFailureReason::NOT_SET;
        }

        Aws::String GetNameForCentralizationFailureReason(CentralizationFailureReason enumValue)
        {
          switch(enumValue)
          {
          case CentralizationFailureReason::NOT_SET:
            return {};
          case CentralizationFailureReason::TRUSTED_ACCESS_NOT_ENABLED:
            return "TRUSTED_ACCESS_NOT_ENABLED";
          case CentralizationFailureReason::DESTINATION_ACCOUNT_NOT_IN_ORGANIZATION:
            return "DESTINATION_ACCOUNT_NOT_IN_ORGANIZATION";
          case CentralizationFailureReason::INTERNAL_SERVER_ERROR:
            return "INTERNAL_SERVER_ERROR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CentralizationFailureReasonMapper
    } // namespace Model
  } // namespace ObservabilityAdmin
} // namespace Aws
