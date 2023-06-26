/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/AuthorizedPrincipal.h>
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
namespace OpenSearchService
{
namespace Model
{
  class AuthorizeVpcEndpointAccessResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API AuthorizeVpcEndpointAccessResult();
    AWS_OPENSEARCHSERVICE_API AuthorizeVpcEndpointAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API AuthorizeVpcEndpointAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the Amazon Web Services account or service that was
     * provided access to the domain.</p>
     */
    inline const AuthorizedPrincipal& GetAuthorizedPrincipal() const{ return m_authorizedPrincipal; }

    /**
     * <p>Information about the Amazon Web Services account or service that was
     * provided access to the domain.</p>
     */
    inline void SetAuthorizedPrincipal(const AuthorizedPrincipal& value) { m_authorizedPrincipal = value; }

    /**
     * <p>Information about the Amazon Web Services account or service that was
     * provided access to the domain.</p>
     */
    inline void SetAuthorizedPrincipal(AuthorizedPrincipal&& value) { m_authorizedPrincipal = std::move(value); }

    /**
     * <p>Information about the Amazon Web Services account or service that was
     * provided access to the domain.</p>
     */
    inline AuthorizeVpcEndpointAccessResult& WithAuthorizedPrincipal(const AuthorizedPrincipal& value) { SetAuthorizedPrincipal(value); return *this;}

    /**
     * <p>Information about the Amazon Web Services account or service that was
     * provided access to the domain.</p>
     */
    inline AuthorizeVpcEndpointAccessResult& WithAuthorizedPrincipal(AuthorizedPrincipal&& value) { SetAuthorizedPrincipal(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AuthorizeVpcEndpointAccessResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AuthorizeVpcEndpointAccessResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AuthorizeVpcEndpointAccessResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AuthorizedPrincipal m_authorizedPrincipal;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
