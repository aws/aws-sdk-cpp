/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/AccessStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace ServiceCatalog
  {
    namespace Model
    {
      namespace AccessStatusMapper
      {

        static constexpr uint32_t ENABLED_HASH = ConstExprHashingUtils::HashString("ENABLED");
        static constexpr uint32_t UNDER_CHANGE_HASH = ConstExprHashingUtils::HashString("UNDER_CHANGE");
        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");


        AccessStatus GetAccessStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return AccessStatus::ENABLED;
          }
          else if (hashCode == UNDER_CHANGE_HASH)
          {
            return AccessStatus::UNDER_CHANGE;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return AccessStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AccessStatus>(hashCode);
          }

          return AccessStatus::NOT_SET;
        }

        Aws::String GetNameForAccessStatus(AccessStatus enumValue)
        {
          switch(enumValue)
          {
          case AccessStatus::NOT_SET:
            return {};
          case AccessStatus::ENABLED:
            return "ENABLED";
          case AccessStatus::UNDER_CHANGE:
            return "UNDER_CHANGE";
          case AccessStatus::DISABLED:
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

      } // namespace AccessStatusMapper
    } // namespace Model
  } // namespace ServiceCatalog
} // namespace Aws
