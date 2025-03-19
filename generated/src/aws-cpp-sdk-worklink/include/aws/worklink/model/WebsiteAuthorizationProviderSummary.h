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
    AWS_WORKLINK_API WebsiteAuthorizationProviderSummary() = default;
    AWS_WORKLINK_API WebsiteAuthorizationProviderSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKLINK_API WebsiteAuthorizationProviderSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKLINK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the authorization provider.</p>
     */
    inline const Aws::String& GetAuthorizationProviderId() const { return m_authorizationProviderId; }
    inline bool AuthorizationProviderIdHasBeenSet() const { return m_authorizationProviderIdHasBeenSet; }
    template<typename AuthorizationProviderIdT = Aws::String>
    void SetAuthorizationProviderId(AuthorizationProviderIdT&& value) { m_authorizationProviderIdHasBeenSet = true; m_authorizationProviderId = std::forward<AuthorizationProviderIdT>(value); }
    template<typename AuthorizationProviderIdT = Aws::String>
    WebsiteAuthorizationProviderSummary& WithAuthorizationProviderId(AuthorizationProviderIdT&& value) { SetAuthorizationProviderId(std::forward<AuthorizationProviderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization provider type.</p>
     */
    inline AuthorizationProviderType GetAuthorizationProviderType() const { return m_authorizationProviderType; }
    inline bool AuthorizationProviderTypeHasBeenSet() const { return m_authorizationProviderTypeHasBeenSet; }
    inline void SetAuthorizationProviderType(AuthorizationProviderType value) { m_authorizationProviderTypeHasBeenSet = true; m_authorizationProviderType = value; }
    inline WebsiteAuthorizationProviderSummary& WithAuthorizationProviderType(AuthorizationProviderType value) { SetAuthorizationProviderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain name of the authorization provider. This applies only to
     * SAML-based authorization providers.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    WebsiteAuthorizationProviderSummary& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time of creation.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    WebsiteAuthorizationProviderSummary& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authorizationProviderId;
    bool m_authorizationProviderIdHasBeenSet = false;

    AuthorizationProviderType m_authorizationProviderType{AuthorizationProviderType::NOT_SET};
    bool m_authorizationProviderTypeHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkLink
} // namespace Aws
