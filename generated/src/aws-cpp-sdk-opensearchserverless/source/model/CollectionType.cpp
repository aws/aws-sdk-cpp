/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearchserverless/model/CollectionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchServerless
  {
    namespace Model
    {
      namespace CollectionTypeMapper
      {

        static constexpr uint32_t SEARCH_HASH = ConstExprHashingUtils::HashString("SEARCH");
        static constexpr uint32_t TIMESERIES_HASH = ConstExprHashingUtils::HashString("TIMESERIES");
        static constexpr uint32_t VECTORSEARCH_HASH = ConstExprHashingUtils::HashString("VECTORSEARCH");


        CollectionType GetCollectionTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEARCH_HASH)
          {
            return CollectionType::SEARCH;
          }
          else if (hashCode == TIMESERIES_HASH)
          {
            return CollectionType::TIMESERIES;
          }
          else if (hashCode == VECTORSEARCH_HASH)
          {
            return CollectionType::VECTORSEARCH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CollectionType>(hashCode);
          }

          return CollectionType::NOT_SET;
        }

        Aws::String GetNameForCollectionType(CollectionType enumValue)
        {
          switch(enumValue)
          {
          case CollectionType::NOT_SET:
            return {};
          case CollectionType::SEARCH:
            return "SEARCH";
          case CollectionType::TIMESERIES:
            return "TIMESERIES";
          case CollectionType::VECTORSEARCH:
            return "VECTORSEARCH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CollectionTypeMapper
    } // namespace Model
  } // namespace OpenSearchServerless
} // namespace Aws
