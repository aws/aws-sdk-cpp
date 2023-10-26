/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/OpenSearchWarmPartitionInstanceType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace OpenSearchWarmPartitionInstanceTypeMapper
      {

        static const int ultrawarm1_medium_search_HASH = HashingUtils::HashString("ultrawarm1.medium.search");
        static const int ultrawarm1_large_search_HASH = HashingUtils::HashString("ultrawarm1.large.search");
        static const int ultrawarm1_xlarge_search_HASH = HashingUtils::HashString("ultrawarm1.xlarge.search");


        OpenSearchWarmPartitionInstanceType GetOpenSearchWarmPartitionInstanceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ultrawarm1_medium_search_HASH)
          {
            return OpenSearchWarmPartitionInstanceType::ultrawarm1_medium_search;
          }
          else if (hashCode == ultrawarm1_large_search_HASH)
          {
            return OpenSearchWarmPartitionInstanceType::ultrawarm1_large_search;
          }
          else if (hashCode == ultrawarm1_xlarge_search_HASH)
          {
            return OpenSearchWarmPartitionInstanceType::ultrawarm1_xlarge_search;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OpenSearchWarmPartitionInstanceType>(hashCode);
          }

          return OpenSearchWarmPartitionInstanceType::NOT_SET;
        }

        Aws::String GetNameForOpenSearchWarmPartitionInstanceType(OpenSearchWarmPartitionInstanceType enumValue)
        {
          switch(enumValue)
          {
          case OpenSearchWarmPartitionInstanceType::NOT_SET:
            return {};
          case OpenSearchWarmPartitionInstanceType::ultrawarm1_medium_search:
            return "ultrawarm1.medium.search";
          case OpenSearchWarmPartitionInstanceType::ultrawarm1_large_search:
            return "ultrawarm1.large.search";
          case OpenSearchWarmPartitionInstanceType::ultrawarm1_xlarge_search:
            return "ultrawarm1.xlarge.search";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace OpenSearchWarmPartitionInstanceTypeMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
