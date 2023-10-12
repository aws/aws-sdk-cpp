/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/AttachmentState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkManager
  {
    namespace Model
    {
      namespace AttachmentStateMapper
      {

        static constexpr uint32_t REJECTED_HASH = ConstExprHashingUtils::HashString("REJECTED");
        static constexpr uint32_t PENDING_ATTACHMENT_ACCEPTANCE_HASH = ConstExprHashingUtils::HashString("PENDING_ATTACHMENT_ACCEPTANCE");
        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t AVAILABLE_HASH = ConstExprHashingUtils::HashString("AVAILABLE");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t PENDING_NETWORK_UPDATE_HASH = ConstExprHashingUtils::HashString("PENDING_NETWORK_UPDATE");
        static constexpr uint32_t PENDING_TAG_ACCEPTANCE_HASH = ConstExprHashingUtils::HashString("PENDING_TAG_ACCEPTANCE");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");


        AttachmentState GetAttachmentStateForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REJECTED_HASH)
          {
            return AttachmentState::REJECTED;
          }
          else if (hashCode == PENDING_ATTACHMENT_ACCEPTANCE_HASH)
          {
            return AttachmentState::PENDING_ATTACHMENT_ACCEPTANCE;
          }
          else if (hashCode == CREATING_HASH)
          {
            return AttachmentState::CREATING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AttachmentState::FAILED;
          }
          else if (hashCode == AVAILABLE_HASH)
          {
            return AttachmentState::AVAILABLE;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return AttachmentState::UPDATING;
          }
          else if (hashCode == PENDING_NETWORK_UPDATE_HASH)
          {
            return AttachmentState::PENDING_NETWORK_UPDATE;
          }
          else if (hashCode == PENDING_TAG_ACCEPTANCE_HASH)
          {
            return AttachmentState::PENDING_TAG_ACCEPTANCE;
          }
          else if (hashCode == DELETING_HASH)
          {
            return AttachmentState::DELETING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttachmentState>(hashCode);
          }

          return AttachmentState::NOT_SET;
        }

        Aws::String GetNameForAttachmentState(AttachmentState enumValue)
        {
          switch(enumValue)
          {
          case AttachmentState::NOT_SET:
            return {};
          case AttachmentState::REJECTED:
            return "REJECTED";
          case AttachmentState::PENDING_ATTACHMENT_ACCEPTANCE:
            return "PENDING_ATTACHMENT_ACCEPTANCE";
          case AttachmentState::CREATING:
            return "CREATING";
          case AttachmentState::FAILED:
            return "FAILED";
          case AttachmentState::AVAILABLE:
            return "AVAILABLE";
          case AttachmentState::UPDATING:
            return "UPDATING";
          case AttachmentState::PENDING_NETWORK_UPDATE:
            return "PENDING_NETWORK_UPDATE";
          case AttachmentState::PENDING_TAG_ACCEPTANCE:
            return "PENDING_TAG_ACCEPTANCE";
          case AttachmentState::DELETING:
            return "DELETING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttachmentStateMapper
    } // namespace Model
  } // namespace NetworkManager
} // namespace Aws
