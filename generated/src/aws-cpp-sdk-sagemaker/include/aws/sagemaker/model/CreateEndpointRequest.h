/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/DeploymentConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class CreateEndpointRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreateEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEndpoint"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the endpoint.The name must be unique within an Amazon Web
     * Services Region in your Amazon Web Services account. The name is
     * case-insensitive in <code>CreateEndpoint</code>, but the case is preserved and
     * must be matched in .</p>
     */
    inline const Aws::String& GetEndpointName() const{ return m_endpointName; }

    /**
     * <p>The name of the endpoint.The name must be unique within an Amazon Web
     * Services Region in your Amazon Web Services account. The name is
     * case-insensitive in <code>CreateEndpoint</code>, but the case is preserved and
     * must be matched in .</p>
     */
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }

    /**
     * <p>The name of the endpoint.The name must be unique within an Amazon Web
     * Services Region in your Amazon Web Services account. The name is
     * case-insensitive in <code>CreateEndpoint</code>, but the case is preserved and
     * must be matched in .</p>
     */
    inline void SetEndpointName(const Aws::String& value) { m_endpointNameHasBeenSet = true; m_endpointName = value; }

    /**
     * <p>The name of the endpoint.The name must be unique within an Amazon Web
     * Services Region in your Amazon Web Services account. The name is
     * case-insensitive in <code>CreateEndpoint</code>, but the case is preserved and
     * must be matched in .</p>
     */
    inline void SetEndpointName(Aws::String&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::move(value); }

    /**
     * <p>The name of the endpoint.The name must be unique within an Amazon Web
     * Services Region in your Amazon Web Services account. The name is
     * case-insensitive in <code>CreateEndpoint</code>, but the case is preserved and
     * must be matched in .</p>
     */
    inline void SetEndpointName(const char* value) { m_endpointNameHasBeenSet = true; m_endpointName.assign(value); }

    /**
     * <p>The name of the endpoint.The name must be unique within an Amazon Web
     * Services Region in your Amazon Web Services account. The name is
     * case-insensitive in <code>CreateEndpoint</code>, but the case is preserved and
     * must be matched in .</p>
     */
    inline CreateEndpointRequest& WithEndpointName(const Aws::String& value) { SetEndpointName(value); return *this;}

    /**
     * <p>The name of the endpoint.The name must be unique within an Amazon Web
     * Services Region in your Amazon Web Services account. The name is
     * case-insensitive in <code>CreateEndpoint</code>, but the case is preserved and
     * must be matched in .</p>
     */
    inline CreateEndpointRequest& WithEndpointName(Aws::String&& value) { SetEndpointName(std::move(value)); return *this;}

    /**
     * <p>The name of the endpoint.The name must be unique within an Amazon Web
     * Services Region in your Amazon Web Services account. The name is
     * case-insensitive in <code>CreateEndpoint</code>, but the case is preserved and
     * must be matched in .</p>
     */
    inline CreateEndpointRequest& WithEndpointName(const char* value) { SetEndpointName(value); return *this;}


    /**
     * <p>The name of an endpoint configuration. For more information, see
     * <a>CreateEndpointConfig</a>. </p>
     */
    inline const Aws::String& GetEndpointConfigName() const{ return m_endpointConfigName; }

    /**
     * <p>The name of an endpoint configuration. For more information, see
     * <a>CreateEndpointConfig</a>. </p>
     */
    inline bool EndpointConfigNameHasBeenSet() const { return m_endpointConfigNameHasBeenSet; }

    /**
     * <p>The name of an endpoint configuration. For more information, see
     * <a>CreateEndpointConfig</a>. </p>
     */
    inline void SetEndpointConfigName(const Aws::String& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = value; }

    /**
     * <p>The name of an endpoint configuration. For more information, see
     * <a>CreateEndpointConfig</a>. </p>
     */
    inline void SetEndpointConfigName(Aws::String&& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = std::move(value); }

    /**
     * <p>The name of an endpoint configuration. For more information, see
     * <a>CreateEndpointConfig</a>. </p>
     */
    inline void SetEndpointConfigName(const char* value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName.assign(value); }

    /**
     * <p>The name of an endpoint configuration. For more information, see
     * <a>CreateEndpointConfig</a>. </p>
     */
    inline CreateEndpointRequest& WithEndpointConfigName(const Aws::String& value) { SetEndpointConfigName(value); return *this;}

    /**
     * <p>The name of an endpoint configuration. For more information, see
     * <a>CreateEndpointConfig</a>. </p>
     */
    inline CreateEndpointRequest& WithEndpointConfigName(Aws::String&& value) { SetEndpointConfigName(std::move(value)); return *this;}

    /**
     * <p>The name of an endpoint configuration. For more information, see
     * <a>CreateEndpointConfig</a>. </p>
     */
    inline CreateEndpointRequest& WithEndpointConfigName(const char* value) { SetEndpointConfigName(value); return *this;}


    
    inline const DeploymentConfig& GetDeploymentConfig() const{ return m_deploymentConfig; }

    
    inline bool DeploymentConfigHasBeenSet() const { return m_deploymentConfigHasBeenSet; }

    
    inline void SetDeploymentConfig(const DeploymentConfig& value) { m_deploymentConfigHasBeenSet = true; m_deploymentConfig = value; }

    
    inline void SetDeploymentConfig(DeploymentConfig&& value) { m_deploymentConfigHasBeenSet = true; m_deploymentConfig = std::move(value); }

    
    inline CreateEndpointRequest& WithDeploymentConfig(const DeploymentConfig& value) { SetDeploymentConfig(value); return *this;}

    
    inline CreateEndpointRequest& WithDeploymentConfig(DeploymentConfig&& value) { SetDeploymentConfig(std::move(value)); return *this;}


    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline CreateEndpointRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline CreateEndpointRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline CreateEndpointRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array of key-value pairs. You can use tags to categorize your Amazon Web
     * Services resources in different ways, for example, by purpose, owner, or
     * environment. For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a>.</p>
     */
    inline CreateEndpointRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_endpointConfigName;
    bool m_endpointConfigNameHasBeenSet = false;

    DeploymentConfig m_deploymentConfig;
    bool m_deploymentConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
