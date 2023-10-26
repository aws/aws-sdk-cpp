/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FolderType.h>
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
      namespace FolderTypeMapper
      {

        static const int SHARED_HASH = HashingUtils::HashString("SHARED");
        static const int RESTRICTED_HASH = HashingUtils::HashString("RESTRICTED");


        FolderType GetFolderTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SHARED_HASH)
          {
            return FolderType::SHARED;
          }
          else if (hashCode == RESTRICTED_HASH)
          {
            return FolderType::RESTRICTED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FolderType>(hashCode);
          }

          return FolderType::NOT_SET;
        }

        Aws::String GetNameForFolderType(FolderType enumValue)
        {
          switch(enumValue)
          {
          case FolderType::NOT_SET:
            return {};
          case FolderType::SHARED:
            return "SHARED";
          case FolderType::RESTRICTED:
            return "RESTRICTED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FolderTypeMapper
    } // namespace Model
  } // namespace QuickSight
} // namespace Aws
