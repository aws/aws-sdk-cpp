/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Av1LookAheadRateControl.h>
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
      namespace Av1LookAheadRateControlMapper
      {

        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");


        Av1LookAheadRateControl GetAv1LookAheadRateControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HIGH_HASH)
          {
            return Av1LookAheadRateControl::HIGH;
          }
          else if (hashCode == LOW_HASH)
          {
            return Av1LookAheadRateControl::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return Av1LookAheadRateControl::MEDIUM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Av1LookAheadRateControl>(hashCode);
          }

          return Av1LookAheadRateControl::NOT_SET;
        }

        Aws::String GetNameForAv1LookAheadRateControl(Av1LookAheadRateControl enumValue)
        {
          switch(enumValue)
          {
          case Av1LookAheadRateControl::NOT_SET:
            return {};
          case Av1LookAheadRateControl::HIGH:
            return "HIGH";
          case Av1LookAheadRateControl::LOW:
            return "LOW";
          case Av1LookAheadRateControl::MEDIUM:
            return "MEDIUM";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Av1LookAheadRateControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
