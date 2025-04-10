/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/HallucinationReductionControl.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace QBusiness
  {
    namespace Model
    {
      namespace HallucinationReductionControlMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        HallucinationReductionControl GetHallucinationReductionControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return HallucinationReductionControl::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return HallucinationReductionControl::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<HallucinationReductionControl>(hashCode);
          }

          return HallucinationReductionControl::NOT_SET;
        }

        Aws::String GetNameForHallucinationReductionControl(HallucinationReductionControl enumValue)
        {
          switch(enumValue)
          {
          case HallucinationReductionControl::NOT_SET:
            return {};
          case HallucinationReductionControl::ENABLED:
            return "ENABLED";
          case HallucinationReductionControl::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace HallucinationReductionControlMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
