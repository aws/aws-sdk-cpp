/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/ApplyMethod.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Neptune
  {
    namespace Model
    {
      namespace ApplyMethodMapper
      {

        static constexpr uint32_t immediate_HASH = ConstExprHashingUtils::HashString("immediate");
        static constexpr uint32_t pending_reboot_HASH = ConstExprHashingUtils::HashString("pending-reboot");


        ApplyMethod GetApplyMethodForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == immediate_HASH)
          {
            return ApplyMethod::immediate;
          }
          else if (hashCode == pending_reboot_HASH)
          {
            return ApplyMethod::pending_reboot;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ApplyMethod>(hashCode);
          }

          return ApplyMethod::NOT_SET;
        }

        Aws::String GetNameForApplyMethod(ApplyMethod enumValue)
        {
          switch(enumValue)
          {
          case ApplyMethod::NOT_SET:
            return {};
          case ApplyMethod::immediate:
            return "immediate";
          case ApplyMethod::pending_reboot:
            return "pending-reboot";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ApplyMethodMapper
    } // namespace Model
  } // namespace Neptune
} // namespace Aws
