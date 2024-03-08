/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Av1BitDepth.h>
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
      namespace Av1BitDepthMapper
      {

        static const int BIT_8_HASH = HashingUtils::HashString("BIT_8");
        static const int BIT_10_HASH = HashingUtils::HashString("BIT_10");


        Av1BitDepth GetAv1BitDepthForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BIT_8_HASH)
          {
            return Av1BitDepth::BIT_8;
          }
          else if (hashCode == BIT_10_HASH)
          {
            return Av1BitDepth::BIT_10;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Av1BitDepth>(hashCode);
          }

          return Av1BitDepth::NOT_SET;
        }

        Aws::String GetNameForAv1BitDepth(Av1BitDepth enumValue)
        {
          switch(enumValue)
          {
          case Av1BitDepth::NOT_SET:
            return {};
          case Av1BitDepth::BIT_8:
            return "BIT_8";
          case Av1BitDepth::BIT_10:
            return "BIT_10";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Av1BitDepthMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
