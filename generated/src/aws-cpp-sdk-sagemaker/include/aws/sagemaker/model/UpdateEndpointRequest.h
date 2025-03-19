/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/DeploymentConfig.h>
#include <aws/sagemaker/model/VariantProperty.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdateEndpointRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdateEndpointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEndpoint"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the endpoint whose configuration you want to update.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    UpdateEndpointRequest& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new endpoint configuration.</p>
     */
    inline const Aws::String& GetEndpointConfigName() const { return m_endpointConfigName; }
    inline bool EndpointConfigNameHasBeenSet() const { return m_endpointConfigNameHasBeenSet; }
    template<typename EndpointConfigNameT = Aws::String>
    void SetEndpointConfigName(EndpointConfigNameT&& value) { m_endpointConfigNameHasBeenSet = true; m_endpointConfigName = std::forward<EndpointConfigNameT>(value); }
    template<typename EndpointConfigNameT = Aws::String>
    UpdateEndpointRequest& WithEndpointConfigName(EndpointConfigNameT&& value) { SetEndpointConfigName(std::forward<EndpointConfigNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When updating endpoint resources, enables or disables the retention of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_VariantProperty.html">variant
     * properties</a>, such as the instance count or the variant weight. To retain the
     * variant properties of an endpoint when updating it, set
     * <code>RetainAllVariantProperties</code> to <code>true</code>. To use the variant
     * properties specified in a new <code>EndpointConfig</code> call when updating an
     * endpoint, set <code>RetainAllVariantProperties</code> to <code>false</code>. The
     * default is <code>false</code>.</p>
     */
    inline bool GetRetainAllVariantProperties() const { return m_retainAllVariantProperties; }
    inline bool RetainAllVariantPropertiesHasBeenSet() const { return m_retainAllVariantPropertiesHasBeenSet; }
    inline void SetRetainAllVariantProperties(bool value) { m_retainAllVariantPropertiesHasBeenSet = true; m_retainAllVariantProperties = value; }
    inline UpdateEndpointRequest& WithRetainAllVariantProperties(bool value) { SetRetainAllVariantProperties(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When you are updating endpoint resources with
     * <code>RetainAllVariantProperties</code>, whose value is set to
     * <code>true</code>, <code>ExcludeRetainedVariantProperties</code> specifies the
     * list of type <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_VariantProperty.html">VariantProperty</a>
     * to override with the values provided by <code>EndpointConfig</code>. If you
     * don't specify a value for <code>ExcludeRetainedVariantProperties</code>, no
     * variant properties are overridden. </p>
     */
    inline const Aws::Vector<VariantProperty>& GetExcludeRetainedVariantProperties() const { return m_excludeRetainedVariantProperties; }
    inline bool ExcludeRetainedVariantPropertiesHasBeenSet() const { return m_excludeRetainedVariantPropertiesHasBeenSet; }
    template<typename ExcludeRetainedVariantPropertiesT = Aws::Vector<VariantProperty>>
    void SetExcludeRetainedVariantProperties(ExcludeRetainedVariantPropertiesT&& value) { m_excludeRetainedVariantPropertiesHasBeenSet = true; m_excludeRetainedVariantProperties = std::forward<ExcludeRetainedVariantPropertiesT>(value); }
    template<typename ExcludeRetainedVariantPropertiesT = Aws::Vector<VariantProperty>>
    UpdateEndpointRequest& WithExcludeRetainedVariantProperties(ExcludeRetainedVariantPropertiesT&& value) { SetExcludeRetainedVariantProperties(std::forward<ExcludeRetainedVariantPropertiesT>(value)); return *this;}
    template<typename ExcludeRetainedVariantPropertiesT = VariantProperty>
    UpdateEndpointRequest& AddExcludeRetainedVariantProperties(ExcludeRetainedVariantPropertiesT&& value) { m_excludeRetainedVariantPropertiesHasBeenSet = true; m_excludeRetainedVariantProperties.emplace_back(std::forward<ExcludeRetainedVariantPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The deployment configuration for an endpoint, which contains the desired
     * deployment strategy and rollback configurations.</p>
     */
    inline const DeploymentConfig& GetDeploymentConfig() const { return m_deploymentConfig; }
    inline bool DeploymentConfigHasBeenSet() const { return m_deploymentConfigHasBeenSet; }
    template<typename DeploymentConfigT = DeploymentConfig>
    void SetDeploymentConfig(DeploymentConfigT&& value) { m_deploymentConfigHasBeenSet = true; m_deploymentConfig = std::forward<DeploymentConfigT>(value); }
    template<typename DeploymentConfigT = DeploymentConfig>
    UpdateEndpointRequest& WithDeploymentConfig(DeploymentConfigT&& value) { SetDeploymentConfig(std::forward<DeploymentConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to reuse the last deployment configuration. The default
     * value is false (the configuration is not reused).</p>
     */
    inline bool GetRetainDeploymentConfig() const { return m_retainDeploymentConfig; }
    inline bool RetainDeploymentConfigHasBeenSet() const { return m_retainDeploymentConfigHasBeenSet; }
    inline void SetRetainDeploymentConfig(bool value) { m_retainDeploymentConfigHasBeenSet = true; m_retainDeploymentConfig = value; }
    inline UpdateEndpointRequest& WithRetainDeploymentConfig(bool value) { SetRetainDeploymentConfig(value); return *this;}
    ///@}
  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_endpointConfigName;
    bool m_endpointConfigNameHasBeenSet = false;

    bool m_retainAllVariantProperties{false};
    bool m_retainAllVariantPropertiesHasBeenSet = false;

    Aws::Vector<VariantProperty> m_excludeRetainedVariantProperties;
    bool m_excludeRetainedVariantPropertiesHasBeenSet = false;

    DeploymentConfig m_deploymentConfig;
    bool m_deploymentConfigHasBeenSet = false;

    bool m_retainDeploymentConfig{false};
    bool m_retainDeploymentConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
