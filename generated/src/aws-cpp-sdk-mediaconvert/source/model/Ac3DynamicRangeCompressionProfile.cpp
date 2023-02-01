/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Ac3DynamicRangeCompressionProfile.h>
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
      namespace Ac3DynamicRangeCompressionProfileMapper
      {

        static const int FILM_STANDARD_HASH = HashingUtils::HashString("FILM_STANDARD");
        static const int NONE_HASH = HashingUtils::HashString("NONE");


        Ac3DynamicRangeCompressionProfile GetAc3DynamicRangeCompressionProfileForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FILM_STANDARD_HASH)
          {
            return Ac3DynamicRangeCompressionProfile::FILM_STANDARD;
          }
          else if (hashCode == NONE_HASH)
          {
            return Ac3DynamicRangeCompressionProfile::NONE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Ac3DynamicRangeCompressionProfile>(hashCode);
          }

          return Ac3DynamicRangeCompressionProfile::NOT_SET;
        }

        Aws::String GetNameForAc3DynamicRangeCompressionProfile(Ac3DynamicRangeCompressionProfile enumValue)
        {
          switch(enumValue)
          {
          case Ac3DynamicRangeCompressionProfile::FILM_STANDARD:
            return "FILM_STANDARD";
          case Ac3DynamicRangeCompressionProfile::NONE:
            return "NONE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace Ac3DynamicRangeCompressionProfileMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
