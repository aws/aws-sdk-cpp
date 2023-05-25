/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/H264Syntax.h>
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
      namespace H264SyntaxMapper
      {

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int RP2027_HASH = HashingUtils::HashString("RP2027");


        H264Syntax GetH264SyntaxForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
  } // namespace MediaConvert
} // namespace Aws
