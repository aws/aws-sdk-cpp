/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AutomationRulesActionType.h>
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
      namespace AutomationRulesActionTypeMapper
      {

        static const int FINDING_FIELDS_UPDATE_HASH = HashingUtils::HashString("FINDING_FIELDS_UPDATE");


        AutomationRulesActionType GetAutomationRulesActionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == FINDING_FIELDS_UPDATE_HASH)
          {
            return AutomationRulesActionType::FINDING_FIELDS_UPDATE;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomationRulesActionType>(hashCode);
          }

          return AutomationRulesActionType::NOT_SET;
        }

        Aws::String GetNameForAutomationRulesActionType(AutomationRulesActionType enumValue)
        {
          switch(enumValue)
          {
          case AutomationRulesActionType::NOT_SET:
            return {};
          case AutomationRulesActionType::FINDING_FIELDS_UPDATE:
            return "FINDING_FIELDS_UPDATE";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutomationRulesActionTypeMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
