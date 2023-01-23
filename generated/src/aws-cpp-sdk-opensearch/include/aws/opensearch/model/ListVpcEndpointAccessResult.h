/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/AuthorizedPrincipal.h>
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
  class ListVpcEndpointAccessResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API ListVpcEndpointAccessResult();
    AWS_OPENSEARCHSERVICE_API ListVpcEndpointAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API ListVpcEndpointAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">IAM
     * principals</a> that can currently access the domain.</p>
     */
    inline const Aws::Vector<AuthorizedPrincipal>& GetAuthorizedPrincipalList() const{ return m_authorizedPrincipalList; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">IAM
     * principals</a> that can currently access the domain.</p>
     */
    inline void SetAuthorizedPrincipalList(const Aws::Vector<AuthorizedPrincipal>& value) { m_authorizedPrincipalList = value; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">IAM
     * principals</a> that can currently access the domain.</p>
     */
    inline void SetAuthorizedPrincipalList(Aws::Vector<AuthorizedPrincipal>&& value) { m_authorizedPrincipalList = std::move(value); }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">IAM
     * principals</a> that can currently access the domain.</p>
     */
    inline ListVpcEndpointAccessResult& WithAuthorizedPrincipalList(const Aws::Vector<AuthorizedPrincipal>& value) { SetAuthorizedPrincipalList(value); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">IAM
     * principals</a> that can currently access the domain.</p>
     */
    inline ListVpcEndpointAccessResult& WithAuthorizedPrincipalList(Aws::Vector<AuthorizedPrincipal>&& value) { SetAuthorizedPrincipalList(std::move(value)); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">IAM
     * principals</a> that can currently access the domain.</p>
     */
    inline ListVpcEndpointAccessResult& AddAuthorizedPrincipalList(const AuthorizedPrincipal& value) { m_authorizedPrincipalList.push_back(value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html">IAM
     * principals</a> that can currently access the domain.</p>
     */
    inline ListVpcEndpointAccessResult& AddAuthorizedPrincipalList(AuthorizedPrincipal&& value) { m_authorizedPrincipalList.push_back(std::move(value)); return *this; }


    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListVpcEndpointAccessResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListVpcEndpointAccessResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListVpcEndpointAccessResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AuthorizedPrincipal> m_authorizedPrincipalList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
