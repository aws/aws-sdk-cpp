/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/ActionsSuppressedBy.h>
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
      namespace ActionsSuppressedByMapper
      {

        static const int WaitPeriod_HASH = HashingUtils::HashString("WaitPeriod");
        static const int ExtensionPeriod_HASH = HashingUtils::HashString("ExtensionPeriod");
        static const int Alarm_HASH = HashingUtils::HashString("Alarm");


        ActionsSuppressedBy GetActionsSuppressedByForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == WaitPeriod_HASH)
          {
            return ActionsSuppressedBy::WaitPeriod;
          }
          else if (hashCode == ExtensionPeriod_HASH)
          {
            return ActionsSuppressedBy::ExtensionPeriod;
          }
          else if (hashCode == Alarm_HASH)
          {
            return ActionsSuppressedBy::Alarm;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionsSuppressedBy>(hashCode);
          }

          return ActionsSuppressedBy::NOT_SET;
        }

        Aws::String GetNameForActionsSuppressedBy(ActionsSuppressedBy enumValue)
        {
          switch(enumValue)
          {
          case ActionsSuppressedBy::NOT_SET:
            return {};
          case ActionsSuppressedBy::WaitPeriod:
            return "WaitPeriod";
          case ActionsSuppressedBy::ExtensionPeriod:
            return "ExtensionPeriod";
          case ActionsSuppressedBy::Alarm:
            return "Alarm";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionsSuppressedByMapper
    } // namespace Model
  } // namespace CloudWatch
} // namespace Aws
