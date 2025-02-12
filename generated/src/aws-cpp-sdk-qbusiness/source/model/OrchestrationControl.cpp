/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/OrchestrationControl.h>
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
      namespace OrchestrationControlMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        OrchestrationControl GetOrchestrationControlForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return OrchestrationControl::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return OrchestrationControl::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OrchestrationControl>(hashCode);
          }

          return OrchestrationControl::NOT_SET;
        }

        Aws::String GetNameForOrchestrationControl(OrchestrationControl enumValue)
        {
          switch(enumValue)
          {
          case OrchestrationControl::NOT_SET:
            return {};
          case OrchestrationControl::ENABLED:
            return "ENABLED";
          case OrchestrationControl::DISABLED:
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

      } // namespace OrchestrationControlMapper
    } // namespace Model
  } // namespace QBusiness
} // namespace Aws
