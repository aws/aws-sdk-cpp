/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/RetrievalStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/RetrievedService.h>
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
  class GetRetrievedTracesGraphResult
  {
  public:
    AWS_XRAY_API GetRetrievedTracesGraphResult();
    AWS_XRAY_API GetRetrievedTracesGraphResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetRetrievedTracesGraphResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Status of the retrieval. </p>
     */
    inline const RetrievalStatus& GetRetrievalStatus() const{ return m_retrievalStatus; }
    inline void SetRetrievalStatus(const RetrievalStatus& value) { m_retrievalStatus = value; }
    inline void SetRetrievalStatus(RetrievalStatus&& value) { m_retrievalStatus = std::move(value); }
    inline GetRetrievedTracesGraphResult& WithRetrievalStatus(const RetrievalStatus& value) { SetRetrievalStatus(value); return *this;}
    inline GetRetrievedTracesGraphResult& WithRetrievalStatus(RetrievalStatus&& value) { SetRetrievalStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Retrieved services. </p>
     */
    inline const Aws::Vector<RetrievedService>& GetServices() const{ return m_services; }
    inline void SetServices(const Aws::Vector<RetrievedService>& value) { m_services = value; }
    inline void SetServices(Aws::Vector<RetrievedService>&& value) { m_services = std::move(value); }
    inline GetRetrievedTracesGraphResult& WithServices(const Aws::Vector<RetrievedService>& value) { SetServices(value); return *this;}
    inline GetRetrievedTracesGraphResult& WithServices(Aws::Vector<RetrievedService>&& value) { SetServices(std::move(value)); return *this;}
    inline GetRetrievedTracesGraphResult& AddServices(const RetrievedService& value) { m_services.push_back(value); return *this; }
    inline GetRetrievedTracesGraphResult& AddServices(RetrievedService&& value) { m_services.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specify the pagination token returned by a previous request to retrieve the
     * next page of indexes. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetRetrievedTracesGraphResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetRetrievedTracesGraphResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetRetrievedTracesGraphResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRetrievedTracesGraphResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRetrievedTracesGraphResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRetrievedTracesGraphResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    RetrievalStatus m_retrievalStatus;

    Aws::Vector<RetrievedService> m_services;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
