/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/RepositoryBranchInput.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class UpdateAccountSettingsRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API UpdateAccountSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccountSettings"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Set to <code>true</code> to remove a configured pipeline repository from the
     * account settings. Don't set this field if you are updating the configured
     * pipeline repository.</p>
     */
    inline bool GetDeletePipelineProvisioningRepository() const { return m_deletePipelineProvisioningRepository; }
    inline bool DeletePipelineProvisioningRepositoryHasBeenSet() const { return m_deletePipelineProvisioningRepositoryHasBeenSet; }
    inline void SetDeletePipelineProvisioningRepository(bool value) { m_deletePipelineProvisioningRepositoryHasBeenSet = true; m_deletePipelineProvisioningRepository = value; }
    inline UpdateAccountSettingsRequest& WithDeletePipelineProvisioningRepository(bool value) { SetDeletePipelineProvisioningRepository(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Proton assumes this role for CodeBuild-based
     * provisioning.</p>
     */
    inline const Aws::String& GetPipelineCodebuildRoleArn() const { return m_pipelineCodebuildRoleArn; }
    inline bool PipelineCodebuildRoleArnHasBeenSet() const { return m_pipelineCodebuildRoleArnHasBeenSet; }
    template<typename PipelineCodebuildRoleArnT = Aws::String>
    void SetPipelineCodebuildRoleArn(PipelineCodebuildRoleArnT&& value) { m_pipelineCodebuildRoleArnHasBeenSet = true; m_pipelineCodebuildRoleArn = std::forward<PipelineCodebuildRoleArnT>(value); }
    template<typename PipelineCodebuildRoleArnT = Aws::String>
    UpdateAccountSettingsRequest& WithPipelineCodebuildRoleArn(PipelineCodebuildRoleArnT&& value) { SetPipelineCodebuildRoleArn(std::forward<PipelineCodebuildRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A linked repository for pipeline provisioning. Specify it if you have
     * environments configured for self-managed provisioning with services that include
     * pipelines. A linked repository is a repository that has been registered with
     * Proton. For more information, see <a>CreateRepository</a>.</p> <p>To remove a
     * previously configured repository, set
     * <code>deletePipelineProvisioningRepository</code> to <code>true</code>, and
     * don't set <code>pipelineProvisioningRepository</code>.</p>
     */
    inline const RepositoryBranchInput& GetPipelineProvisioningRepository() const { return m_pipelineProvisioningRepository; }
    inline bool PipelineProvisioningRepositoryHasBeenSet() const { return m_pipelineProvisioningRepositoryHasBeenSet; }
    template<typename PipelineProvisioningRepositoryT = RepositoryBranchInput>
    void SetPipelineProvisioningRepository(PipelineProvisioningRepositoryT&& value) { m_pipelineProvisioningRepositoryHasBeenSet = true; m_pipelineProvisioningRepository = std::forward<PipelineProvisioningRepositoryT>(value); }
    template<typename PipelineProvisioningRepositoryT = RepositoryBranchInput>
    UpdateAccountSettingsRequest& WithPipelineProvisioningRepository(PipelineProvisioningRepositoryT&& value) { SetPipelineProvisioningRepository(std::forward<PipelineProvisioningRepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p> <p>To remove a previously configured ARN, specify an empty
     * string.</p>
     */
    inline const Aws::String& GetPipelineServiceRoleArn() const { return m_pipelineServiceRoleArn; }
    inline bool PipelineServiceRoleArnHasBeenSet() const { return m_pipelineServiceRoleArnHasBeenSet; }
    template<typename PipelineServiceRoleArnT = Aws::String>
    void SetPipelineServiceRoleArn(PipelineServiceRoleArnT&& value) { m_pipelineServiceRoleArnHasBeenSet = true; m_pipelineServiceRoleArn = std::forward<PipelineServiceRoleArnT>(value); }
    template<typename PipelineServiceRoleArnT = Aws::String>
    UpdateAccountSettingsRequest& WithPipelineServiceRoleArn(PipelineServiceRoleArnT&& value) { SetPipelineServiceRoleArn(std::forward<PipelineServiceRoleArnT>(value)); return *this;}
    ///@}
  private:

    bool m_deletePipelineProvisioningRepository{false};
    bool m_deletePipelineProvisioningRepositoryHasBeenSet = false;

    Aws::String m_pipelineCodebuildRoleArn;
    bool m_pipelineCodebuildRoleArnHasBeenSet = false;

    RepositoryBranchInput m_pipelineProvisioningRepository;
    bool m_pipelineProvisioningRepositoryHasBeenSet = false;

    Aws::String m_pipelineServiceRoleArn;
    bool m_pipelineServiceRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
