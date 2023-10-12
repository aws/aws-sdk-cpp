/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/EnvironmentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MWAA
  {
    namespace Model
    {
      namespace EnvironmentStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t UNAVAILABLE_HASH = ConstExprHashingUtils::HashString("UNAVAILABLE");
        static constexpr uint32_t UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED");
        static constexpr uint32_t ROLLING_BACK_HASH = ConstExprHashingUtils::HashString("ROLLING_BACK");
        static constexpr uint32_t CREATING_SNAPSHOT_HASH = ConstExprHashingUtils::HashString("CREATING_SNAPSHOT");


        EnvironmentStatus GetEnvironmentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return EnvironmentStatus::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return EnvironmentStatus::CREATE_FAILED;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return EnvironmentStatus::AVAILABLE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return EnvironmentStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return EnvironmentStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return EnvironmentStatus::DELETED;
          }
          else if (hashCode == UNAVAILABLE_HASH)
          {
            return EnvironmentStatus::UNAVAILABLE;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return EnvironmentStatus::UPDATE_FAILED;
          }
          else if (hashCode == ROLLING_BACK_HASH)
          {
            return EnvironmentStatus::ROLLING_BACK;
          }
          else if (hashCode == CREATING_SNAPSHOT_HASH)
          {
            return EnvironmentStatus::CREATING_SNAPSHOT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnvironmentStatus>(hashCode);
          }

          return EnvironmentStatus::NOT_SET;
        }

        Aws::String GetNameForEnvironmentStatus(EnvironmentStatus enumValue)
        {
          switch(enumValue)
          {
          case EnvironmentStatus::NOT_SET:
            return {};
          case EnvironmentStatus::CREATING:
            return "CREATING";
          case EnvironmentStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case EnvironmentStatus::AVAILABLE:
            return "AVAILABLE";
          case EnvironmentStatus::UPDATING:
            return "UPDATING";
          case EnvironmentStatus::DELETING:
            return "DELETING";
          case EnvironmentStatus::DELETED:
            return "DELETED";
          case EnvironmentStatus::UNAVAILABLE:
            return "UNAVAILABLE";
          case EnvironmentStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case EnvironmentStatus::ROLLING_BACK:
            return "ROLLING_BACK";
          case EnvironmentStatus::CREATING_SNAPSHOT:
            return "CREATING_SNAPSHOT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnvironmentStatusMapper
    } // namespace Model
  } // namespace MWAA
} // namespace Aws
