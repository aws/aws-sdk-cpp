/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/IdentityProvider.h>
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
namespace WorkSpacesWeb
{
namespace Model
{
  class UpdateIdentityProviderResult
  {
  public:
    AWS_WORKSPACESWEB_API UpdateIdentityProviderResult() = default;
    AWS_WORKSPACESWEB_API UpdateIdentityProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API UpdateIdentityProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identity provider.</p>
     */
    inline const IdentityProvider& GetIdentityProvider() const { return m_identityProvider; }
    template<typename IdentityProviderT = IdentityProvider>
    void SetIdentityProvider(IdentityProviderT&& value) { m_identityProviderHasBeenSet = true; m_identityProvider = std::forward<IdentityProviderT>(value); }
    template<typename IdentityProviderT = IdentityProvider>
    UpdateIdentityProviderResult& WithIdentityProvider(IdentityProviderT&& value) { SetIdentityProvider(std::forward<IdentityProviderT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateIdentityProviderResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IdentityProvider m_identityProvider;
    bool m_identityProviderHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
