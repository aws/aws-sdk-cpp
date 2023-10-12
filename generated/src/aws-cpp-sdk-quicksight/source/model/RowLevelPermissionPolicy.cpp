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

        static constexpr uint32_t GRANT_ACCESS_HASH = ConstExprHashingUtils::HashString("GRANT_ACCESS");
        static constexpr uint32_t DENY_ACCESS_HASH = ConstExprHashingUtils::HashString("DENY_ACCESS");


        RowLevelPermissionPolicy GetRowLevelPermissionPolicyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case RowLevelPermissionPolicy::NOT_SET:
            return {};
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
