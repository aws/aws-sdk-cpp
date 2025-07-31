/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces-web/model/IdentityProviderSummary.h>
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
namespace WorkSpacesWeb
{
namespace Model
{
  class ListIdentityProvidersResult
  {
  public:
    AWS_WORKSPACESWEB_API ListIdentityProvidersResult() = default;
    AWS_WORKSPACESWEB_API ListIdentityProvidersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API ListIdentityProvidersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListIdentityProvidersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identity providers.</p>
     */
    inline const Aws::Vector<IdentityProviderSummary>& GetIdentityProviders() const { return m_identityProviders; }
    template<typename IdentityProvidersT = Aws::Vector<IdentityProviderSummary>>
    void SetIdentityProviders(IdentityProvidersT&& value) { m_identityProvidersHasBeenSet = true; m_identityProviders = std::forward<IdentityProvidersT>(value); }
    template<typename IdentityProvidersT = Aws::Vector<IdentityProviderSummary>>
    ListIdentityProvidersResult& WithIdentityProviders(IdentityProvidersT&& value) { SetIdentityProviders(std::forward<IdentityProvidersT>(value)); return *this;}
    template<typename IdentityProvidersT = IdentityProviderSummary>
    ListIdentityProvidersResult& AddIdentityProviders(IdentityProvidersT&& value) { m_identityProvidersHasBeenSet = true; m_identityProviders.emplace_back(std::forward<IdentityProvidersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListIdentityProvidersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<IdentityProviderSummary> m_identityProviders;
    bool m_identityProvidersHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
