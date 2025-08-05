/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ClusterEventResourceType.h>
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
      namespace ClusterEventResourceTypeMapper
      {

        static const int Cluster_HASH = HashingUtils::HashString("Cluster");
        static const int InstanceGroup_HASH = HashingUtils::HashString("InstanceGroup");
        static const int Instance_HASH = HashingUtils::HashString("Instance");


        ClusterEventResourceType GetClusterEventResourceTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == Cluster_HASH)
          {
            return ClusterEventResourceType::Cluster;
          }
          else if (hashCode == InstanceGroup_HASH)
          {
            return ClusterEventResourceType::InstanceGroup;
          }
          else if (hashCode == Instance_HASH)
          {
            return ClusterEventResourceType::Instance;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<ClusterEventResourceType>(hashCode);
          }

          return ClusterEventResourceType::NOT_SET;
        }

        Aws::String GetNameForClusterEventResourceType(ClusterEventResourceType enumValue)
        {
          switch(enumValue)
          {
          case ClusterEventResourceType::NOT_SET:
            return {};
          case ClusterEventResourceType::Cluster:
            return "Cluster";
          case ClusterEventResourceType::InstanceGroup:
            return "InstanceGroup";
          case ClusterEventResourceType::Instance:
            return "Instance";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace ClusterEventResourceTypeMapper
    } // namespace Model
  } // namespace SageMaker
} // namespace Aws
