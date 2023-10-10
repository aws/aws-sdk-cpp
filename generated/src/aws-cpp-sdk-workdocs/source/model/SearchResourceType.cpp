/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/SearchResourceType.h>
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
      namespace SearchResourceTypeMapper
      {

        static const int FOLDER_HASH = HashingUtils::HashString("FOLDER");
        static const int DOCUMENT_HASH = HashingUtils::HashString("DOCUMENT");
        static const int COMMENT_HASH = HashingUtils::HashString("COMMENT");
        static const int DOCUMENT_VERSION_HASH = HashingUtils::HashString("DOCUMENT_VERSION");


        SearchResourceType GetSearchResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FOLDER_HASH)
          {
            return SearchResourceType::FOLDER;
          }
          else if (hashCode == DOCUMENT_HASH)
          {
            return SearchResourceType::DOCUMENT;
          }
          else if (hashCode == COMMENT_HASH)
          {
            return SearchResourceType::COMMENT;
          }
          else if (hashCode == DOCUMENT_VERSION_HASH)
          {
            return SearchResourceType::DOCUMENT_VERSION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SearchResourceType>(hashCode);
          }

          return SearchResourceType::NOT_SET;
        }

        Aws::String GetNameForSearchResourceType(SearchResourceType enumValue)
        {
          switch(enumValue)
          {
          case SearchResourceType::NOT_SET:
            return {};
          case SearchResourceType::FOLDER:
            return "FOLDER";
          case SearchResourceType::DOCUMENT:
            return "DOCUMENT";
          case SearchResourceType::COMMENT:
            return "COMMENT";
          case SearchResourceType::DOCUMENT_VERSION:
            return "DOCUMENT_VERSION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SearchResourceTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
