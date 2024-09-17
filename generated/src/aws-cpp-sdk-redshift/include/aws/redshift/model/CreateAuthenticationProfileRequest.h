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
  class CreateAuthenticationProfileRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API CreateAuthenticationProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAuthenticationProfile"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the authentication profile to be created.</p>
     */
    inline const Aws::String& GetAuthenticationProfileName() const{ return m_authenticationProfileName; }
    inline bool AuthenticationProfileNameHasBeenSet() const { return m_authenticationProfileNameHasBeenSet; }
    inline void SetAuthenticationProfileName(const Aws::String& value) { m_authenticationProfileNameHasBeenSet = true; m_authenticationProfileName = value; }
    inline void SetAuthenticationProfileName(Aws::String&& value) { m_authenticationProfileNameHasBeenSet = true; m_authenticationProfileName = std::move(value); }
    inline void SetAuthenticationProfileName(const char* value) { m_authenticationProfileNameHasBeenSet = true; m_authenticationProfileName.assign(value); }
    inline CreateAuthenticationProfileRequest& WithAuthenticationProfileName(const Aws::String& value) { SetAuthenticationProfileName(value); return *this;}
    inline CreateAuthenticationProfileRequest& WithAuthenticationProfileName(Aws::String&& value) { SetAuthenticationProfileName(std::move(value)); return *this;}
    inline CreateAuthenticationProfileRequest& WithAuthenticationProfileName(const char* value) { SetAuthenticationProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the authentication profile in JSON format. The maximum length
     * of the JSON string is determined by a quota for your account.</p>
     */
    inline const Aws::String& GetAuthenticationProfileContent() const{ return m_authenticationProfileContent; }
    inline bool AuthenticationProfileContentHasBeenSet() const { return m_authenticationProfileContentHasBeenSet; }
    inline void SetAuthenticationProfileContent(const Aws::String& value) { m_authenticationProfileContentHasBeenSet = true; m_authenticationProfileContent = value; }
    inline void SetAuthenticationProfileContent(Aws::String&& value) { m_authenticationProfileContentHasBeenSet = true; m_authenticationProfileContent = std::move(value); }
    inline void SetAuthenticationProfileContent(const char* value) { m_authenticationProfileContentHasBeenSet = true; m_authenticationProfileContent.assign(value); }
    inline CreateAuthenticationProfileRequest& WithAuthenticationProfileContent(const Aws::String& value) { SetAuthenticationProfileContent(value); return *this;}
    inline CreateAuthenticationProfileRequest& WithAuthenticationProfileContent(Aws::String&& value) { SetAuthenticationProfileContent(std::move(value)); return *this;}
    inline CreateAuthenticationProfileRequest& WithAuthenticationProfileContent(const char* value) { SetAuthenticationProfileContent(value); return *this;}
    ///@}
  private:

    Aws::String m_authenticationProfileName;
    bool m_authenticationProfileNameHasBeenSet = false;

    Aws::String m_authenticationProfileContent;
    bool m_authenticationProfileContentHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
