/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/IntegrationStatus.h>
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
      namespace IntegrationStatusMapper
      {

        static const int CONFIGURED_HASH = HashingUtils::HashString("CONFIGURED");
        static const int NOT_CONFIGURED_HASH = HashingUtils::HashString("NOT_CONFIGURED");


        IntegrationStatus GetIntegrationStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CONFIGURED_HASH)
          {
            return IntegrationStatus::CONFIGURED;
          }
          else if (hashCode == NOT_CONFIGURED_HASH)
          {
            return IntegrationStatus::NOT_CONFIGURED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IntegrationStatus>(hashCode);
          }

          return IntegrationStatus::NOT_SET;
        }

        Aws::String GetNameForIntegrationStatus(IntegrationStatus enumValue)
        {
          switch(enumValue)
          {
          case IntegrationStatus::NOT_SET:
            return {};
          case IntegrationStatus::CONFIGURED:
            return "CONFIGURED";
          case IntegrationStatus::NOT_CONFIGURED:
            return "NOT_CONFIGURED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IntegrationStatusMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
