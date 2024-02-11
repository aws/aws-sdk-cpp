/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/PcaConnectorAdRequest.h>
#include <aws/pca-connector-ad/model/AccessRights.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

  /**
   */
  class CreateTemplateGroupAccessControlEntryRequest : public PcaConnectorAdRequest
  {
  public:
    AWS_PCACONNECTORAD_API CreateTemplateGroupAccessControlEntryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTemplateGroupAccessControlEntry"; }

    AWS_PCACONNECTORAD_API Aws::String SerializePayload() const override;


    /**
     * <p> Allow or deny permissions for an Active Directory group to enroll or
     * autoenroll certificates for a template.</p>
     */
    inline const AccessRights& GetAccessRights() const{ return m_accessRights; }

    /**
     * <p> Allow or deny permissions for an Active Directory group to enroll or
     * autoenroll certificates for a template.</p>
     */
    inline bool AccessRightsHasBeenSet() const { return m_accessRightsHasBeenSet; }

    /**
     * <p> Allow or deny permissions for an Active Directory group to enroll or
     * autoenroll certificates for a template.</p>
     */
    inline void SetAccessRights(const AccessRights& value) { m_accessRightsHasBeenSet = true; m_accessRights = value; }

    /**
     * <p> Allow or deny permissions for an Active Directory group to enroll or
     * autoenroll certificates for a template.</p>
     */
    inline void SetAccessRights(AccessRights&& value) { m_accessRightsHasBeenSet = true; m_accessRights = std::move(value); }

    /**
     * <p> Allow or deny permissions for an Active Directory group to enroll or
     * autoenroll certificates for a template.</p>
     */
    inline CreateTemplateGroupAccessControlEntryRequest& WithAccessRights(const AccessRights& value) { SetAccessRights(value); return *this;}

    /**
     * <p> Allow or deny permissions for an Active Directory group to enroll or
     * autoenroll certificates for a template.</p>
     */
    inline CreateTemplateGroupAccessControlEntryRequest& WithAccessRights(AccessRights&& value) { SetAccessRights(std::move(value)); return *this;}


    /**
     * <p>Idempotency token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Idempotency token.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Idempotency token.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Idempotency token.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Idempotency token.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Idempotency token.</p>
     */
    inline CreateTemplateGroupAccessControlEntryRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Idempotency token.</p>
     */
    inline CreateTemplateGroupAccessControlEntryRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Idempotency token.</p>
     */
    inline CreateTemplateGroupAccessControlEntryRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Name of the Active Directory group. This name does not need to match the
     * group name in Active Directory.</p>
     */
    inline const Aws::String& GetGroupDisplayName() const{ return m_groupDisplayName; }

    /**
     * <p>Name of the Active Directory group. This name does not need to match the
     * group name in Active Directory.</p>
     */
    inline bool GroupDisplayNameHasBeenSet() const { return m_groupDisplayNameHasBeenSet; }

    /**
     * <p>Name of the Active Directory group. This name does not need to match the
     * group name in Active Directory.</p>
     */
    inline void SetGroupDisplayName(const Aws::String& value) { m_groupDisplayNameHasBeenSet = true; m_groupDisplayName = value; }

    /**
     * <p>Name of the Active Directory group. This name does not need to match the
     * group name in Active Directory.</p>
     */
    inline void SetGroupDisplayName(Aws::String&& value) { m_groupDisplayNameHasBeenSet = true; m_groupDisplayName = std::move(value); }

    /**
     * <p>Name of the Active Directory group. This name does not need to match the
     * group name in Active Directory.</p>
     */
    inline void SetGroupDisplayName(const char* value) { m_groupDisplayNameHasBeenSet = true; m_groupDisplayName.assign(value); }

    /**
     * <p>Name of the Active Directory group. This name does not need to match the
     * group name in Active Directory.</p>
     */
    inline CreateTemplateGroupAccessControlEntryRequest& WithGroupDisplayName(const Aws::String& value) { SetGroupDisplayName(value); return *this;}

    /**
     * <p>Name of the Active Directory group. This name does not need to match the
     * group name in Active Directory.</p>
     */
    inline CreateTemplateGroupAccessControlEntryRequest& WithGroupDisplayName(Aws::String&& value) { SetGroupDisplayName(std::move(value)); return *this;}

    /**
     * <p>Name of the Active Directory group. This name does not need to match the
     * group name in Active Directory.</p>
     */
    inline CreateTemplateGroupAccessControlEntryRequest& WithGroupDisplayName(const char* value) { SetGroupDisplayName(value); return *this;}


    /**
     * <p>Security identifier (SID) of the group object from Active Directory. The SID
     * starts with "S-".</p>
     */
    inline const Aws::String& GetGroupSecurityIdentifier() const{ return m_groupSecurityIdentifier; }

    /**
     * <p>Security identifier (SID) of the group object from Active Directory. The SID
     * starts with "S-".</p>
     */
    inline bool GroupSecurityIdentifierHasBeenSet() const { return m_groupSecurityIdentifierHasBeenSet; }

    /**
     * <p>Security identifier (SID) of the group object from Active Directory. The SID
     * starts with "S-".</p>
     */
    inline void SetGroupSecurityIdentifier(const Aws::String& value) { m_groupSecurityIdentifierHasBeenSet = true; m_groupSecurityIdentifier = value; }

    /**
     * <p>Security identifier (SID) of the group object from Active Directory. The SID
     * starts with "S-".</p>
     */
    inline void SetGroupSecurityIdentifier(Aws::String&& value) { m_groupSecurityIdentifierHasBeenSet = true; m_groupSecurityIdentifier = std::move(value); }

    /**
     * <p>Security identifier (SID) of the group object from Active Directory. The SID
     * starts with "S-".</p>
     */
    inline void SetGroupSecurityIdentifier(const char* value) { m_groupSecurityIdentifierHasBeenSet = true; m_groupSecurityIdentifier.assign(value); }

    /**
     * <p>Security identifier (SID) of the group object from Active Directory. The SID
     * starts with "S-".</p>
     */
    inline CreateTemplateGroupAccessControlEntryRequest& WithGroupSecurityIdentifier(const Aws::String& value) { SetGroupSecurityIdentifier(value); return *this;}

    /**
     * <p>Security identifier (SID) of the group object from Active Directory. The SID
     * starts with "S-".</p>
     */
    inline CreateTemplateGroupAccessControlEntryRequest& WithGroupSecurityIdentifier(Aws::String&& value) { SetGroupSecurityIdentifier(std::move(value)); return *this;}

    /**
     * <p>Security identifier (SID) of the group object from Active Directory. The SID
     * starts with "S-".</p>
     */
    inline CreateTemplateGroupAccessControlEntryRequest& WithGroupSecurityIdentifier(const char* value) { SetGroupSecurityIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.</p>
     */
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.</p>
     */
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.</p>
     */
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.</p>
     */
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.</p>
     */
    inline CreateTemplateGroupAccessControlEntryRequest& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.</p>
     */
    inline CreateTemplateGroupAccessControlEntryRequest& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.</p>
     */
    inline CreateTemplateGroupAccessControlEntryRequest& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}

  private:

    AccessRights m_accessRights;
    bool m_accessRightsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_groupDisplayName;
    bool m_groupDisplayNameHasBeenSet = false;

    Aws::String m_groupSecurityIdentifier;
    bool m_groupSecurityIdentifierHasBeenSet = false;

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
