/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/IntegratingService.h>
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
      namespace IntegratingServiceMapper
      {

        static const int JIRA_HASH = HashingUtils::HashString("JIRA");


        IntegratingService GetIntegratingServiceForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == JIRA_HASH)
          {
            return IntegratingService::JIRA;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IntegratingService>(hashCode);
          }

          return IntegratingService::NOT_SET;
        }

        Aws::String GetNameForIntegratingService(IntegratingService enumValue)
        {
          switch(enumValue)
          {
          case IntegratingService::NOT_SET:
            return {};
          case IntegratingService::JIRA:
            return "JIRA";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IntegratingServiceMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
