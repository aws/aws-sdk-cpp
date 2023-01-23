/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/WorkSpacesWebRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkSpacesWeb
{
namespace Model
{

  /**
   */
  class DeleteIdentityProviderRequest : public WorkSpacesWebRequest
  {
  public:
    AWS_WORKSPACESWEB_API DeleteIdentityProviderRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteIdentityProvider"; }

    AWS_WORKSPACESWEB_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline const Aws::String& GetIdentityProviderArn() const{ return m_identityProviderArn; }

    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline bool IdentityProviderArnHasBeenSet() const { return m_identityProviderArnHasBeenSet; }

    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline void SetIdentityProviderArn(const Aws::String& value) { m_identityProviderArnHasBeenSet = true; m_identityProviderArn = value; }

    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline void SetIdentityProviderArn(Aws::String&& value) { m_identityProviderArnHasBeenSet = true; m_identityProviderArn = std::move(value); }

    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline void SetIdentityProviderArn(const char* value) { m_identityProviderArnHasBeenSet = true; m_identityProviderArn.assign(value); }

    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline DeleteIdentityProviderRequest& WithIdentityProviderArn(const Aws::String& value) { SetIdentityProviderArn(value); return *this;}

    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline DeleteIdentityProviderRequest& WithIdentityProviderArn(Aws::String&& value) { SetIdentityProviderArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the identity provider.</p>
     */
    inline DeleteIdentityProviderRequest& WithIdentityProviderArn(const char* value) { SetIdentityProviderArn(value); return *this;}

  private:

    Aws::String m_identityProviderArn;
    bool m_identityProviderArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
