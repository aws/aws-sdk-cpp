﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
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
  class CreateIdentityProviderResult
  {
  public:
    AWS_WORKSPACESWEB_API CreateIdentityProviderResult();
    AWS_WORKSPACESWEB_API CreateIdentityProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACESWEB_API CreateIdentityProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline const Aws::String& GetIdentityProviderArn() const{ return m_identityProviderArn; }
    inline void SetIdentityProviderArn(const Aws::String& value) { m_identityProviderArn = value; }
    inline void SetIdentityProviderArn(Aws::String&& value) { m_identityProviderArn = std::move(value); }
    inline void SetIdentityProviderArn(const char* value) { m_identityProviderArn.assign(value); }
    inline CreateIdentityProviderResult& WithIdentityProviderArn(const Aws::String& value) { SetIdentityProviderArn(value); return *this;}
    inline CreateIdentityProviderResult& WithIdentityProviderArn(Aws::String&& value) { SetIdentityProviderArn(std::move(value)); return *this;}
    inline CreateIdentityProviderResult& WithIdentityProviderArn(const char* value) { SetIdentityProviderArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateIdentityProviderResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateIdentityProviderResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateIdentityProviderResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_identityProviderArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
