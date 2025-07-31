/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-web/model/FolderStructure.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpacesWeb
  {
    namespace Model
    {
      namespace FolderStructureMapper
      {

        static const int Flat_HASH = HashingUtils::HashString("Flat");
        static const int NestedByDate_HASH = HashingUtils::HashString("NestedByDate");


        FolderStructure GetFolderStructureForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Flat_HASH)
          {
            return FolderStructure::Flat;
          }
          else if (hashCode == NestedByDate_HASH)
          {
            return FolderStructure::NestedByDate;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FolderStructure>(hashCode);
          }

          return FolderStructure::NOT_SET;
        }

        Aws::String GetNameForFolderStructure(FolderStructure enumValue)
        {
          switch(enumValue)
          {
          case FolderStructure::NOT_SET:
            return {};
          case FolderStructure::Flat:
            return "Flat";
          case FolderStructure::NestedByDate:
            return "NestedByDate";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FolderStructureMapper
    } // namespace Model
  } // namespace WorkSpacesWeb
} // namespace Aws
