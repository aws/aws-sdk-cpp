/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/ApplicationLayerAutomaticResponseStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Shield
  {
    namespace Model
    {
      namespace ApplicationLayerAutomaticResponseStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ApplicationLayerAutomaticResponseStatus GetApplicationLayerAutomaticResponseStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ApplicationLayerAutomaticResponseStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ApplicationLayerAutomaticResponseStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplicationLayerAutomaticResponseStatus>(hashCode);
          }

          return ApplicationLayerAutomaticResponseStatus::NOT_SET;
        }

        Aws::String GetNameForApplicationLayerAutomaticResponseStatus(ApplicationLayerAutomaticResponseStatus enumValue)
        {
          switch(enumValue)
          {
          case ApplicationLayerAutomaticResponseStatus::NOT_SET:
            return {};
          case ApplicationLayerAutomaticResponseStatus::ENABLED:
            return "ENABLED";
          case ApplicationLayerAutomaticResponseStatus::DISABLED:
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

      } // namespace ApplicationLayerAutomaticResponseStatusMapper
    } // namespace Model
  } // namespace Shield
} // namespace Aws
