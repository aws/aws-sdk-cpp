/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Vp8RateControlMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace Vp8RateControlModeMapper
      {

        static const int VBR_HASH = HashingUtils::HashString("VBR");


        Vp8RateControlMode GetVp8RateControlModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VBR_HASH)
          {
            return Vp8RateControlMode::VBR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Vp8RateControlMode>(hashCode);
          }

          return Vp8RateControlMode::NOT_SET;
        }

        Aws::String GetNameForVp8RateControlMode(Vp8RateControlMode enumValue)
        {
          switch(enumValue)
          {
          case Vp8RateControlMode::VBR:
            return "VBR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Vp8RateControlModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
