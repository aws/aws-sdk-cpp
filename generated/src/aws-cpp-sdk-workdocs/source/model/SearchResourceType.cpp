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

        static constexpr uint32_t FOLDER_HASH = ConstExprHashingUtils::HashString("FOLDER");
        static constexpr uint32_t DOCUMENT_HASH = ConstExprHashingUtils::HashString("DOCUMENT");
        static constexpr uint32_t COMMENT_HASH = ConstExprHashingUtils::HashString("COMMENT");
        static constexpr uint32_t DOCUMENT_VERSION_HASH = ConstExprHashingUtils::HashString("DOCUMENT_VERSION");


        SearchResourceType GetSearchResourceTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
