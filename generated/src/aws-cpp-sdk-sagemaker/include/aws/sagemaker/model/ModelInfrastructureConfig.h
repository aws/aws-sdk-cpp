﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ModelInfrastructureType.h>
#include <aws/sagemaker/model/RealTimeInferenceConfig.h>
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
   * <p>The configuration for the infrastructure that the model will be deployed
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelInfrastructureConfig">AWS
   * API Reference</a></p>
   */
  class ModelInfrastructureConfig
  {
  public:
    AWS_SAGEMAKER_API ModelInfrastructureConfig() = default;
    AWS_SAGEMAKER_API ModelInfrastructureConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelInfrastructureConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The inference option to which to deploy your model. Possible values are the
     * following:</p> <ul> <li> <p> <code>RealTime</code>: Deploy to real-time
     * inference.</p> </li> </ul>
     */
    inline ModelInfrastructureType GetInfrastructureType() const { return m_infrastructureType; }
    inline bool InfrastructureTypeHasBeenSet() const { return m_infrastructureTypeHasBeenSet; }
    inline void SetInfrastructureType(ModelInfrastructureType value) { m_infrastructureTypeHasBeenSet = true; m_infrastructureType = value; }
    inline ModelInfrastructureConfig& WithInfrastructureType(ModelInfrastructureType value) { SetInfrastructureType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The infrastructure configuration for deploying the model to real-time
     * inference.</p>
     */
    inline const RealTimeInferenceConfig& GetRealTimeInferenceConfig() const { return m_realTimeInferenceConfig; }
    inline bool RealTimeInferenceConfigHasBeenSet() const { return m_realTimeInferenceConfigHasBeenSet; }
    template<typename RealTimeInferenceConfigT = RealTimeInferenceConfig>
    void SetRealTimeInferenceConfig(RealTimeInferenceConfigT&& value) { m_realTimeInferenceConfigHasBeenSet = true; m_realTimeInferenceConfig = std::forward<RealTimeInferenceConfigT>(value); }
    template<typename RealTimeInferenceConfigT = RealTimeInferenceConfig>
    ModelInfrastructureConfig& WithRealTimeInferenceConfig(RealTimeInferenceConfigT&& value) { SetRealTimeInferenceConfig(std::forward<RealTimeInferenceConfigT>(value)); return *this;}
    ///@}
  private:

    ModelInfrastructureType m_infrastructureType{ModelInfrastructureType::NOT_SET};
    bool m_infrastructureTypeHasBeenSet = false;

    RealTimeInferenceConfig m_realTimeInferenceConfig;
    bool m_realTimeInferenceConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
