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

        static const int HIGH_HASH = HashingUtils::HashString("HIGH");
        static const int MEDIUM_HASH = HashingUtils::HashString("MEDIUM");
        static const int LOW_HASH = HashingUtils::HashString("LOW");


        ActionSeverity GetActionSeverityForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
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
