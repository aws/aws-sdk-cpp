/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/managedblockchain/model/MemberStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ManagedBlockchain
  {
    namespace Model
    {
      namespace MemberStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t CREATE_FAILED_HASH = ConstExprHashingUtils::HashString("CREATE_FAILED");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");
        static constexpr uint32_t INACCESSIBLE_ENCRYPTION_KEY_HASH = ConstExprHashingUtils::HashString("INACCESSIBLE_ENCRYPTION_KEY");


        MemberStatus GetMemberStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return MemberStatus::CREATING;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return MemberStatus::AVAILABLE;
          }
          else if (hashCode == CREATE_FAILED_HASH)
          {
            return MemberStatus::CREATE_FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return MemberStatus::UPDATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return MemberStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return MemberStatus::DELETED;
          }
          else if (hashCode == INACCESSIBLE_ENCRYPTION_KEY_HASH)
          {
            return MemberStatus::INACCESSIBLE_ENCRYPTION_KEY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<MemberStatus>(hashCode);
          }

          return MemberStatus::NOT_SET;
        }

        Aws::String GetNameForMemberStatus(MemberStatus enumValue)
        {
          switch(enumValue)
          {
          case MemberStatus::NOT_SET:
            return {};
          case MemberStatus::CREATING:
            return "CREATING";
          case MemberStatus::AVAILABLE:
            return "AVAILABLE";
          case MemberStatus::CREATE_FAILED:
            return "CREATE_FAILED";
          case MemberStatus::UPDATING:
            return "UPDATING";
          case MemberStatus::DELETING:
            return "DELETING";
          case MemberStatus::DELETED:
            return "DELETED";
          case MemberStatus::INACCESSIBLE_ENCRYPTION_KEY:
            return "INACCESSIBLE_ENCRYPTION_KEY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace MemberStatusMapper
    } // namespace Model
  } // namespace ManagedBlockchain
} // namespace Aws
