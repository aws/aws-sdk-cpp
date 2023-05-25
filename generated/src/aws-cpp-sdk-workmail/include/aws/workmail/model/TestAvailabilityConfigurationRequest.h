/**
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
    AWS_WORKMAIL_API TestAvailabilityConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestAvailabilityConfiguration"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The WorkMail organization where the availability provider will be tested.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The WorkMail organization where the availability provider will be tested.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The WorkMail organization where the availability provider will be tested.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The WorkMail organization where the availability provider will be tested.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The WorkMail organization where the availability provider will be tested.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The WorkMail organization where the availability provider will be tested.</p>
     */
    inline TestAvailabilityConfigurationRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The WorkMail organization where the availability provider will be tested.</p>
     */
    inline TestAvailabilityConfigurationRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The WorkMail organization where the availability provider will be tested.</p>
     */
    inline TestAvailabilityConfigurationRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The domain to which the provider applies. If this field is provided, a stored
     * availability provider associated to this domain name will be tested.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The domain to which the provider applies. If this field is provided, a stored
     * availability provider associated to this domain name will be tested.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The domain to which the provider applies. If this field is provided, a stored
     * availability provider associated to this domain name will be tested.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The domain to which the provider applies. If this field is provided, a stored
     * availability provider associated to this domain name will be tested.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The domain to which the provider applies. If this field is provided, a stored
     * availability provider associated to this domain name will be tested.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The domain to which the provider applies. If this field is provided, a stored
     * availability provider associated to this domain name will be tested.</p>
     */
    inline TestAvailabilityConfigurationRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The domain to which the provider applies. If this field is provided, a stored
     * availability provider associated to this domain name will be tested.</p>
     */
    inline TestAvailabilityConfigurationRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The domain to which the provider applies. If this field is provided, a stored
     * availability provider associated to this domain name will be tested.</p>
     */
    inline TestAvailabilityConfigurationRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    
    inline const EwsAvailabilityProvider& GetEwsProvider() const{ return m_ewsProvider; }

    
    inline bool EwsProviderHasBeenSet() const { return m_ewsProviderHasBeenSet; }

    
    inline void SetEwsProvider(const EwsAvailabilityProvider& value) { m_ewsProviderHasBeenSet = true; m_ewsProvider = value; }

    
    inline void SetEwsProvider(EwsAvailabilityProvider&& value) { m_ewsProviderHasBeenSet = true; m_ewsProvider = std::move(value); }

    
    inline TestAvailabilityConfigurationRequest& WithEwsProvider(const EwsAvailabilityProvider& value) { SetEwsProvider(value); return *this;}

    
    inline TestAvailabilityConfigurationRequest& WithEwsProvider(EwsAvailabilityProvider&& value) { SetEwsProvider(std::move(value)); return *this;}


    
    inline const LambdaAvailabilityProvider& GetLambdaProvider() const{ return m_lambdaProvider; }

    
    inline bool LambdaProviderHasBeenSet() const { return m_lambdaProviderHasBeenSet; }

    
    inline void SetLambdaProvider(const LambdaAvailabilityProvider& value) { m_lambdaProviderHasBeenSet = true; m_lambdaProvider = value; }

    
    inline void SetLambdaProvider(LambdaAvailabilityProvider&& value) { m_lambdaProviderHasBeenSet = true; m_lambdaProvider = std::move(value); }

    
    inline TestAvailabilityConfigurationRequest& WithLambdaProvider(const LambdaAvailabilityProvider& value) { SetLambdaProvider(value); return *this;}

    
    inline TestAvailabilityConfigurationRequest& WithLambdaProvider(LambdaAvailabilityProvider&& value) { SetLambdaProvider(std::move(value)); return *this;}

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
