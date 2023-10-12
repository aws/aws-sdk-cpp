/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H264Profile.h>
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
      namespace H264ProfileMapper
      {

        static constexpr uint32_t BASELINE_HASH = ConstExprHashingUtils::HashString("BASELINE");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t HIGH_10BIT_HASH = ConstExprHashingUtils::HashString("HIGH_10BIT");
        static constexpr uint32_t HIGH_422_HASH = ConstExprHashingUtils::HashString("HIGH_422");
        static constexpr uint32_t HIGH_422_10BIT_HASH = ConstExprHashingUtils::HashString("HIGH_422_10BIT");
        static constexpr uint32_t MAIN_HASH = ConstExprHashingUtils::HashString("MAIN");


        H264Profile GetH264ProfileForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BASELINE_HASH)
          {
            return H264Profile::BASELINE;
          }
          else if (hashCode == HIGH_HASH)
          {
            return H264Profile::HIGH;
          }
          else if (hashCode == HIGH_10BIT_HASH)
          {
            return H264Profile::HIGH_10BIT;
          }
          else if (hashCode == HIGH_422_HASH)
          {
            return H264Profile::HIGH_422;
          }
          else if (hashCode == HIGH_422_10BIT_HASH)
          {
            return H264Profile::HIGH_422_10BIT;
          }
          else if (hashCode == MAIN_HASH)
          {
            return H264Profile::MAIN;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264Profile>(hashCode);
          }

          return H264Profile::NOT_SET;
        }

        Aws::String GetNameForH264Profile(H264Profile enumValue)
        {
          switch(enumValue)
          {
          case H264Profile::NOT_SET:
            return {};
          case H264Profile::BASELINE:
            return "BASELINE";
          case H264Profile::HIGH:
            return "HIGH";
          case H264Profile::HIGH_10BIT:
            return "HIGH_10BIT";
          case H264Profile::HIGH_422:
            return "HIGH_422";
          case H264Profile::HIGH_422_10BIT:
            return "HIGH_422_10BIT";
          case H264Profile::MAIN:
            return "MAIN";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H264ProfileMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
