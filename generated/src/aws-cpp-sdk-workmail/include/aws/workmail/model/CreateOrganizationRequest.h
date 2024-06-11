﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workmail/model/Domain.h>
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
  class CreateOrganizationRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API CreateOrganizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOrganization"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The AWS Directory Service directory ID.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline CreateOrganizationRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline CreateOrganizationRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline CreateOrganizationRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The organization alias.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }
    inline CreateOrganizationRequest& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}
    inline CreateOrganizationRequest& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}
    inline CreateOrganizationRequest& WithAlias(const char* value) { SetAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The idempotency token associated with the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateOrganizationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateOrganizationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateOrganizationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email domains to associate with the organization.</p>
     */
    inline const Aws::Vector<Domain>& GetDomains() const{ return m_domains; }
    inline bool DomainsHasBeenSet() const { return m_domainsHasBeenSet; }
    inline void SetDomains(const Aws::Vector<Domain>& value) { m_domainsHasBeenSet = true; m_domains = value; }
    inline void SetDomains(Aws::Vector<Domain>&& value) { m_domainsHasBeenSet = true; m_domains = std::move(value); }
    inline CreateOrganizationRequest& WithDomains(const Aws::Vector<Domain>& value) { SetDomains(value); return *this;}
    inline CreateOrganizationRequest& WithDomains(Aws::Vector<Domain>&& value) { SetDomains(std::move(value)); return *this;}
    inline CreateOrganizationRequest& AddDomains(const Domain& value) { m_domainsHasBeenSet = true; m_domains.push_back(value); return *this; }
    inline CreateOrganizationRequest& AddDomains(Domain&& value) { m_domainsHasBeenSet = true; m_domains.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a customer managed key from AWS KMS.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline CreateOrganizationRequest& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline CreateOrganizationRequest& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline CreateOrganizationRequest& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>true</code>, allows organization interoperability between WorkMail
     * and Microsoft Exchange. If <code>true</code>, you must include a AD Connector
     * directory ID in the request.</p>
     */
    inline bool GetEnableInteroperability() const{ return m_enableInteroperability; }
    inline bool EnableInteroperabilityHasBeenSet() const { return m_enableInteroperabilityHasBeenSet; }
    inline void SetEnableInteroperability(bool value) { m_enableInteroperabilityHasBeenSet = true; m_enableInteroperability = value; }
    inline CreateOrganizationRequest& WithEnableInteroperability(bool value) { SetEnableInteroperability(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Domain> m_domains;
    bool m_domainsHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    bool m_enableInteroperability;
    bool m_enableInteroperabilityHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
