/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_MARKETPLACEMETERING_API BatchMeterUsageResult();
    AWS_MARKETPLACEMETERING_API BatchMeterUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MARKETPLACEMETERING_API BatchMeterUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Contains all <code>UsageRecords</code> processed by
     * <code>BatchMeterUsage</code>. These records were either honored by AWS
     * Marketplace Metering Service or were invalid. Invalid records should be fixed
     * before being resubmitted.</p>
     */
    inline const Aws::Vector<UsageRecordResult>& GetResults() const{ return m_results; }

    /**
     * <p>Contains all <code>UsageRecords</code> processed by
     * <code>BatchMeterUsage</code>. These records were either honored by AWS
     * Marketplace Metering Service or were invalid. Invalid records should be fixed
     * before being resubmitted.</p>
     */
    inline void SetResults(const Aws::Vector<UsageRecordResult>& value) { m_results = value; }

    /**
     * <p>Contains all <code>UsageRecords</code> processed by
     * <code>BatchMeterUsage</code>. These records were either honored by AWS
     * Marketplace Metering Service or were invalid. Invalid records should be fixed
     * before being resubmitted.</p>
     */
    inline void SetResults(Aws::Vector<UsageRecordResult>&& value) { m_results = std::move(value); }

    /**
     * <p>Contains all <code>UsageRecords</code> processed by
     * <code>BatchMeterUsage</code>. These records were either honored by AWS
     * Marketplace Metering Service or were invalid. Invalid records should be fixed
     * before being resubmitted.</p>
     */
    inline BatchMeterUsageResult& WithResults(const Aws::Vector<UsageRecordResult>& value) { SetResults(value); return *this;}

    /**
     * <p>Contains all <code>UsageRecords</code> processed by
     * <code>BatchMeterUsage</code>. These records were either honored by AWS
     * Marketplace Metering Service or were invalid. Invalid records should be fixed
     * before being resubmitted.</p>
     */
    inline BatchMeterUsageResult& WithResults(Aws::Vector<UsageRecordResult>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>Contains all <code>UsageRecords</code> processed by
     * <code>BatchMeterUsage</code>. These records were either honored by AWS
     * Marketplace Metering Service or were invalid. Invalid records should be fixed
     * before being resubmitted.</p>
     */
    inline BatchMeterUsageResult& AddResults(const UsageRecordResult& value) { m_results.push_back(value); return *this; }

    /**
     * <p>Contains all <code>UsageRecords</code> processed by
     * <code>BatchMeterUsage</code>. These records were either honored by AWS
     * Marketplace Metering Service or were invalid. Invalid records should be fixed
     * before being resubmitted.</p>
     */
    inline BatchMeterUsageResult& AddResults(UsageRecordResult&& value) { m_results.push_back(std::move(value)); return *this; }


    /**
     * <p>Contains all <code>UsageRecords</code> that were not processed by
     * <code>BatchMeterUsage</code>. This is a list of <code>UsageRecords</code>. You
     * can retry the failed request by making another <code>BatchMeterUsage</code> call
     * with this list as input in the <code>BatchMeterUsageRequest</code>.</p>
     */
    inline const Aws::Vector<UsageRecord>& GetUnprocessedRecords() const{ return m_unprocessedRecords; }

    /**
     * <p>Contains all <code>UsageRecords</code> that were not processed by
     * <code>BatchMeterUsage</code>. This is a list of <code>UsageRecords</code>. You
     * can retry the failed request by making another <code>BatchMeterUsage</code> call
     * with this list as input in the <code>BatchMeterUsageRequest</code>.</p>
     */
    inline void SetUnprocessedRecords(const Aws::Vector<UsageRecord>& value) { m_unprocessedRecords = value; }

    /**
     * <p>Contains all <code>UsageRecords</code> that were not processed by
     * <code>BatchMeterUsage</code>. This is a list of <code>UsageRecords</code>. You
     * can retry the failed request by making another <code>BatchMeterUsage</code> call
     * with this list as input in the <code>BatchMeterUsageRequest</code>.</p>
     */
    inline void SetUnprocessedRecords(Aws::Vector<UsageRecord>&& value) { m_unprocessedRecords = std::move(value); }

    /**
     * <p>Contains all <code>UsageRecords</code> that were not processed by
     * <code>BatchMeterUsage</code>. This is a list of <code>UsageRecords</code>. You
     * can retry the failed request by making another <code>BatchMeterUsage</code> call
     * with this list as input in the <code>BatchMeterUsageRequest</code>.</p>
     */
    inline BatchMeterUsageResult& WithUnprocessedRecords(const Aws::Vector<UsageRecord>& value) { SetUnprocessedRecords(value); return *this;}

    /**
     * <p>Contains all <code>UsageRecords</code> that were not processed by
     * <code>BatchMeterUsage</code>. This is a list of <code>UsageRecords</code>. You
     * can retry the failed request by making another <code>BatchMeterUsage</code> call
     * with this list as input in the <code>BatchMeterUsageRequest</code>.</p>
     */
    inline BatchMeterUsageResult& WithUnprocessedRecords(Aws::Vector<UsageRecord>&& value) { SetUnprocessedRecords(std::move(value)); return *this;}

    /**
     * <p>Contains all <code>UsageRecords</code> that were not processed by
     * <code>BatchMeterUsage</code>. This is a list of <code>UsageRecords</code>. You
     * can retry the failed request by making another <code>BatchMeterUsage</code> call
     * with this list as input in the <code>BatchMeterUsageRequest</code>.</p>
     */
    inline BatchMeterUsageResult& AddUnprocessedRecords(const UsageRecord& value) { m_unprocessedRecords.push_back(value); return *this; }

    /**
     * <p>Contains all <code>UsageRecords</code> that were not processed by
     * <code>BatchMeterUsage</code>. This is a list of <code>UsageRecords</code>. You
     * can retry the failed request by making another <code>BatchMeterUsage</code> call
     * with this list as input in the <code>BatchMeterUsageRequest</code>.</p>
     */
    inline BatchMeterUsageResult& AddUnprocessedRecords(UsageRecord&& value) { m_unprocessedRecords.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<UsageRecordResult> m_results;

    Aws::Vector<UsageRecord> m_unprocessedRecords;
  };

} // namespace Model
} // namespace MarketplaceMetering
} // namespace Aws
