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

        static const int DISASTER_RECOVERY_HASH = HashingUtils::HashString("DISASTER_RECOVERY");
        static const int OPERATING_SYSTEM_HASH = HashingUtils::HashString("OPERATING_SYSTEM");
        static const int LICENSE_AND_SUBSCRIPTION_HASH = HashingUtils::HashString("LICENSE_AND_SUBSCRIPTION");
        static const int VALIDATION_HASH = HashingUtils::HashString("VALIDATION");
        static const int OBSERVABILITY_HASH = HashingUtils::HashString("OBSERVABILITY");
        static const int SECURITY_HASH = HashingUtils::HashString("SECURITY");
        static const int NETWORKING_HASH = HashingUtils::HashString("NETWORKING");
        static const int CONFIGURATION_HASH = HashingUtils::HashString("CONFIGURATION");
        static const int BACKUP_HASH = HashingUtils::HashString("BACKUP");
        static const int OTHER_HASH = HashingUtils::HashString("OTHER");


        ActionCategory GetActionCategoryForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
