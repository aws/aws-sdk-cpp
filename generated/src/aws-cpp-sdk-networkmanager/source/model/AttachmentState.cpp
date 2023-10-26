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

        static const int REJECTED_HASH = HashingUtils::HashString("REJECTED");
        static const int PENDING_ATTACHMENT_ACCEPTANCE_HASH = HashingUtils::HashString("PENDING_ATTACHMENT_ACCEPTANCE");
        static const int CREATING_HASH = HashingUtils::HashString("CREATING");
        static const int FAILED_HASH = HashingUtils::HashString("FAILED");
        static const int AVAILABLE_HASH = HashingUtils::HashString("AVAILABLE");
        static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
        static const int PENDING_NETWORK_UPDATE_HASH = HashingUtils::HashString("PENDING_NETWORK_UPDATE");
        static const int PENDING_TAG_ACCEPTANCE_HASH = HashingUtils::HashString("PENDING_TAG_ACCEPTANCE");
        static const int DELETING_HASH = HashingUtils::HashString("DELETING");


        AttachmentState GetAttachmentStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
