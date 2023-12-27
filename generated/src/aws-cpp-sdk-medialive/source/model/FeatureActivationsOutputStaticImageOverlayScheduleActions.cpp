/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/FeatureActivationsOutputStaticImageOverlayScheduleActions.h>
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
      namespace FeatureActivationsOutputStaticImageOverlayScheduleActionsMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        FeatureActivationsOutputStaticImageOverlayScheduleActions GetFeatureActivationsOutputStaticImageOverlayScheduleActionsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return FeatureActivationsOutputStaticImageOverlayScheduleActions::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return FeatureActivationsOutputStaticImageOverlayScheduleActions::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<FeatureActivationsOutputStaticImageOverlayScheduleActions>(hashCode);
          }

          return FeatureActivationsOutputStaticImageOverlayScheduleActions::NOT_SET;
        }

        Aws::String GetNameForFeatureActivationsOutputStaticImageOverlayScheduleActions(FeatureActivationsOutputStaticImageOverlayScheduleActions enumValue)
        {
          switch(enumValue)
          {
          case FeatureActivationsOutputStaticImageOverlayScheduleActions::NOT_SET:
            return {};
          case FeatureActivationsOutputStaticImageOverlayScheduleActions::DISABLED:
            return "DISABLED";
          case FeatureActivationsOutputStaticImageOverlayScheduleActions::ENABLED:
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

      } // namespace FeatureActivationsOutputStaticImageOverlayScheduleActionsMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
