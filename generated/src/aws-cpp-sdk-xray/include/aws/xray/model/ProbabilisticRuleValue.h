/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>

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
namespace XRay
{
namespace Model
{

  /**
   * <p> The indexing rule configuration for probabilistic sampling. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/ProbabilisticRuleValue">AWS
   * API Reference</a></p>
   */
  class ProbabilisticRuleValue
  {
  public:
    AWS_XRAY_API ProbabilisticRuleValue() = default;
    AWS_XRAY_API ProbabilisticRuleValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API ProbabilisticRuleValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Configured sampling percentage of traceIds. Note that sampling can be
     * subject to limits to ensure completeness of data. </p>
     */
    inline double GetDesiredSamplingPercentage() const { return m_desiredSamplingPercentage; }
    inline bool DesiredSamplingPercentageHasBeenSet() const { return m_desiredSamplingPercentageHasBeenSet; }
    inline void SetDesiredSamplingPercentage(double value) { m_desiredSamplingPercentageHasBeenSet = true; m_desiredSamplingPercentage = value; }
    inline ProbabilisticRuleValue& WithDesiredSamplingPercentage(double value) { SetDesiredSamplingPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Applied sampling percentage of traceIds. </p>
     */
    inline double GetActualSamplingPercentage() const { return m_actualSamplingPercentage; }
    inline bool ActualSamplingPercentageHasBeenSet() const { return m_actualSamplingPercentageHasBeenSet; }
    inline void SetActualSamplingPercentage(double value) { m_actualSamplingPercentageHasBeenSet = true; m_actualSamplingPercentage = value; }
    inline ProbabilisticRuleValue& WithActualSamplingPercentage(double value) { SetActualSamplingPercentage(value); return *this;}
    ///@}
  private:

    double m_desiredSamplingPercentage{0.0};
    bool m_desiredSamplingPercentageHasBeenSet = false;

    double m_actualSamplingPercentage{0.0};
    bool m_actualSamplingPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
