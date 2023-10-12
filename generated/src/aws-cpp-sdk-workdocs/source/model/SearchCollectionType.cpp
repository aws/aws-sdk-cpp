/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/SearchCollectionType.h>
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
      namespace SearchCollectionTypeMapper
      {

        static constexpr uint32_t OWNED_HASH = ConstExprHashingUtils::HashString("OWNED");
        static constexpr uint32_t SHARED_WITH_ME_HASH = ConstExprHashingUtils::HashString("SHARED_WITH_ME");


        SearchCollectionType GetSearchCollectionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OWNED_HASH)
          {
            return SearchCollectionType::OWNED;
          }
          else if (hashCode == SHARED_WITH_ME_HASH)
          {
            return SearchCollectionType::SHARED_WITH_ME;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SearchCollectionType>(hashCode);
          }

          return SearchCollectionType::NOT_SET;
        }

        Aws::String GetNameForSearchCollectionType(SearchCollectionType enumValue)
        {
          switch(enumValue)
          {
          case SearchCollectionType::NOT_SET:
            return {};
          case SearchCollectionType::OWNED:
            return "OWNED";
          case SearchCollectionType::SHARED_WITH_ME:
            return "SHARED_WITH_ME";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SearchCollectionTypeMapper
    } // namespace Model
  } // namespace WorkDocs
} // namespace Aws
