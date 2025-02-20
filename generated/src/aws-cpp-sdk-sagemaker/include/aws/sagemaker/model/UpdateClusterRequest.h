/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ClusterNodeRecovery.h>
#include <aws/sagemaker/model/ClusterInstanceGroupSpecification.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateClusterRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateCluster"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specify the name of the SageMaker HyperPod cluster you want to update.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline UpdateClusterRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline UpdateClusterRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline UpdateClusterRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the instance groups to update.</p>
     */
    inline const Aws::Vector<ClusterInstanceGroupSpecification>& GetInstanceGroups() const{ return m_instanceGroups; }
    inline bool InstanceGroupsHasBeenSet() const { return m_instanceGroupsHasBeenSet; }
    inline void SetInstanceGroups(const Aws::Vector<ClusterInstanceGroupSpecification>& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = value; }
    inline void SetInstanceGroups(Aws::Vector<ClusterInstanceGroupSpecification>&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = std::move(value); }
    inline UpdateClusterRequest& WithInstanceGroups(const Aws::Vector<ClusterInstanceGroupSpecification>& value) { SetInstanceGroups(value); return *this;}
    inline UpdateClusterRequest& WithInstanceGroups(Aws::Vector<ClusterInstanceGroupSpecification>&& value) { SetInstanceGroups(std::move(value)); return *this;}
    inline UpdateClusterRequest& AddInstanceGroups(const ClusterInstanceGroupSpecification& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(value); return *this; }
    inline UpdateClusterRequest& AddInstanceGroups(ClusterInstanceGroupSpecification&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The node recovery mode to be applied to the SageMaker HyperPod cluster.</p>
     */
    inline const ClusterNodeRecovery& GetNodeRecovery() const{ return m_nodeRecovery; }
    inline bool NodeRecoveryHasBeenSet() const { return m_nodeRecoveryHasBeenSet; }
    inline void SetNodeRecovery(const ClusterNodeRecovery& value) { m_nodeRecoveryHasBeenSet = true; m_nodeRecovery = value; }
    inline void SetNodeRecovery(ClusterNodeRecovery&& value) { m_nodeRecoveryHasBeenSet = true; m_nodeRecovery = std::move(value); }
    inline UpdateClusterRequest& WithNodeRecovery(const ClusterNodeRecovery& value) { SetNodeRecovery(value); return *this;}
    inline UpdateClusterRequest& WithNodeRecovery(ClusterNodeRecovery&& value) { SetNodeRecovery(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the names of the instance groups to delete. Use a single
     * <code>,</code> as the separator between multiple names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceGroupsToDelete() const{ return m_instanceGroupsToDelete; }
    inline bool InstanceGroupsToDeleteHasBeenSet() const { return m_instanceGroupsToDeleteHasBeenSet; }
    inline void SetInstanceGroupsToDelete(const Aws::Vector<Aws::String>& value) { m_instanceGroupsToDeleteHasBeenSet = true; m_instanceGroupsToDelete = value; }
    inline void SetInstanceGroupsToDelete(Aws::Vector<Aws::String>&& value) { m_instanceGroupsToDeleteHasBeenSet = true; m_instanceGroupsToDelete = std::move(value); }
    inline UpdateClusterRequest& WithInstanceGroupsToDelete(const Aws::Vector<Aws::String>& value) { SetInstanceGroupsToDelete(value); return *this;}
    inline UpdateClusterRequest& WithInstanceGroupsToDelete(Aws::Vector<Aws::String>&& value) { SetInstanceGroupsToDelete(std::move(value)); return *this;}
    inline UpdateClusterRequest& AddInstanceGroupsToDelete(const Aws::String& value) { m_instanceGroupsToDeleteHasBeenSet = true; m_instanceGroupsToDelete.push_back(value); return *this; }
    inline UpdateClusterRequest& AddInstanceGroupsToDelete(Aws::String&& value) { m_instanceGroupsToDeleteHasBeenSet = true; m_instanceGroupsToDelete.push_back(std::move(value)); return *this; }
    inline UpdateClusterRequest& AddInstanceGroupsToDelete(const char* value) { m_instanceGroupsToDeleteHasBeenSet = true; m_instanceGroupsToDelete.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::Vector<ClusterInstanceGroupSpecification> m_instanceGroups;
    bool m_instanceGroupsHasBeenSet = false;

    ClusterNodeRecovery m_nodeRecovery;
    bool m_nodeRecoveryHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceGroupsToDelete;
    bool m_instanceGroupsToDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
