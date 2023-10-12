/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/network-firewall/model/AttachmentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NetworkFirewall
  {
    namespace Model
    {
      namespace AttachmentStatusMapper
      {

        static constexpr uint32_t CREATING_HASH = ConstExprHashingUtils::HashString("CREATING");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t FAILED_HASH = ConstExprHashingUtils::HashString("FAILED");
        static constexpr uint32_t ERROR__HASH = ConstExprHashingUtils::HashString("ERROR");
        static constexpr uint32_t SCALING_HASH = ConstExprHashingUtils::HashString("SCALING");
        static constexpr uint32_t READY_HASH = ConstExprHashingUtils::HashString("READY");


        AttachmentStatus GetAttachmentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATING_HASH)
          {
            return AttachmentStatus::CREATING;
          }
          else if (hashCode == DELETING_HASH)
          {
            return AttachmentStatus::DELETING;
          }
          else if (hashCode == FAILED_HASH)
          {
            return AttachmentStatus::FAILED;
          }
          else if (hashCode == ERROR__HASH)
          {
            return AttachmentStatus::ERROR_;
          }
          else if (hashCode == SCALING_HASH)
          {
            return AttachmentStatus::SCALING;
          }
          else if (hashCode == READY_HASH)
          {
            return AttachmentStatus::READY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AttachmentStatus>(hashCode);
          }

          return AttachmentStatus::NOT_SET;
        }

        Aws::String GetNameForAttachmentStatus(AttachmentStatus enumValue)
        {
          switch(enumValue)
          {
          case AttachmentStatus::NOT_SET:
            return {};
          case AttachmentStatus::CREATING:
            return "CREATING";
          case AttachmentStatus::DELETING:
            return "DELETING";
          case AttachmentStatus::FAILED:
            return "FAILED";
          case AttachmentStatus::ERROR_:
            return "ERROR";
          case AttachmentStatus::SCALING:
            return "SCALING";
          case AttachmentStatus::READY:
            return "READY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AttachmentStatusMapper
    } // namespace Model
  } // namespace NetworkFirewall
} // namespace Aws
