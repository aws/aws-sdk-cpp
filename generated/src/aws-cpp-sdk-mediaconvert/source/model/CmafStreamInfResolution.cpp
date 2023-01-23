/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmafStreamInfResolution.h>
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
      namespace CmafStreamInfResolutionMapper
      {

        static const int INCLUDE_HASH = HashingUtils::HashString("INCLUDE");
        static const int EXCLUDE_HASH = HashingUtils::HashString("EXCLUDE");


        CmafStreamInfResolution GetCmafStreamInfResolutionForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INCLUDE_HASH)
          {
            return CmafStreamInfResolution::INCLUDE;
          }
          else if (hashCode == EXCLUDE_HASH)
          {
            return CmafStreamInfResolution::EXCLUDE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafStreamInfResolution>(hashCode);
          }

          return CmafStreamInfResolution::NOT_SET;
        }

        Aws::String GetNameForCmafStreamInfResolution(CmafStreamInfResolution enumValue)
        {
          switch(enumValue)
          {
          case CmafStreamInfResolution::INCLUDE:
            return "INCLUDE";
          case CmafStreamInfResolution::EXCLUDE:
            return "EXCLUDE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace CmafStreamInfResolutionMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
