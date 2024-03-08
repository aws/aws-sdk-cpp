/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/GraphSummaryMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace NeptuneGraph
  {
    namespace Model
    {
      namespace GraphSummaryModeMapper
      {

        static const int BASIC_HASH = HashingUtils::HashString("BASIC");
        static const int DETAILED_HASH = HashingUtils::HashString("DETAILED");


        GraphSummaryMode GetGraphSummaryModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BASIC_HASH)
          {
            return GraphSummaryMode::BASIC;
          }
          else if (hashCode == DETAILED_HASH)
          {
            return GraphSummaryMode::DETAILED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GraphSummaryMode>(hashCode);
          }

          return GraphSummaryMode::NOT_SET;
        }

        Aws::String GetNameForGraphSummaryMode(GraphSummaryMode enumValue)
        {
          switch(enumValue)
          {
          case GraphSummaryMode::NOT_SET:
            return {};
          case GraphSummaryMode::BASIC:
            return "BASIC";
          case GraphSummaryMode::DETAILED:
            return "DETAILED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GraphSummaryModeMapper
    } // namespace Model
  } // namespace NeptuneGraph
} // namespace Aws
