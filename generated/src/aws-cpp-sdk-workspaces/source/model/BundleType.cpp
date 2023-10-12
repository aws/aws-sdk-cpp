/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/BundleType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace WorkSpaces
  {
    namespace Model
    {
      namespace BundleTypeMapper
      {

        static constexpr uint32_t REGULAR_HASH = ConstExprHashingUtils::HashString("REGULAR");
        static constexpr uint32_t STANDBY_HASH = ConstExprHashingUtils::HashString("STANDBY");


        BundleType GetBundleTypeForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == REGULAR_HASH)
          {
            return BundleType::REGULAR;
          }
          else if (hashCode == STANDBY_HASH)
          {
            return BundleType::STANDBY;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<BundleType>(hashCode);
          }

          return BundleType::NOT_SET;
        }

        Aws::String GetNameForBundleType(BundleType enumValue)
        {
          switch(enumValue)
          {
          case BundleType::NOT_SET:
            return {};
          case BundleType::REGULAR:
            return "REGULAR";
          case BundleType::STANDBY:
            return "STANDBY";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace BundleTypeMapper
    } // namespace Model
  } // namespace WorkSpaces
} // namespace Aws
