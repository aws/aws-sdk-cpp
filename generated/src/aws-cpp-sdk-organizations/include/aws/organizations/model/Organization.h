/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/OrganizationFeatureSet.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/organizations/model/PolicyTypeSummary.h>
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
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains details about an organization. An organization is a collection of
   * accounts that are centrally managed together using consolidated billing,
   * organized hierarchically with organizational units (OUs), and controlled with
   * policies .</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/Organization">AWS
   * API Reference</a></p>
   */
  class Organization
  {
  public:
    AWS_ORGANIZATIONS_API Organization() = default;
    AWS_ORGANIZATIONS_API Organization(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Organization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier (ID) of an organization.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an organization ID
     * string requires "o-" followed by from 10 to 32 lowercase letters or digits.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Organization& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an organization.</p> <p>For more
     * information about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Organization& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the functionality that currently is available to the organization.
     * If set to "ALL", then all features are enabled and policies can be applied to
     * accounts in the organization. If set to "CONSOLIDATED_BILLING", then only
     * consolidated billing functionality is available. For more information, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling
     * all features in your organization</a> in the <i>Organizations User
     * Guide</i>.</p>
     */
    inline OrganizationFeatureSet GetFeatureSet() const { return m_featureSet; }
    inline bool FeatureSetHasBeenSet() const { return m_featureSetHasBeenSet; }
    inline void SetFeatureSet(OrganizationFeatureSet value) { m_featureSetHasBeenSet = true; m_featureSet = value; }
    inline Organization& WithFeatureSet(OrganizationFeatureSet value) { SetFeatureSet(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the account that is designated as the
     * management account for the organization.</p> <p>For more information about ARNs
     * in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline const Aws::String& GetMasterAccountArn() const { return m_masterAccountArn; }
    inline bool MasterAccountArnHasBeenSet() const { return m_masterAccountArnHasBeenSet; }
    template<typename MasterAccountArnT = Aws::String>
    void SetMasterAccountArn(MasterAccountArnT&& value) { m_masterAccountArnHasBeenSet = true; m_masterAccountArn = std::forward<MasterAccountArnT>(value); }
    template<typename MasterAccountArnT = Aws::String>
    Organization& WithMasterAccountArn(MasterAccountArnT&& value) { SetMasterAccountArn(std::forward<MasterAccountArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier (ID) of the management account of an organization.</p>
     * <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for an
     * account ID string requires exactly 12 digits.</p>
     */
    inline const Aws::String& GetMasterAccountId() const { return m_masterAccountId; }
    inline bool MasterAccountIdHasBeenSet() const { return m_masterAccountIdHasBeenSet; }
    template<typename MasterAccountIdT = Aws::String>
    void SetMasterAccountId(MasterAccountIdT&& value) { m_masterAccountIdHasBeenSet = true; m_masterAccountId = std::forward<MasterAccountIdT>(value); }
    template<typename MasterAccountIdT = Aws::String>
    Organization& WithMasterAccountId(MasterAccountIdT&& value) { SetMasterAccountId(std::forward<MasterAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address that is associated with the Amazon Web Services account
     * that is designated as the management account for the organization.</p>
     */
    inline const Aws::String& GetMasterAccountEmail() const { return m_masterAccountEmail; }
    inline bool MasterAccountEmailHasBeenSet() const { return m_masterAccountEmailHasBeenSet; }
    template<typename MasterAccountEmailT = Aws::String>
    void SetMasterAccountEmail(MasterAccountEmailT&& value) { m_masterAccountEmailHasBeenSet = true; m_masterAccountEmail = std::forward<MasterAccountEmailT>(value); }
    template<typename MasterAccountEmailT = Aws::String>
    Organization& WithMasterAccountEmail(MasterAccountEmailT&& value) { SetMasterAccountEmail(std::forward<MasterAccountEmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     *  <p>Do not use. This field is deprecated and doesn't provide complete
     * information about the policies in your organization.</p>  <p>To
     * determine the policies that are enabled and available for use in your
     * organization, use the <a>ListRoots</a> operation instead.</p>
     */
    inline const Aws::Vector<PolicyTypeSummary>& GetAvailablePolicyTypes() const { return m_availablePolicyTypes; }
    inline bool AvailablePolicyTypesHasBeenSet() const { return m_availablePolicyTypesHasBeenSet; }
    template<typename AvailablePolicyTypesT = Aws::Vector<PolicyTypeSummary>>
    void SetAvailablePolicyTypes(AvailablePolicyTypesT&& value) { m_availablePolicyTypesHasBeenSet = true; m_availablePolicyTypes = std::forward<AvailablePolicyTypesT>(value); }
    template<typename AvailablePolicyTypesT = Aws::Vector<PolicyTypeSummary>>
    Organization& WithAvailablePolicyTypes(AvailablePolicyTypesT&& value) { SetAvailablePolicyTypes(std::forward<AvailablePolicyTypesT>(value)); return *this;}
    template<typename AvailablePolicyTypesT = PolicyTypeSummary>
    Organization& AddAvailablePolicyTypes(AvailablePolicyTypesT&& value) { m_availablePolicyTypesHasBeenSet = true; m_availablePolicyTypes.emplace_back(std::forward<AvailablePolicyTypesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    OrganizationFeatureSet m_featureSet{OrganizationFeatureSet::NOT_SET};
    bool m_featureSetHasBeenSet = false;

    Aws::String m_masterAccountArn;
    bool m_masterAccountArnHasBeenSet = false;

    Aws::String m_masterAccountId;
    bool m_masterAccountIdHasBeenSet = false;

    Aws::String m_masterAccountEmail;
    bool m_masterAccountEmailHasBeenSet = false;

    Aws::Vector<PolicyTypeSummary> m_availablePolicyTypes;
    bool m_availablePolicyTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
