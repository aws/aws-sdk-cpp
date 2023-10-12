/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/Colorimetry.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConnect
  {
    namespace Model
    {
      namespace ColorimetryMapper
      {

        static constexpr uint32_t BT601_HASH = ConstExprHashingUtils::HashString("BT601");
        static constexpr uint32_t BT709_HASH = ConstExprHashingUtils::HashString("BT709");
        static constexpr uint32_t BT2020_HASH = ConstExprHashingUtils::HashString("BT2020");
        static constexpr uint32_t BT2100_HASH = ConstExprHashingUtils::HashString("BT2100");
        static constexpr uint32_t ST2065_1_HASH = ConstExprHashingUtils::HashString("ST2065-1");
        static constexpr uint32_t ST2065_3_HASH = ConstExprHashingUtils::HashString("ST2065-3");
        static constexpr uint32_t XYZ_HASH = ConstExprHashingUtils::HashString("XYZ");


        Colorimetry GetColorimetryForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == BT601_HASH)
          {
            return Colorimetry::BT601;
          }
          else if (hashCode == BT709_HASH)
          {
            return Colorimetry::BT709;
          }
          else if (hashCode == BT2020_HASH)
          {
            return Colorimetry::BT2020;
          }
          else if (hashCode == BT2100_HASH)
          {
            return Colorimetry::BT2100;
          }
          else if (hashCode == ST2065_1_HASH)
          {
            return Colorimetry::ST2065_1;
          }
          else if (hashCode == ST2065_3_HASH)
          {
            return Colorimetry::ST2065_3;
          }
          else if (hashCode == XYZ_HASH)
          {
            return Colorimetry::XYZ;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Colorimetry>(hashCode);
          }

          return Colorimetry::NOT_SET;
        }

        Aws::String GetNameForColorimetry(Colorimetry enumValue)
        {
          switch(enumValue)
          {
          case Colorimetry::NOT_SET:
            return {};
          case Colorimetry::BT601:
            return "BT601";
          case Colorimetry::BT709:
            return "BT709";
          case Colorimetry::BT2020:
            return "BT2020";
          case Colorimetry::BT2100:
            return "BT2100";
          case Colorimetry::ST2065_1:
            return "ST2065-1";
          case Colorimetry::ST2065_3:
            return "ST2065-3";
          case Colorimetry::XYZ:
            return "XYZ";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ColorimetryMapper
    } // namespace Model
  } // namespace MediaConnect
} // namespace Aws
