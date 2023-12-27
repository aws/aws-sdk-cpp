/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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


    /**
     * <p>Specify the name of the SageMaker HyperPod cluster you want to update.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>Specify the name of the SageMaker HyperPod cluster you want to update.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>Specify the name of the SageMaker HyperPod cluster you want to update.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>Specify the name of the SageMaker HyperPod cluster you want to update.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>Specify the name of the SageMaker HyperPod cluster you want to update.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>Specify the name of the SageMaker HyperPod cluster you want to update.</p>
     */
    inline UpdateClusterRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>Specify the name of the SageMaker HyperPod cluster you want to update.</p>
     */
    inline UpdateClusterRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>Specify the name of the SageMaker HyperPod cluster you want to update.</p>
     */
    inline UpdateClusterRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>Specify the instance groups to update.</p>
     */
    inline const Aws::Vector<ClusterInstanceGroupSpecification>& GetInstanceGroups() const{ return m_instanceGroups; }

    /**
     * <p>Specify the instance groups to update.</p>
     */
    inline bool InstanceGroupsHasBeenSet() const { return m_instanceGroupsHasBeenSet; }

    /**
     * <p>Specify the instance groups to update.</p>
     */
    inline void SetInstanceGroups(const Aws::Vector<ClusterInstanceGroupSpecification>& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = value; }

    /**
     * <p>Specify the instance groups to update.</p>
     */
    inline void SetInstanceGroups(Aws::Vector<ClusterInstanceGroupSpecification>&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = std::move(value); }

    /**
     * <p>Specify the instance groups to update.</p>
     */
    inline UpdateClusterRequest& WithInstanceGroups(const Aws::Vector<ClusterInstanceGroupSpecification>& value) { SetInstanceGroups(value); return *this;}

    /**
     * <p>Specify the instance groups to update.</p>
     */
    inline UpdateClusterRequest& WithInstanceGroups(Aws::Vector<ClusterInstanceGroupSpecification>&& value) { SetInstanceGroups(std::move(value)); return *this;}

    /**
     * <p>Specify the instance groups to update.</p>
     */
    inline UpdateClusterRequest& AddInstanceGroups(const ClusterInstanceGroupSpecification& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(value); return *this; }

    /**
     * <p>Specify the instance groups to update.</p>
     */
    inline UpdateClusterRequest& AddInstanceGroups(ClusterInstanceGroupSpecification&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::Vector<ClusterInstanceGroupSpecification> m_instanceGroups;
    bool m_instanceGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
