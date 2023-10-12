/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/InventoryFrequency.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace S3Crt
  {
    namespace Model
    {
      namespace InventoryFrequencyMapper
      {

        static constexpr uint32_t Daily_HASH = ConstExprHashingUtils::HashString("Daily");
        static constexpr uint32_t Weekly_HASH = ConstExprHashingUtils::HashString("Weekly");


        InventoryFrequency GetInventoryFrequencyForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Daily_HASH)
          {
            return InventoryFrequency::Daily;
          }
          else if (hashCode == Weekly_HASH)
          {
            return InventoryFrequency::Weekly;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<InventoryFrequency>(hashCode);
          }

          return InventoryFrequency::NOT_SET;
        }

        Aws::String GetNameForInventoryFrequency(InventoryFrequency enumValue)
        {
          switch(enumValue)
          {
          case InventoryFrequency::NOT_SET:
            return {};
          case InventoryFrequency::Daily:
            return "Daily";
          case InventoryFrequency::Weekly:
            return "Weekly";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace InventoryFrequencyMapper
    } // namespace Model
  } // namespace S3Crt
} // namespace Aws
