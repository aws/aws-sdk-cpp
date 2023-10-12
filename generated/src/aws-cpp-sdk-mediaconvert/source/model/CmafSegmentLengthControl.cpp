/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmafSegmentLengthControl.h>
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
      namespace CmafSegmentLengthControlMapper
      {

        static constexpr uint32_t EXACT_HASH = ConstExprHashingUtils::HashString("EXACT");
        static constexpr uint32_t GOP_MULTIPLE_HASH = ConstExprHashingUtils::HashString("GOP_MULTIPLE");


        CmafSegmentLengthControl GetCmafSegmentLengthControlForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EXACT_HASH)
          {
            return CmafSegmentLengthControl::EXACT;
          }
          else if (hashCode == GOP_MULTIPLE_HASH)
          {
            return CmafSegmentLengthControl::GOP_MULTIPLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafSegmentLengthControl>(hashCode);
          }

          return CmafSegmentLengthControl::NOT_SET;
        }

        Aws::String GetNameForCmafSegmentLengthControl(CmafSegmentLengthControl enumValue)
        {
          switch(enumValue)
          {
          case CmafSegmentLengthControl::NOT_SET:
            return {};
          case CmafSegmentLengthControl::EXACT:
            return "EXACT";
          case CmafSegmentLengthControl::GOP_MULTIPLE:
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

      } // namespace CmafSegmentLengthControlMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
