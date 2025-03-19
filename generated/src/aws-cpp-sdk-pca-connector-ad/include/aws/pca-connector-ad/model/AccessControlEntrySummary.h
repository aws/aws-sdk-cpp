/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/AccessRights.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace PcaConnectorAd
{
namespace Model
{

  /**
   * <p>Summary of group access control entries that allow or deny Active Directory
   * groups based on their security identifiers (SIDs) from enrolling and/or
   * autofenrolling with the template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/AccessControlEntrySummary">AWS
   * API Reference</a></p>
   */
  class AccessControlEntrySummary
  {
  public:
    AWS_PCACONNECTORAD_API AccessControlEntrySummary() = default;
    AWS_PCACONNECTORAD_API AccessControlEntrySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API AccessControlEntrySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Allow or deny an Active Directory group from enrolling and autoenrolling
     * certificates issued against a template.</p>
     */
    inline const AccessRights& GetAccessRights() const { return m_accessRights; }
    inline bool AccessRightsHasBeenSet() const { return m_accessRightsHasBeenSet; }
    template<typename AccessRightsT = AccessRights>
    void SetAccessRights(AccessRightsT&& value) { m_accessRightsHasBeenSet = true; m_accessRights = std::forward<AccessRightsT>(value); }
    template<typename AccessRightsT = AccessRights>
    AccessControlEntrySummary& WithAccessRights(AccessRightsT&& value) { SetAccessRights(std::forward<AccessRightsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the Access Control Entry was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    AccessControlEntrySummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
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
    AccessControlEntrySummary& WithGroupDisplayName(GroupDisplayNameT&& value) { SetGroupDisplayName(std::forward<GroupDisplayNameT>(value)); return *this;}
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
    AccessControlEntrySummary& WithGroupSecurityIdentifier(GroupSecurityIdentifierT&& value) { SetGroupSecurityIdentifier(std::forward<GroupSecurityIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.
     * </p>
     */
    inline const Aws::String& GetTemplateArn() const { return m_templateArn; }
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
    template<typename TemplateArnT = Aws::String>
    void SetTemplateArn(TemplateArnT&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::forward<TemplateArnT>(value); }
    template<typename TemplateArnT = Aws::String>
    AccessControlEntrySummary& WithTemplateArn(TemplateArnT&& value) { SetTemplateArn(std::forward<TemplateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the Access Control Entry was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    AccessControlEntrySummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    AccessRights m_accessRights;
    bool m_accessRightsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_groupDisplayName;
    bool m_groupDisplayNameHasBeenSet = false;

    Aws::String m_groupSecurityIdentifier;
    bool m_groupSecurityIdentifierHasBeenSet = false;

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
