/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/AutomationSubtype.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace AutomationSubtypeMapper
      {

        static const int ChangeRequest_HASH = HashingUtils::HashString("ChangeRequest");


        AutomationSubtype GetAutomationSubtypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ChangeRequest_HASH)
          {
            return AutomationSubtype::ChangeRequest;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutomationSubtype>(hashCode);
          }

          return AutomationSubtype::NOT_SET;
        }

        Aws::String GetNameForAutomationSubtype(AutomationSubtype enumValue)
        {
          switch(enumValue)
          {
          case AutomationSubtype::NOT_SET:
            return {};
          case AutomationSubtype::ChangeRequest:
            return "ChangeRequest";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutomationSubtypeMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
