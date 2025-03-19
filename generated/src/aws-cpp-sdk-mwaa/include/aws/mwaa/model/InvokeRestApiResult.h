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
    AWS_MWAA_API InvokeRestApiResult() = default;
    AWS_MWAA_API InvokeRestApiResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MWAA_API InvokeRestApiResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The HTTP status code returned by the Apache Airflow REST API call.</p>
     */
    inline int GetRestApiStatusCode() const { return m_restApiStatusCode; }
    inline void SetRestApiStatusCode(int value) { m_restApiStatusCodeHasBeenSet = true; m_restApiStatusCode = value; }
    inline InvokeRestApiResult& WithRestApiStatusCode(int value) { SetRestApiStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response data from the Apache Airflow REST API call, provided as a JSON
     * object.</p>
     */
    inline Aws::Utils::DocumentView GetRestApiResponse() const { return m_restApiResponse; }
    template<typename RestApiResponseT = Aws::Utils::Document>
    void SetRestApiResponse(RestApiResponseT&& value) { m_restApiResponseHasBeenSet = true; m_restApiResponse = std::forward<RestApiResponseT>(value); }
    template<typename RestApiResponseT = Aws::Utils::Document>
    InvokeRestApiResult& WithRestApiResponse(RestApiResponseT&& value) { SetRestApiResponse(std::forward<RestApiResponseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    InvokeRestApiResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    int m_restApiStatusCode{0};
    bool m_restApiStatusCodeHasBeenSet = false;

    Aws::Utils::Document m_restApiResponse;
    bool m_restApiResponseHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MWAA
} // namespace Aws
