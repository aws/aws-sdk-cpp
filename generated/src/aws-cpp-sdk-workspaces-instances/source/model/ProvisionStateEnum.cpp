/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/ProvisionStateEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkspacesInstances
  {
    namespace Model
    {
      namespace ProvisionStateEnumMapper
      {

        static const int ALLOCATING_HASH = HashingUtils::HashString("ALLOCATING");
        static const int ALLOCATED_HASH = HashingUtils::HashString("ALLOCATED");
        static const int DEALLOCATING_HASH = HashingUtils::HashString("DEALLOCATING");
        static const int DEALLOCATED_HASH = HashingUtils::HashString("DEALLOCATED");
        static const int ERROR_ALLOCATING_HASH = HashingUtils::HashString("ERROR_ALLOCATING");
        static const int ERROR_DEALLOCATING_HASH = HashingUtils::HashString("ERROR_DEALLOCATING");


        ProvisionStateEnum GetProvisionStateEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALLOCATING_HASH)
          {
            return ProvisionStateEnum::ALLOCATING;
          }
          else if (hashCode == ALLOCATED_HASH)
          {
            return ProvisionStateEnum::ALLOCATED;
          }
          else if (hashCode == DEALLOCATING_HASH)
          {
            return ProvisionStateEnum::DEALLOCATING;
          }
          else if (hashCode == DEALLOCATED_HASH)
          {
            return ProvisionStateEnum::DEALLOCATED;
          }
          else if (hashCode == ERROR_ALLOCATING_HASH)
          {
            return ProvisionStateEnum::ERROR_ALLOCATING;
          }
          else if (hashCode == ERROR_DEALLOCATING_HASH)
          {
            return ProvisionStateEnum::ERROR_DEALLOCATING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ProvisionStateEnum>(hashCode);
          }

          return ProvisionStateEnum::NOT_SET;
        }

        Aws::String GetNameForProvisionStateEnum(ProvisionStateEnum enumValue)
        {
          switch(enumValue)
          {
          case ProvisionStateEnum::NOT_SET:
            return {};
          case ProvisionStateEnum::ALLOCATING:
            return "ALLOCATING";
          case ProvisionStateEnum::ALLOCATED:
            return "ALLOCATED";
          case ProvisionStateEnum::DEALLOCATING:
            return "DEALLOCATING";
          case ProvisionStateEnum::DEALLOCATED:
            return "DEALLOCATED";
          case ProvisionStateEnum::ERROR_ALLOCATING:
            return "ERROR_ALLOCATING";
          case ProvisionStateEnum::ERROR_DEALLOCATING:
            return "ERROR_DEALLOCATING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ProvisionStateEnumMapper
    } // namespace Model
  } // namespace WorkspacesInstances
} // namespace Aws
