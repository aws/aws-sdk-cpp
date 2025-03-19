/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/InferenceMetrics.h>
#include <aws/sagemaker/model/EndpointInfo.h>
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
   * <p>The performance results from running an Inference Recommender job on an
   * existing endpoint.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/EndpointPerformance">AWS
   * API Reference</a></p>
   */
  class EndpointPerformance
  {
  public:
    AWS_SAGEMAKER_API EndpointPerformance() = default;
    AWS_SAGEMAKER_API EndpointPerformance(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API EndpointPerformance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The metrics for an existing endpoint.</p>
     */
    inline const InferenceMetrics& GetMetrics() const { return m_metrics; }
    inline bool MetricsHasBeenSet() const { return m_metricsHasBeenSet; }
    template<typename MetricsT = InferenceMetrics>
    void SetMetrics(MetricsT&& value) { m_metricsHasBeenSet = true; m_metrics = std::forward<MetricsT>(value); }
    template<typename MetricsT = InferenceMetrics>
    EndpointPerformance& WithMetrics(MetricsT&& value) { SetMetrics(std::forward<MetricsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EndpointInfo& GetEndpointInfo() const { return m_endpointInfo; }
    inline bool EndpointInfoHasBeenSet() const { return m_endpointInfoHasBeenSet; }
    template<typename EndpointInfoT = EndpointInfo>
    void SetEndpointInfo(EndpointInfoT&& value) { m_endpointInfoHasBeenSet = true; m_endpointInfo = std::forward<EndpointInfoT>(value); }
    template<typename EndpointInfoT = EndpointInfo>
    EndpointPerformance& WithEndpointInfo(EndpointInfoT&& value) { SetEndpointInfo(std::forward<EndpointInfoT>(value)); return *this;}
    ///@}
  private:

    InferenceMetrics m_metrics;
    bool m_metricsHasBeenSet = false;

    EndpointInfo m_endpointInfo;
    bool m_endpointInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
