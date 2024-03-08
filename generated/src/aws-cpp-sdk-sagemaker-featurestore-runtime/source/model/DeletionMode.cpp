/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker-featurestore-runtime/model/DeletionMode.h>
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
      namespace DeletionModeMapper
      {

        static const int SoftDelete_HASH = HashingUtils::HashString("SoftDelete");
        static const int HardDelete_HASH = HashingUtils::HashString("HardDelete");


        DeletionMode GetDeletionModeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == SoftDelete_HASH)
          {
            return DeletionMode::SoftDelete;
          }
          else if (hashCode == HardDelete_HASH)
          {
            return DeletionMode::HardDelete;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<DeletionMode>(hashCode);
          }

          return DeletionMode::NOT_SET;
        }

        Aws::String GetNameForDeletionMode(DeletionMode enumValue)
        {
          switch(enumValue)
          {
          case DeletionMode::NOT_SET:
            return {};
          case DeletionMode::SoftDelete:
            return "SoftDelete";
          case DeletionMode::HardDelete:
            return "HardDelete";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace DeletionModeMapper
    } // namespace Model
  } // namespace SageMakerFeatureStoreRuntime
} // namespace Aws
