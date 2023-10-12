/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/FleetStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkLink
  {
    namespace Model
    {
      namespace FleetStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t ACTIVE_HASH = ConstExprHashingUtils::HashString("ACTIVE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t FAILED_TO_CREATE_HASH = ConstExprHashingUtils::HashString("FAILED_TO_CREATE");
        static constexpr uint32_t FAILED_TO_DELETE_HASH = ConstExprHashingUtils::HashString("FAILED_TO_DELETE");


        FleetStatus GetFleetStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return FleetStatus::CREATING;
          }
          else if (hashCode == ACTIVE_HASH)
          {
            return FleetStatus::ACTIVE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return FleetStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return FleetStatus::DELETED;
          }
          else if (hashCode == FAILED_TO_CREATE_HASH)
          {
            return FleetStatus::FAILED_TO_CREATE;
          }
          else if (hashCode == FAILED_TO_DELETE_HASH)
          {
            return FleetStatus::FAILED_TO_DELETE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FleetStatus>(hashCode);
          }

          return FleetStatus::NOT_SET;
        }

        Aws::String GetNameForFleetStatus(FleetStatus enumValue)
        {
          switch(enumValue)
          {
          case FleetStatus::NOT_SET:
            return {};
          case FleetStatus::CREATING:
            return "CREATING";
          case FleetStatus::ACTIVE:
            return "ACTIVE";
          case FleetStatus::DELETING:
            return "DELETING";
          case FleetStatus::DELETED:
            return "DELETED";
          case FleetStatus::FAILED_TO_CREATE:
            return "FAILED_TO_CREATE";
          case FleetStatus::FAILED_TO_DELETE:
            return "FAILED_TO_DELETE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FleetStatusMapper
    } // namespace Model
  } // namespace WorkLink
} // namespace Aws
