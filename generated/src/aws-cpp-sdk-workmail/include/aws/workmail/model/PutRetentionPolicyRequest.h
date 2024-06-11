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
    AWS_WORKMAIL_API PutRetentionPolicyRequest();

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
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }
    inline PutRetentionPolicyRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}
    inline PutRetentionPolicyRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}
    inline PutRetentionPolicyRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention policy ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline PutRetentionPolicyRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline PutRetentionPolicyRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline PutRetentionPolicyRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention policy name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline PutRetentionPolicyRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline PutRetentionPolicyRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline PutRetentionPolicyRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention policy description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline PutRetentionPolicyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline PutRetentionPolicyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline PutRetentionPolicyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention policy folder configurations.</p>
     */
    inline const Aws::Vector<FolderConfiguration>& GetFolderConfigurations() const{ return m_folderConfigurations; }
    inline bool FolderConfigurationsHasBeenSet() const { return m_folderConfigurationsHasBeenSet; }
    inline void SetFolderConfigurations(const Aws::Vector<FolderConfiguration>& value) { m_folderConfigurationsHasBeenSet = true; m_folderConfigurations = value; }
    inline void SetFolderConfigurations(Aws::Vector<FolderConfiguration>&& value) { m_folderConfigurationsHasBeenSet = true; m_folderConfigurations = std::move(value); }
    inline PutRetentionPolicyRequest& WithFolderConfigurations(const Aws::Vector<FolderConfiguration>& value) { SetFolderConfigurations(value); return *this;}
    inline PutRetentionPolicyRequest& WithFolderConfigurations(Aws::Vector<FolderConfiguration>&& value) { SetFolderConfigurations(std::move(value)); return *this;}
    inline PutRetentionPolicyRequest& AddFolderConfigurations(const FolderConfiguration& value) { m_folderConfigurationsHasBeenSet = true; m_folderConfigurations.push_back(value); return *this; }
    inline PutRetentionPolicyRequest& AddFolderConfigurations(FolderConfiguration&& value) { m_folderConfigurationsHasBeenSet = true; m_folderConfigurations.push_back(std::move(value)); return *this; }
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
