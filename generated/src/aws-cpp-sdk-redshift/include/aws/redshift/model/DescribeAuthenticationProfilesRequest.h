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
  class DescribeAuthenticationProfilesRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DescribeAuthenticationProfilesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAuthenticationProfiles"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the authentication profile to describe. If not specified then all
     * authentication profiles owned by the account are listed.</p>
     */
    inline const Aws::String& GetAuthenticationProfileName() const{ return m_authenticationProfileName; }

    /**
     * <p>The name of the authentication profile to describe. If not specified then all
     * authentication profiles owned by the account are listed.</p>
     */
    inline bool AuthenticationProfileNameHasBeenSet() const { return m_authenticationProfileNameHasBeenSet; }

    /**
     * <p>The name of the authentication profile to describe. If not specified then all
     * authentication profiles owned by the account are listed.</p>
     */
    inline void SetAuthenticationProfileName(const Aws::String& value) { m_authenticationProfileNameHasBeenSet = true; m_authenticationProfileName = value; }

    /**
     * <p>The name of the authentication profile to describe. If not specified then all
     * authentication profiles owned by the account are listed.</p>
     */
    inline void SetAuthenticationProfileName(Aws::String&& value) { m_authenticationProfileNameHasBeenSet = true; m_authenticationProfileName = std::move(value); }

    /**
     * <p>The name of the authentication profile to describe. If not specified then all
     * authentication profiles owned by the account are listed.</p>
     */
    inline void SetAuthenticationProfileName(const char* value) { m_authenticationProfileNameHasBeenSet = true; m_authenticationProfileName.assign(value); }

    /**
     * <p>The name of the authentication profile to describe. If not specified then all
     * authentication profiles owned by the account are listed.</p>
     */
    inline DescribeAuthenticationProfilesRequest& WithAuthenticationProfileName(const Aws::String& value) { SetAuthenticationProfileName(value); return *this;}

    /**
     * <p>The name of the authentication profile to describe. If not specified then all
     * authentication profiles owned by the account are listed.</p>
     */
    inline DescribeAuthenticationProfilesRequest& WithAuthenticationProfileName(Aws::String&& value) { SetAuthenticationProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the authentication profile to describe. If not specified then all
     * authentication profiles owned by the account are listed.</p>
     */
    inline DescribeAuthenticationProfilesRequest& WithAuthenticationProfileName(const char* value) { SetAuthenticationProfileName(value); return *this;}

  private:

    Aws::String m_authenticationProfileName;
    bool m_authenticationProfileNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
