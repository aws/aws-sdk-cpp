/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/FeatureActivationsInputPrepareScheduleActions.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaLive
  {
    namespace Model
    {
      namespace FeatureActivationsInputPrepareScheduleActionsMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        FeatureActivationsInputPrepareScheduleActions GetFeatureActivationsInputPrepareScheduleActionsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return FeatureActivationsInputPrepareScheduleActions::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return FeatureActivationsInputPrepareScheduleActions::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FeatureActivationsInputPrepareScheduleActions>(hashCode);
          }

          return FeatureActivationsInputPrepareScheduleActions::NOT_SET;
        }

        Aws::String GetNameForFeatureActivationsInputPrepareScheduleActions(FeatureActivationsInputPrepareScheduleActions enumValue)
        {
          switch(enumValue)
          {
          case FeatureActivationsInputPrepareScheduleActions::DISABLED:
            return "DISABLED";
          case FeatureActivationsInputPrepareScheduleActions::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace FeatureActivationsInputPrepareScheduleActionsMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
