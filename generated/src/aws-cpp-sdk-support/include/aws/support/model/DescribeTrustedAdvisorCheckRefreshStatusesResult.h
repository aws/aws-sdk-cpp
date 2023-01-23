/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/support/model/TrustedAdvisorCheckRefreshStatus.h>
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
namespace Support
{
namespace Model
{
  /**
   * <p>The statuses of the Trusted Advisor checks returned by the
   * <a>DescribeTrustedAdvisorCheckRefreshStatuses</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorCheckRefreshStatusesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeTrustedAdvisorCheckRefreshStatusesResult
  {
  public:
    AWS_SUPPORT_API DescribeTrustedAdvisorCheckRefreshStatusesResult();
    AWS_SUPPORT_API DescribeTrustedAdvisorCheckRefreshStatusesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORT_API DescribeTrustedAdvisorCheckRefreshStatusesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The refresh status of the specified Trusted Advisor checks.</p>
     */
    inline const Aws::Vector<TrustedAdvisorCheckRefreshStatus>& GetStatuses() const{ return m_statuses; }

    /**
     * <p>The refresh status of the specified Trusted Advisor checks.</p>
     */
    inline void SetStatuses(const Aws::Vector<TrustedAdvisorCheckRefreshStatus>& value) { m_statuses = value; }

    /**
     * <p>The refresh status of the specified Trusted Advisor checks.</p>
     */
    inline void SetStatuses(Aws::Vector<TrustedAdvisorCheckRefreshStatus>&& value) { m_statuses = std::move(value); }

    /**
     * <p>The refresh status of the specified Trusted Advisor checks.</p>
     */
    inline DescribeTrustedAdvisorCheckRefreshStatusesResult& WithStatuses(const Aws::Vector<TrustedAdvisorCheckRefreshStatus>& value) { SetStatuses(value); return *this;}

    /**
     * <p>The refresh status of the specified Trusted Advisor checks.</p>
     */
    inline DescribeTrustedAdvisorCheckRefreshStatusesResult& WithStatuses(Aws::Vector<TrustedAdvisorCheckRefreshStatus>&& value) { SetStatuses(std::move(value)); return *this;}

    /**
     * <p>The refresh status of the specified Trusted Advisor checks.</p>
     */
    inline DescribeTrustedAdvisorCheckRefreshStatusesResult& AddStatuses(const TrustedAdvisorCheckRefreshStatus& value) { m_statuses.push_back(value); return *this; }

    /**
     * <p>The refresh status of the specified Trusted Advisor checks.</p>
     */
    inline DescribeTrustedAdvisorCheckRefreshStatusesResult& AddStatuses(TrustedAdvisorCheckRefreshStatus&& value) { m_statuses.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<TrustedAdvisorCheckRefreshStatus> m_statuses;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
