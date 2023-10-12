/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Mpeg2DynamicSubGop.h>
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
      namespace Mpeg2DynamicSubGopMapper
      {

        static constexpr uint32_t ADAPTIVE_HASH = ConstExprHashingUtils::HashString("ADAPTIVE");
        static constexpr uint32_t STATIC__HASH = ConstExprHashingUtils::HashString("STATIC");


        Mpeg2DynamicSubGop GetMpeg2DynamicSubGopForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADAPTIVE_HASH)
          {
            return Mpeg2DynamicSubGop::ADAPTIVE;
          }
          else if (hashCode == STATIC__HASH)
          {
            return Mpeg2DynamicSubGop::STATIC_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mpeg2DynamicSubGop>(hashCode);
          }

          return Mpeg2DynamicSubGop::NOT_SET;
        }

        Aws::String GetNameForMpeg2DynamicSubGop(Mpeg2DynamicSubGop enumValue)
        {
          switch(enumValue)
          {
          case Mpeg2DynamicSubGop::NOT_SET:
            return {};
          case Mpeg2DynamicSubGop::ADAPTIVE:
            return "ADAPTIVE";
          case Mpeg2DynamicSubGop::STATIC_:
            return "STATIC";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Mpeg2DynamicSubGopMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
