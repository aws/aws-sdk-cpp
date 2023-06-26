/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/InputScanType.h>
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
      namespace InputScanTypeMapper
      {

        static const int AUTO_HASH = HashingUtils::HashString("AUTO");
        static const int PSF_HASH = HashingUtils::HashString("PSF");


        InputScanType GetInputScanTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == AUTO_HASH)
          {
            return InputScanType::AUTO;
          }
          else if (hashCode == PSF_HASH)
          {
            return InputScanType::PSF;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InputScanType>(hashCode);
          }

          return InputScanType::NOT_SET;
        }

        Aws::String GetNameForInputScanType(InputScanType enumValue)
        {
          switch(enumValue)
          {
          case InputScanType::AUTO:
            return "AUTO";
          case InputScanType::PSF:
            return "PSF";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InputScanTypeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
