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
    AWS_PCACONNECTORAD_API AccessControlEntrySummary();
    AWS_PCACONNECTORAD_API AccessControlEntrySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API AccessControlEntrySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCACONNECTORAD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Allow or deny an Active Directory group from enrolling and autoenrolling
     * certificates issued against a template.</p>
     */
    inline const AccessRights& GetAccessRights() const{ return m_accessRights; }
    inline bool AccessRightsHasBeenSet() const { return m_accessRightsHasBeenSet; }
    inline void SetAccessRights(const AccessRights& value) { m_accessRightsHasBeenSet = true; m_accessRights = value; }
    inline void SetAccessRights(AccessRights&& value) { m_accessRightsHasBeenSet = true; m_accessRights = std::move(value); }
    inline AccessControlEntrySummary& WithAccessRights(const AccessRights& value) { SetAccessRights(value); return *this;}
    inline AccessControlEntrySummary& WithAccessRights(AccessRights&& value) { SetAccessRights(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the Access Control Entry was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline AccessControlEntrySummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline AccessControlEntrySummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the Active Directory group. This name does not need to match the
     * group name in Active Directory.</p>
     */
    inline const Aws::String& GetGroupDisplayName() const{ return m_groupDisplayName; }
    inline bool GroupDisplayNameHasBeenSet() const { return m_groupDisplayNameHasBeenSet; }
    inline void SetGroupDisplayName(const Aws::String& value) { m_groupDisplayNameHasBeenSet = true; m_groupDisplayName = value; }
    inline void SetGroupDisplayName(Aws::String&& value) { m_groupDisplayNameHasBeenSet = true; m_groupDisplayName = std::move(value); }
    inline void SetGroupDisplayName(const char* value) { m_groupDisplayNameHasBeenSet = true; m_groupDisplayName.assign(value); }
    inline AccessControlEntrySummary& WithGroupDisplayName(const Aws::String& value) { SetGroupDisplayName(value); return *this;}
    inline AccessControlEntrySummary& WithGroupDisplayName(Aws::String&& value) { SetGroupDisplayName(std::move(value)); return *this;}
    inline AccessControlEntrySummary& WithGroupDisplayName(const char* value) { SetGroupDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Security identifier (SID) of the group object from Active Directory. The SID
     * starts with "S-".</p>
     */
    inline const Aws::String& GetGroupSecurityIdentifier() const{ return m_groupSecurityIdentifier; }
    inline bool GroupSecurityIdentifierHasBeenSet() const { return m_groupSecurityIdentifierHasBeenSet; }
    inline void SetGroupSecurityIdentifier(const Aws::String& value) { m_groupSecurityIdentifierHasBeenSet = true; m_groupSecurityIdentifier = value; }
    inline void SetGroupSecurityIdentifier(Aws::String&& value) { m_groupSecurityIdentifierHasBeenSet = true; m_groupSecurityIdentifier = std::move(value); }
    inline void SetGroupSecurityIdentifier(const char* value) { m_groupSecurityIdentifierHasBeenSet = true; m_groupSecurityIdentifier.assign(value); }
    inline AccessControlEntrySummary& WithGroupSecurityIdentifier(const Aws::String& value) { SetGroupSecurityIdentifier(value); return *this;}
    inline AccessControlEntrySummary& WithGroupSecurityIdentifier(Aws::String&& value) { SetGroupSecurityIdentifier(std::move(value)); return *this;}
    inline AccessControlEntrySummary& WithGroupSecurityIdentifier(const char* value) { SetGroupSecurityIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplate.html">CreateTemplate</a>.
     * </p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }
    inline AccessControlEntrySummary& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}
    inline AccessControlEntrySummary& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}
    inline AccessControlEntrySummary& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the Access Control Entry was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline AccessControlEntrySummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline AccessControlEntrySummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    AccessRights m_accessRights;
    bool m_accessRightsHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_groupDisplayName;
    bool m_groupDisplayNameHasBeenSet = false;

    Aws::String m_groupSecurityIdentifier;
    bool m_groupSecurityIdentifierHasBeenSet = false;

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
