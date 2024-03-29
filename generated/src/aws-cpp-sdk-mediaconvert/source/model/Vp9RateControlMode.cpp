﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Vp9RateControlMode.h>
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
      namespace Vp9RateControlModeMapper
      {

        static const int VBR_HASH = HashingUtils::HashString("VBR");


        Vp9RateControlMode GetVp9RateControlModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == VBR_HASH)
          {
            return Vp9RateControlMode::VBR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Vp9RateControlMode>(hashCode);
          }

          return Vp9RateControlMode::NOT_SET;
        }

        Aws::String GetNameForVp9RateControlMode(Vp9RateControlMode enumValue)
        {
          switch(enumValue)
          {
          case Vp9RateControlMode::NOT_SET:
            return {};
          case Vp9RateControlMode::VBR:
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

      } // namespace Vp9RateControlModeMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
