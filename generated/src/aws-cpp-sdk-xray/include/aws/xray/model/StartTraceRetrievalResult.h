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
    AWS_XRAY_API StartTraceRetrievalResult();
    AWS_XRAY_API StartTraceRetrievalResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_XRAY_API StartTraceRetrievalResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Retrieval token. </p>
     */
    inline const Aws::String& GetRetrievalToken() const{ return m_retrievalToken; }
    inline void SetRetrievalToken(const Aws::String& value) { m_retrievalToken = value; }
    inline void SetRetrievalToken(Aws::String&& value) { m_retrievalToken = std::move(value); }
    inline void SetRetrievalToken(const char* value) { m_retrievalToken.assign(value); }
    inline StartTraceRetrievalResult& WithRetrievalToken(const Aws::String& value) { SetRetrievalToken(value); return *this;}
    inline StartTraceRetrievalResult& WithRetrievalToken(Aws::String&& value) { SetRetrievalToken(std::move(value)); return *this;}
    inline StartTraceRetrievalResult& WithRetrievalToken(const char* value) { SetRetrievalToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartTraceRetrievalResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartTraceRetrievalResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartTraceRetrievalResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_retrievalToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
