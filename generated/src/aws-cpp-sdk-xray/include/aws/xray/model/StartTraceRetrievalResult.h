/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
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
namespace XRay
{
namespace Model
{
  class StartTraceRetrievalResult
  {
  public:
    AWS_XRAY_API StartTraceRetrievalResult() = default;
    AWS_XRAY_API StartTraceRetrievalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API StartTraceRetrievalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Retrieval token. </p>
     */
    inline const Aws::String& GetRetrievalToken() const { return m_retrievalToken; }
    template<typename RetrievalTokenT = Aws::String>
    void SetRetrievalToken(RetrievalTokenT&& value) { m_retrievalTokenHasBeenSet = true; m_retrievalToken = std::forward<RetrievalTokenT>(value); }
    template<typename RetrievalTokenT = Aws::String>
    StartTraceRetrievalResult& WithRetrievalToken(RetrievalTokenT&& value) { SetRetrievalToken(std::forward<RetrievalTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartTraceRetrievalResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_retrievalToken;
    bool m_retrievalTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
