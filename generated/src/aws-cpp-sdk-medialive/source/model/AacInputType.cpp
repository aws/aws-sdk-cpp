/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/AacInputType.h>
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
      namespace AacInputTypeMapper
      {

        static constexpr uint32_t BROADCASTER_MIXED_AD_HASH = ConstExprHashingUtils::HashString("BROADCASTER_MIXED_AD");
        static constexpr uint32_t NORMAL_HASH = ConstExprHashingUtils::HashString("NORMAL");


        AacInputType GetAacInputTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BROADCASTER_MIXED_AD_HASH)
          {
            return AacInputType::BROADCASTER_MIXED_AD;
          }
          else if (hashCode == NORMAL_HASH)
          {
            return AacInputType::NORMAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AacInputType>(hashCode);
          }

          return AacInputType::NOT_SET;
        }

        Aws::String GetNameForAacInputType(AacInputType enumValue)
        {
          switch(enumValue)
          {
          case AacInputType::NOT_SET:
            return {};
          case AacInputType::BROADCASTER_MIXED_AD:
            return "BROADCASTER_MIXED_AD";
          case AacInputType::NORMAL:
            return "NORMAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AacInputTypeMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
