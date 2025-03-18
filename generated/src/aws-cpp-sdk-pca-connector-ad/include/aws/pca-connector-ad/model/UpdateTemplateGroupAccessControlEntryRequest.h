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

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

  /**
   */
  class UpdateTemplateGroupAccessControlEntryRequest : public PcaConnectorAdRequest
  {
  public:
    AWS_PCACONNECTORAD_API UpdateTemplateGroupAccessControlEntryRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTemplateGroupAccessControlEntry"; }

    AWS_PCACONNECTORAD_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Allow or deny permissions for an Active Directory group to enroll or
     * autoenroll certificates for a template.</p>
     */
    inline const AccessRights& GetAccessRights() const { return m_accessRights; }
    inline bool AccessRightsHasBeenSet() const { return m_accessRightsHasBeenSet; }
    template<typename AccessRightsT = AccessRights>
    void SetAccessRights(AccessRightsT&& value) { m_accessRightsHasBeenSet = true; m_accessRights = std::forward<AccessRightsT>(value); }
    template<typename AccessRightsT = AccessRights>
    UpdateTemplateGroupAccessControlEntryRequest& WithAccessRights(AccessRightsT&& value) { SetAccessRights(std::forward<AccessRightsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the Active Directory group. This name does not need to match the
     * group name in Active Directory.</p>
     */
    inline const Aws::String& GetGroupDisplayName() const { return m_groupDisplayName; }
    inline bool GroupDisplayNameHasBeenSet() const { return m_groupDisplayNameHasBeenSet; }
    template<typename GroupDisplayNameT = Aws::String>
    void SetGroupDisplayName(GroupDisplayNameT&& value) { m_groupDisplayNameHasBeenSet = true; m_groupDisplayName = std::forward<GroupDisplayNameT>(value); }
    template<typename GroupDisplayNameT = Aws::String>
    UpdateTemplateGroupAccessControlEntryRequest& WithGroupDisplayName(GroupDisplayNameT&& value) { SetGroupDisplayName(std::forward<GroupDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Security identifier (SID) of the group object from Active Directory. The SID
     * starts with "S-".</p>
     */
    inline const Aws::String& GetGroupSecurityIdentifier() const { return m_groupSecurityIdentifier; }
    inline bool GroupSecurityIdentifierHasBeenSet() const { return m_groupSecurityIdentifierHasBeenSet; }
    template<typename GroupSecurityIdentifierT = Aws::String>
    void SetGroupSecurityIdentifier(GroupSecurityIdentifierT&& value) { m_groupSecurityIdentifierHasBeenSet = true; m_groupSecurityIdentifier = std::forward<GroupSecurityIdentifierT>(value); }
    template<typename GroupSecurityIdentifierT = Aws::String>
    UpdateTemplateGroupAccessControlEntryRequest& WithGroupSecurityIdentifier(GroupSecurityIdentifierT&& value) { SetGroupSecurityIdentifier(std::forward<GroupSecurityIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.</p>
     */
    inline const Aws::String& GetTemplateArn() const { return m_templateArn; }
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
    template<typename TemplateArnT = Aws::String>
    void SetTemplateArn(TemplateArnT&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::forward<TemplateArnT>(value); }
    template<typename TemplateArnT = Aws::String>
    UpdateTemplateGroupAccessControlEntryRequest& WithTemplateArn(TemplateArnT&& value) { SetTemplateArn(std::forward<TemplateArnT>(value)); return *this;}
    ///@}
  private:

    AccessRights m_accessRights;
    bool m_accessRightsHasBeenSet = false;

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
