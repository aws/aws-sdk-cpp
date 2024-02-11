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

        static const int SDR_HASH = HashingUtils::HashString("SDR");
        static const int PQ_HASH = HashingUtils::HashString("PQ");
        static const int HLG_HASH = HashingUtils::HashString("HLG");
        static const int LINEAR_HASH = HashingUtils::HashString("LINEAR");
        static const int BT2100LINPQ_HASH = HashingUtils::HashString("BT2100LINPQ");
        static const int BT2100LINHLG_HASH = HashingUtils::HashString("BT2100LINHLG");
        static const int ST2065_1_HASH = HashingUtils::HashString("ST2065-1");
        static const int ST428_1_HASH = HashingUtils::HashString("ST428-1");
        static const int DENSITY_HASH = HashingUtils::HashString("DENSITY");


        Tcs GetTcsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
