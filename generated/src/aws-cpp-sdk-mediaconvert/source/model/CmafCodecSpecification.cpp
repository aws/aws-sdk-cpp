/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/CmafCodecSpecification.h>
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
      namespace CmafCodecSpecificationMapper
      {

        static const int RFC_6381_HASH = HashingUtils::HashString("RFC_6381");
        static const int RFC_4281_HASH = HashingUtils::HashString("RFC_4281");


        CmafCodecSpecification GetCmafCodecSpecificationForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RFC_6381_HASH)
          {
            return CmafCodecSpecification::RFC_6381;
          }
          else if (hashCode == RFC_4281_HASH)
          {
            return CmafCodecSpecification::RFC_4281;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<CmafCodecSpecification>(hashCode);
          }

          return CmafCodecSpecification::NOT_SET;
        }

        Aws::String GetNameForCmafCodecSpecification(CmafCodecSpecification enumValue)
        {
          switch(enumValue)
          {
          case CmafCodecSpecification::RFC_6381:
            return "RFC_6381";
          case CmafCodecSpecification::RFC_4281:
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

      } // namespace CmafCodecSpecificationMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
