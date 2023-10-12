/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/ActionSeverity.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace OpenSearchService
  {
    namespace Model
    {
      namespace ActionSeverityMapper
      {

        static constexpr uint32_t HIGH_HASH = ConstExprHashingUtils::HashString("HIGH");
        static constexpr uint32_t MEDIUM_HASH = ConstExprHashingUtils::HashString("MEDIUM");
        static constexpr uint32_t LOW_HASH = ConstExprHashingUtils::HashString("LOW");


        ActionSeverity GetActionSeverityForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == HIGH_HASH)
          {
            return ActionSeverity::HIGH;
          }
          else if (hashCode == MEDIUM_HASH)
          {
            return ActionSeverity::MEDIUM;
          }
          else if (hashCode == LOW_HASH)
          {
            return ActionSeverity::LOW;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ActionSeverity>(hashCode);
          }

          return ActionSeverity::NOT_SET;
        }

        Aws::String GetNameForActionSeverity(ActionSeverity enumValue)
        {
          switch(enumValue)
          {
          case ActionSeverity::NOT_SET:
            return {};
          case ActionSeverity::HIGH:
            return "HIGH";
          case ActionSeverity::MEDIUM:
            return "MEDIUM";
          case ActionSeverity::LOW:
            return "LOW";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ActionSeverityMapper
    } // namespace Model
  } // namespace OpenSearchService
} // namespace Aws
