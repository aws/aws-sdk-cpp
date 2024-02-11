/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/OrganizationSharingStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WellArchitected
  {
    namespace Model
    {
      namespace OrganizationSharingStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        OrganizationSharingStatus GetOrganizationSharingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return OrganizationSharingStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return OrganizationSharingStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrganizationSharingStatus>(hashCode);
          }

          return OrganizationSharingStatus::NOT_SET;
        }

        Aws::String GetNameForOrganizationSharingStatus(OrganizationSharingStatus enumValue)
        {
          switch(enumValue)
          {
          case OrganizationSharingStatus::NOT_SET:
            return {};
          case OrganizationSharingStatus::ENABLED:
            return "ENABLED";
          case OrganizationSharingStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OrganizationSharingStatusMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
