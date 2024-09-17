/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/EnabledOrDisabled.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMaker
  {
    namespace Model
    {
      namespace EnabledOrDisabledMapper
      {

        static const int Enabled_HASH = HashingUtils::HashString("Enabled");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");


        EnabledOrDisabled GetEnabledOrDisabledForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Enabled_HASH)
          {
            return EnabledOrDisabled::Enabled;
          }
          else if (hashCode == Disabled_HASH)
          {
            return EnabledOrDisabled::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<EnabledOrDisabled>(hashCode);
          }

          return EnabledOrDisabled::NOT_SET;
        }

        Aws::String GetNameForEnabledOrDisabled(EnabledOrDisabled enumValue)
        {
          switch(enumValue)
          {
          case EnabledOrDisabled::NOT_SET:
            return {};
          case EnabledOrDisabled::Enabled:
            return "Enabled";
          case EnabledOrDisabled::Disabled:
            return "Disabled";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace EnabledOrDisabledMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
