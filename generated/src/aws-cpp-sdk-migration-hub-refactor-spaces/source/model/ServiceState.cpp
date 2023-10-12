/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/ServiceState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MigrationHubRefactorSpaces
  {
    namespace Model
    {
      namespace ServiceStateMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");


        ServiceState GetServiceStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return ServiceState::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return ServiceState::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ServiceState::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return ServiceState::FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ServiceState>(hashCode);
          }

          return ServiceState::NOT_SET;
        }

        Aws::String GetNameForServiceState(ServiceState enumValue)
        {
          switch(enumValue)
          {
          case ServiceState::NOT_SET:
            return {};
          case ServiceState::CREATING:
            return "CREATING";
          case ServiceState::ACTIVE:
            return "ACTIVE";
          case ServiceState::DELETING:
            return "DELETING";
          case ServiceState::FAILED:
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

      } // namespace ServiceStateMapper
    } // namespace Model
  } // namespace MigrationHubRefactorSpaces
} // namespace Aws
