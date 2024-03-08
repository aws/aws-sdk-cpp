/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/NielsenWatermarksCbetStepaside.h>
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
      namespace NielsenWatermarksCbetStepasideMapper
      {

        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");
        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");


        NielsenWatermarksCbetStepaside GetNielsenWatermarksCbetStepasideForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return NielsenWatermarksCbetStepaside::DISABLED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return NielsenWatermarksCbetStepaside::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NielsenWatermarksCbetStepaside>(hashCode);
          }

          return NielsenWatermarksCbetStepaside::NOT_SET;
        }

        Aws::String GetNameForNielsenWatermarksCbetStepaside(NielsenWatermarksCbetStepaside enumValue)
        {
          switch(enumValue)
          {
          case NielsenWatermarksCbetStepaside::NOT_SET:
            return {};
          case NielsenWatermarksCbetStepaside::DISABLED:
            return "DISABLED";
          case NielsenWatermarksCbetStepaside::ENABLED:
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

      } // namespace NielsenWatermarksCbetStepasideMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
