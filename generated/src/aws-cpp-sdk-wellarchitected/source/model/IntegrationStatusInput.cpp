/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wellarchitected/model/IntegrationStatusInput.h>
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
      namespace IntegrationStatusInputMapper
      {

        static const int NOT_CONFIGURED_HASH = HashingUtils::HashString("NOT_CONFIGURED");


        IntegrationStatusInput GetIntegrationStatusInputForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NOT_CONFIGURED_HASH)
          {
            return IntegrationStatusInput::NOT_CONFIGURED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IntegrationStatusInput>(hashCode);
          }

          return IntegrationStatusInput::NOT_SET;
        }

        Aws::String GetNameForIntegrationStatusInput(IntegrationStatusInput enumValue)
        {
          switch(enumValue)
          {
          case IntegrationStatusInput::NOT_SET:
            return {};
          case IntegrationStatusInput::NOT_CONFIGURED:
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

      } // namespace IntegrationStatusInputMapper
    } // namespace Model
  } // namespace WellArchitected
} // namespace Aws
