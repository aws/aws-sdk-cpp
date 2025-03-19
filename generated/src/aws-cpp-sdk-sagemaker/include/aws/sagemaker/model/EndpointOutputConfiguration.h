/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ProductionVariantInstanceType.h>
#include <aws/sagemaker/model/ProductionVariantServerlessConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The endpoint configuration made by Inference Recommender during a
   * recommendation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EndpointOutputConfiguration">AWS
   * API Reference</a></p>
   */
  class EndpointOutputConfiguration
  {
  public:
    AWS_SAGEMAKER_API EndpointOutputConfiguration() = default;
    AWS_SAGEMAKER_API EndpointOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EndpointOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the endpoint made during a recommendation job.</p>
     */
    inline const Aws::String& GetEndpointName() const { return m_endpointName; }
    inline bool EndpointNameHasBeenSet() const { return m_endpointNameHasBeenSet; }
    template<typename EndpointNameT = Aws::String>
    void SetEndpointName(EndpointNameT&& value) { m_endpointNameHasBeenSet = true; m_endpointName = std::forward<EndpointNameT>(value); }
    template<typename EndpointNameT = Aws::String>
    EndpointOutputConfiguration& WithEndpointName(EndpointNameT&& value) { SetEndpointName(std::forward<EndpointNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the production variant (deployed model) made during a
     * recommendation job.</p>
     */
    inline const Aws::String& GetVariantName() const { return m_variantName; }
    inline bool VariantNameHasBeenSet() const { return m_variantNameHasBeenSet; }
    template<typename VariantNameT = Aws::String>
    void SetVariantName(VariantNameT&& value) { m_variantNameHasBeenSet = true; m_variantName = std::forward<VariantNameT>(value); }
    template<typename VariantNameT = Aws::String>
    EndpointOutputConfiguration& WithVariantName(VariantNameT&& value) { SetVariantName(std::forward<VariantNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type recommended by Amazon SageMaker Inference Recommender.</p>
     */
    inline ProductionVariantInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(ProductionVariantInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline EndpointOutputConfiguration& WithInstanceType(ProductionVariantInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances recommended to launch initially.</p>
     */
    inline int GetInitialInstanceCount() const { return m_initialInstanceCount; }
    inline bool InitialInstanceCountHasBeenSet() const { return m_initialInstanceCountHasBeenSet; }
    inline void SetInitialInstanceCount(int value) { m_initialInstanceCountHasBeenSet = true; m_initialInstanceCount = value; }
    inline EndpointOutputConfiguration& WithInitialInstanceCount(int value) { SetInitialInstanceCount(value); return *this;}
    ///@}

    ///@{
    
    inline const ProductionVariantServerlessConfig& GetServerlessConfig() const { return m_serverlessConfig; }
    inline bool ServerlessConfigHasBeenSet() const { return m_serverlessConfigHasBeenSet; }
    template<typename ServerlessConfigT = ProductionVariantServerlessConfig>
    void SetServerlessConfig(ServerlessConfigT&& value) { m_serverlessConfigHasBeenSet = true; m_serverlessConfig = std::forward<ServerlessConfigT>(value); }
    template<typename ServerlessConfigT = ProductionVariantServerlessConfig>
    EndpointOutputConfiguration& WithServerlessConfig(ServerlessConfigT&& value) { SetServerlessConfig(std::forward<ServerlessConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_endpointName;
    bool m_endpointNameHasBeenSet = false;

    Aws::String m_variantName;
    bool m_variantNameHasBeenSet = false;

    ProductionVariantInstanceType m_instanceType{ProductionVariantInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    int m_initialInstanceCount{0};
    bool m_initialInstanceCountHasBeenSet = false;

    ProductionVariantServerlessConfig m_serverlessConfig;
    bool m_serverlessConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
