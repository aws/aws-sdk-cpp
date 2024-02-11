/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The share invitation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ShareInvitation">AWS
   * API Reference</a></p>
   */
  class ShareInvitation
  {
  public:
    AWS_WELLARCHITECTED_API ShareInvitation();
    AWS_WELLARCHITECTED_API ShareInvitation(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ShareInvitation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline const Aws::String& GetShareInvitationId() const{ return m_shareInvitationId; }

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline bool ShareInvitationIdHasBeenSet() const { return m_shareInvitationIdHasBeenSet; }

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline void SetShareInvitationId(const Aws::String& value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId = value; }

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline void SetShareInvitationId(Aws::String&& value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId = std::move(value); }

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline void SetShareInvitationId(const char* value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId.assign(value); }

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline ShareInvitation& WithShareInvitationId(const Aws::String& value) { SetShareInvitationId(value); return *this;}

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline ShareInvitation& WithShareInvitationId(Aws::String&& value) { SetShareInvitationId(std::move(value)); return *this;}

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline ShareInvitation& WithShareInvitationId(const char* value) { SetShareInvitationId(value); return *this;}


    /**
     * <p>The resource type of the share invitation.</p>
     */
    inline const ShareResourceType& GetShareResourceType() const{ return m_shareResourceType; }

    /**
     * <p>The resource type of the share invitation.</p>
     */
    inline bool ShareResourceTypeHasBeenSet() const { return m_shareResourceTypeHasBeenSet; }

    /**
     * <p>The resource type of the share invitation.</p>
     */
    inline void SetShareResourceType(const ShareResourceType& value) { m_shareResourceTypeHasBeenSet = true; m_shareResourceType = value; }

    /**
     * <p>The resource type of the share invitation.</p>
     */
    inline void SetShareResourceType(ShareResourceType&& value) { m_shareResourceTypeHasBeenSet = true; m_shareResourceType = std::move(value); }

    /**
     * <p>The resource type of the share invitation.</p>
     */
    inline ShareInvitation& WithShareResourceType(const ShareResourceType& value) { SetShareResourceType(value); return *this;}

    /**
     * <p>The resource type of the share invitation.</p>
     */
    inline ShareInvitation& WithShareResourceType(ShareResourceType&& value) { SetShareResourceType(std::move(value)); return *this;}


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadIdHasBeenSet = true; m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadIdHasBeenSet = true; m_workloadId.assign(value); }

    
    inline ShareInvitation& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline ShareInvitation& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline ShareInvitation& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline const Aws::String& GetLensAlias() const{ return m_lensAlias; }

    
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }

    
    inline void SetLensAlias(const Aws::String& value) { m_lensAliasHasBeenSet = true; m_lensAlias = value; }

    
    inline void SetLensAlias(Aws::String&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::move(value); }

    
    inline void SetLensAlias(const char* value) { m_lensAliasHasBeenSet = true; m_lensAlias.assign(value); }

    
    inline ShareInvitation& WithLensAlias(const Aws::String& value) { SetLensAlias(value); return *this;}

    
    inline ShareInvitation& WithLensAlias(Aws::String&& value) { SetLensAlias(std::move(value)); return *this;}

    
    inline ShareInvitation& WithLensAlias(const char* value) { SetLensAlias(value); return *this;}


    /**
     * <p>The ARN for the lens.</p>
     */
    inline const Aws::String& GetLensArn() const{ return m_lensArn; }

    /**
     * <p>The ARN for the lens.</p>
     */
    inline bool LensArnHasBeenSet() const { return m_lensArnHasBeenSet; }

    /**
     * <p>The ARN for the lens.</p>
     */
    inline void SetLensArn(const Aws::String& value) { m_lensArnHasBeenSet = true; m_lensArn = value; }

    /**
     * <p>The ARN for the lens.</p>
     */
    inline void SetLensArn(Aws::String&& value) { m_lensArnHasBeenSet = true; m_lensArn = std::move(value); }

    /**
     * <p>The ARN for the lens.</p>
     */
    inline void SetLensArn(const char* value) { m_lensArnHasBeenSet = true; m_lensArn.assign(value); }

    /**
     * <p>The ARN for the lens.</p>
     */
    inline ShareInvitation& WithLensArn(const Aws::String& value) { SetLensArn(value); return *this;}

    /**
     * <p>The ARN for the lens.</p>
     */
    inline ShareInvitation& WithLensArn(Aws::String&& value) { SetLensArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the lens.</p>
     */
    inline ShareInvitation& WithLensArn(const char* value) { SetLensArn(value); return *this;}


    /**
     * <p>The profile ARN.</p>
     */
    inline const Aws::String& GetProfileArn() const{ return m_profileArn; }

    /**
     * <p>The profile ARN.</p>
     */
    inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }

    /**
     * <p>The profile ARN.</p>
     */
    inline void SetProfileArn(const Aws::String& value) { m_profileArnHasBeenSet = true; m_profileArn = value; }

    /**
     * <p>The profile ARN.</p>
     */
    inline void SetProfileArn(Aws::String&& value) { m_profileArnHasBeenSet = true; m_profileArn = std::move(value); }

    /**
     * <p>The profile ARN.</p>
     */
    inline void SetProfileArn(const char* value) { m_profileArnHasBeenSet = true; m_profileArn.assign(value); }

    /**
     * <p>The profile ARN.</p>
     */
    inline ShareInvitation& WithProfileArn(const Aws::String& value) { SetProfileArn(value); return *this;}

    /**
     * <p>The profile ARN.</p>
     */
    inline ShareInvitation& WithProfileArn(Aws::String&& value) { SetProfileArn(std::move(value)); return *this;}

    /**
     * <p>The profile ARN.</p>
     */
    inline ShareInvitation& WithProfileArn(const char* value) { SetProfileArn(value); return *this;}


    /**
     * <p>The review template ARN.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }

    /**
     * <p>The review template ARN.</p>
     */
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }

    /**
     * <p>The review template ARN.</p>
     */
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }

    /**
     * <p>The review template ARN.</p>
     */
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }

    /**
     * <p>The review template ARN.</p>
     */
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }

    /**
     * <p>The review template ARN.</p>
     */
    inline ShareInvitation& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}

    /**
     * <p>The review template ARN.</p>
     */
    inline ShareInvitation& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The review template ARN.</p>
     */
    inline ShareInvitation& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}

  private:

    Aws::String m_shareInvitationId;
    bool m_shareInvitationIdHasBeenSet = false;

    ShareResourceType m_shareResourceType;
    bool m_shareResourceTypeHasBeenSet = false;

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_lensArn;
    bool m_lensArnHasBeenSet = false;

    Aws::String m_profileArn;
    bool m_profileArnHasBeenSet = false;

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
