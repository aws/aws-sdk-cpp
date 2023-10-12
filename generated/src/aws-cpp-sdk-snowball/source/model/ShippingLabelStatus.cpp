/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/ShippingLabelStatus.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Snowball
  {
    namespace Model
    {
      namespace ShippingLabelStatusMapper
      {

        static constexpr uint32_t InProgress_HASH = ConstExprHashingUtils::HashString("InProgress");
        static constexpr uint32_t TimedOut_HASH = ConstExprHashingUtils::HashString("TimedOut");
        static constexpr uint32_t Succeeded_HASH = ConstExprHashingUtils::HashString("Succeeded");
        static constexpr uint32_t Failed_HASH = ConstExprHashingUtils::HashString("Failed");


        ShippingLabelStatus GetShippingLabelStatusForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == InProgress_HASH)
          {
            return ShippingLabelStatus::InProgress;
          }
          else if (hashCode == TimedOut_HASH)
          {
            return ShippingLabelStatus::TimedOut;
          }
          else if (hashCode == Succeeded_HASH)
          {
            return ShippingLabelStatus::Succeeded;
          }
          else if (hashCode == Failed_HASH)
          {
            return ShippingLabelStatus::Failed;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ShippingLabelStatus>(hashCode);
          }

          return ShippingLabelStatus::NOT_SET;
        }

        Aws::String GetNameForShippingLabelStatus(ShippingLabelStatus enumValue)
        {
          switch(enumValue)
          {
          case ShippingLabelStatus::NOT_SET:
            return {};
          case ShippingLabelStatus::InProgress:
            return "InProgress";
          case ShippingLabelStatus::TimedOut:
            return "TimedOut";
          case ShippingLabelStatus::Succeeded:
            return "Succeeded";
          case ShippingLabelStatus::Failed:
            return "Failed";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ShippingLabelStatusMapper
    } // namespace Model
  } // namespace Snowball
} // namespace Aws
