/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RowLevelPermissionPolicy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace RowLevelPermissionPolicyMapper
      {

        static const int GRANT_ACCESS_HASH = HashingUtils::HashString("GRANT_ACCESS");
        static const int DENY_ACCESS_HASH = HashingUtils::HashString("DENY_ACCESS");


        RowLevelPermissionPolicy GetRowLevelPermissionPolicyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == GRANT_ACCESS_HASH)
          {
            return RowLevelPermissionPolicy::GRANT_ACCESS;
          }
          else if (hashCode == DENY_ACCESS_HASH)
          {
            return RowLevelPermissionPolicy::DENY_ACCESS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RowLevelPermissionPolicy>(hashCode);
          }

          return RowLevelPermissionPolicy::NOT_SET;
        }

        Aws::String GetNameForRowLevelPermissionPolicy(RowLevelPermissionPolicy enumValue)
        {
          switch(enumValue)
          {
          case RowLevelPermissionPolicy::GRANT_ACCESS:
            return "GRANT_ACCESS";
          case RowLevelPermissionPolicy::DENY_ACCESS:
            return "DENY_ACCESS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RowLevelPermissionPolicyMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
