/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptunedata/model/GraphSummaryType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace neptunedata
  {
    namespace Model
    {
      namespace GraphSummaryTypeMapper
      {

        static const int basic_HASH = HashingUtils::HashString("basic");
        static const int detailed_HASH = HashingUtils::HashString("detailed");


        GraphSummaryType GetGraphSummaryTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == basic_HASH)
          {
            return GraphSummaryType::basic;
          }
          else if (hashCode == detailed_HASH)
          {
            return GraphSummaryType::detailed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GraphSummaryType>(hashCode);
          }

          return GraphSummaryType::NOT_SET;
        }

        Aws::String GetNameForGraphSummaryType(GraphSummaryType enumValue)
        {
          switch(enumValue)
          {
          case GraphSummaryType::NOT_SET:
            return {};
          case GraphSummaryType::basic:
            return "basic";
          case GraphSummaryType::detailed:
            return "detailed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GraphSummaryTypeMapper
    } // namespace Model
  } // namespace neptunedata
} // namespace Aws
