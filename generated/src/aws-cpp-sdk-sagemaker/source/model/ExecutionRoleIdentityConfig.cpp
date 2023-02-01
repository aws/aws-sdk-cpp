/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ExecutionRoleIdentityConfig.h>
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
      namespace ExecutionRoleIdentityConfigMapper
      {

        static const int USER_PROFILE_NAME_HASH = HashingUtils::HashString("USER_PROFILE_NAME");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ExecutionRoleIdentityConfig GetExecutionRoleIdentityConfigForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == USER_PROFILE_NAME_HASH)
          {
            return ExecutionRoleIdentityConfig::USER_PROFILE_NAME;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ExecutionRoleIdentityConfig::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ExecutionRoleIdentityConfig>(hashCode);
          }

          return ExecutionRoleIdentityConfig::NOT_SET;
        }

        Aws::String GetNameForExecutionRoleIdentityConfig(ExecutionRoleIdentityConfig enumValue)
        {
          switch(enumValue)
          {
          case ExecutionRoleIdentityConfig::USER_PROFILE_NAME:
            return "USER_PROFILE_NAME";
          case ExecutionRoleIdentityConfig::DISABLED:
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

      } // namespace ExecutionRoleIdentityConfigMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
