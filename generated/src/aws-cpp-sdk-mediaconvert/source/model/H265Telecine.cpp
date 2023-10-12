/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H265Telecine.h>
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
      namespace H265TelecineMapper
      {

        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t SOFT_HASH = ConstExprHashingUtils::HashString("SOFT");
        static constexpr uint32_t HARD_HASH = ConstExprHashingUtils::HashString("HARD");


        H265Telecine GetH265TelecineForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return H265Telecine::NONE;
          }
          else if (hashCode == SOFT_HASH)
          {
            return H265Telecine::SOFT;
          }
          else if (hashCode == HARD_HASH)
          {
            return H265Telecine::HARD;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265Telecine>(hashCode);
          }

          return H265Telecine::NOT_SET;
        }

        Aws::String GetNameForH265Telecine(H265Telecine enumValue)
        {
          switch(enumValue)
          {
          case H265Telecine::NOT_SET:
            return {};
          case H265Telecine::NONE:
            return "NONE";
          case H265Telecine::SOFT:
            return "SOFT";
          case H265Telecine::HARD:
            return "HARD";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H265TelecineMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
