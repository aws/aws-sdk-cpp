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

        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");
        static const int D_10_HASH = HashingUtils::HashString("D_10");


        Mpeg2Syntax GetMpeg2SyntaxForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
