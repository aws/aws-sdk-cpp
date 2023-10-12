/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medical-imaging/model/ImageSetWorkflowStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MedicalImaging
  {
    namespace Model
    {
      namespace ImageSetWorkflowStatusMapper
      {

        static constexpr uint32_t CREATED_HASH = ConstExprHashingUtils::HashString("CREATED");
        static constexpr uint32_t COPIED_HASH = ConstExprHashingUtils::HashString("COPIED");
        static constexpr uint32_t COPYING_HASH = ConstExprHashingUtils::HashString("COPYING");
        static constexpr uint32_t COPYING_WITH_READ_ONLY_ACCESS_HASH = ConstExprHashingUtils::HashString("COPYING_WITH_READ_ONLY_ACCESS");
        static constexpr uint32_t COPY_FAILED_HASH = ConstExprHashingUtils::HashString("COPY_FAILED");
        static constexpr uint32_t UPDATING_HASH = ConstExprHashingUtils::HashString("UPDATING");
        static constexpr uint32_t UPDATED_HASH = ConstExprHashingUtils::HashString("UPDATED");
        static constexpr uint32_t UPDATE_FAILED_HASH = ConstExprHashingUtils::HashString("UPDATE_FAILED");
        static constexpr uint32_t DELETING_HASH = ConstExprHashingUtils::HashString("DELETING");
        static constexpr uint32_t DELETED_HASH = ConstExprHashingUtils::HashString("DELETED");


        ImageSetWorkflowStatus GetImageSetWorkflowStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CREATED_HASH)
          {
            return ImageSetWorkflowStatus::CREATED;
          }
          else if (hashCode == COPIED_HASH)
          {
            return ImageSetWorkflowStatus::COPIED;
          }
          else if (hashCode == COPYING_HASH)
          {
            return ImageSetWorkflowStatus::COPYING;
          }
          else if (hashCode == COPYING_WITH_READ_ONLY_ACCESS_HASH)
          {
            return ImageSetWorkflowStatus::COPYING_WITH_READ_ONLY_ACCESS;
          }
          else if (hashCode == COPY_FAILED_HASH)
          {
            return ImageSetWorkflowStatus::COPY_FAILED;
          }
          else if (hashCode == UPDATING_HASH)
          {
            return ImageSetWorkflowStatus::UPDATING;
          }
          else if (hashCode == UPDATED_HASH)
          {
            return ImageSetWorkflowStatus::UPDATED;
          }
          else if (hashCode == UPDATE_FAILED_HASH)
          {
            return ImageSetWorkflowStatus::UPDATE_FAILED;
          }
          else if (hashCode == DELETING_HASH)
          {
            return ImageSetWorkflowStatus::DELETING;
          }
          else if (hashCode == DELETED_HASH)
          {
            return ImageSetWorkflowStatus::DELETED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ImageSetWorkflowStatus>(hashCode);
          }

          return ImageSetWorkflowStatus::NOT_SET;
        }

        Aws::String GetNameForImageSetWorkflowStatus(ImageSetWorkflowStatus enumValue)
        {
          switch(enumValue)
          {
          case ImageSetWorkflowStatus::NOT_SET:
            return {};
          case ImageSetWorkflowStatus::CREATED:
            return "CREATED";
          case ImageSetWorkflowStatus::COPIED:
            return "COPIED";
          case ImageSetWorkflowStatus::COPYING:
            return "COPYING";
          case ImageSetWorkflowStatus::COPYING_WITH_READ_ONLY_ACCESS:
            return "COPYING_WITH_READ_ONLY_ACCESS";
          case ImageSetWorkflowStatus::COPY_FAILED:
            return "COPY_FAILED";
          case ImageSetWorkflowStatus::UPDATING:
            return "UPDATING";
          case ImageSetWorkflowStatus::UPDATED:
            return "UPDATED";
          case ImageSetWorkflowStatus::UPDATE_FAILED:
            return "UPDATE_FAILED";
          case ImageSetWorkflowStatus::DELETING:
            return "DELETING";
          case ImageSetWorkflowStatus::DELETED:
            return "DELETED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ImageSetWorkflowStatusMapper
    } // namespace Model
  } // namespace MedicalImaging
} // namespace Aws
