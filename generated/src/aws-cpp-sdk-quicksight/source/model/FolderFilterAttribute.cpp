/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FolderFilterAttribute.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QuickSight
  {
    namespace Model
    {
      namespace FolderFilterAttributeMapper
      {

        static const int PARENT_FOLDER_ARN_HASH = HashingUtils::HashString("PARENT_FOLDER_ARN");
        static const int DIRECT_QUICKSIGHT_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_OWNER");
        static const int DIRECT_QUICKSIGHT_SOLE_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_SOLE_OWNER");
        static const int DIRECT_QUICKSIGHT_VIEWER_OR_OWNER_HASH = HashingUtils::HashString("DIRECT_QUICKSIGHT_VIEWER_OR_OWNER");
        static const int QUICKSIGHT_OWNER_HASH = HashingUtils::HashString("QUICKSIGHT_OWNER");
        static const int QUICKSIGHT_VIEWER_OR_OWNER_HASH = HashingUtils::HashString("QUICKSIGHT_VIEWER_OR_OWNER");
        static const int FOLDER_NAME_HASH = HashingUtils::HashString("FOLDER_NAME");


        FolderFilterAttribute GetFolderFilterAttributeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == PARENT_FOLDER_ARN_HASH)
          {
            return FolderFilterAttribute::PARENT_FOLDER_ARN;
          }
          else if (hashCode == DIRECT_QUICKSIGHT_OWNER_HASH)
          {
            return FolderFilterAttribute::DIRECT_QUICKSIGHT_OWNER;
          }
          else if (hashCode == DIRECT_QUICKSIGHT_SOLE_OWNER_HASH)
          {
            return FolderFilterAttribute::DIRECT_QUICKSIGHT_SOLE_OWNER;
          }
          else if (hashCode == DIRECT_QUICKSIGHT_VIEWER_OR_OWNER_HASH)
          {
            return FolderFilterAttribute::DIRECT_QUICKSIGHT_VIEWER_OR_OWNER;
          }
          else if (hashCode == QUICKSIGHT_OWNER_HASH)
          {
            return FolderFilterAttribute::QUICKSIGHT_OWNER;
          }
          else if (hashCode == QUICKSIGHT_VIEWER_OR_OWNER_HASH)
          {
            return FolderFilterAttribute::QUICKSIGHT_VIEWER_OR_OWNER;
          }
          else if (hashCode == FOLDER_NAME_HASH)
          {
            return FolderFilterAttribute::FOLDER_NAME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FolderFilterAttribute>(hashCode);
          }

          return FolderFilterAttribute::NOT_SET;
        }

        Aws::String GetNameForFolderFilterAttribute(FolderFilterAttribute enumValue)
        {
          switch(enumValue)
          {
          case FolderFilterAttribute::PARENT_FOLDER_ARN:
            return "PARENT_FOLDER_ARN";
          case FolderFilterAttribute::DIRECT_QUICKSIGHT_OWNER:
            return "DIRECT_QUICKSIGHT_OWNER";
          case FolderFilterAttribute::DIRECT_QUICKSIGHT_SOLE_OWNER:
            return "DIRECT_QUICKSIGHT_SOLE_OWNER";
          case FolderFilterAttribute::DIRECT_QUICKSIGHT_VIEWER_OR_OWNER:
            return "DIRECT_QUICKSIGHT_VIEWER_OR_OWNER";
          case FolderFilterAttribute::QUICKSIGHT_OWNER:
            return "QUICKSIGHT_OWNER";
          case FolderFilterAttribute::QUICKSIGHT_VIEWER_OR_OWNER:
            return "QUICKSIGHT_VIEWER_OR_OWNER";
          case FolderFilterAttribute::FOLDER_NAME:
            return "FOLDER_NAME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FolderFilterAttributeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
