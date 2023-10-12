/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/SnowballType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Snowball
  {
    namespace Model
    {
      namespace SnowballTypeMapper
      {

        static constexpr uint32_t STANDARD_HASH = ConstExprHashingUtils::HashString("STANDARD");
        static constexpr uint32_t EDGE_HASH = ConstExprHashingUtils::HashString("EDGE");
        static constexpr uint32_t EDGE_C_HASH = ConstExprHashingUtils::HashString("EDGE_C");
        static constexpr uint32_t EDGE_CG_HASH = ConstExprHashingUtils::HashString("EDGE_CG");
        static constexpr uint32_t EDGE_S_HASH = ConstExprHashingUtils::HashString("EDGE_S");
        static constexpr uint32_t SNC1_HDD_HASH = ConstExprHashingUtils::HashString("SNC1_HDD");
        static constexpr uint32_t SNC1_SSD_HASH = ConstExprHashingUtils::HashString("SNC1_SSD");
        static constexpr uint32_t V3_5C_HASH = ConstExprHashingUtils::HashString("V3_5C");
        static constexpr uint32_t V3_5S_HASH = ConstExprHashingUtils::HashString("V3_5S");
        static constexpr uint32_t RACK_5U_C_HASH = ConstExprHashingUtils::HashString("RACK_5U_C");


        SnowballType GetSnowballTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == STANDARD_HASH)
          {
            return SnowballType::STANDARD;
          }
          else if (hashCode == EDGE_HASH)
          {
            return SnowballType::EDGE;
          }
          else if (hashCode == EDGE_C_HASH)
          {
            return SnowballType::EDGE_C;
          }
          else if (hashCode == EDGE_CG_HASH)
          {
            return SnowballType::EDGE_CG;
          }
          else if (hashCode == EDGE_S_HASH)
          {
            return SnowballType::EDGE_S;
          }
          else if (hashCode == SNC1_HDD_HASH)
          {
            return SnowballType::SNC1_HDD;
          }
          else if (hashCode == SNC1_SSD_HASH)
          {
            return SnowballType::SNC1_SSD;
          }
          else if (hashCode == V3_5C_HASH)
          {
            return SnowballType::V3_5C;
          }
          else if (hashCode == V3_5S_HASH)
          {
            return SnowballType::V3_5S;
          }
          else if (hashCode == RACK_5U_C_HASH)
          {
            return SnowballType::RACK_5U_C;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SnowballType>(hashCode);
          }

          return SnowballType::NOT_SET;
        }

        Aws::String GetNameForSnowballType(SnowballType enumValue)
        {
          switch(enumValue)
          {
          case SnowballType::NOT_SET:
            return {};
          case SnowballType::STANDARD:
            return "STANDARD";
          case SnowballType::EDGE:
            return "EDGE";
          case SnowballType::EDGE_C:
            return "EDGE_C";
          case SnowballType::EDGE_CG:
            return "EDGE_CG";
          case SnowballType::EDGE_S:
            return "EDGE_S";
          case SnowballType::SNC1_HDD:
            return "SNC1_HDD";
          case SnowballType::SNC1_SSD:
            return "SNC1_SSD";
          case SnowballType::V3_5C:
            return "V3_5C";
          case SnowballType::V3_5S:
            return "V3_5S";
          case SnowballType::RACK_5U_C:
            return "RACK_5U_C";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SnowballTypeMapper
    } // namespace Model
  } // namespace Snowball
} // namespace Aws
