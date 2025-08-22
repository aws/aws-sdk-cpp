/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/DeploymentConfiguration.h>
#include <aws/sagemaker/model/UpdateClusterSoftwareInstanceGroupSpecification.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateClusterSoftwareRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateClusterSoftwareRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateClusterSoftware"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specify the name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster you want to update for security patching.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    UpdateClusterSoftwareRequest& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array of instance groups for which to update AMI versions.</p>
     */
    inline const Aws::Vector<UpdateClusterSoftwareInstanceGroupSpecification>& GetInstanceGroups() const { return m_instanceGroups; }
    inline bool InstanceGroupsHasBeenSet() const { return m_instanceGroupsHasBeenSet; }
    template<typename InstanceGroupsT = Aws::Vector<UpdateClusterSoftwareInstanceGroupSpecification>>
    void SetInstanceGroups(InstanceGroupsT&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = std::forward<InstanceGroupsT>(value); }
    template<typename InstanceGroupsT = Aws::Vector<UpdateClusterSoftwareInstanceGroupSpecification>>
    UpdateClusterSoftwareRequest& WithInstanceGroups(InstanceGroupsT&& value) { SetInstanceGroups(std::forward<InstanceGroupsT>(value)); return *this;}
    template<typename InstanceGroupsT = UpdateClusterSoftwareInstanceGroupSpecification>
    UpdateClusterSoftwareRequest& AddInstanceGroups(InstanceGroupsT&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.emplace_back(std::forward<InstanceGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration to use when updating the AMI versions.</p>
     */
    inline const DeploymentConfiguration& GetDeploymentConfig() const { return m_deploymentConfig; }
    inline bool DeploymentConfigHasBeenSet() const { return m_deploymentConfigHasBeenSet; }
    template<typename DeploymentConfigT = DeploymentConfiguration>
    void SetDeploymentConfig(DeploymentConfigT&& value) { m_deploymentConfigHasBeenSet = true; m_deploymentConfig = std::forward<DeploymentConfigT>(value); }
    template<typename DeploymentConfigT = DeploymentConfiguration>
    UpdateClusterSoftwareRequest& WithDeploymentConfig(DeploymentConfigT&& value) { SetDeploymentConfig(std::forward<DeploymentConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When configuring your HyperPod cluster, you can specify an image ID using one
     * of the following options:</p> <ul> <li> <p> <code>HyperPodPublicAmiId</code>:
     * Use a HyperPod public AMI</p> </li> <li> <p> <code>CustomAmiId</code>: Use your
     * custom AMI</p> </li> <li> <p> <code>default</code>: Use the default latest
     * system image</p> </li> </ul> <p>If you choose to use a custom AMI
     * (<code>CustomAmiId</code>), ensure it meets the following requirements:</p> <ul>
     * <li> <p>Encryption: The custom AMI must be unencrypted.</p> </li> <li>
     * <p>Ownership: The custom AMI must be owned by the same Amazon Web Services
     * account that is creating the HyperPod cluster.</p> </li> <li> <p>Volume support:
     * Only the primary AMI snapshot volume is supported; additional AMI volumes are
     * not supported.</p> </li> </ul> <p>When updating the instance group's AMI through
     * the <code>UpdateClusterSoftware</code> operation, if an instance group uses a
     * custom AMI, you must provide an <code>ImageId</code> or use the default as
     * input. Note that if you don't specify an instance group in your
     * <code>UpdateClusterSoftware</code> request, then all of the instance groups are
     * patched with the specified image.</p>
     */
    inline const Aws::String& GetImageId() const { return m_imageId; }
    inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
    template<typename ImageIdT = Aws::String>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = Aws::String>
    UpdateClusterSoftwareRequest& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::Vector<UpdateClusterSoftwareInstanceGroupSpecification> m_instanceGroups;
    bool m_instanceGroupsHasBeenSet = false;

    DeploymentConfiguration m_deploymentConfig;
    bool m_deploymentConfigHasBeenSet = false;

    Aws::String m_imageId;
    bool m_imageIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
