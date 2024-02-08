/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/QueryStateInput.h>
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
      namespace QueryStateInputMapper
      {

        static const int ALL_HASH = HashingUtils::HashString("ALL");
        static const int RUNNING_HASH = HashingUtils::HashString("RUNNING");
        static const int WAITING_HASH = HashingUtils::HashString("WAITING");
        static const int CANCELLING_HASH = HashingUtils::HashString("CANCELLING");


        QueryStateInput GetQueryStateInputForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ALL_HASH)
          {
            return QueryStateInput::ALL;
          }
          else if (hashCode == RUNNING_HASH)
          {
            return QueryStateInput::RUNNING;
          }
          else if (hashCode == WAITING_HASH)
          {
            return QueryStateInput::WAITING;
          }
          else if (hashCode == CANCELLING_HASH)
          {
            return QueryStateInput::CANCELLING;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<QueryStateInput>(hashCode);
          }

          return QueryStateInput::NOT_SET;
        }

        Aws::String GetNameForQueryStateInput(QueryStateInput enumValue)
        {
          switch(enumValue)
          {
          case QueryStateInput::NOT_SET:
            return {};
          case QueryStateInput::ALL:
            return "ALL";
          case QueryStateInput::RUNNING:
            return "RUNNING";
          case QueryStateInput::WAITING:
            return "WAITING";
          case QueryStateInput::CANCELLING:
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

      } // namespace QueryStateInputMapper
    } // namespace Model
  } // namespace NeptuneGraph
} // namespace Aws
