/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringConstraintsResource.h>
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
   * <p>The configuration for a baseline model explainability job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelExplainabilityBaselineConfig">AWS
   * API Reference</a></p>
   */
  class ModelExplainabilityBaselineConfig
  {
  public:
    AWS_SAGEMAKER_API ModelExplainabilityBaselineConfig() = default;
    AWS_SAGEMAKER_API ModelExplainabilityBaselineConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelExplainabilityBaselineConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the baseline model explainability job.</p>
     */
    inline const Aws::String& GetBaseliningJobName() const { return m_baseliningJobName; }
    inline bool BaseliningJobNameHasBeenSet() const { return m_baseliningJobNameHasBeenSet; }
    template<typename BaseliningJobNameT = Aws::String>
    void SetBaseliningJobName(BaseliningJobNameT&& value) { m_baseliningJobNameHasBeenSet = true; m_baseliningJobName = std::forward<BaseliningJobNameT>(value); }
    template<typename BaseliningJobNameT = Aws::String>
    ModelExplainabilityBaselineConfig& WithBaseliningJobName(BaseliningJobNameT&& value) { SetBaseliningJobName(std::forward<BaseliningJobNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MonitoringConstraintsResource& GetConstraintsResource() const { return m_constraintsResource; }
    inline bool ConstraintsResourceHasBeenSet() const { return m_constraintsResourceHasBeenSet; }
    template<typename ConstraintsResourceT = MonitoringConstraintsResource>
    void SetConstraintsResource(ConstraintsResourceT&& value) { m_constraintsResourceHasBeenSet = true; m_constraintsResource = std::forward<ConstraintsResourceT>(value); }
    template<typename ConstraintsResourceT = MonitoringConstraintsResource>
    ModelExplainabilityBaselineConfig& WithConstraintsResource(ConstraintsResourceT&& value) { SetConstraintsResource(std::forward<ConstraintsResourceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_baseliningJobName;
    bool m_baseliningJobNameHasBeenSet = false;

    MonitoringConstraintsResource m_constraintsResource;
    bool m_constraintsResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
