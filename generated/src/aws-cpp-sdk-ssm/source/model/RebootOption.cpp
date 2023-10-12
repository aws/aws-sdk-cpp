/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm/model/RebootOption.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SSM
  {
    namespace Model
    {
      namespace RebootOptionMapper
      {

        static constexpr uint32_t RebootIfNeeded_HASH = ConstExprHashingUtils::HashString("RebootIfNeeded");
        static constexpr uint32_t NoReboot_HASH = ConstExprHashingUtils::HashString("NoReboot");


        RebootOption GetRebootOptionForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == RebootIfNeeded_HASH)
          {
            return RebootOption::RebootIfNeeded;
          }
          else if (hashCode == NoReboot_HASH)
          {
            return RebootOption::NoReboot;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RebootOption>(hashCode);
          }

          return RebootOption::NOT_SET;
        }

        Aws::String GetNameForRebootOption(RebootOption enumValue)
        {
          switch(enumValue)
          {
          case RebootOption::NOT_SET:
            return {};
          case RebootOption::RebootIfNeeded:
            return "RebootIfNeeded";
          case RebootOption::NoReboot:
            return "NoReboot";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace RebootOptionMapper
    } // namespace Model
  } // namespace SSM
} // namespace Aws
