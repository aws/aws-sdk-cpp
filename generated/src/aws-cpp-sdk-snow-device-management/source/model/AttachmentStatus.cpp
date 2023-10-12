/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/AttachmentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SnowDeviceManagement
  {
    namespace Model
    {
      namespace AttachmentStatusMapper
      {

        static constexpr uint32_t ATTACHING_HASH = ConstExprHashingUtils::HashString("ATTACHING");
        static constexpr uint32_t ATTACHED_HASH = ConstExprHashingUtils::HashString("ATTACHED");
        static constexpr uint32_t DETACHING_HASH = ConstExprHashingUtils::HashString("DETACHING");
        static constexpr uint32_t DETACHED_HASH = ConstExprHashingUtils::HashString("DETACHED");


        AttachmentStatus GetAttachmentStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ATTACHING_HASH)
          {
            return AttachmentStatus::ATTACHING;
          }
          else if (hashCode == ATTACHED_HASH)
          {
            return AttachmentStatus::ATTACHED;
          }
          else if (hashCode == DETACHING_HASH)
          {
            return AttachmentStatus::DETACHING;
          }
          else if (hashCode == DETACHED_HASH)
          {
            return AttachmentStatus::DETACHED;
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
          case AttachmentStatus::ATTACHING:
            return "ATTACHING";
          case AttachmentStatus::ATTACHED:
            return "ATTACHED";
          case AttachmentStatus::DETACHING:
            return "DETACHING";
          case AttachmentStatus::DETACHED:
            return "DETACHED";
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
  } // namespace SnowDeviceManagement
} // namespace Aws
