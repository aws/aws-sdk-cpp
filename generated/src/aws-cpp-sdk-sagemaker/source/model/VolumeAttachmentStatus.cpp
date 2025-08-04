/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/VolumeAttachmentStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace VolumeAttachmentStatusMapper
      {

        static const int attaching_HASH = HashingUtils::HashString("attaching");
        static const int attached_HASH = HashingUtils::HashString("attached");
        static const int detaching_HASH = HashingUtils::HashString("detaching");
        static const int detached_HASH = HashingUtils::HashString("detached");
        static const int busy_HASH = HashingUtils::HashString("busy");


        VolumeAttachmentStatus GetVolumeAttachmentStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == attaching_HASH)
          {
            return VolumeAttachmentStatus::attaching;
          }
          else if (hashCode == attached_HASH)
          {
            return VolumeAttachmentStatus::attached;
          }
          else if (hashCode == detaching_HASH)
          {
            return VolumeAttachmentStatus::detaching;
          }
          else if (hashCode == detached_HASH)
          {
            return VolumeAttachmentStatus::detached;
          }
          else if (hashCode == busy_HASH)
          {
            return VolumeAttachmentStatus::busy;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<VolumeAttachmentStatus>(hashCode);
          }

          return VolumeAttachmentStatus::NOT_SET;
        }

        Aws::String GetNameForVolumeAttachmentStatus(VolumeAttachmentStatus enumValue)
        {
          switch(enumValue)
          {
          case VolumeAttachmentStatus::NOT_SET:
            return {};
          case VolumeAttachmentStatus::attaching:
            return "attaching";
          case VolumeAttachmentStatus::attached:
            return "attached";
          case VolumeAttachmentStatus::detaching:
            return "detaching";
          case VolumeAttachmentStatus::detached:
            return "detached";
          case VolumeAttachmentStatus::busy:
            return "busy";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace VolumeAttachmentStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
