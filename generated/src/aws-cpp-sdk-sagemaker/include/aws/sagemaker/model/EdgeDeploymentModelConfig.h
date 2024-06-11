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
    AWS_SAGEMAKER_API EdgeDeploymentModelConfig();
    AWS_SAGEMAKER_API EdgeDeploymentModelConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EdgeDeploymentModelConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name the device application uses to reference this model.</p>
     */
    inline const Aws::String& GetModelHandle() const{ return m_modelHandle; }
    inline bool ModelHandleHasBeenSet() const { return m_modelHandleHasBeenSet; }
    inline void SetModelHandle(const Aws::String& value) { m_modelHandleHasBeenSet = true; m_modelHandle = value; }
    inline void SetModelHandle(Aws::String&& value) { m_modelHandleHasBeenSet = true; m_modelHandle = std::move(value); }
    inline void SetModelHandle(const char* value) { m_modelHandleHasBeenSet = true; m_modelHandle.assign(value); }
    inline EdgeDeploymentModelConfig& WithModelHandle(const Aws::String& value) { SetModelHandle(value); return *this;}
    inline EdgeDeploymentModelConfig& WithModelHandle(Aws::String&& value) { SetModelHandle(std::move(value)); return *this;}
    inline EdgeDeploymentModelConfig& WithModelHandle(const char* value) { SetModelHandle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The edge packaging job associated with this deployment.</p>
     */
    inline const Aws::String& GetEdgePackagingJobName() const{ return m_edgePackagingJobName; }
    inline bool EdgePackagingJobNameHasBeenSet() const { return m_edgePackagingJobNameHasBeenSet; }
    inline void SetEdgePackagingJobName(const Aws::String& value) { m_edgePackagingJobNameHasBeenSet = true; m_edgePackagingJobName = value; }
    inline void SetEdgePackagingJobName(Aws::String&& value) { m_edgePackagingJobNameHasBeenSet = true; m_edgePackagingJobName = std::move(value); }
    inline void SetEdgePackagingJobName(const char* value) { m_edgePackagingJobNameHasBeenSet = true; m_edgePackagingJobName.assign(value); }
    inline EdgeDeploymentModelConfig& WithEdgePackagingJobName(const Aws::String& value) { SetEdgePackagingJobName(value); return *this;}
    inline EdgeDeploymentModelConfig& WithEdgePackagingJobName(Aws::String&& value) { SetEdgePackagingJobName(std::move(value)); return *this;}
    inline EdgeDeploymentModelConfig& WithEdgePackagingJobName(const char* value) { SetEdgePackagingJobName(value); return *this;}
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
