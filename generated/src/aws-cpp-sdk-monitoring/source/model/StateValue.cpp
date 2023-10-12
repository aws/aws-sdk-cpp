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

        static constexpr uint32_t OK_HASH = ConstExprHashingUtils::HashString("OK");
        static constexpr uint32_t ALARM_HASH = ConstExprHashingUtils::HashString("ALARM");
        static constexpr uint32_t INSUFFICIENT_DATA_HASH = ConstExprHashingUtils::HashString("INSUFFICIENT_DATA");


        StateValue GetStateValueForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
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
          case StateValue::NOT_SET:
            return {};
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
