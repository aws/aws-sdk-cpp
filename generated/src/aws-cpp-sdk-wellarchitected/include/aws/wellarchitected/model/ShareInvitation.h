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
    AWS_WELLARCHITECTED_API ShareInvitation() = default;
    AWS_WELLARCHITECTED_API ShareInvitation(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ShareInvitation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline const Aws::String& GetShareInvitationId() const { return m_shareInvitationId; }
    inline bool ShareInvitationIdHasBeenSet() const { return m_shareInvitationIdHasBeenSet; }
    template<typename ShareInvitationIdT = Aws::String>
    void SetShareInvitationId(ShareInvitationIdT&& value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId = std::forward<ShareInvitationIdT>(value); }
    template<typename ShareInvitationIdT = Aws::String>
    ShareInvitation& WithShareInvitationId(ShareInvitationIdT&& value) { SetShareInvitationId(std::forward<ShareInvitationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type of the share invitation.</p>
     */
    inline ShareResourceType GetShareResourceType() const { return m_shareResourceType; }
    inline bool ShareResourceTypeHasBeenSet() const { return m_shareResourceTypeHasBeenSet; }
    inline void SetShareResourceType(ShareResourceType value) { m_shareResourceTypeHasBeenSet = true; m_shareResourceType = value; }
    inline ShareInvitation& WithShareResourceType(ShareResourceType value) { SetShareResourceType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWorkloadId() const { return m_workloadId; }
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }
    template<typename WorkloadIdT = Aws::String>
    void SetWorkloadId(WorkloadIdT&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::forward<WorkloadIdT>(value); }
    template<typename WorkloadIdT = Aws::String>
    ShareInvitation& WithWorkloadId(WorkloadIdT&& value) { SetWorkloadId(std::forward<WorkloadIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLensAlias() const { return m_lensAlias; }
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }
    template<typename LensAliasT = Aws::String>
    void SetLensAlias(LensAliasT&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::forward<LensAliasT>(value); }
    template<typename LensAliasT = Aws::String>
    ShareInvitation& WithLensAlias(LensAliasT&& value) { SetLensAlias(std::forward<LensAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the lens.</p>
     */
    inline const Aws::String& GetLensArn() const { return m_lensArn; }
    inline bool LensArnHasBeenSet() const { return m_lensArnHasBeenSet; }
    template<typename LensArnT = Aws::String>
    void SetLensArn(LensArnT&& value) { m_lensArnHasBeenSet = true; m_lensArn = std::forward<LensArnT>(value); }
    template<typename LensArnT = Aws::String>
    ShareInvitation& WithLensArn(LensArnT&& value) { SetLensArn(std::forward<LensArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profile ARN.</p>
     */
    inline const Aws::String& GetProfileArn() const { return m_profileArn; }
    inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }
    template<typename ProfileArnT = Aws::String>
    void SetProfileArn(ProfileArnT&& value) { m_profileArnHasBeenSet = true; m_profileArn = std::forward<ProfileArnT>(value); }
    template<typename ProfileArnT = Aws::String>
    ShareInvitation& WithProfileArn(ProfileArnT&& value) { SetProfileArn(std::forward<ProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The review template ARN.</p>
     */
    inline const Aws::String& GetTemplateArn() const { return m_templateArn; }
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
    template<typename TemplateArnT = Aws::String>
    void SetTemplateArn(TemplateArnT&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::forward<TemplateArnT>(value); }
    template<typename TemplateArnT = Aws::String>
    ShareInvitation& WithTemplateArn(TemplateArnT&& value) { SetTemplateArn(std::forward<TemplateArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_shareInvitationId;
    bool m_shareInvitationIdHasBeenSet = false;

    ShareResourceType m_shareResourceType{ShareResourceType::NOT_SET};
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
