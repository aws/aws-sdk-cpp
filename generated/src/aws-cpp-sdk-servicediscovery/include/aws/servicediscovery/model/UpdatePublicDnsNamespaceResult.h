﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
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
namespace ServiceDiscovery
{
namespace Model
{
  class UpdatePublicDnsNamespaceResult
  {
  public:
    AWS_SERVICEDISCOVERY_API UpdatePublicDnsNamespaceResult();
    AWS_SERVICEDISCOVERY_API UpdatePublicDnsNamespaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICEDISCOVERY_API UpdatePublicDnsNamespaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A value that you can use to determine whether the request completed
     * successfully. To get the status of the operation, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_GetOperation.html">GetOperation</a>.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }
    inline void SetOperationId(const Aws::String& value) { m_operationId = value; }
    inline void SetOperationId(Aws::String&& value) { m_operationId = std::move(value); }
    inline void SetOperationId(const char* value) { m_operationId.assign(value); }
    inline UpdatePublicDnsNamespaceResult& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}
    inline UpdatePublicDnsNamespaceResult& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}
    inline UpdatePublicDnsNamespaceResult& WithOperationId(const char* value) { SetOperationId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdatePublicDnsNamespaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdatePublicDnsNamespaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdatePublicDnsNamespaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_operationId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
