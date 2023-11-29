/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ManagedInstanceScalingStatus.h>
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
      namespace ManagedInstanceScalingStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        ManagedInstanceScalingStatus GetManagedInstanceScalingStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return ManagedInstanceScalingStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return ManagedInstanceScalingStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ManagedInstanceScalingStatus>(hashCode);
          }

          return ManagedInstanceScalingStatus::NOT_SET;
        }

        Aws::String GetNameForManagedInstanceScalingStatus(ManagedInstanceScalingStatus enumValue)
        {
          switch(enumValue)
          {
          case ManagedInstanceScalingStatus::NOT_SET:
            return {};
          case ManagedInstanceScalingStatus::ENABLED:
            return "ENABLED";
          case ManagedInstanceScalingStatus::DISABLED:
            return "DISABLED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ManagedInstanceScalingStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
