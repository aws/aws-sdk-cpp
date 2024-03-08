/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/QueryState.h>
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
      namespace QueryStateMapper
      {

        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int WAITING_HASH = HashingUtils::HashString("WAITING");
        static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");


        QueryState GetQueryStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RUNNING_HASH)
          {
            return QueryState::RUNNING;
          }
          else if (hashCode == WAITING_HASH)
          {
            return QueryState::WAITING;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return QueryState::CANCELLING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryState>(hashCode);
          }

          return QueryState::NOT_SET;
        }

        Aws::String GetNameForQueryState(QueryState enumValue)
        {
          switch(enumValue)
          {
          case QueryState::NOT_SET:
            return {};
          case QueryState::RUNNING:
            return "RUNNING";
          case QueryState::WAITING:
            return "WAITING";
          case QueryState::CANCELLING:
            return "CANCELLING";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace QueryStateMapper
    } // namespace Model
  } // namespace NeptuneGraph
} // namespace Aws
