/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class ModifyAuthenticationProfileRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API ModifyAuthenticationProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyAuthenticationProfile"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the authentication profile to replace.</p>
     */
    inline const Aws::String& GetAuthenticationProfileName() const{ return m_authenticationProfileName; }

    /**
     * <p>The name of the authentication profile to replace.</p>
     */
    inline bool AuthenticationProfileNameHasBeenSet() const { return m_authenticationProfileNameHasBeenSet; }

    /**
     * <p>The name of the authentication profile to replace.</p>
     */
    inline void SetAuthenticationProfileName(const Aws::String& value) { m_authenticationProfileNameHasBeenSet = true; m_authenticationProfileName = value; }

    /**
     * <p>The name of the authentication profile to replace.</p>
     */
    inline void SetAuthenticationProfileName(Aws::String&& value) { m_authenticationProfileNameHasBeenSet = true; m_authenticationProfileName = std::move(value); }

    /**
     * <p>The name of the authentication profile to replace.</p>
     */
    inline void SetAuthenticationProfileName(const char* value) { m_authenticationProfileNameHasBeenSet = true; m_authenticationProfileName.assign(value); }

    /**
     * <p>The name of the authentication profile to replace.</p>
     */
    inline ModifyAuthenticationProfileRequest& WithAuthenticationProfileName(const Aws::String& value) { SetAuthenticationProfileName(value); return *this;}

    /**
     * <p>The name of the authentication profile to replace.</p>
     */
    inline ModifyAuthenticationProfileRequest& WithAuthenticationProfileName(Aws::String&& value) { SetAuthenticationProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the authentication profile to replace.</p>
     */
    inline ModifyAuthenticationProfileRequest& WithAuthenticationProfileName(const char* value) { SetAuthenticationProfileName(value); return *this;}


    /**
     * <p>The new content of the authentication profile in JSON format. The maximum
     * length of the JSON string is determined by a quota for your account.</p>
     */
    inline const Aws::String& GetAuthenticationProfileContent() const{ return m_authenticationProfileContent; }

    /**
     * <p>The new content of the authentication profile in JSON format. The maximum
     * length of the JSON string is determined by a quota for your account.</p>
     */
    inline bool AuthenticationProfileContentHasBeenSet() const { return m_authenticationProfileContentHasBeenSet; }

    /**
     * <p>The new content of the authentication profile in JSON format. The maximum
     * length of the JSON string is determined by a quota for your account.</p>
     */
    inline void SetAuthenticationProfileContent(const Aws::String& value) { m_authenticationProfileContentHasBeenSet = true; m_authenticationProfileContent = value; }

    /**
     * <p>The new content of the authentication profile in JSON format. The maximum
     * length of the JSON string is determined by a quota for your account.</p>
     */
    inline void SetAuthenticationProfileContent(Aws::String&& value) { m_authenticationProfileContentHasBeenSet = true; m_authenticationProfileContent = std::move(value); }

    /**
     * <p>The new content of the authentication profile in JSON format. The maximum
     * length of the JSON string is determined by a quota for your account.</p>
     */
    inline void SetAuthenticationProfileContent(const char* value) { m_authenticationProfileContentHasBeenSet = true; m_authenticationProfileContent.assign(value); }

    /**
     * <p>The new content of the authentication profile in JSON format. The maximum
     * length of the JSON string is determined by a quota for your account.</p>
     */
    inline ModifyAuthenticationProfileRequest& WithAuthenticationProfileContent(const Aws::String& value) { SetAuthenticationProfileContent(value); return *this;}

    /**
     * <p>The new content of the authentication profile in JSON format. The maximum
     * length of the JSON string is determined by a quota for your account.</p>
     */
    inline ModifyAuthenticationProfileRequest& WithAuthenticationProfileContent(Aws::String&& value) { SetAuthenticationProfileContent(std::move(value)); return *this;}

    /**
     * <p>The new content of the authentication profile in JSON format. The maximum
     * length of the JSON string is determined by a quota for your account.</p>
     */
    inline ModifyAuthenticationProfileRequest& WithAuthenticationProfileContent(const char* value) { SetAuthenticationProfileContent(value); return *this;}

  private:

    Aws::String m_authenticationProfileName;
    bool m_authenticationProfileNameHasBeenSet = false;

    Aws::String m_authenticationProfileContent;
    bool m_authenticationProfileContentHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
