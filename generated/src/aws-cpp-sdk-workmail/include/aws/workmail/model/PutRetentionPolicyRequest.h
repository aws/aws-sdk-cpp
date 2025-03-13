/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workmail/model/FolderConfiguration.h>
#include <utility>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class PutRetentionPolicyRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API PutRetentionPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRetentionPolicy"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The organization ID.</p>
     */
    inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    template<typename OrganizationIdT = Aws::String>
    void SetOrganizationId(OrganizationIdT&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::forward<OrganizationIdT>(value); }
    template<typename OrganizationIdT = Aws::String>
    PutRetentionPolicyRequest& WithOrganizationId(OrganizationIdT&& value) { SetOrganizationId(std::forward<OrganizationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention policy ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    PutRetentionPolicyRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention policy name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PutRetentionPolicyRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention policy description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    PutRetentionPolicyRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention policy folder configurations.</p>
     */
    inline const Aws::Vector<FolderConfiguration>& GetFolderConfigurations() const { return m_folderConfigurations; }
    inline bool FolderConfigurationsHasBeenSet() const { return m_folderConfigurationsHasBeenSet; }
    template<typename FolderConfigurationsT = Aws::Vector<FolderConfiguration>>
    void SetFolderConfigurations(FolderConfigurationsT&& value) { m_folderConfigurationsHasBeenSet = true; m_folderConfigurations = std::forward<FolderConfigurationsT>(value); }
    template<typename FolderConfigurationsT = Aws::Vector<FolderConfiguration>>
    PutRetentionPolicyRequest& WithFolderConfigurations(FolderConfigurationsT&& value) { SetFolderConfigurations(std::forward<FolderConfigurationsT>(value)); return *this;}
    template<typename FolderConfigurationsT = FolderConfiguration>
    PutRetentionPolicyRequest& AddFolderConfigurations(FolderConfigurationsT&& value) { m_folderConfigurationsHasBeenSet = true; m_folderConfigurations.emplace_back(std::forward<FolderConfigurationsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<FolderConfiguration> m_folderConfigurations;
    bool m_folderConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
