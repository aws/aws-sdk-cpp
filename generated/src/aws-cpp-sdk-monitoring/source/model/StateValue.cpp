/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/StateValue.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace CloudWatch
  {
    namespace Model
    {
      namespace StateValueMapper
      {

        static const int OK_HASH = HashingUtils::HashString("OK");
        static const int ALARM_HASH = HashingUtils::HashString("ALARM");
        static const int INSUFFICIENT_DATA_HASH = HashingUtils::HashString("INSUFFICIENT_DATA");


        StateValue GetStateValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OK_HASH)
          {
            return StateValue::OK;
          }
          else if (hashCode == ALARM_HASH)
          {
            return StateValue::ALARM;
          }
          else if (hashCode == INSUFFICIENT_DATA_HASH)
          {
            return StateValue::INSUFFICIENT_DATA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<StateValue>(hashCode);
          }

          return StateValue::NOT_SET;
        }

        Aws::String GetNameForStateValue(StateValue enumValue)
        {
          switch(enumValue)
          {
          case StateValue::OK:
            return "OK";
          case StateValue::ALARM:
            return "ALARM";
          case StateValue::INSUFFICIENT_DATA:
            return "INSUFFICIENT_DATA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace StateValueMapper
    } // namespace Model
  } // namespace CloudWatch
} // namespace Aws
