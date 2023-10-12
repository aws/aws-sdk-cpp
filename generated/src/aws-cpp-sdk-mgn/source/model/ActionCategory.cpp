/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ActionCategory.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace mgn
  {
    namespace Model
    {
      namespace ActionCategoryMapper
      {

        static constexpr uint32_t DISASTER_RECOVERY_HASH = ConstExprHashingUtils::HashString("DISASTER_RECOVERY");
        static constexpr uint32_t OPERATING_SYSTEM_HASH = ConstExprHashingUtils::HashString("OPERATING_SYSTEM");
        static constexpr uint32_t LICENSE_AND_SUBSCRIPTION_HASH = ConstExprHashingUtils::HashString("LICENSE_AND_SUBSCRIPTION");
        static constexpr uint32_t VALIDATION_HASH = ConstExprHashingUtils::HashString("VALIDATION");
        static constexpr uint32_t OBSERVABILITY_HASH = ConstExprHashingUtils::HashString("OBSERVABILITY");
        static constexpr uint32_t SECURITY_HASH = ConstExprHashingUtils::HashString("SECURITY");
        static constexpr uint32_t NETWORKING_HASH = ConstExprHashingUtils::HashString("NETWORKING");
        static constexpr uint32_t CONFIGURATION_HASH = ConstExprHashingUtils::HashString("CONFIGURATION");
        static constexpr uint32_t BACKUP_HASH = ConstExprHashingUtils::HashString("BACKUP");
        static constexpr uint32_t OTHER_HASH = ConstExprHashingUtils::HashString("OTHER");


        ActionCategory GetActionCategoryForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISASTER_RECOVERY_HASH)
          {
            return ActionCategory::DISASTER_RECOVERY;
          }
          else if (hashCode == OPERATING_SYSTEM_HASH)
          {
            return ActionCategory::OPERATING_SYSTEM;
          }
          else if (hashCode == LICENSE_AND_SUBSCRIPTION_HASH)
          {
            return ActionCategory::LICENSE_AND_SUBSCRIPTION;
          }
          else if (hashCode == VALIDATION_HASH)
          {
            return ActionCategory::VALIDATION;
          }
          else if (hashCode == OBSERVABILITY_HASH)
          {
            return ActionCategory::OBSERVABILITY;
          }
          else if (hashCode == SECURITY_HASH)
          {
            return ActionCategory::SECURITY;
          }
          else if (hashCode == NETWORKING_HASH)
          {
            return ActionCategory::NETWORKING;
          }
          else if (hashCode == CONFIGURATION_HASH)
          {
            return ActionCategory::CONFIGURATION;
          }
          else if (hashCode == BACKUP_HASH)
          {
            return ActionCategory::BACKUP;
          }
          else if (hashCode == OTHER_HASH)
          {
            return ActionCategory::OTHER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionCategory>(hashCode);
          }

          return ActionCategory::NOT_SET;
        }

        Aws::String GetNameForActionCategory(ActionCategory enumValue)
        {
          switch(enumValue)
          {
          case ActionCategory::NOT_SET:
            return {};
          case ActionCategory::DISASTER_RECOVERY:
            return "DISASTER_RECOVERY";
          case ActionCategory::OPERATING_SYSTEM:
            return "OPERATING_SYSTEM";
          case ActionCategory::LICENSE_AND_SUBSCRIPTION:
            return "LICENSE_AND_SUBSCRIPTION";
          case ActionCategory::VALIDATION:
            return "VALIDATION";
          case ActionCategory::OBSERVABILITY:
            return "OBSERVABILITY";
          case ActionCategory::SECURITY:
            return "SECURITY";
          case ActionCategory::NETWORKING:
            return "NETWORKING";
          case ActionCategory::CONFIGURATION:
            return "CONFIGURATION";
          case ActionCategory::BACKUP:
            return "BACKUP";
          case ActionCategory::OTHER:
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

      } // namespace ActionCategoryMapper
    } // namespace Model
  } // namespace mgn
} // namespace Aws
