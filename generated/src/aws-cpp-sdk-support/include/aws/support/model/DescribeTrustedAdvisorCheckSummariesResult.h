﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/Support_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/support/model/TrustedAdvisorCheckSummary.h>
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
   * <p>The summaries of the Trusted Advisor checks returned by the
   * <a>DescribeTrustedAdvisorCheckSummaries</a> operation.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/DescribeTrustedAdvisorCheckSummariesResponse">AWS
   * API Reference</a></p>
   */
  class DescribeTrustedAdvisorCheckSummariesResult
  {
  public:
    AWS_SUPPORT_API DescribeTrustedAdvisorCheckSummariesResult();
    AWS_SUPPORT_API DescribeTrustedAdvisorCheckSummariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SUPPORT_API DescribeTrustedAdvisorCheckSummariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The summary information for the requested Trusted Advisor checks.</p>
     */
    inline const Aws::Vector<TrustedAdvisorCheckSummary>& GetSummaries() const{ return m_summaries; }
    inline void SetSummaries(const Aws::Vector<TrustedAdvisorCheckSummary>& value) { m_summaries = value; }
    inline void SetSummaries(Aws::Vector<TrustedAdvisorCheckSummary>&& value) { m_summaries = std::move(value); }
    inline DescribeTrustedAdvisorCheckSummariesResult& WithSummaries(const Aws::Vector<TrustedAdvisorCheckSummary>& value) { SetSummaries(value); return *this;}
    inline DescribeTrustedAdvisorCheckSummariesResult& WithSummaries(Aws::Vector<TrustedAdvisorCheckSummary>&& value) { SetSummaries(std::move(value)); return *this;}
    inline DescribeTrustedAdvisorCheckSummariesResult& AddSummaries(const TrustedAdvisorCheckSummary& value) { m_summaries.push_back(value); return *this; }
    inline DescribeTrustedAdvisorCheckSummariesResult& AddSummaries(TrustedAdvisorCheckSummary&& value) { m_summaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeTrustedAdvisorCheckSummariesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeTrustedAdvisorCheckSummariesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeTrustedAdvisorCheckSummariesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<TrustedAdvisorCheckSummary> m_summaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
