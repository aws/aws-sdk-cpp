/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/Risk.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WellArchitected
  {
    namespace Model
    {
      namespace RiskMapper
      {

        static constexpr uint32_t UNANSWERED_HASH = ConstExprHashingUtils::HashString("UNANSWERED");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t NONE_HASH = ConstExprHashingUtils::HashString("NONE");
        static constexpr uint32_t NOT_APPLICABLE_HASH = ConstExprHashingUtils::HashString("NOT_APPLICABLE");


        Risk GetRiskForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == UNANSWERED_HASH)
          {
            return Risk::UNANSWERED;
          }
          else if (hashCode == HIGH_HASH)
          {
            return Risk::HIGH;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return Risk::MEDIUM;
          }
          else if (hashCode == NONE_HASH)
          {
            return Risk::NONE;
          }
          else if (hashCode == NOT_APPLICABLE_HASH)
          {
            return Risk::NOT_APPLICABLE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<Risk>(hashCode);
          }

          return Risk::NOT_SET;
        }

        Aws::String GetNameForRisk(Risk enumValue)
        {
          switch(enumValue)
          {
          case Risk::NOT_SET:
            return {};
          case Risk::UNANSWERED:
            return "UNANSWERED";
          case Risk::HIGH:
            return "HIGH";
          case Risk::MEDIUM:
            return "MEDIUM";
          case Risk::NONE:
            return "NONE";
          case Risk::NOT_APPLICABLE:
            return "NOT_APPLICABLE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RiskMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
