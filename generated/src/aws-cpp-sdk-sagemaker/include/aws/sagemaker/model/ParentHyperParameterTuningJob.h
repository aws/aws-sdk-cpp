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
    AWS_SAGEMAKER_API ParentHyperParameterTuningJob() = default;
    AWS_SAGEMAKER_API ParentHyperParameterTuningJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ParentHyperParameterTuningJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the hyperparameter tuning job to be used as a starting point for
     * a new hyperparameter tuning job.</p>
     */
    inline const Aws::String& GetHyperParameterTuningJobName() const { return m_hyperParameterTuningJobName; }
    inline bool HyperParameterTuningJobNameHasBeenSet() const { return m_hyperParameterTuningJobNameHasBeenSet; }
    template<typename HyperParameterTuningJobNameT = Aws::String>
    void SetHyperParameterTuningJobName(HyperParameterTuningJobNameT&& value) { m_hyperParameterTuningJobNameHasBeenSet = true; m_hyperParameterTuningJobName = std::forward<HyperParameterTuningJobNameT>(value); }
    template<typename HyperParameterTuningJobNameT = Aws::String>
    ParentHyperParameterTuningJob& WithHyperParameterTuningJobName(HyperParameterTuningJobNameT&& value) { SetHyperParameterTuningJobName(std::forward<HyperParameterTuningJobNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hyperParameterTuningJobName;
    bool m_hyperParameterTuningJobNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
