/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/SensitivityToAct.h>
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
      namespace SensitivityToActMapper
      {

        static const int LOW_HASH = HashingUtils::HashString("LOW");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int HIGH_HASH = HashingUtils::HashString("HIGH");


        SensitivityToAct GetSensitivityToActForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == LOW_HASH)
          {
            return SensitivityToAct::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return SensitivityToAct::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return SensitivityToAct::HIGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SensitivityToAct>(hashCode);
          }

          return SensitivityToAct::NOT_SET;
        }

        Aws::String GetNameForSensitivityToAct(SensitivityToAct enumValue)
        {
          switch(enumValue)
          {
          case SensitivityToAct::NOT_SET:
            return {};
          case SensitivityToAct::LOW:
            return "LOW";
          case SensitivityToAct::MEDIUM:
            return "MEDIUM";
          case SensitivityToAct::HIGH:
            return "HIGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SensitivityToActMapper
    } // namespace Model
  } // namespace WAFV2
} // namespace Aws
