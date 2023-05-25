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
  class GetIdentityProviderResult
  {
  public:
    AWS_WORKSPACESWEB_API GetIdentityProviderResult();
    AWS_WORKSPACESWEB_API GetIdentityProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API GetIdentityProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identity provider.</p>
     */
    inline const IdentityProvider& GetIdentityProvider() const{ return m_identityProvider; }

    /**
     * <p>The identity provider.</p>
     */
    inline void SetIdentityProvider(const IdentityProvider& value) { m_identityProvider = value; }

    /**
     * <p>The identity provider.</p>
     */
    inline void SetIdentityProvider(IdentityProvider&& value) { m_identityProvider = std::move(value); }

    /**
     * <p>The identity provider.</p>
     */
    inline GetIdentityProviderResult& WithIdentityProvider(const IdentityProvider& value) { SetIdentityProvider(value); return *this;}

    /**
     * <p>The identity provider.</p>
     */
    inline GetIdentityProviderResult& WithIdentityProvider(IdentityProvider&& value) { SetIdentityProvider(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetIdentityProviderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetIdentityProviderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetIdentityProviderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    IdentityProvider m_identityProvider;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
