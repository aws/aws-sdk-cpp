/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/observabilityadmin/model/TelemetryState.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ObservabilityAdmin
  {
    namespace Model
    {
      namespace TelemetryStateMapper
      {

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");
        static const int NotApplicable_HASH = HashingUtils::HashString("NotApplicable");


        TelemetryState GetTelemetryStateForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return TelemetryState::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return TelemetryState::Disabled;
          }
          else if (hashCode == NotApplicable_HASH)
          {
            return TelemetryState::NotApplicable;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TelemetryState>(hashCode);
          }

          return TelemetryState::NOT_SET;
        }

        Aws::String GetNameForTelemetryState(TelemetryState enumValue)
        {
          switch(enumValue)
          {
          case TelemetryState::NOT_SET:
            return {};
          case TelemetryState::Enabled:
            return "Enabled";
          case TelemetryState::Disabled:
            return "Disabled";
          case TelemetryState::NotApplicable:
            return "NotApplicable";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TelemetryStateMapper
    } // namespace Model
  } // namespace ObservabilityAdmin
} // namespace Aws
