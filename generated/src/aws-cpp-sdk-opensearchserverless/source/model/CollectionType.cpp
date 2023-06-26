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

        static const int SEARCH_HASH = HashingUtils::HashString("SEARCH");
        static const int TIMESERIES_HASH = HashingUtils::HashString("TIMESERIES");


        CollectionType GetCollectionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SEARCH_HASH)
          {
            return CollectionType::SEARCH;
          }
          else if (hashCode == TIMESERIES_HASH)
          {
            return CollectionType::TIMESERIES;
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
          case CollectionType::SEARCH:
            return "SEARCH";
          case CollectionType::TIMESERIES:
            return "TIMESERIES";
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
