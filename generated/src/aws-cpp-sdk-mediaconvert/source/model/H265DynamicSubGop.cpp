/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H265DynamicSubGop.h>
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
      namespace H265DynamicSubGopMapper
      {

        static const int ADAPTIVE_HASH = HashingUtils::HashString("ADAPTIVE");
        static const int STATIC__HASH = HashingUtils::HashString("STATIC");


        H265DynamicSubGop GetH265DynamicSubGopForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ADAPTIVE_HASH)
          {
            return H265DynamicSubGop::ADAPTIVE;
          }
          else if (hashCode == STATIC__HASH)
          {
            return H265DynamicSubGop::STATIC_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H265DynamicSubGop>(hashCode);
          }

          return H265DynamicSubGop::NOT_SET;
        }

        Aws::String GetNameForH265DynamicSubGop(H265DynamicSubGop enumValue)
        {
          switch(enumValue)
          {
          case H265DynamicSubGop::ADAPTIVE:
            return "ADAPTIVE";
          case H265DynamicSubGop::STATIC_:
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

      } // namespace H265DynamicSubGopMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
