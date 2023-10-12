/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/H264Syntax.h>
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
      namespace H264SyntaxMapper
      {

        static constexpr uint32_t DEFAULT_HASH = ConstExprHashingUtils::HashString("DEFAULT");
        static constexpr uint32_t RP2027_HASH = ConstExprHashingUtils::HashString("RP2027");


        H264Syntax GetH264SyntaxForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return H264Syntax::DEFAULT;
          }
          else if (hashCode == RP2027_HASH)
          {
            return H264Syntax::RP2027;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<H264Syntax>(hashCode);
          }

          return H264Syntax::NOT_SET;
        }

        Aws::String GetNameForH264Syntax(H264Syntax enumValue)
        {
          switch(enumValue)
          {
          case H264Syntax::NOT_SET:
            return {};
          case H264Syntax::DEFAULT:
            return "DEFAULT";
          case H264Syntax::RP2027:
            return "RP2027";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace H264SyntaxMapper
    } // namespace Model
  } // namespace MediaLive
} // namespace Aws
