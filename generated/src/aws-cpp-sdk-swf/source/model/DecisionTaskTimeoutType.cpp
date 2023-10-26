/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/DecisionTaskTimeoutType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SWF
  {
    namespace Model
    {
      namespace DecisionTaskTimeoutTypeMapper
      {

        static const int START_TO_CLOSE_HASH = HashingUtils::HashString("START_TO_CLOSE");
        static const int SCHEDULE_TO_START_HASH = HashingUtils::HashString("SCHEDULE_TO_START");


        DecisionTaskTimeoutType GetDecisionTaskTimeoutTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == START_TO_CLOSE_HASH)
          {
            return DecisionTaskTimeoutType::START_TO_CLOSE;
          }
          else if (hashCode == SCHEDULE_TO_START_HASH)
          {
            return DecisionTaskTimeoutType::SCHEDULE_TO_START;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DecisionTaskTimeoutType>(hashCode);
          }

          return DecisionTaskTimeoutType::NOT_SET;
        }

        Aws::String GetNameForDecisionTaskTimeoutType(DecisionTaskTimeoutType enumValue)
        {
          switch(enumValue)
          {
          case DecisionTaskTimeoutType::NOT_SET:
            return {};
          case DecisionTaskTimeoutType::START_TO_CLOSE:
            return "START_TO_CLOSE";
          case DecisionTaskTimeoutType::SCHEDULE_TO_START:
            return "SCHEDULE_TO_START";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DecisionTaskTimeoutTypeMapper
    } // namespace Model
  } // namespace SWF
} // namespace Aws
