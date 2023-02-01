/**
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


    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline const Aws::String& GetIdentityProviderArn() const{ return m_identityProviderArn; }

    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline void SetIdentityProviderArn(const Aws::String& value) { m_identityProviderArn = value; }

    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline void SetIdentityProviderArn(Aws::String&& value) { m_identityProviderArn = std::move(value); }

    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline void SetIdentityProviderArn(const char* value) { m_identityProviderArn.assign(value); }

    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline CreateIdentityProviderResult& WithIdentityProviderArn(const Aws::String& value) { SetIdentityProviderArn(value); return *this;}

    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline CreateIdentityProviderResult& WithIdentityProviderArn(Aws::String&& value) { SetIdentityProviderArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline CreateIdentityProviderResult& WithIdentityProviderArn(const char* value) { SetIdentityProviderArn(value); return *this;}

  private:

    Aws::String m_identityProviderArn;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
