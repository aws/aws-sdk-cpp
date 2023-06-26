/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/GlobalConfigurationLowFramerateInputs.h>
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
      namespace GlobalConfigurationLowFramerateInputsMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        GlobalConfigurationLowFramerateInputs GetGlobalConfigurationLowFramerateInputsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return GlobalConfigurationLowFramerateInputs::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return GlobalConfigurationLowFramerateInputs::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GlobalConfigurationLowFramerateInputs>(hashCode);
          }

          return GlobalConfigurationLowFramerateInputs::NOT_SET;
        }

        Aws::String GetNameForGlobalConfigurationLowFramerateInputs(GlobalConfigurationLowFramerateInputs enumValue)
        {
          switch(enumValue)
          {
          case GlobalConfigurationLowFramerateInputs::DISABLED:
            return "DISABLED";
          case GlobalConfigurationLowFramerateInputs::ENABLED:
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

      } // namespace GlobalConfigurationLowFramerateInputsMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
