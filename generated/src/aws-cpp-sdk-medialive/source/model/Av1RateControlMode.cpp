﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Av1RateControlMode.h>
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
      namespace Av1RateControlModeMapper
      {

        static const int CBR_HASH = HashingUtils::HashString("CBR");
        static const int QVBR_HASH = HashingUtils::HashString("QVBR");


        Av1RateControlMode GetAv1RateControlModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CBR_HASH)
          {
            return Av1RateControlMode::CBR;
          }
          else if (hashCode == QVBR_HASH)
          {
            return Av1RateControlMode::QVBR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Av1RateControlMode>(hashCode);
          }

          return Av1RateControlMode::NOT_SET;
        }

        Aws::String GetNameForAv1RateControlMode(Av1RateControlMode enumValue)
        {
          switch(enumValue)
          {
          case Av1RateControlMode::NOT_SET:
            return {};
          case Av1RateControlMode::CBR:
            return "CBR";
          case Av1RateControlMode::QVBR:
            return "QVBR";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Av1RateControlModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
