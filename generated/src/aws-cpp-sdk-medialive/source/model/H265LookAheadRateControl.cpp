/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H265LookAheadRateControl.h>
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
      namespace H265LookAheadRateControlMapper
      {

        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");


        H265LookAheadRateControl GetH265LookAheadRateControlForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HIGH_HASH)
          {
            return H265LookAheadRateControl::HIGH;
          }
          else if (hashCode == LOW_HASH)
          {
            return H265LookAheadRateControl::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return H265LookAheadRateControl::MEDIUM;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265LookAheadRateControl>(hashCode);
          }

          return H265LookAheadRateControl::NOT_SET;
        }

        Aws::String GetNameForH265LookAheadRateControl(H265LookAheadRateControl enumValue)
        {
          switch(enumValue)
          {
          case H265LookAheadRateControl::NOT_SET:
            return {};
          case H265LookAheadRateControl::HIGH:
            return "HIGH";
          case H265LookAheadRateControl::LOW:
            return "LOW";
          case H265LookAheadRateControl::MEDIUM:
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

      } // namespace H265LookAheadRateControlMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
