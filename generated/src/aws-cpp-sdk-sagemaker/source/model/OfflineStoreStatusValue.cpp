/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/OfflineStoreStatusValue.h>
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
      namespace OfflineStoreStatusValueMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Blocked_HASH = HashingUtils::HashString("Blocked");
        static const int Disabled_HASH = HashingUtils::HashString("Disabled");


        OfflineStoreStatusValue GetOfflineStoreStatusValueForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return OfflineStoreStatusValue::Active;
          }
          else if (hashCode == Blocked_HASH)
          {
            return OfflineStoreStatusValue::Blocked;
          }
          else if (hashCode == Disabled_HASH)
          {
            return OfflineStoreStatusValue::Disabled;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<OfflineStoreStatusValue>(hashCode);
          }

          return OfflineStoreStatusValue::NOT_SET;
        }

        Aws::String GetNameForOfflineStoreStatusValue(OfflineStoreStatusValue enumValue)
        {
          switch(enumValue)
          {
          case OfflineStoreStatusValue::NOT_SET:
            return {};
          case OfflineStoreStatusValue::Active:
            return "Active";
          case OfflineStoreStatusValue::Blocked:
            return "Blocked";
          case OfflineStoreStatusValue::Disabled:
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

      } // namespace OfflineStoreStatusValueMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
