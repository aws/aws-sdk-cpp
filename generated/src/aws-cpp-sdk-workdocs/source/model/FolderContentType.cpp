/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/FolderContentType.h>
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
      namespace FolderContentTypeMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int DOCUMENT_HASH = HashingUtils::HashString("DOCUMENT");
        static const int FOLDER_HASH = HashingUtils::HashString("FOLDER");


        FolderContentType GetFolderContentTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return FolderContentType::ALL;
          }
          else if (hashCode == DOCUMENT_HASH)
          {
            return FolderContentType::DOCUMENT;
          }
          else if (hashCode == FOLDER_HASH)
          {
            return FolderContentType::FOLDER;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FolderContentType>(hashCode);
          }

          return FolderContentType::NOT_SET;
        }

        Aws::String GetNameForFolderContentType(FolderContentType enumValue)
        {
          switch(enumValue)
          {
          case FolderContentType::ALL:
            return "ALL";
          case FolderContentType::DOCUMENT:
            return "DOCUMENT";
          case FolderContentType::FOLDER:
            return "FOLDER";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FolderContentTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
