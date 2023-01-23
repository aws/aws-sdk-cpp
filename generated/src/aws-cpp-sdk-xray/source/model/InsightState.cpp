/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/InsightState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace XRay
  {
    namespace Model
    {
      namespace InsightStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int CLOSED_HASH = HashingUtils::HashString("CLOSED");


        InsightState GetInsightStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return InsightState::ACTIVE;
          }
          else if (hashCode == CLOSED_HASH)
          {
            return InsightState::CLOSED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InsightState>(hashCode);
          }

          return InsightState::NOT_SET;
        }

        Aws::String GetNameForInsightState(InsightState enumValue)
        {
          switch(enumValue)
          {
          case InsightState::ACTIVE:
            return "ACTIVE";
          case InsightState::CLOSED:
            return "CLOSED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InsightStateMapper
    } // namespace Model
  } // namespace XRay
} // namespace Aws
