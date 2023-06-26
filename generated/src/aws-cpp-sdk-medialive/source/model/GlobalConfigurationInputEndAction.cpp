/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/GlobalConfigurationInputEndAction.h>
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
      namespace GlobalConfigurationInputEndActionMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int SWITCH_AND_LOOP_INPUTS_HASH = HashingUtils::HashString("SWITCH_AND_LOOP_INPUTS");


        GlobalConfigurationInputEndAction GetGlobalConfigurationInputEndActionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return GlobalConfigurationInputEndAction::NONE;
          }
          else if (hashCode == SWITCH_AND_LOOP_INPUTS_HASH)
          {
            return GlobalConfigurationInputEndAction::SWITCH_AND_LOOP_INPUTS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<GlobalConfigurationInputEndAction>(hashCode);
          }

          return GlobalConfigurationInputEndAction::NOT_SET;
        }

        Aws::String GetNameForGlobalConfigurationInputEndAction(GlobalConfigurationInputEndAction enumValue)
        {
          switch(enumValue)
          {
          case GlobalConfigurationInputEndAction::NONE:
            return "NONE";
          case GlobalConfigurationInputEndAction::SWITCH_AND_LOOP_INPUTS:
            return "SWITCH_AND_LOOP_INPUTS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace GlobalConfigurationInputEndActionMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
