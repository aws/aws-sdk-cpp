/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/SearchQueryScopeType.h>
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
      namespace SearchQueryScopeTypeMapper
      {

        static const int NAME_HASH = HashingUtils::HashString("NAME");
        static const int CONTENT_HASH = HashingUtils::HashString("CONTENT");


        SearchQueryScopeType GetSearchQueryScopeTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NAME_HASH)
          {
            return SearchQueryScopeType::NAME;
          }
          else if (hashCode == CONTENT_HASH)
          {
            return SearchQueryScopeType::CONTENT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SearchQueryScopeType>(hashCode);
          }

          return SearchQueryScopeType::NOT_SET;
        }

        Aws::String GetNameForSearchQueryScopeType(SearchQueryScopeType enumValue)
        {
          switch(enumValue)
          {
          case SearchQueryScopeType::NOT_SET:
            return {};
          case SearchQueryScopeType::NAME:
            return "NAME";
          case SearchQueryScopeType::CONTENT:
            return "CONTENT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SearchQueryScopeTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
