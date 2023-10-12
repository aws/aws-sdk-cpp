/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/DashIsoSegmentLengthControl.h>
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
      namespace DashIsoSegmentLengthControlMapper
      {

        static constexpr uint32_t EXACT_HASH = ConstExprHashingUtils::HashString("EXACT");
        static constexpr uint32_t GOP_MULTIPLE_HASH = ConstExprHashingUtils::HashString("GOP_MULTIPLE");


        DashIsoSegmentLengthControl GetDashIsoSegmentLengthControlForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXACT_HASH)
          {
            return DashIsoSegmentLengthControl::EXACT;
          }
          else if (hashCode == GOP_MULTIPLE_HASH)
          {
            return DashIsoSegmentLengthControl::GOP_MULTIPLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DashIsoSegmentLengthControl>(hashCode);
          }

          return DashIsoSegmentLengthControl::NOT_SET;
        }

        Aws::String GetNameForDashIsoSegmentLengthControl(DashIsoSegmentLengthControl enumValue)
        {
          switch(enumValue)
          {
          case DashIsoSegmentLengthControl::NOT_SET:
            return {};
          case DashIsoSegmentLengthControl::EXACT:
            return "EXACT";
          case DashIsoSegmentLengthControl::GOP_MULTIPLE:
            return "GOP_MULTIPLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DashIsoSegmentLengthControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
