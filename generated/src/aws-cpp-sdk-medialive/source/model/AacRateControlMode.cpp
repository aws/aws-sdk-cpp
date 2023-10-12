/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AacRateControlMode.h>
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
      namespace AacRateControlModeMapper
      {

        static constexpr uint32_t CBR_HASH = ConstExprHashingUtils::HashString("CBR");
        static constexpr uint32_t VBR_HASH = ConstExprHashingUtils::HashString("VBR");


        AacRateControlMode GetAacRateControlModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CBR_HASH)
          {
            return AacRateControlMode::CBR;
          }
          else if (hashCode == VBR_HASH)
          {
            return AacRateControlMode::VBR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AacRateControlMode>(hashCode);
          }

          return AacRateControlMode::NOT_SET;
        }

        Aws::String GetNameForAacRateControlMode(AacRateControlMode enumValue)
        {
          switch(enumValue)
          {
          case AacRateControlMode::NOT_SET:
            return {};
          case AacRateControlMode::CBR:
            return "CBR";
          case AacRateControlMode::VBR:
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

      } // namespace AacRateControlModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
