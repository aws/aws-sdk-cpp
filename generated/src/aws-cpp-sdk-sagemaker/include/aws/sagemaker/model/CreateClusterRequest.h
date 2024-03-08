/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/VpcConfig.h>
#include <aws/sagemaker/model/ClusterInstanceGroupSpecification.h>
#include <aws/sagemaker/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class CreateClusterRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCluster"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the new SageMaker HyperPod cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name for the new SageMaker HyperPod cluster.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name for the new SageMaker HyperPod cluster.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name for the new SageMaker HyperPod cluster.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name for the new SageMaker HyperPod cluster.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name for the new SageMaker HyperPod cluster.</p>
     */
    inline CreateClusterRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name for the new SageMaker HyperPod cluster.</p>
     */
    inline CreateClusterRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name for the new SageMaker HyperPod cluster.</p>
     */
    inline CreateClusterRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The instance groups to be created in the SageMaker HyperPod cluster.</p>
     */
    inline const Aws::Vector<ClusterInstanceGroupSpecification>& GetInstanceGroups() const{ return m_instanceGroups; }

    /**
     * <p>The instance groups to be created in the SageMaker HyperPod cluster.</p>
     */
    inline bool InstanceGroupsHasBeenSet() const { return m_instanceGroupsHasBeenSet; }

    /**
     * <p>The instance groups to be created in the SageMaker HyperPod cluster.</p>
     */
    inline void SetInstanceGroups(const Aws::Vector<ClusterInstanceGroupSpecification>& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = value; }

    /**
     * <p>The instance groups to be created in the SageMaker HyperPod cluster.</p>
     */
    inline void SetInstanceGroups(Aws::Vector<ClusterInstanceGroupSpecification>&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups = std::move(value); }

    /**
     * <p>The instance groups to be created in the SageMaker HyperPod cluster.</p>
     */
    inline CreateClusterRequest& WithInstanceGroups(const Aws::Vector<ClusterInstanceGroupSpecification>& value) { SetInstanceGroups(value); return *this;}

    /**
     * <p>The instance groups to be created in the SageMaker HyperPod cluster.</p>
     */
    inline CreateClusterRequest& WithInstanceGroups(Aws::Vector<ClusterInstanceGroupSpecification>&& value) { SetInstanceGroups(std::move(value)); return *this;}

    /**
     * <p>The instance groups to be created in the SageMaker HyperPod cluster.</p>
     */
    inline CreateClusterRequest& AddInstanceGroups(const ClusterInstanceGroupSpecification& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(value); return *this; }

    /**
     * <p>The instance groups to be created in the SageMaker HyperPod cluster.</p>
     */
    inline CreateClusterRequest& AddInstanceGroups(ClusterInstanceGroupSpecification&& value) { m_instanceGroupsHasBeenSet = true; m_instanceGroups.push_back(std::move(value)); return *this; }


    
    inline const VpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    
    inline void SetVpcConfig(const VpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    
    inline void SetVpcConfig(VpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    
    inline CreateClusterRequest& WithVpcConfig(const VpcConfig& value) { SetVpcConfig(value); return *this;}

    
    inline CreateClusterRequest& WithVpcConfig(VpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>Custom tags for managing the SageMaker HyperPod cluster as an Amazon Web
     * Services resource. You can add tags to your cluster in the same way you add them
     * in other Amazon Web Services services that support tagging. To learn more about
     * tagging Amazon Web Services resources in general, see <a
     * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/tagging.html">Tagging
     * Amazon Web Services Resources User Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Custom tags for managing the SageMaker HyperPod cluster as an Amazon Web
     * Services resource. You can add tags to your cluster in the same way you add them
     * in other Amazon Web Services services that support tagging. To learn more about
     * tagging Amazon Web Services resources in general, see <a
     * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/tagging.html">Tagging
     * Amazon Web Services Resources User Guide</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Custom tags for managing the SageMaker HyperPod cluster as an Amazon Web
     * Services resource. You can add tags to your cluster in the same way you add them
     * in other Amazon Web Services services that support tagging. To learn more about
     * tagging Amazon Web Services resources in general, see <a
     * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/tagging.html">Tagging
     * Amazon Web Services Resources User Guide</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Custom tags for managing the SageMaker HyperPod cluster as an Amazon Web
     * Services resource. You can add tags to your cluster in the same way you add them
     * in other Amazon Web Services services that support tagging. To learn more about
     * tagging Amazon Web Services resources in general, see <a
     * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/tagging.html">Tagging
     * Amazon Web Services Resources User Guide</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Custom tags for managing the SageMaker HyperPod cluster as an Amazon Web
     * Services resource. You can add tags to your cluster in the same way you add them
     * in other Amazon Web Services services that support tagging. To learn more about
     * tagging Amazon Web Services resources in general, see <a
     * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/tagging.html">Tagging
     * Amazon Web Services Resources User Guide</a>.</p>
     */
    inline CreateClusterRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Custom tags for managing the SageMaker HyperPod cluster as an Amazon Web
     * Services resource. You can add tags to your cluster in the same way you add them
     * in other Amazon Web Services services that support tagging. To learn more about
     * tagging Amazon Web Services resources in general, see <a
     * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/tagging.html">Tagging
     * Amazon Web Services Resources User Guide</a>.</p>
     */
    inline CreateClusterRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Custom tags for managing the SageMaker HyperPod cluster as an Amazon Web
     * Services resource. You can add tags to your cluster in the same way you add them
     * in other Amazon Web Services services that support tagging. To learn more about
     * tagging Amazon Web Services resources in general, see <a
     * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/tagging.html">Tagging
     * Amazon Web Services Resources User Guide</a>.</p>
     */
    inline CreateClusterRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Custom tags for managing the SageMaker HyperPod cluster as an Amazon Web
     * Services resource. You can add tags to your cluster in the same way you add them
     * in other Amazon Web Services services that support tagging. To learn more about
     * tagging Amazon Web Services resources in general, see <a
     * href="https://docs.aws.amazon.com/tag-editor/latest/userguide/tagging.html">Tagging
     * Amazon Web Services Resources User Guide</a>.</p>
     */
    inline CreateClusterRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::Vector<ClusterInstanceGroupSpecification> m_instanceGroups;
    bool m_instanceGroupsHasBeenSet = false;

    VpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
