/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/IAMAuthMode.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RDS
  {
    namespace Model
    {
      namespace IAMAuthModeMapper
      {

        static constexpr uint32_t DISABLED_HASH = ConstExprHashingUtils::HashString("DISABLED");
        static constexpr uint32_t REQUIRED_HASH = ConstExprHashingUtils::HashString("REQUIRED");
        static constexpr uint32_t ENABLED_HASH = ConstExprHashingUtils::HashString("ENABLED");


        IAMAuthMode GetIAMAuthModeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == DISABLED_HASH)
          {
            return IAMAuthMode::DISABLED;
          }
          else if (hashCode == REQUIRED_HASH)
          {
            return IAMAuthMode::REQUIRED;
          }
          else if (hashCode == ENABLED_HASH)
          {
            return IAMAuthMode::ENABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IAMAuthMode>(hashCode);
          }

          return IAMAuthMode::NOT_SET;
        }

        Aws::String GetNameForIAMAuthMode(IAMAuthMode enumValue)
        {
          switch(enumValue)
          {
          case IAMAuthMode::NOT_SET:
            return {};
          case IAMAuthMode::DISABLED:
            return "DISABLED";
          case IAMAuthMode::REQUIRED:
            return "REQUIRED";
          case IAMAuthMode::ENABLED:
            return "ENABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IAMAuthModeMapper
    } // namespace Model
  } // namespace RDS
} // namespace Aws
