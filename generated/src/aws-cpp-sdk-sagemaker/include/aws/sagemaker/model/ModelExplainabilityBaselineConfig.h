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
    AWS_SAGEMAKER_API ModelExplainabilityBaselineConfig();
    AWS_SAGEMAKER_API ModelExplainabilityBaselineConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelExplainabilityBaselineConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the baseline model explainability job.</p>
     */
    inline const Aws::String& GetBaseliningJobName() const{ return m_baseliningJobName; }

    /**
     * <p>The name of the baseline model explainability job.</p>
     */
    inline bool BaseliningJobNameHasBeenSet() const { return m_baseliningJobNameHasBeenSet; }

    /**
     * <p>The name of the baseline model explainability job.</p>
     */
    inline void SetBaseliningJobName(const Aws::String& value) { m_baseliningJobNameHasBeenSet = true; m_baseliningJobName = value; }

    /**
     * <p>The name of the baseline model explainability job.</p>
     */
    inline void SetBaseliningJobName(Aws::String&& value) { m_baseliningJobNameHasBeenSet = true; m_baseliningJobName = std::move(value); }

    /**
     * <p>The name of the baseline model explainability job.</p>
     */
    inline void SetBaseliningJobName(const char* value) { m_baseliningJobNameHasBeenSet = true; m_baseliningJobName.assign(value); }

    /**
     * <p>The name of the baseline model explainability job.</p>
     */
    inline ModelExplainabilityBaselineConfig& WithBaseliningJobName(const Aws::String& value) { SetBaseliningJobName(value); return *this;}

    /**
     * <p>The name of the baseline model explainability job.</p>
     */
    inline ModelExplainabilityBaselineConfig& WithBaseliningJobName(Aws::String&& value) { SetBaseliningJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the baseline model explainability job.</p>
     */
    inline ModelExplainabilityBaselineConfig& WithBaseliningJobName(const char* value) { SetBaseliningJobName(value); return *this;}


    
    inline const MonitoringConstraintsResource& GetConstraintsResource() const{ return m_constraintsResource; }

    
    inline bool ConstraintsResourceHasBeenSet() const { return m_constraintsResourceHasBeenSet; }

    
    inline void SetConstraintsResource(const MonitoringConstraintsResource& value) { m_constraintsResourceHasBeenSet = true; m_constraintsResource = value; }

    
    inline void SetConstraintsResource(MonitoringConstraintsResource&& value) { m_constraintsResourceHasBeenSet = true; m_constraintsResource = std::move(value); }

    
    inline ModelExplainabilityBaselineConfig& WithConstraintsResource(const MonitoringConstraintsResource& value) { SetConstraintsResource(value); return *this;}

    
    inline ModelExplainabilityBaselineConfig& WithConstraintsResource(MonitoringConstraintsResource&& value) { SetConstraintsResource(std::move(value)); return *this;}

  private:

    Aws::String m_baseliningJobName;
    bool m_baseliningJobNameHasBeenSet = false;

    MonitoringConstraintsResource m_constraintsResource;
    bool m_constraintsResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
