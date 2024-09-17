/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/worklink/WorkLink_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/worklink/model/AuthorizationProviderType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace WorkLink
{
namespace Model
{

  /**
   * <p>The summary of the website authorization provider.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/worklink-2018-09-25/WebsiteAuthorizationProviderSummary">AWS
   * API Reference</a></p>
   */
  class WebsiteAuthorizationProviderSummary
  {
  public:
    AWS_WORKLINK_API WebsiteAuthorizationProviderSummary();
    AWS_WORKLINK_API WebsiteAuthorizationProviderSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKLINK_API WebsiteAuthorizationProviderSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKLINK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the authorization provider.</p>
     */
    inline const Aws::String& GetAuthorizationProviderId() const{ return m_authorizationProviderId; }
    inline bool AuthorizationProviderIdHasBeenSet() const { return m_authorizationProviderIdHasBeenSet; }
    inline void SetAuthorizationProviderId(const Aws::String& value) { m_authorizationProviderIdHasBeenSet = true; m_authorizationProviderId = value; }
    inline void SetAuthorizationProviderId(Aws::String&& value) { m_authorizationProviderIdHasBeenSet = true; m_authorizationProviderId = std::move(value); }
    inline void SetAuthorizationProviderId(const char* value) { m_authorizationProviderIdHasBeenSet = true; m_authorizationProviderId.assign(value); }
    inline WebsiteAuthorizationProviderSummary& WithAuthorizationProviderId(const Aws::String& value) { SetAuthorizationProviderId(value); return *this;}
    inline WebsiteAuthorizationProviderSummary& WithAuthorizationProviderId(Aws::String&& value) { SetAuthorizationProviderId(std::move(value)); return *this;}
    inline WebsiteAuthorizationProviderSummary& WithAuthorizationProviderId(const char* value) { SetAuthorizationProviderId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization provider type.</p>
     */
    inline const AuthorizationProviderType& GetAuthorizationProviderType() const{ return m_authorizationProviderType; }
    inline bool AuthorizationProviderTypeHasBeenSet() const { return m_authorizationProviderTypeHasBeenSet; }
    inline void SetAuthorizationProviderType(const AuthorizationProviderType& value) { m_authorizationProviderTypeHasBeenSet = true; m_authorizationProviderType = value; }
    inline void SetAuthorizationProviderType(AuthorizationProviderType&& value) { m_authorizationProviderTypeHasBeenSet = true; m_authorizationProviderType = std::move(value); }
    inline WebsiteAuthorizationProviderSummary& WithAuthorizationProviderType(const AuthorizationProviderType& value) { SetAuthorizationProviderType(value); return *this;}
    inline WebsiteAuthorizationProviderSummary& WithAuthorizationProviderType(AuthorizationProviderType&& value) { SetAuthorizationProviderType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name of the authorization provider. This applies only to
     * SAML-based authorization providers.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline WebsiteAuthorizationProviderSummary& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline WebsiteAuthorizationProviderSummary& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline WebsiteAuthorizationProviderSummary& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of creation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline WebsiteAuthorizationProviderSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline WebsiteAuthorizationProviderSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_authorizationProviderId;
    bool m_authorizationProviderIdHasBeenSet = false;

    AuthorizationProviderType m_authorizationProviderType;
    bool m_authorizationProviderTypeHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
