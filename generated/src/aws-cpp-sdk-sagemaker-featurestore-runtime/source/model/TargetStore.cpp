/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-featurestore-runtime/model/TargetStore.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SageMakerFeatureStoreRuntime
  {
    namespace Model
    {
      namespace TargetStoreMapper
      {

        static constexpr uint32_t OnlineStore_HASH = ConstExprHashingUtils::HashString("OnlineStore");
        static constexpr uint32_t OfflineStore_HASH = ConstExprHashingUtils::HashString("OfflineStore");


        TargetStore GetTargetStoreForName(const Aws::String& name)
        {
          uint32_t hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == OnlineStore_HASH)
          {
            return TargetStore::OnlineStore;
          }
          else if (hashCode == OfflineStore_HASH)
          {
            return TargetStore::OfflineStore;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<TargetStore>(hashCode);
          }

          return TargetStore::NOT_SET;
        }

        Aws::String GetNameForTargetStore(TargetStore enumValue)
        {
          switch(enumValue)
          {
          case TargetStore::NOT_SET:
            return {};
          case TargetStore::OnlineStore:
            return "OnlineStore";
          case TargetStore::OfflineStore:
            return "OfflineStore";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace TargetStoreMapper
    } // namespace Model
  } // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
