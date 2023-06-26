/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/WarmPoolResourceStatus.h>
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
      namespace WarmPoolResourceStatusMapper
      {

        static const int Available_HASH = HashingUtils::HashString("Available");
        static const int Terminated_HASH = HashingUtils::HashString("Terminated");
        static const int Reused_HASH = HashingUtils::HashString("Reused");
        static const int InUse_HASH = HashingUtils::HashString("InUse");


        WarmPoolResourceStatus GetWarmPoolResourceStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Available_HASH)
          {
            return WarmPoolResourceStatus::Available;
          }
          else if (hashCode == Terminated_HASH)
          {
            return WarmPoolResourceStatus::Terminated;
          }
          else if (hashCode == Reused_HASH)
          {
            return WarmPoolResourceStatus::Reused;
          }
          else if (hashCode == InUse_HASH)
          {
            return WarmPoolResourceStatus::InUse;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<WarmPoolResourceStatus>(hashCode);
          }

          return WarmPoolResourceStatus::NOT_SET;
        }

        Aws::String GetNameForWarmPoolResourceStatus(WarmPoolResourceStatus enumValue)
        {
          switch(enumValue)
          {
          case WarmPoolResourceStatus::Available:
            return "Available";
          case WarmPoolResourceStatus::Terminated:
            return "Terminated";
          case WarmPoolResourceStatus::Reused:
            return "Reused";
          case WarmPoolResourceStatus::InUse:
            return "InUse";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace WarmPoolResourceStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
