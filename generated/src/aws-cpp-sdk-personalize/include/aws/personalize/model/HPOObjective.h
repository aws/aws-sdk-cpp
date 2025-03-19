/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>The metric to optimize during hyperparameter optimization (HPO).</p> 
   * <p>Amazon Personalize doesn't support configuring the <code>hpoObjective</code>
   * at this time.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/HPOObjective">AWS
   * API Reference</a></p>
   */
  class HPOObjective
  {
  public:
    AWS_PERSONALIZE_API HPOObjective() = default;
    AWS_PERSONALIZE_API HPOObjective(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API HPOObjective& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PERSONALIZE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the metric. Valid values are <code>Maximize</code> and
     * <code>Minimize</code>.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    HPOObjective& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the metric.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    HPOObjective& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A regular expression for finding the metric in the training job logs.</p>
     */
    inline const Aws::String& GetMetricRegex() const { return m_metricRegex; }
    inline bool MetricRegexHasBeenSet() const { return m_metricRegexHasBeenSet; }
    template<typename MetricRegexT = Aws::String>
    void SetMetricRegex(MetricRegexT&& value) { m_metricRegexHasBeenSet = true; m_metricRegex = std::forward<MetricRegexT>(value); }
    template<typename MetricRegexT = Aws::String>
    HPOObjective& WithMetricRegex(MetricRegexT&& value) { SetMetricRegex(std::forward<MetricRegexT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::String m_metricRegex;
    bool m_metricRegexHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
