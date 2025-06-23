/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces-instances/model/AutoRecoveryEnum.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkspacesInstances
  {
    namespace Model
    {
      namespace AutoRecoveryEnumMapper
      {

        static const int disabled_HASH = HashingUtils::HashString("disabled");
        static const int default__HASH = HashingUtils::HashString("default");


        AutoRecoveryEnum GetAutoRecoveryEnumForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == disabled_HASH)
          {
            return AutoRecoveryEnum::disabled;
          }
          else if (hashCode == default__HASH)
          {
            return AutoRecoveryEnum::default_;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<AutoRecoveryEnum>(hashCode);
          }

          return AutoRecoveryEnum::NOT_SET;
        }

        Aws::String GetNameForAutoRecoveryEnum(AutoRecoveryEnum enumValue)
        {
          switch(enumValue)
          {
          case AutoRecoveryEnum::NOT_SET:
            return {};
          case AutoRecoveryEnum::disabled:
            return "disabled";
          case AutoRecoveryEnum::default_:
            return "default";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace AutoRecoveryEnumMapper
    } // namespace Model
  } // namespace WorkspacesInstances
} // namespace Aws
