/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_SUPPORT_API DescribeTrustedAdvisorCheckRefreshStatusesResult() = default;
    AWS_SUPPORT_API DescribeTrustedAdvisorCheckRefreshStatusesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORT_API DescribeTrustedAdvisorCheckRefreshStatusesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The refresh status of the specified Trusted Advisor checks.</p>
     */
    inline const Aws::Vector<TrustedAdvisorCheckRefreshStatus>& GetStatuses() const { return m_statuses; }
    template<typename StatusesT = Aws::Vector<TrustedAdvisorCheckRefreshStatus>>
    void SetStatuses(StatusesT&& value) { m_statusesHasBeenSet = true; m_statuses = std::forward<StatusesT>(value); }
    template<typename StatusesT = Aws::Vector<TrustedAdvisorCheckRefreshStatus>>
    DescribeTrustedAdvisorCheckRefreshStatusesResult& WithStatuses(StatusesT&& value) { SetStatuses(std::forward<StatusesT>(value)); return *this;}
    template<typename StatusesT = TrustedAdvisorCheckRefreshStatus>
    DescribeTrustedAdvisorCheckRefreshStatusesResult& AddStatuses(StatusesT&& value) { m_statusesHasBeenSet = true; m_statuses.emplace_back(std::forward<StatusesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeTrustedAdvisorCheckRefreshStatusesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TrustedAdvisorCheckRefreshStatus> m_statuses;
    bool m_statusesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
