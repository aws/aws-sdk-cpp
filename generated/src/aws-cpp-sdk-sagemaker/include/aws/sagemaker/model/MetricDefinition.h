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
   * <p>Specifies a metric that the training algorithm writes to <code>stderr</code>
   * or <code>stdout</code>. You can view these logs to understand how your training
   * job performs and check for any errors encountered during training. SageMaker
   * hyperparameter tuning captures all defined metrics. Specify one of the defined
   * metrics to use as an objective metric using the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTrainingJobDefinition.html#sagemaker-Type-HyperParameterTrainingJobDefinition-TuningObjective">TuningObjective</a>
   * parameter in the <code>HyperParameterTrainingJobDefinition</code> API to
   * evaluate job performance during hyperparameter tuning.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MetricDefinition">AWS
   * API Reference</a></p>
   */
  class MetricDefinition
  {
  public:
    AWS_SAGEMAKER_API MetricDefinition() = default;
    AWS_SAGEMAKER_API MetricDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MetricDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the metric.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MetricDefinition& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A regular expression that searches the output of a training job and gets the
     * value of the metric. For more information about using regular expressions to
     * define metrics, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-define-metrics-variables.html">Defining
     * metrics and environment variables</a>.</p>
     */
    inline const Aws::String& GetRegex() const { return m_regex; }
    inline bool RegexHasBeenSet() const { return m_regexHasBeenSet; }
    template<typename RegexT = Aws::String>
    void SetRegex(RegexT&& value) { m_regexHasBeenSet = true; m_regex = std::forward<RegexT>(value); }
    template<typename RegexT = Aws::String>
    MetricDefinition& WithRegex(RegexT&& value) { SetRegex(std::forward<RegexT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_regex;
    bool m_regexHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
