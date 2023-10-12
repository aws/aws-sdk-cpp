/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/ActivityType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkDocs
  {
    namespace Model
    {
      namespace ActivityTypeMapper
      {

        static constexpr uint32_t DOCUMENT_CHECKED_IN_HASH = ConstExprHashingUtils::HashString("DOCUMENT_CHECKED_IN");
        static constexpr uint32_t DOCUMENT_CHECKED_OUT_HASH = ConstExprHashingUtils::HashString("DOCUMENT_CHECKED_OUT");
        static constexpr uint32_t DOCUMENT_RENAMED_HASH = ConstExprHashingUtils::HashString("DOCUMENT_RENAMED");
        static constexpr uint32_t DOCUMENT_VERSION_UPLOADED_HASH = ConstExprHashingUtils::HashString("DOCUMENT_VERSION_UPLOADED");
        static constexpr uint32_t DOCUMENT_VERSION_DELETED_HASH = ConstExprHashingUtils::HashString("DOCUMENT_VERSION_DELETED");
        static constexpr uint32_t DOCUMENT_VERSION_VIEWED_HASH = ConstExprHashingUtils::HashString("DOCUMENT_VERSION_VIEWED");
        static constexpr uint32_t DOCUMENT_VERSION_DOWNLOADED_HASH = ConstExprHashingUtils::HashString("DOCUMENT_VERSION_DOWNLOADED");
        static constexpr uint32_t DOCUMENT_RECYCLED_HASH = ConstExprHashingUtils::HashString("DOCUMENT_RECYCLED");
        static constexpr uint32_t DOCUMENT_RESTORED_HASH = ConstExprHashingUtils::HashString("DOCUMENT_RESTORED");
        static constexpr uint32_t DOCUMENT_REVERTED_HASH = ConstExprHashingUtils::HashString("DOCUMENT_REVERTED");
        static constexpr uint32_t DOCUMENT_SHARED_HASH = ConstExprHashingUtils::HashString("DOCUMENT_SHARED");
        static constexpr uint32_t DOCUMENT_UNSHARED_HASH = ConstExprHashingUtils::HashString("DOCUMENT_UNSHARED");
        static constexpr uint32_t DOCUMENT_SHARE_PERMISSION_CHANGED_HASH = ConstExprHashingUtils::HashString("DOCUMENT_SHARE_PERMISSION_CHANGED");
        static constexpr uint32_t DOCUMENT_SHAREABLE_LINK_CREATED_HASH = ConstExprHashingUtils::HashString("DOCUMENT_SHAREABLE_LINK_CREATED");
        static constexpr uint32_t DOCUMENT_SHAREABLE_LINK_REMOVED_HASH = ConstExprHashingUtils::HashString("DOCUMENT_SHAREABLE_LINK_REMOVED");
        static constexpr uint32_t DOCUMENT_SHAREABLE_LINK_PERMISSION_CHANGED_HASH = ConstExprHashingUtils::HashString("DOCUMENT_SHAREABLE_LINK_PERMISSION_CHANGED");
        static constexpr uint32_t DOCUMENT_MOVED_HASH = ConstExprHashingUtils::HashString("DOCUMENT_MOVED");
        static constexpr uint32_t DOCUMENT_COMMENT_ADDED_HASH = ConstExprHashingUtils::HashString("DOCUMENT_COMMENT_ADDED");
        static constexpr uint32_t DOCUMENT_COMMENT_DELETED_HASH = ConstExprHashingUtils::HashString("DOCUMENT_COMMENT_DELETED");
        static constexpr uint32_t DOCUMENT_ANNOTATION_ADDED_HASH = ConstExprHashingUtils::HashString("DOCUMENT_ANNOTATION_ADDED");
        static constexpr uint32_t DOCUMENT_ANNOTATION_DELETED_HASH = ConstExprHashingUtils::HashString("DOCUMENT_ANNOTATION_DELETED");
        static constexpr uint32_t FOLDER_CREATED_HASH = ConstExprHashingUtils::HashString("FOLDER_CREATED");
        static constexpr uint32_t FOLDER_DELETED_HASH = ConstExprHashingUtils::HashString("FOLDER_DELETED");
        static constexpr uint32_t FOLDER_RENAMED_HASH = ConstExprHashingUtils::HashString("FOLDER_RENAMED");
        static constexpr uint32_t FOLDER_RECYCLED_HASH = ConstExprHashingUtils::HashString("FOLDER_RECYCLED");
        static constexpr uint32_t FOLDER_RESTORED_HASH = ConstExprHashingUtils::HashString("FOLDER_RESTORED");
        static constexpr uint32_t FOLDER_SHARED_HASH = ConstExprHashingUtils::HashString("FOLDER_SHARED");
        static constexpr uint32_t FOLDER_UNSHARED_HASH = ConstExprHashingUtils::HashString("FOLDER_UNSHARED");
        static constexpr uint32_t FOLDER_SHARE_PERMISSION_CHANGED_HASH = ConstExprHashingUtils::HashString("FOLDER_SHARE_PERMISSION_CHANGED");
        static constexpr uint32_t FOLDER_SHAREABLE_LINK_CREATED_HASH = ConstExprHashingUtils::HashString("FOLDER_SHAREABLE_LINK_CREATED");
        static constexpr uint32_t FOLDER_SHAREABLE_LINK_REMOVED_HASH = ConstExprHashingUtils::HashString("FOLDER_SHAREABLE_LINK_REMOVED");
        static constexpr uint32_t FOLDER_SHAREABLE_LINK_PERMISSION_CHANGED_HASH = ConstExprHashingUtils::HashString("FOLDER_SHAREABLE_LINK_PERMISSION_CHANGED");
        static constexpr uint32_t FOLDER_MOVED_HASH = ConstExprHashingUtils::HashString("FOLDER_MOVED");


        ActivityType GetActivityTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DOCUMENT_CHECKED_IN_HASH)
          {
            return ActivityType::DOCUMENT_CHECKED_IN;
          }
          else if (hashCode == DOCUMENT_CHECKED_OUT_HASH)
          {
            return ActivityType::DOCUMENT_CHECKED_OUT;
          }
          else if (hashCode == DOCUMENT_RENAMED_HASH)
          {
            return ActivityType::DOCUMENT_RENAMED;
          }
          else if (hashCode == DOCUMENT_VERSION_UPLOADED_HASH)
          {
            return ActivityType::DOCUMENT_VERSION_UPLOADED;
          }
          else if (hashCode == DOCUMENT_VERSION_DELETED_HASH)
          {
            return ActivityType::DOCUMENT_VERSION_DELETED;
          }
          else if (hashCode == DOCUMENT_VERSION_VIEWED_HASH)
          {
            return ActivityType::DOCUMENT_VERSION_VIEWED;
          }
          else if (hashCode == DOCUMENT_VERSION_DOWNLOADED_HASH)
          {
            return ActivityType::DOCUMENT_VERSION_DOWNLOADED;
          }
          else if (hashCode == DOCUMENT_RECYCLED_HASH)
          {
            return ActivityType::DOCUMENT_RECYCLED;
          }
          else if (hashCode == DOCUMENT_RESTORED_HASH)
          {
            return ActivityType::DOCUMENT_RESTORED;
          }
          else if (hashCode == DOCUMENT_REVERTED_HASH)
          {
            return ActivityType::DOCUMENT_REVERTED;
          }
          else if (hashCode == DOCUMENT_SHARED_HASH)
          {
            return ActivityType::DOCUMENT_SHARED;
          }
          else if (hashCode == DOCUMENT_UNSHARED_HASH)
          {
            return ActivityType::DOCUMENT_UNSHARED;
          }
          else if (hashCode == DOCUMENT_SHARE_PERMISSION_CHANGED_HASH)
          {
            return ActivityType::DOCUMENT_SHARE_PERMISSION_CHANGED;
          }
          else if (hashCode == DOCUMENT_SHAREABLE_LINK_CREATED_HASH)
          {
            return ActivityType::DOCUMENT_SHAREABLE_LINK_CREATED;
          }
          else if (hashCode == DOCUMENT_SHAREABLE_LINK_REMOVED_HASH)
          {
            return ActivityType::DOCUMENT_SHAREABLE_LINK_REMOVED;
          }
          else if (hashCode == DOCUMENT_SHAREABLE_LINK_PERMISSION_CHANGED_HASH)
          {
            return ActivityType::DOCUMENT_SHAREABLE_LINK_PERMISSION_CHANGED;
          }
          else if (hashCode == DOCUMENT_MOVED_HASH)
          {
            return ActivityType::DOCUMENT_MOVED;
          }
          else if (hashCode == DOCUMENT_COMMENT_ADDED_HASH)
          {
            return ActivityType::DOCUMENT_COMMENT_ADDED;
          }
          else if (hashCode == DOCUMENT_COMMENT_DELETED_HASH)
          {
            return ActivityType::DOCUMENT_COMMENT_DELETED;
          }
          else if (hashCode == DOCUMENT_ANNOTATION_ADDED_HASH)
          {
            return ActivityType::DOCUMENT_ANNOTATION_ADDED;
          }
          else if (hashCode == DOCUMENT_ANNOTATION_DELETED_HASH)
          {
            return ActivityType::DOCUMENT_ANNOTATION_DELETED;
          }
          else if (hashCode == FOLDER_CREATED_HASH)
          {
            return ActivityType::FOLDER_CREATED;
          }
          else if (hashCode == FOLDER_DELETED_HASH)
          {
            return ActivityType::FOLDER_DELETED;
          }
          else if (hashCode == FOLDER_RENAMED_HASH)
          {
            return ActivityType::FOLDER_RENAMED;
          }
          else if (hashCode == FOLDER_RECYCLED_HASH)
          {
            return ActivityType::FOLDER_RECYCLED;
          }
          else if (hashCode == FOLDER_RESTORED_HASH)
          {
            return ActivityType::FOLDER_RESTORED;
          }
          else if (hashCode == FOLDER_SHARED_HASH)
          {
            return ActivityType::FOLDER_SHARED;
          }
          else if (hashCode == FOLDER_UNSHARED_HASH)
          {
            return ActivityType::FOLDER_UNSHARED;
          }
          else if (hashCode == FOLDER_SHARE_PERMISSION_CHANGED_HASH)
          {
            return ActivityType::FOLDER_SHARE_PERMISSION_CHANGED;
          }
          else if (hashCode == FOLDER_SHAREABLE_LINK_CREATED_HASH)
          {
            return ActivityType::FOLDER_SHAREABLE_LINK_CREATED;
          }
          else if (hashCode == FOLDER_SHAREABLE_LINK_REMOVED_HASH)
          {
            return ActivityType::FOLDER_SHAREABLE_LINK_REMOVED;
          }
          else if (hashCode == FOLDER_SHAREABLE_LINK_PERMISSION_CHANGED_HASH)
          {
            return ActivityType::FOLDER_SHAREABLE_LINK_PERMISSION_CHANGED;
          }
          else if (hashCode == FOLDER_MOVED_HASH)
          {
            return ActivityType::FOLDER_MOVED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActivityType>(hashCode);
          }

          return ActivityType::NOT_SET;
        }

        Aws::String GetNameForActivityType(ActivityType enumValue)
        {
          switch(enumValue)
          {
          case ActivityType::NOT_SET:
            return {};
          case ActivityType::DOCUMENT_CHECKED_IN:
            return "DOCUMENT_CHECKED_IN";
          case ActivityType::DOCUMENT_CHECKED_OUT:
            return "DOCUMENT_CHECKED_OUT";
          case ActivityType::DOCUMENT_RENAMED:
            return "DOCUMENT_RENAMED";
          case ActivityType::DOCUMENT_VERSION_UPLOADED:
            return "DOCUMENT_VERSION_UPLOADED";
          case ActivityType::DOCUMENT_VERSION_DELETED:
            return "DOCUMENT_VERSION_DELETED";
          case ActivityType::DOCUMENT_VERSION_VIEWED:
            return "DOCUMENT_VERSION_VIEWED";
          case ActivityType::DOCUMENT_VERSION_DOWNLOADED:
            return "DOCUMENT_VERSION_DOWNLOADED";
          case ActivityType::DOCUMENT_RECYCLED:
            return "DOCUMENT_RECYCLED";
          case ActivityType::DOCUMENT_RESTORED:
            return "DOCUMENT_RESTORED";
          case ActivityType::DOCUMENT_REVERTED:
            return "DOCUMENT_REVERTED";
          case ActivityType::DOCUMENT_SHARED:
            return "DOCUMENT_SHARED";
          case ActivityType::DOCUMENT_UNSHARED:
            return "DOCUMENT_UNSHARED";
          case ActivityType::DOCUMENT_SHARE_PERMISSION_CHANGED:
            return "DOCUMENT_SHARE_PERMISSION_CHANGED";
          case ActivityType::DOCUMENT_SHAREABLE_LINK_CREATED:
            return "DOCUMENT_SHAREABLE_LINK_CREATED";
          case ActivityType::DOCUMENT_SHAREABLE_LINK_REMOVED:
            return "DOCUMENT_SHAREABLE_LINK_REMOVED";
          case ActivityType::DOCUMENT_SHAREABLE_LINK_PERMISSION_CHANGED:
            return "DOCUMENT_SHAREABLE_LINK_PERMISSION_CHANGED";
          case ActivityType::DOCUMENT_MOVED:
            return "DOCUMENT_MOVED";
          case ActivityType::DOCUMENT_COMMENT_ADDED:
            return "DOCUMENT_COMMENT_ADDED";
          case ActivityType::DOCUMENT_COMMENT_DELETED:
            return "DOCUMENT_COMMENT_DELETED";
          case ActivityType::DOCUMENT_ANNOTATION_ADDED:
            return "DOCUMENT_ANNOTATION_ADDED";
          case ActivityType::DOCUMENT_ANNOTATION_DELETED:
            return "DOCUMENT_ANNOTATION_DELETED";
          case ActivityType::FOLDER_CREATED:
            return "FOLDER_CREATED";
          case ActivityType::FOLDER_DELETED:
            return "FOLDER_DELETED";
          case ActivityType::FOLDER_RENAMED:
            return "FOLDER_RENAMED";
          case ActivityType::FOLDER_RECYCLED:
            return "FOLDER_RECYCLED";
          case ActivityType::FOLDER_RESTORED:
            return "FOLDER_RESTORED";
          case ActivityType::FOLDER_SHARED:
            return "FOLDER_SHARED";
          case ActivityType::FOLDER_UNSHARED:
            return "FOLDER_UNSHARED";
          case ActivityType::FOLDER_SHARE_PERMISSION_CHANGED:
            return "FOLDER_SHARE_PERMISSION_CHANGED";
          case ActivityType::FOLDER_SHAREABLE_LINK_CREATED:
            return "FOLDER_SHAREABLE_LINK_CREATED";
          case ActivityType::FOLDER_SHAREABLE_LINK_REMOVED:
            return "FOLDER_SHAREABLE_LINK_REMOVED";
          case ActivityType::FOLDER_SHAREABLE_LINK_PERMISSION_CHANGED:
            return "FOLDER_SHAREABLE_LINK_PERMISSION_CHANGED";
          case ActivityType::FOLDER_MOVED:
            return "FOLDER_MOVED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActivityTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
