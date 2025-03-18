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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Personalize
{
namespace Model
{
  class UpdateMetricAttributionResult
  {
  public:
    AWS_PERSONALIZE_API UpdateMetricAttributionResult() = default;
    AWS_PERSONALIZE_API UpdateMetricAttributionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API UpdateMetricAttributionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the metric attribution that you
     * updated.</p>
     */
    inline const Aws::String& GetMetricAttributionArn() const { return m_metricAttributionArn; }
    template<typename MetricAttributionArnT = Aws::String>
    void SetMetricAttributionArn(MetricAttributionArnT&& value) { m_metricAttributionArnHasBeenSet = true; m_metricAttributionArn = std::forward<MetricAttributionArnT>(value); }
    template<typename MetricAttributionArnT = Aws::String>
    UpdateMetricAttributionResult& WithMetricAttributionArn(MetricAttributionArnT&& value) { SetMetricAttributionArn(std::forward<MetricAttributionArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateMetricAttributionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_metricAttributionArn;
    bool m_metricAttributionArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
