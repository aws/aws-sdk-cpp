/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Mpeg2Syntax.h>
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
      namespace Mpeg2SyntaxMapper
      {

        static constexpr uint32_t DEFAULT_HASH = ConstExprHashingUtils::HashString("DEFAULT");
        static constexpr uint32_t D_10_HASH = ConstExprHashingUtils::HashString("D_10");


        Mpeg2Syntax GetMpeg2SyntaxForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DEFAULT_HASH)
          {
            return Mpeg2Syntax::DEFAULT;
          }
          else if (hashCode == D_10_HASH)
          {
            return Mpeg2Syntax::D_10;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Mpeg2Syntax>(hashCode);
          }

          return Mpeg2Syntax::NOT_SET;
        }

        Aws::String GetNameForMpeg2Syntax(Mpeg2Syntax enumValue)
        {
          switch(enumValue)
          {
          case Mpeg2Syntax::NOT_SET:
            return {};
          case Mpeg2Syntax::DEFAULT:
            return "DEFAULT";
          case Mpeg2Syntax::D_10:
            return "D_10";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Mpeg2SyntaxMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
