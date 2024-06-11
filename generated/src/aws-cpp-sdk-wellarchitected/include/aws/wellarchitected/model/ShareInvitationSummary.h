﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/PermissionType.h>
#include <aws/wellarchitected/model/ShareResourceType.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>A share invitation summary return object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ShareInvitationSummary">AWS
   * API Reference</a></p>
   */
  class ShareInvitationSummary
  {
  public:
    AWS_WELLARCHITECTED_API ShareInvitationSummary();
    AWS_WELLARCHITECTED_API ShareInvitationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ShareInvitationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline const Aws::String& GetShareInvitationId() const{ return m_shareInvitationId; }
    inline bool ShareInvitationIdHasBeenSet() const { return m_shareInvitationIdHasBeenSet; }
    inline void SetShareInvitationId(const Aws::String& value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId = value; }
    inline void SetShareInvitationId(Aws::String&& value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId = std::move(value); }
    inline void SetShareInvitationId(const char* value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId.assign(value); }
    inline ShareInvitationSummary& WithShareInvitationId(const Aws::String& value) { SetShareInvitationId(value); return *this;}
    inline ShareInvitationSummary& WithShareInvitationId(Aws::String&& value) { SetShareInvitationId(std::move(value)); return *this;}
    inline ShareInvitationSummary& WithShareInvitationId(const char* value) { SetShareInvitationId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetSharedBy() const{ return m_sharedBy; }
    inline bool SharedByHasBeenSet() const { return m_sharedByHasBeenSet; }
    inline void SetSharedBy(const Aws::String& value) { m_sharedByHasBeenSet = true; m_sharedBy = value; }
    inline void SetSharedBy(Aws::String&& value) { m_sharedByHasBeenSet = true; m_sharedBy = std::move(value); }
    inline void SetSharedBy(const char* value) { m_sharedByHasBeenSet = true; m_sharedBy.assign(value); }
    inline ShareInvitationSummary& WithSharedBy(const Aws::String& value) { SetSharedBy(value); return *this;}
    inline ShareInvitationSummary& WithSharedBy(Aws::String&& value) { SetSharedBy(std::move(value)); return *this;}
    inline ShareInvitationSummary& WithSharedBy(const char* value) { SetSharedBy(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetSharedWith() const{ return m_sharedWith; }
    inline bool SharedWithHasBeenSet() const { return m_sharedWithHasBeenSet; }
    inline void SetSharedWith(const Aws::String& value) { m_sharedWithHasBeenSet = true; m_sharedWith = value; }
    inline void SetSharedWith(Aws::String&& value) { m_sharedWithHasBeenSet = true; m_sharedWith = std::move(value); }
    inline void SetSharedWith(const char* value) { m_sharedWithHasBeenSet = true; m_sharedWith.assign(value); }
    inline ShareInvitationSummary& WithSharedWith(const Aws::String& value) { SetSharedWith(value); return *this;}
    inline ShareInvitationSummary& WithSharedWith(Aws::String&& value) { SetSharedWith(std::move(value)); return *this;}
    inline ShareInvitationSummary& WithSharedWith(const char* value) { SetSharedWith(value); return *this;}
    ///@}

    ///@{
    
    inline const PermissionType& GetPermissionType() const{ return m_permissionType; }
    inline bool PermissionTypeHasBeenSet() const { return m_permissionTypeHasBeenSet; }
    inline void SetPermissionType(const PermissionType& value) { m_permissionTypeHasBeenSet = true; m_permissionType = value; }
    inline void SetPermissionType(PermissionType&& value) { m_permissionTypeHasBeenSet = true; m_permissionType = std::move(value); }
    inline ShareInvitationSummary& WithPermissionType(const PermissionType& value) { SetPermissionType(value); return *this;}
    inline ShareInvitationSummary& WithPermissionType(PermissionType&& value) { SetPermissionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type of the share invitation.</p>
     */
    inline const ShareResourceType& GetShareResourceType() const{ return m_shareResourceType; }
    inline bool ShareResourceTypeHasBeenSet() const { return m_shareResourceTypeHasBeenSet; }
    inline void SetShareResourceType(const ShareResourceType& value) { m_shareResourceTypeHasBeenSet = true; m_shareResourceType = value; }
    inline void SetShareResourceType(ShareResourceType&& value) { m_shareResourceTypeHasBeenSet = true; m_shareResourceType = std::move(value); }
    inline ShareInvitationSummary& WithShareResourceType(const ShareResourceType& value) { SetShareResourceType(value); return *this;}
    inline ShareInvitationSummary& WithShareResourceType(ShareResourceType&& value) { SetShareResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWorkloadName() const{ return m_workloadName; }
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
    inline void SetWorkloadName(const Aws::String& value) { m_workloadNameHasBeenSet = true; m_workloadName = value; }
    inline void SetWorkloadName(Aws::String&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::move(value); }
    inline void SetWorkloadName(const char* value) { m_workloadNameHasBeenSet = true; m_workloadName.assign(value); }
    inline ShareInvitationSummary& WithWorkloadName(const Aws::String& value) { SetWorkloadName(value); return *this;}
    inline ShareInvitationSummary& WithWorkloadName(Aws::String&& value) { SetWorkloadName(std::move(value)); return *this;}
    inline ShareInvitationSummary& WithWorkloadName(const char* value) { SetWorkloadName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }
    inline void SetWorkloadId(const Aws::String& value) { m_workloadIdHasBeenSet = true; m_workloadId = value; }
    inline void SetWorkloadId(Aws::String&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::move(value); }
    inline void SetWorkloadId(const char* value) { m_workloadIdHasBeenSet = true; m_workloadId.assign(value); }
    inline ShareInvitationSummary& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}
    inline ShareInvitationSummary& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}
    inline ShareInvitationSummary& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLensName() const{ return m_lensName; }
    inline bool LensNameHasBeenSet() const { return m_lensNameHasBeenSet; }
    inline void SetLensName(const Aws::String& value) { m_lensNameHasBeenSet = true; m_lensName = value; }
    inline void SetLensName(Aws::String&& value) { m_lensNameHasBeenSet = true; m_lensName = std::move(value); }
    inline void SetLensName(const char* value) { m_lensNameHasBeenSet = true; m_lensName.assign(value); }
    inline ShareInvitationSummary& WithLensName(const Aws::String& value) { SetLensName(value); return *this;}
    inline ShareInvitationSummary& WithLensName(Aws::String&& value) { SetLensName(std::move(value)); return *this;}
    inline ShareInvitationSummary& WithLensName(const char* value) { SetLensName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the lens.</p>
     */
    inline const Aws::String& GetLensArn() const{ return m_lensArn; }
    inline bool LensArnHasBeenSet() const { return m_lensArnHasBeenSet; }
    inline void SetLensArn(const Aws::String& value) { m_lensArnHasBeenSet = true; m_lensArn = value; }
    inline void SetLensArn(Aws::String&& value) { m_lensArnHasBeenSet = true; m_lensArn = std::move(value); }
    inline void SetLensArn(const char* value) { m_lensArnHasBeenSet = true; m_lensArn.assign(value); }
    inline ShareInvitationSummary& WithLensArn(const Aws::String& value) { SetLensArn(value); return *this;}
    inline ShareInvitationSummary& WithLensArn(Aws::String&& value) { SetLensArn(std::move(value)); return *this;}
    inline ShareInvitationSummary& WithLensArn(const char* value) { SetLensArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profile name.</p>
     */
    inline const Aws::String& GetProfileName() const{ return m_profileName; }
    inline bool ProfileNameHasBeenSet() const { return m_profileNameHasBeenSet; }
    inline void SetProfileName(const Aws::String& value) { m_profileNameHasBeenSet = true; m_profileName = value; }
    inline void SetProfileName(Aws::String&& value) { m_profileNameHasBeenSet = true; m_profileName = std::move(value); }
    inline void SetProfileName(const char* value) { m_profileNameHasBeenSet = true; m_profileName.assign(value); }
    inline ShareInvitationSummary& WithProfileName(const Aws::String& value) { SetProfileName(value); return *this;}
    inline ShareInvitationSummary& WithProfileName(Aws::String&& value) { SetProfileName(std::move(value)); return *this;}
    inline ShareInvitationSummary& WithProfileName(const char* value) { SetProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profile ARN.</p>
     */
    inline const Aws::String& GetProfileArn() const{ return m_profileArn; }
    inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }
    inline void SetProfileArn(const Aws::String& value) { m_profileArnHasBeenSet = true; m_profileArn = value; }
    inline void SetProfileArn(Aws::String&& value) { m_profileArnHasBeenSet = true; m_profileArn = std::move(value); }
    inline void SetProfileArn(const char* value) { m_profileArnHasBeenSet = true; m_profileArn.assign(value); }
    inline ShareInvitationSummary& WithProfileArn(const Aws::String& value) { SetProfileArn(value); return *this;}
    inline ShareInvitationSummary& WithProfileArn(Aws::String&& value) { SetProfileArn(std::move(value)); return *this;}
    inline ShareInvitationSummary& WithProfileArn(const char* value) { SetProfileArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the review template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline ShareInvitationSummary& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline ShareInvitationSummary& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline ShareInvitationSummary& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The review template ARN.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }
    inline ShareInvitationSummary& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}
    inline ShareInvitationSummary& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}
    inline ShareInvitationSummary& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}
    ///@}
  private:

    Aws::String m_shareInvitationId;
    bool m_shareInvitationIdHasBeenSet = false;

    Aws::String m_sharedBy;
    bool m_sharedByHasBeenSet = false;

    Aws::String m_sharedWith;
    bool m_sharedWithHasBeenSet = false;

    PermissionType m_permissionType;
    bool m_permissionTypeHasBeenSet = false;

    ShareResourceType m_shareResourceType;
    bool m_shareResourceTypeHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::String m_lensName;
    bool m_lensNameHasBeenSet = false;

    Aws::String m_lensArn;
    bool m_lensArnHasBeenSet = false;

    Aws::String m_profileName;
    bool m_profileNameHasBeenSet = false;

    Aws::String m_profileArn;
    bool m_profileArnHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
