﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/EwsAvailabilityProvider.h>
#include <aws/workmail/model/LambdaAvailabilityProvider.h>
#include <utility>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class TestAvailabilityConfigurationRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API TestAvailabilityConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestAvailabilityConfiguration"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The WorkMail organization where the availability provider will be tested.</p>
     */
    inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    template<typename OrganizationIdT = Aws::String>
    void SetOrganizationId(OrganizationIdT&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::forward<OrganizationIdT>(value); }
    template<typename OrganizationIdT = Aws::String>
    TestAvailabilityConfigurationRequest& WithOrganizationId(OrganizationIdT&& value) { SetOrganizationId(std::forward<OrganizationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain to which the provider applies. If this field is provided, a stored
     * availability provider associated to this domain name will be tested.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    TestAvailabilityConfigurationRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const EwsAvailabilityProvider& GetEwsProvider() const { return m_ewsProvider; }
    inline bool EwsProviderHasBeenSet() const { return m_ewsProviderHasBeenSet; }
    template<typename EwsProviderT = EwsAvailabilityProvider>
    void SetEwsProvider(EwsProviderT&& value) { m_ewsProviderHasBeenSet = true; m_ewsProvider = std::forward<EwsProviderT>(value); }
    template<typename EwsProviderT = EwsAvailabilityProvider>
    TestAvailabilityConfigurationRequest& WithEwsProvider(EwsProviderT&& value) { SetEwsProvider(std::forward<EwsProviderT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LambdaAvailabilityProvider& GetLambdaProvider() const { return m_lambdaProvider; }
    inline bool LambdaProviderHasBeenSet() const { return m_lambdaProviderHasBeenSet; }
    template<typename LambdaProviderT = LambdaAvailabilityProvider>
    void SetLambdaProvider(LambdaProviderT&& value) { m_lambdaProviderHasBeenSet = true; m_lambdaProvider = std::forward<LambdaProviderT>(value); }
    template<typename LambdaProviderT = LambdaAvailabilityProvider>
    TestAvailabilityConfigurationRequest& WithLambdaProvider(LambdaProviderT&& value) { SetLambdaProvider(std::forward<LambdaProviderT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    EwsAvailabilityProvider m_ewsProvider;
    bool m_ewsProviderHasBeenSet = false;

    LambdaAvailabilityProvider m_lambdaProvider;
    bool m_lambdaProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
