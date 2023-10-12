/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/Tcs.h>
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
      namespace TcsMapper
      {

        static constexpr uint32_t SDR_HASH = ConstExprHashingUtils::HashString("SDR");
        static constexpr uint32_t PQ_HASH = ConstExprHashingUtils::HashString("PQ");
        static constexpr uint32_t HLG_HASH = ConstExprHashingUtils::HashString("HLG");
        static constexpr uint32_t LINEAR_HASH = ConstExprHashingUtils::HashString("LINEAR");
        static constexpr uint32_t BT2100LINPQ_HASH = ConstExprHashingUtils::HashString("BT2100LINPQ");
        static constexpr uint32_t BT2100LINHLG_HASH = ConstExprHashingUtils::HashString("BT2100LINHLG");
        static constexpr uint32_t ST2065_1_HASH = ConstExprHashingUtils::HashString("ST2065-1");
        static constexpr uint32_t ST428_1_HASH = ConstExprHashingUtils::HashString("ST428-1");
        static constexpr uint32_t DENSITY_HASH = ConstExprHashingUtils::HashString("DENSITY");


        Tcs GetTcsForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SDR_HASH)
          {
            return Tcs::SDR;
          }
          else if (hashCode == PQ_HASH)
          {
            return Tcs::PQ;
          }
          else if (hashCode == HLG_HASH)
          {
            return Tcs::HLG;
          }
          else if (hashCode == LINEAR_HASH)
          {
            return Tcs::LINEAR;
          }
          else if (hashCode == BT2100LINPQ_HASH)
          {
            return Tcs::BT2100LINPQ;
          }
          else if (hashCode == BT2100LINHLG_HASH)
          {
            return Tcs::BT2100LINHLG;
          }
          else if (hashCode == ST2065_1_HASH)
          {
            return Tcs::ST2065_1;
          }
          else if (hashCode == ST428_1_HASH)
          {
            return Tcs::ST428_1;
          }
          else if (hashCode == DENSITY_HASH)
          {
            return Tcs::DENSITY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Tcs>(hashCode);
          }

          return Tcs::NOT_SET;
        }

        Aws::String GetNameForTcs(Tcs enumValue)
        {
          switch(enumValue)
          {
          case Tcs::NOT_SET:
            return {};
          case Tcs::SDR:
            return "SDR";
          case Tcs::PQ:
            return "PQ";
          case Tcs::HLG:
            return "HLG";
          case Tcs::LINEAR:
            return "LINEAR";
          case Tcs::BT2100LINPQ:
            return "BT2100LINPQ";
          case Tcs::BT2100LINHLG:
            return "BT2100LINHLG";
          case Tcs::ST2065_1:
            return "ST2065-1";
          case Tcs::ST428_1:
            return "ST428-1";
          case Tcs::DENSITY:
            return "DENSITY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TcsMapper
    } // namespace Model
  } // namespace MediaConnect
} // namespace Aws
