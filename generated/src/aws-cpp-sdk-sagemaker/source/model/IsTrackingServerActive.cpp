/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/IsTrackingServerActive.h>
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
      namespace IsTrackingServerActiveMapper
      {

        static const int Active_HASH = HashingUtils::HashString("Active");
        static const int Inactive_HASH = HashingUtils::HashString("Inactive");


        IsTrackingServerActive GetIsTrackingServerActiveForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Active_HASH)
          {
            return IsTrackingServerActive::Active;
          }
          else if (hashCode == Inactive_HASH)
          {
            return IsTrackingServerActive::Inactive;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<IsTrackingServerActive>(hashCode);
          }

          return IsTrackingServerActive::NOT_SET;
        }

        Aws::String GetNameForIsTrackingServerActive(IsTrackingServerActive enumValue)
        {
          switch(enumValue)
          {
          case IsTrackingServerActive::NOT_SET:
            return {};
          case IsTrackingServerActive::Active:
            return "Active";
          case IsTrackingServerActive::Inactive:
            return "Inactive";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace IsTrackingServerActiveMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
