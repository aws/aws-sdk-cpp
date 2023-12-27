/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/OrganizationConfigurationStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace OrganizationConfigurationStatusMapper
      {

        static const int PENDING_HASH = HashingUtils::HashString("PENDING");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");


        OrganizationConfigurationStatus GetOrganizationConfigurationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PENDING_HASH)
          {
            return OrganizationConfigurationStatus::PENDING;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return OrganizationConfigurationStatus::ENABLED;
          }
          else if (hashCode == FAILED_HASH)
          {
            return OrganizationConfigurationStatus::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrganizationConfigurationStatus>(hashCode);
          }

          return OrganizationConfigurationStatus::NOT_SET;
        }

        Aws::String GetNameForOrganizationConfigurationStatus(OrganizationConfigurationStatus enumValue)
        {
          switch(enumValue)
          {
          case OrganizationConfigurationStatus::NOT_SET:
            return {};
          case OrganizationConfigurationStatus::PENDING:
            return "PENDING";
          case OrganizationConfigurationStatus::ENABLED:
            return "ENABLED";
          case OrganizationConfigurationStatus::FAILED:
            return "FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrganizationConfigurationStatusMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
