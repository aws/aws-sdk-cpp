/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/RStudioServerProAccessStatus.h>
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
      namespace RStudioServerProAccessStatusMapper
      {

        static const int ENABLED_HASH = HashingUtils::HashString("ENABLED");
        static const int DISABLED_HASH = HashingUtils::HashString("DISABLED");


        RStudioServerProAccessStatus GetRStudioServerProAccessStatusForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == ENABLED_HASH)
          {
            return RStudioServerProAccessStatus::ENABLED;
          }
          else if (hashCode == DISABLED_HASH)
          {
            return RStudioServerProAccessStatus::DISABLED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RStudioServerProAccessStatus>(hashCode);
          }

          return RStudioServerProAccessStatus::NOT_SET;
        }

        Aws::String GetNameForRStudioServerProAccessStatus(RStudioServerProAccessStatus enumValue)
        {
          switch(enumValue)
          {
          case RStudioServerProAccessStatus::NOT_SET:
            return {};
          case RStudioServerProAccessStatus::ENABLED:
            return "ENABLED";
          case RStudioServerProAccessStatus::DISABLED:
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

      } // namespace RStudioServerProAccessStatusMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
