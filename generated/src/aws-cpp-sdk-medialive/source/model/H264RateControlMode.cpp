/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H264RateControlMode.h>
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
      namespace H264RateControlModeMapper
      {

        static const int CBR_HASH = HashingUtils::HashString("CBR");
        static const int MULTIPLEX_HASH = HashingUtils::HashString("MULTIPLEX");
        static const int QVBR_HASH = HashingUtils::HashString("QVBR");
        static const int VBR_HASH = HashingUtils::HashString("VBR");


        H264RateControlMode GetH264RateControlModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CBR_HASH)
          {
            return H264RateControlMode::CBR;
          }
          else if (hashCode == MULTIPLEX_HASH)
          {
            return H264RateControlMode::MULTIPLEX;
          }
          else if (hashCode == QVBR_HASH)
          {
            return H264RateControlMode::QVBR;
          }
          else if (hashCode == VBR_HASH)
          {
            return H264RateControlMode::VBR;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264RateControlMode>(hashCode);
          }

          return H264RateControlMode::NOT_SET;
        }

        Aws::String GetNameForH264RateControlMode(H264RateControlMode enumValue)
        {
          switch(enumValue)
          {
          case H264RateControlMode::CBR:
            return "CBR";
          case H264RateControlMode::MULTIPLEX:
            return "MULTIPLEX";
          case H264RateControlMode::QVBR:
            return "QVBR";
          case H264RateControlMode::VBR:
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

      } // namespace H264RateControlModeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
