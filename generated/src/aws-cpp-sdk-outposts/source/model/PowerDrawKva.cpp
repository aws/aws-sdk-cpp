/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/PowerDrawKva.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Outposts
  {
    namespace Model
    {
      namespace PowerDrawKvaMapper
      {

        static const int POWER_5_KVA_HASH = HashingUtils::HashString("POWER_5_KVA");
        static const int POWER_10_KVA_HASH = HashingUtils::HashString("POWER_10_KVA");
        static const int POWER_15_KVA_HASH = HashingUtils::HashString("POWER_15_KVA");
        static const int POWER_30_KVA_HASH = HashingUtils::HashString("POWER_30_KVA");


        PowerDrawKva GetPowerDrawKvaForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == POWER_5_KVA_HASH)
          {
            return PowerDrawKva::POWER_5_KVA;
          }
          else if (hashCode == POWER_10_KVA_HASH)
          {
            return PowerDrawKva::POWER_10_KVA;
          }
          else if (hashCode == POWER_15_KVA_HASH)
          {
            return PowerDrawKva::POWER_15_KVA;
          }
          else if (hashCode == POWER_30_KVA_HASH)
          {
            return PowerDrawKva::POWER_30_KVA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PowerDrawKva>(hashCode);
          }

          return PowerDrawKva::NOT_SET;
        }

        Aws::String GetNameForPowerDrawKva(PowerDrawKva enumValue)
        {
          switch(enumValue)
          {
          case PowerDrawKva::NOT_SET:
            return {};
          case PowerDrawKva::POWER_5_KVA:
            return "POWER_5_KVA";
          case PowerDrawKva::POWER_10_KVA:
            return "POWER_10_KVA";
          case PowerDrawKva::POWER_15_KVA:
            return "POWER_15_KVA";
          case PowerDrawKva::POWER_30_KVA:
            return "POWER_30_KVA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PowerDrawKvaMapper
    } // namespace Model
  } // namespace Outposts
} // namespace Aws
