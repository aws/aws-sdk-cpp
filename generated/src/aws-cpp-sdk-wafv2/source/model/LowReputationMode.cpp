/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/LowReputationMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WAFV2
  {
    namespace Model
    {
      namespace LowReputationModeMapper
      {

        static const int ACTIVE_UNDER_DDOS_HASH = HashingUtils::HashString("ACTIVE_UNDER_DDOS");
        static const int ALWAYS_ON_HASH = HashingUtils::HashString("ALWAYS_ON");


        LowReputationMode GetLowReputationModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ACTIVE_UNDER_DDOS_HASH)
          {
            return LowReputationMode::ACTIVE_UNDER_DDOS;
          }
          else if (hashCode == ALWAYS_ON_HASH)
          {
            return LowReputationMode::ALWAYS_ON;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LowReputationMode>(hashCode);
          }

          return LowReputationMode::NOT_SET;
        }

        Aws::String GetNameForLowReputationMode(LowReputationMode enumValue)
        {
          switch(enumValue)
          {
          case LowReputationMode::NOT_SET:
            return {};
          case LowReputationMode::ACTIVE_UNDER_DDOS:
            return "ACTIVE_UNDER_DDOS";
          case LowReputationMode::ALWAYS_ON:
            return "ALWAYS_ON";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LowReputationModeMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
