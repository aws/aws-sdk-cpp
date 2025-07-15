/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/repostspace/model/ChannelStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace repostspace
  {
    namespace Model
    {
      namespace ChannelStatusMapper
      {

        static const int CREATED_HASH = HashingUtils::HashString("CREATED");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int CREATE_FAILED_HASH = HashingUtils::HashString("CREATE_FAILED");
        static const int DELETED_HASH = HashingUtils::HashString("DELETED");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");
        static const int DELETE_FAILED_HASH = HashingUtils::HashString("DELETE_FAILED");


        ChannelStatus GetChannelStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return ChannelStatus::CREATED;
          }
          else if (hashCode == CREATING_HASH)
          {
            return ChannelStatus::CREATING;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return ChannelStatus::CREATE_FAILED;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ChannelStatus::DELETED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ChannelStatus::DELETING;
          }
          else if (hashCode == DELETE_FAILED_HASH)
          {
            return ChannelStatus::DELETE_FAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ChannelStatus>(hashCode);
          }

          return ChannelStatus::NOT_SET;
        }

        Aws::String GetNameForChannelStatus(ChannelStatus enumValue)
        {
          switch(enumValue)
          {
          case ChannelStatus::NOT_SET:
            return {};
          case ChannelStatus::CREATED:
            return "CREATED";
          case ChannelStatus::CREATING:
            return "CREATING";
          case ChannelStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case ChannelStatus::DELETED:
            return "DELETED";
          case ChannelStatus::DELETING:
            return "DELETING";
          case ChannelStatus::DELETE_FAILED:
            return "DELETE_FAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ChannelStatusMapper
    } // namespace Model
  } // namespace repostspace
} // namespace Aws
