/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AutoEnableStandards.h>
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
      namespace AutoEnableStandardsMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int DEFAULT_HASH = HashingUtils::HashString("DEFAULT");


        AutoEnableStandards GetAutoEnableStandardsForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return AutoEnableStandards::NONE;
          }
          else if (hashCode == DEFAULT_HASH)
          {
            return AutoEnableStandards::DEFAULT;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoEnableStandards>(hashCode);
          }

          return AutoEnableStandards::NOT_SET;
        }

        Aws::String GetNameForAutoEnableStandards(AutoEnableStandards enumValue)
        {
          switch(enumValue)
          {
          case AutoEnableStandards::NOT_SET:
            return {};
          case AutoEnableStandards::NONE:
            return "NONE";
          case AutoEnableStandards::DEFAULT:
            return "DEFAULT";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoEnableStandardsMapper
    } // namespace Model
  } // namespace SecurityHub
} // namespace Aws
