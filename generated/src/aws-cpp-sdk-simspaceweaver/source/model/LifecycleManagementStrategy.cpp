/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/simspaceweaver/model/LifecycleManagementStrategy.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace SimSpaceWeaver
  {
    namespace Model
    {
      namespace LifecycleManagementStrategyMapper
      {

        static const int Unknown_HASH = HashingUtils::HashString("Unknown");
        static const int PerWorker_HASH = HashingUtils::HashString("PerWorker");
        static const int BySpatialSubdivision_HASH = HashingUtils::HashString("BySpatialSubdivision");
        static const int ByRequest_HASH = HashingUtils::HashString("ByRequest");


        LifecycleManagementStrategy GetLifecycleManagementStrategyForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Unknown_HASH)
          {
            return LifecycleManagementStrategy::Unknown;
          }
          else if (hashCode == PerWorker_HASH)
          {
            return LifecycleManagementStrategy::PerWorker;
          }
          else if (hashCode == BySpatialSubdivision_HASH)
          {
            return LifecycleManagementStrategy::BySpatialSubdivision;
          }
          else if (hashCode == ByRequest_HASH)
          {
            return LifecycleManagementStrategy::ByRequest;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<LifecycleManagementStrategy>(hashCode);
          }

          return LifecycleManagementStrategy::NOT_SET;
        }

        Aws::String GetNameForLifecycleManagementStrategy(LifecycleManagementStrategy enumValue)
        {
          switch(enumValue)
          {
          case LifecycleManagementStrategy::Unknown:
            return "Unknown";
          case LifecycleManagementStrategy::PerWorker:
            return "PerWorker";
          case LifecycleManagementStrategy::BySpatialSubdivision:
            return "BySpatialSubdivision";
          case LifecycleManagementStrategy::ByRequest:
            return "ByRequest";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace LifecycleManagementStrategyMapper
    } // namespace Model
  } // namespace SimSpaceWeaver
} // namespace Aws
