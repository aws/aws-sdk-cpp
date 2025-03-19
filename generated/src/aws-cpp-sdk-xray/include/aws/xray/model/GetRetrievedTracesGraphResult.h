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
    AWS_XRAY_API GetRetrievedTracesGraphResult() = default;
    AWS_XRAY_API GetRetrievedTracesGraphResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API GetRetrievedTracesGraphResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Status of the retrieval. </p>
     */
    inline RetrievalStatus GetRetrievalStatus() const { return m_retrievalStatus; }
    inline void SetRetrievalStatus(RetrievalStatus value) { m_retrievalStatusHasBeenSet = true; m_retrievalStatus = value; }
    inline GetRetrievedTracesGraphResult& WithRetrievalStatus(RetrievalStatus value) { SetRetrievalStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Retrieved services. </p>
     */
    inline const Aws::Vector<RetrievedService>& GetServices() const { return m_services; }
    template<typename ServicesT = Aws::Vector<RetrievedService>>
    void SetServices(ServicesT&& value) { m_servicesHasBeenSet = true; m_services = std::forward<ServicesT>(value); }
    template<typename ServicesT = Aws::Vector<RetrievedService>>
    GetRetrievedTracesGraphResult& WithServices(ServicesT&& value) { SetServices(std::forward<ServicesT>(value)); return *this;}
    template<typename ServicesT = RetrievedService>
    GetRetrievedTracesGraphResult& AddServices(ServicesT&& value) { m_servicesHasBeenSet = true; m_services.emplace_back(std::forward<ServicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Specify the pagination token returned by a previous request to retrieve the
     * next page of indexes. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetRetrievedTracesGraphResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRetrievedTracesGraphResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    RetrievalStatus m_retrievalStatus{RetrievalStatus::NOT_SET};
    bool m_retrievalStatusHasBeenSet = false;

    Aws::Vector<RetrievedService> m_services;
    bool m_servicesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
