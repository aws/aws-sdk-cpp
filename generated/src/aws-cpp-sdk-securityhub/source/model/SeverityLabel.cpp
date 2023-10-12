/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/SeverityLabel.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SecurityHub
  {
    namespace Model
    {
      namespace SeverityLabelMapper
      {

        static constexpr uint32_t INFORMATIONAL_HASH = ConstExprHashingUtils::HashString("INFORMATIONAL");
        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t CRITICAL_HASH = ConstExprHashingUtils::HashString("CRITICAL");


        SeverityLabel GetSeverityLabelForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == INFORMATIONAL_HASH)
          {
            return SeverityLabel::INFORMATIONAL;
          }
          else if (hashCode == LOW_HASH)
          {
            return SeverityLabel::LOW;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return SeverityLabel::MEDIUM;
          }
          else if (hashCode == HIGH_HASH)
          {
            return SeverityLabel::HIGH;
          }
          else if (hashCode == CRITICAL_HASH)
          {
            return SeverityLabel::CRITICAL;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<SeverityLabel>(hashCode);
          }

          return SeverityLabel::NOT_SET;
        }

        Aws::String GetNameForSeverityLabel(SeverityLabel enumValue)
        {
          switch(enumValue)
          {
          case SeverityLabel::NOT_SET:
            return {};
          case SeverityLabel::INFORMATIONAL:
            return "INFORMATIONAL";
          case SeverityLabel::LOW:
            return "LOW";
          case SeverityLabel::MEDIUM:
            return "MEDIUM";
          case SeverityLabel::HIGH:
            return "HIGH";
          case SeverityLabel::CRITICAL:
            return "CRITICAL";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace SeverityLabelMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
