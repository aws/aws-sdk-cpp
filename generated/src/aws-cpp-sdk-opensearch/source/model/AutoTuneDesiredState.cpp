/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/AutoTuneDesiredState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace AutoTuneDesiredStateMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        AutoTuneDesiredState GetAutoTuneDesiredStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return AutoTuneDesiredState::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AutoTuneDesiredState::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoTuneDesiredState>(hashCode);
          }

          return AutoTuneDesiredState::NOT_SET;
        }

        Aws::String GetNameForAutoTuneDesiredState(AutoTuneDesiredState enumValue)
        {
          switch(enumValue)
          {
          case AutoTuneDesiredState::NOT_SET:
            return {};
          case AutoTuneDesiredState::ENABLED:
            return "ENABLED";
          case AutoTuneDesiredState::DISABLED:
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

      } // namespace AutoTuneDesiredStateMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
