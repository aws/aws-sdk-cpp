/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AutomationRulesActionTypeV2.h>
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
      namespace AutomationRulesActionTypeV2Mapper
      {

        static const int FINDING_FIELDS_UPDATE_HASH = HashingUtils::HashString("FINDING_FIELDS_UPDATE");
        static const int EXTERNAL_INTEGRATION_HASH = HashingUtils::HashString("EXTERNAL_INTEGRATION");


        AutomationRulesActionTypeV2 GetAutomationRulesActionTypeV2ForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FINDING_FIELDS_UPDATE_HASH)
          {
            return AutomationRulesActionTypeV2::FINDING_FIELDS_UPDATE;
          }
          else if (hashCode == EXTERNAL_INTEGRATION_HASH)
          {
            return AutomationRulesActionTypeV2::EXTERNAL_INTEGRATION;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomationRulesActionTypeV2>(hashCode);
          }

          return AutomationRulesActionTypeV2::NOT_SET;
        }

        Aws::String GetNameForAutomationRulesActionTypeV2(AutomationRulesActionTypeV2 enumValue)
        {
          switch(enumValue)
          {
          case AutomationRulesActionTypeV2::NOT_SET:
            return {};
          case AutomationRulesActionTypeV2::FINDING_FIELDS_UPDATE:
            return "FINDING_FIELDS_UPDATE";
          case AutomationRulesActionTypeV2::EXTERNAL_INTEGRATION:
            return "EXTERNAL_INTEGRATION";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutomationRulesActionTypeV2Mapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
