/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/core/utils/Document.h>
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
namespace MWAA
{
namespace Model
{
  class InvokeRestApiResult
  {
  public:
    AWS_MWAA_API InvokeRestApiResult();
    AWS_MWAA_API InvokeRestApiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MWAA_API InvokeRestApiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The HTTP status code returned by the Apache Airflow REST API call.</p>
     */
    inline int GetRestApiStatusCode() const{ return m_restApiStatusCode; }
    inline void SetRestApiStatusCode(int value) { m_restApiStatusCode = value; }
    inline InvokeRestApiResult& WithRestApiStatusCode(int value) { SetRestApiStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response data from the Apache Airflow REST API call, provided as a JSON
     * object.</p>
     */
    inline Aws::Utils::DocumentView GetRestApiResponse() const{ return m_restApiResponse; }
    inline void SetRestApiResponse(const Aws::Utils::Document& value) { m_restApiResponse = value; }
    inline void SetRestApiResponse(Aws::Utils::Document&& value) { m_restApiResponse = std::move(value); }
    inline InvokeRestApiResult& WithRestApiResponse(const Aws::Utils::Document& value) { SetRestApiResponse(value); return *this;}
    inline InvokeRestApiResult& WithRestApiResponse(Aws::Utils::Document&& value) { SetRestApiResponse(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline InvokeRestApiResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline InvokeRestApiResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline InvokeRestApiResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    int m_restApiStatusCode;

    Aws::Utils::Document m_restApiResponse;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
