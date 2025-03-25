/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/meteringmarketplace/model/UsageRecordResult.h>
#include <aws/meteringmarketplace/model/UsageRecord.h>
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
namespace MarketplaceMetering
{
namespace Model
{
  /**
   * <p>Contains the <code>UsageRecords</code> processed by
   * <code>BatchMeterUsage</code> and any records that have failed due to transient
   * error.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/BatchMeterUsageResult">AWS
   * API Reference</a></p>
   */
  class BatchMeterUsageResult
  {
  public:
    AWS_MARKETPLACEMETERING_API BatchMeterUsageResult() = default;
    AWS_MARKETPLACEMETERING_API BatchMeterUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACEMETERING_API BatchMeterUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains all <code>UsageRecords</code> processed by
     * <code>BatchMeterUsage</code>. These records were either honored by Amazon Web
     * Services Marketplace Metering Service or were invalid. Invalid records should be
     * fixed before being resubmitted.</p>
     */
    inline const Aws::Vector<UsageRecordResult>& GetResults() const { return m_results; }
    template<typename ResultsT = Aws::Vector<UsageRecordResult>>
    void SetResults(ResultsT&& value) { m_resultsHasBeenSet = true; m_results = std::forward<ResultsT>(value); }
    template<typename ResultsT = Aws::Vector<UsageRecordResult>>
    BatchMeterUsageResult& WithResults(ResultsT&& value) { SetResults(std::forward<ResultsT>(value)); return *this;}
    template<typename ResultsT = UsageRecordResult>
    BatchMeterUsageResult& AddResults(ResultsT&& value) { m_resultsHasBeenSet = true; m_results.emplace_back(std::forward<ResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Contains all <code>UsageRecords</code> that were not processed by
     * <code>BatchMeterUsage</code>. This is a list of <code>UsageRecords</code>. You
     * can retry the failed request by making another <code>BatchMeterUsage</code> call
     * with this list as input in the <code>BatchMeterUsageRequest</code>.</p>
     */
    inline const Aws::Vector<UsageRecord>& GetUnprocessedRecords() const { return m_unprocessedRecords; }
    template<typename UnprocessedRecordsT = Aws::Vector<UsageRecord>>
    void SetUnprocessedRecords(UnprocessedRecordsT&& value) { m_unprocessedRecordsHasBeenSet = true; m_unprocessedRecords = std::forward<UnprocessedRecordsT>(value); }
    template<typename UnprocessedRecordsT = Aws::Vector<UsageRecord>>
    BatchMeterUsageResult& WithUnprocessedRecords(UnprocessedRecordsT&& value) { SetUnprocessedRecords(std::forward<UnprocessedRecordsT>(value)); return *this;}
    template<typename UnprocessedRecordsT = UsageRecord>
    BatchMeterUsageResult& AddUnprocessedRecords(UnprocessedRecordsT&& value) { m_unprocessedRecordsHasBeenSet = true; m_unprocessedRecords.emplace_back(std::forward<UnprocessedRecordsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchMeterUsageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UsageRecordResult> m_results;
    bool m_resultsHasBeenSet = false;

    Aws::Vector<UsageRecord> m_unprocessedRecords;
    bool m_unprocessedRecordsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
