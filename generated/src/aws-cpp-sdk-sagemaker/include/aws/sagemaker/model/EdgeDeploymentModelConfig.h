/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains information about the configuration of a model in a
   * deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EdgeDeploymentModelConfig">AWS
   * API Reference</a></p>
   */
  class EdgeDeploymentModelConfig
  {
  public:
    AWS_SAGEMAKER_API EdgeDeploymentModelConfig() = default;
    AWS_SAGEMAKER_API EdgeDeploymentModelConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EdgeDeploymentModelConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name the device application uses to reference this model.</p>
     */
    inline const Aws::String& GetModelHandle() const { return m_modelHandle; }
    inline bool ModelHandleHasBeenSet() const { return m_modelHandleHasBeenSet; }
    template<typename ModelHandleT = Aws::String>
    void SetModelHandle(ModelHandleT&& value) { m_modelHandleHasBeenSet = true; m_modelHandle = std::forward<ModelHandleT>(value); }
    template<typename ModelHandleT = Aws::String>
    EdgeDeploymentModelConfig& WithModelHandle(ModelHandleT&& value) { SetModelHandle(std::forward<ModelHandleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The edge packaging job associated with this deployment.</p>
     */
    inline const Aws::String& GetEdgePackagingJobName() const { return m_edgePackagingJobName; }
    inline bool EdgePackagingJobNameHasBeenSet() const { return m_edgePackagingJobNameHasBeenSet; }
    template<typename EdgePackagingJobNameT = Aws::String>
    void SetEdgePackagingJobName(EdgePackagingJobNameT&& value) { m_edgePackagingJobNameHasBeenSet = true; m_edgePackagingJobName = std::forward<EdgePackagingJobNameT>(value); }
    template<typename EdgePackagingJobNameT = Aws::String>
    EdgeDeploymentModelConfig& WithEdgePackagingJobName(EdgePackagingJobNameT&& value) { SetEdgePackagingJobName(std::forward<EdgePackagingJobNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelHandle;
    bool m_modelHandleHasBeenSet = false;

    Aws::String m_edgePackagingJobName;
    bool m_edgePackagingJobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
