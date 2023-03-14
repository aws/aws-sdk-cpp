/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/model/TrustedAdvisorCheckRefreshStatus.h>
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
namespace Support
{
namespace Model
{
  /**
   * <p>The current refresh status of a Trusted Advisor check.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/RefreshTrustedAdvisorCheckResponse">AWS
   * API Reference</a></p>
   */
  class RefreshTrustedAdvisorCheckResult
  {
  public:
    AWS_SUPPORT_API RefreshTrustedAdvisorCheckResult();
    AWS_SUPPORT_API RefreshTrustedAdvisorCheckResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORT_API RefreshTrustedAdvisorCheckResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The current refresh status for a check, including the amount of time until
     * the check is eligible for refresh.</p>
     */
    inline const TrustedAdvisorCheckRefreshStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current refresh status for a check, including the amount of time until
     * the check is eligible for refresh.</p>
     */
    inline void SetStatus(const TrustedAdvisorCheckRefreshStatus& value) { m_status = value; }

    /**
     * <p>The current refresh status for a check, including the amount of time until
     * the check is eligible for refresh.</p>
     */
    inline void SetStatus(TrustedAdvisorCheckRefreshStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current refresh status for a check, including the amount of time until
     * the check is eligible for refresh.</p>
     */
    inline RefreshTrustedAdvisorCheckResult& WithStatus(const TrustedAdvisorCheckRefreshStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current refresh status for a check, including the amount of time until
     * the check is eligible for refresh.</p>
     */
    inline RefreshTrustedAdvisorCheckResult& WithStatus(TrustedAdvisorCheckRefreshStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline RefreshTrustedAdvisorCheckResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline RefreshTrustedAdvisorCheckResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline RefreshTrustedAdvisorCheckResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TrustedAdvisorCheckRefreshStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
