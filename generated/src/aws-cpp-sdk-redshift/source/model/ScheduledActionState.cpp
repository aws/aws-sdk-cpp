/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ScheduledActionState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Redshift
  {
    namespace Model
    {
      namespace ScheduledActionStateMapper
      {

        static const int ACTIVE_HASH = HashingUtils::HashString("ACTIVE");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ScheduledActionState GetScheduledActionStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_HASH)
          {
            return ScheduledActionState::ACTIVE;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ScheduledActionState::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ScheduledActionState>(hashCode);
          }

          return ScheduledActionState::NOT_SET;
        }

        Aws::String GetNameForScheduledActionState(ScheduledActionState enumValue)
        {
          switch(enumValue)
          {
          case ScheduledActionState::ACTIVE:
            return "ACTIVE";
          case ScheduledActionState::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ScheduledActionStateMapper
    } // namespace Model
  } // namespace Redshift
} // namespace Aws
