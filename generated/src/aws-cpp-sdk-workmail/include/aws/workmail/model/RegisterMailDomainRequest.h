/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class RegisterMailDomainRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API RegisterMailDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterMailDomain"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Idempotency token used when retrying requests.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Idempotency token used when retrying requests.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Idempotency token used when retrying requests.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Idempotency token used when retrying requests.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Idempotency token used when retrying requests.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Idempotency token used when retrying requests.</p>
     */
    inline RegisterMailDomainRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Idempotency token used when retrying requests.</p>
     */
    inline RegisterMailDomainRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Idempotency token used when retrying requests.</p>
     */
    inline RegisterMailDomainRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The WorkMail organization under which you're creating the domain.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The WorkMail organization under which you're creating the domain.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The WorkMail organization under which you're creating the domain.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The WorkMail organization under which you're creating the domain.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The WorkMail organization under which you're creating the domain.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The WorkMail organization under which you're creating the domain.</p>
     */
    inline RegisterMailDomainRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The WorkMail organization under which you're creating the domain.</p>
     */
    inline RegisterMailDomainRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The WorkMail organization under which you're creating the domain.</p>
     */
    inline RegisterMailDomainRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The name of the mail domain to create in WorkMail and SES.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the mail domain to create in WorkMail and SES.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the mail domain to create in WorkMail and SES.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the mail domain to create in WorkMail and SES.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the mail domain to create in WorkMail and SES.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the mail domain to create in WorkMail and SES.</p>
     */
    inline RegisterMailDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the mail domain to create in WorkMail and SES.</p>
     */
    inline RegisterMailDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the mail domain to create in WorkMail and SES.</p>
     */
    inline RegisterMailDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
