/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/M2tsRateMode.h>
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
      namespace M2tsRateModeMapper
      {

        static const int VBR_HASH = HashingUtils::HashString("VBR");
        static const int CBR_HASH = HashingUtils::HashString("CBR");


        M2tsRateMode GetM2tsRateModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VBR_HASH)
          {
            return M2tsRateMode::VBR;
          }
          else if (hashCode == CBR_HASH)
          {
            return M2tsRateMode::CBR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<M2tsRateMode>(hashCode);
          }

          return M2tsRateMode::NOT_SET;
        }

        Aws::String GetNameForM2tsRateMode(M2tsRateMode enumValue)
        {
          switch(enumValue)
          {
          case M2tsRateMode::VBR:
            return "VBR";
          case M2tsRateMode::CBR:
            return "CBR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace M2tsRateModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
