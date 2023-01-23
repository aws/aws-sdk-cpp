/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/HlsCodecSpecification.h>
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
      namespace HlsCodecSpecificationMapper
      {

        static const int RFC_6381_HASH = HashingUtils::HashString("RFC_6381");
        static const int RFC_4281_HASH = HashingUtils::HashString("RFC_4281");


        HlsCodecSpecification GetHlsCodecSpecificationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RFC_6381_HASH)
          {
            return HlsCodecSpecification::RFC_6381;
          }
          else if (hashCode == RFC_4281_HASH)
          {
            return HlsCodecSpecification::RFC_4281;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HlsCodecSpecification>(hashCode);
          }

          return HlsCodecSpecification::NOT_SET;
        }

        Aws::String GetNameForHlsCodecSpecification(HlsCodecSpecification enumValue)
        {
          switch(enumValue)
          {
          case HlsCodecSpecification::RFC_6381:
            return "RFC_6381";
          case HlsCodecSpecification::RFC_4281:
            return "RFC_4281";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HlsCodecSpecificationMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
