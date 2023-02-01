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
   * <p>A previously completed or stopped hyperparameter tuning job to be used as a
   * starting point for a new hyperparameter tuning job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ParentHyperParameterTuningJob">AWS
   * API Reference</a></p>
   */
  class ParentHyperParameterTuningJob
  {
  public:
    AWS_SAGEMAKER_API ParentHyperParameterTuningJob();
    AWS_SAGEMAKER_API ParentHyperParameterTuningJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ParentHyperParameterTuningJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the hyperparameter tuning job to be used as a starting point for
     * a new hyperparameter tuning job.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobName() const{ return m_hyperParameterTuningJobName; }

    /**
     * <p>The name of the hyperparameter tuning job to be used as a starting point for
     * a new hyperparameter tuning job.</p>
     */
    inline bool HyperParameterTuningJobNameHasBeenSet() const { return m_hyperParameterTuningJobNameHasBeenSet; }

    /**
     * <p>The name of the hyperparameter tuning job to be used as a starting point for
     * a new hyperparameter tuning job.</p>
     */
    inline void SetHyperParameterTuningJobName(const Aws::String& value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName = value; }

    /**
     * <p>The name of the hyperparameter tuning job to be used as a starting point for
     * a new hyperparameter tuning job.</p>
     */
    inline void SetHyperParameterTuningJobName(Aws::String&& value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName = std::move(value); }

    /**
     * <p>The name of the hyperparameter tuning job to be used as a starting point for
     * a new hyperparameter tuning job.</p>
     */
    inline void SetHyperParameterTuningJobName(const char* value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName.assign(value); }

    /**
     * <p>The name of the hyperparameter tuning job to be used as a starting point for
     * a new hyperparameter tuning job.</p>
     */
    inline ParentHyperParameterTuningJob& WithHyperParameterTuningJobName(const Aws::String& value) { SetHyperParameterTuningJobName(value); return *this;}

    /**
     * <p>The name of the hyperparameter tuning job to be used as a starting point for
     * a new hyperparameter tuning job.</p>
     */
    inline ParentHyperParameterTuningJob& WithHyperParameterTuningJobName(Aws::String&& value) { SetHyperParameterTuningJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the hyperparameter tuning job to be used as a starting point for
     * a new hyperparameter tuning job.</p>
     */
    inline ParentHyperParameterTuningJob& WithHyperParameterTuningJobName(const char* value) { SetHyperParameterTuningJobName(value); return *this;}

  private:

    Aws::String m_hyperParameterTuningJobName;
    bool m_hyperParameterTuningJobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
