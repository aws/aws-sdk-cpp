/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/ExplainMode.h>
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
      namespace ExplainModeMapper
      {

        static const int STATIC__HASH = HashingUtils::HashString("STATIC");
        static const int DETAILS_HASH = HashingUtils::HashString("DETAILS");


        ExplainMode GetExplainModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STATIC__HASH)
          {
            return ExplainMode::STATIC_;
          }
          else if (hashCode == DETAILS_HASH)
          {
            return ExplainMode::DETAILS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExplainMode>(hashCode);
          }

          return ExplainMode::NOT_SET;
        }

        Aws::String GetNameForExplainMode(ExplainMode enumValue)
        {
          switch(enumValue)
          {
          case ExplainMode::NOT_SET:
            return {};
          case ExplainMode::STATIC_:
            return "STATIC";
          case ExplainMode::DETAILS:
            return "DETAILS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ExplainModeMapper
    } // namespace Model
  } // namespace NeptuneGraph
} // namespace Aws
