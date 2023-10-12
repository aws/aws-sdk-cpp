/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CustomEngineVersionStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace CustomEngineVersionStatusMapper
      {

        static constexpr uint32_t available_HASH = ConstExprHashingUtils::HashString("available");
        static constexpr uint32_t inactive_HASH = ConstExprHashingUtils::HashString("inactive");
        static constexpr uint32_t inactive_except_restore_HASH = ConstExprHashingUtils::HashString("inactive-except-restore");


        CustomEngineVersionStatus GetCustomEngineVersionStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == available_HASH)
          {
            return CustomEngineVersionStatus::available;
          }
          else if (hashCode == inactive_HASH)
          {
            return CustomEngineVersionStatus::inactive;
          }
          else if (hashCode == inactive_except_restore_HASH)
          {
            return CustomEngineVersionStatus::inactive_except_restore;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CustomEngineVersionStatus>(hashCode);
          }

          return CustomEngineVersionStatus::NOT_SET;
        }

        Aws::String GetNameForCustomEngineVersionStatus(CustomEngineVersionStatus enumValue)
        {
          switch(enumValue)
          {
          case CustomEngineVersionStatus::NOT_SET:
            return {};
          case CustomEngineVersionStatus::available:
            return "available";
          case CustomEngineVersionStatus::inactive:
            return "inactive";
          case CustomEngineVersionStatus::inactive_except_restore:
            return "inactive-except-restore";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CustomEngineVersionStatusMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
