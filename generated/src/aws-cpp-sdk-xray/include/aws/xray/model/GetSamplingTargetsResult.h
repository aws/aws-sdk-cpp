/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/SamplingTargetDocument.h>
#include <aws/xray/model/UnprocessedStatistics.h>
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
namespace XRay
{
namespace Model
{
  class GetSamplingTargetsResult
  {
  public:
    AWS_XRAY_API GetSamplingTargetsResult() = default;
    AWS_XRAY_API GetSamplingTargetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetSamplingTargetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Updated rules that the service should use to sample requests.</p>
     */
    inline const Aws::Vector<SamplingTargetDocument>& GetSamplingTargetDocuments() const { return m_samplingTargetDocuments; }
    template<typename SamplingTargetDocumentsT = Aws::Vector<SamplingTargetDocument>>
    void SetSamplingTargetDocuments(SamplingTargetDocumentsT&& value) { m_samplingTargetDocumentsHasBeenSet = true; m_samplingTargetDocuments = std::forward<SamplingTargetDocumentsT>(value); }
    template<typename SamplingTargetDocumentsT = Aws::Vector<SamplingTargetDocument>>
    GetSamplingTargetsResult& WithSamplingTargetDocuments(SamplingTargetDocumentsT&& value) { SetSamplingTargetDocuments(std::forward<SamplingTargetDocumentsT>(value)); return *this;}
    template<typename SamplingTargetDocumentsT = SamplingTargetDocument>
    GetSamplingTargetsResult& AddSamplingTargetDocuments(SamplingTargetDocumentsT&& value) { m_samplingTargetDocumentsHasBeenSet = true; m_samplingTargetDocuments.emplace_back(std::forward<SamplingTargetDocumentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The last time a user changed the sampling rule configuration. If the sampling
     * rule configuration changed since the service last retrieved it, the service
     * should call <a
     * href="https://docs.aws.amazon.com/xray/latest/api/API_GetSamplingRules.html">GetSamplingRules</a>
     * to get the latest version.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRuleModification() const { return m_lastRuleModification; }
    template<typename LastRuleModificationT = Aws::Utils::DateTime>
    void SetLastRuleModification(LastRuleModificationT&& value) { m_lastRuleModificationHasBeenSet = true; m_lastRuleModification = std::forward<LastRuleModificationT>(value); }
    template<typename LastRuleModificationT = Aws::Utils::DateTime>
    GetSamplingTargetsResult& WithLastRuleModification(LastRuleModificationT&& value) { SetLastRuleModification(std::forward<LastRuleModificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about <a
     * href="https://docs.aws.amazon.com/xray/latest/api/API_SamplingStatisticsDocument.html">SamplingStatisticsDocument</a>
     * that X-Ray could not process.</p>
     */
    inline const Aws::Vector<UnprocessedStatistics>& GetUnprocessedStatistics() const { return m_unprocessedStatistics; }
    template<typename UnprocessedStatisticsT = Aws::Vector<UnprocessedStatistics>>
    void SetUnprocessedStatistics(UnprocessedStatisticsT&& value) { m_unprocessedStatisticsHasBeenSet = true; m_unprocessedStatistics = std::forward<UnprocessedStatisticsT>(value); }
    template<typename UnprocessedStatisticsT = Aws::Vector<UnprocessedStatistics>>
    GetSamplingTargetsResult& WithUnprocessedStatistics(UnprocessedStatisticsT&& value) { SetUnprocessedStatistics(std::forward<UnprocessedStatisticsT>(value)); return *this;}
    template<typename UnprocessedStatisticsT = UnprocessedStatistics>
    GetSamplingTargetsResult& AddUnprocessedStatistics(UnprocessedStatisticsT&& value) { m_unprocessedStatisticsHasBeenSet = true; m_unprocessedStatistics.emplace_back(std::forward<UnprocessedStatisticsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about <a
     * href="https://docs.aws.amazon.com/xray/latest/api/API_SamplingBoostStatisticsDocument.html">SamplingBoostStatisticsDocument</a>
     * that X-Ray could not process.</p>
     */
    inline const Aws::Vector<UnprocessedStatistics>& GetUnprocessedBoostStatistics() const { return m_unprocessedBoostStatistics; }
    template<typename UnprocessedBoostStatisticsT = Aws::Vector<UnprocessedStatistics>>
    void SetUnprocessedBoostStatistics(UnprocessedBoostStatisticsT&& value) { m_unprocessedBoostStatisticsHasBeenSet = true; m_unprocessedBoostStatistics = std::forward<UnprocessedBoostStatisticsT>(value); }
    template<typename UnprocessedBoostStatisticsT = Aws::Vector<UnprocessedStatistics>>
    GetSamplingTargetsResult& WithUnprocessedBoostStatistics(UnprocessedBoostStatisticsT&& value) { SetUnprocessedBoostStatistics(std::forward<UnprocessedBoostStatisticsT>(value)); return *this;}
    template<typename UnprocessedBoostStatisticsT = UnprocessedStatistics>
    GetSamplingTargetsResult& AddUnprocessedBoostStatistics(UnprocessedBoostStatisticsT&& value) { m_unprocessedBoostStatisticsHasBeenSet = true; m_unprocessedBoostStatistics.emplace_back(std::forward<UnprocessedBoostStatisticsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSamplingTargetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SamplingTargetDocument> m_samplingTargetDocuments;
    bool m_samplingTargetDocumentsHasBeenSet = false;

    Aws::Utils::DateTime m_lastRuleModification{};
    bool m_lastRuleModificationHasBeenSet = false;

    Aws::Vector<UnprocessedStatistics> m_unprocessedStatistics;
    bool m_unprocessedStatisticsHasBeenSet = false;

    Aws::Vector<UnprocessedStatistics> m_unprocessedBoostStatistics;
    bool m_unprocessedBoostStatisticsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
