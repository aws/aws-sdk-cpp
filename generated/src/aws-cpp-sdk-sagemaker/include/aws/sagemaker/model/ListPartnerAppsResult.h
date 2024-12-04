/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/PartnerAppSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class ListPartnerAppsResult
  {
  public:
    AWS_SAGEMAKER_API ListPartnerAppsResult();
    AWS_SAGEMAKER_API ListPartnerAppsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListPartnerAppsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The information related to each of the SageMaker Partner AI Apps in an
     * account.</p>
     */
    inline const Aws::Vector<PartnerAppSummary>& GetSummaries() const{ return m_summaries; }
    inline void SetSummaries(const Aws::Vector<PartnerAppSummary>& value) { m_summaries = value; }
    inline void SetSummaries(Aws::Vector<PartnerAppSummary>&& value) { m_summaries = std::move(value); }
    inline ListPartnerAppsResult& WithSummaries(const Aws::Vector<PartnerAppSummary>& value) { SetSummaries(value); return *this;}
    inline ListPartnerAppsResult& WithSummaries(Aws::Vector<PartnerAppSummary>&& value) { SetSummaries(std::move(value)); return *this;}
    inline ListPartnerAppsResult& AddSummaries(const PartnerAppSummary& value) { m_summaries.push_back(value); return *this; }
    inline ListPartnerAppsResult& AddSummaries(PartnerAppSummary&& value) { m_summaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the previous response was truncated, you will receive this token. Use it
     * in your next request to receive the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListPartnerAppsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPartnerAppsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPartnerAppsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListPartnerAppsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListPartnerAppsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListPartnerAppsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PartnerAppSummary> m_summaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
