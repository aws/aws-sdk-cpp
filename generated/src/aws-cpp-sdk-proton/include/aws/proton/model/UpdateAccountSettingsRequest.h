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
    AWS_PROTON_API UpdateAccountSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccountSettings"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Set to <code>true</code> to remove a configured pipeline repository from the
     * account settings. Don't set this field if you are updating the configured
     * pipeline repository.</p>
     */
    inline bool GetDeletePipelineProvisioningRepository() const{ return m_deletePipelineProvisioningRepository; }

    /**
     * <p>Set to <code>true</code> to remove a configured pipeline repository from the
     * account settings. Don't set this field if you are updating the configured
     * pipeline repository.</p>
     */
    inline bool DeletePipelineProvisioningRepositoryHasBeenSet() const { return m_deletePipelineProvisioningRepositoryHasBeenSet; }

    /**
     * <p>Set to <code>true</code> to remove a configured pipeline repository from the
     * account settings. Don't set this field if you are updating the configured
     * pipeline repository.</p>
     */
    inline void SetDeletePipelineProvisioningRepository(bool value) { m_deletePipelineProvisioningRepositoryHasBeenSet = true; m_deletePipelineProvisioningRepository = value; }

    /**
     * <p>Set to <code>true</code> to remove a configured pipeline repository from the
     * account settings. Don't set this field if you are updating the configured
     * pipeline repository.</p>
     */
    inline UpdateAccountSettingsRequest& WithDeletePipelineProvisioningRepository(bool value) { SetDeletePipelineProvisioningRepository(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Proton assumes this role for CodeBuild-based
     * provisioning.</p>
     */
    inline const Aws::String& GetPipelineCodebuildRoleArn() const{ return m_pipelineCodebuildRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Proton assumes this role for CodeBuild-based
     * provisioning.</p>
     */
    inline bool PipelineCodebuildRoleArnHasBeenSet() const { return m_pipelineCodebuildRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Proton assumes this role for CodeBuild-based
     * provisioning.</p>
     */
    inline void SetPipelineCodebuildRoleArn(const Aws::String& value) { m_pipelineCodebuildRoleArnHasBeenSet = true; m_pipelineCodebuildRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Proton assumes this role for CodeBuild-based
     * provisioning.</p>
     */
    inline void SetPipelineCodebuildRoleArn(Aws::String&& value) { m_pipelineCodebuildRoleArnHasBeenSet = true; m_pipelineCodebuildRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Proton assumes this role for CodeBuild-based
     * provisioning.</p>
     */
    inline void SetPipelineCodebuildRoleArn(const char* value) { m_pipelineCodebuildRoleArnHasBeenSet = true; m_pipelineCodebuildRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Proton assumes this role for CodeBuild-based
     * provisioning.</p>
     */
    inline UpdateAccountSettingsRequest& WithPipelineCodebuildRoleArn(const Aws::String& value) { SetPipelineCodebuildRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Proton assumes this role for CodeBuild-based
     * provisioning.</p>
     */
    inline UpdateAccountSettingsRequest& WithPipelineCodebuildRoleArn(Aws::String&& value) { SetPipelineCodebuildRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Proton assumes this role for CodeBuild-based
     * provisioning.</p>
     */
    inline UpdateAccountSettingsRequest& WithPipelineCodebuildRoleArn(const char* value) { SetPipelineCodebuildRoleArn(value); return *this;}


    /**
     * <p>A linked repository for pipeline provisioning. Specify it if you have
     * environments configured for self-managed provisioning with services that include
     * pipelines. A linked repository is a repository that has been registered with
     * Proton. For more information, see <a>CreateRepository</a>.</p> <p>To remove a
     * previously configured repository, set
     * <code>deletePipelineProvisioningRepository</code> to <code>true</code>, and
     * don't set <code>pipelineProvisioningRepository</code>.</p>
     */
    inline const RepositoryBranchInput& GetPipelineProvisioningRepository() const{ return m_pipelineProvisioningRepository; }

    /**
     * <p>A linked repository for pipeline provisioning. Specify it if you have
     * environments configured for self-managed provisioning with services that include
     * pipelines. A linked repository is a repository that has been registered with
     * Proton. For more information, see <a>CreateRepository</a>.</p> <p>To remove a
     * previously configured repository, set
     * <code>deletePipelineProvisioningRepository</code> to <code>true</code>, and
     * don't set <code>pipelineProvisioningRepository</code>.</p>
     */
    inline bool PipelineProvisioningRepositoryHasBeenSet() const { return m_pipelineProvisioningRepositoryHasBeenSet; }

    /**
     * <p>A linked repository for pipeline provisioning. Specify it if you have
     * environments configured for self-managed provisioning with services that include
     * pipelines. A linked repository is a repository that has been registered with
     * Proton. For more information, see <a>CreateRepository</a>.</p> <p>To remove a
     * previously configured repository, set
     * <code>deletePipelineProvisioningRepository</code> to <code>true</code>, and
     * don't set <code>pipelineProvisioningRepository</code>.</p>
     */
    inline void SetPipelineProvisioningRepository(const RepositoryBranchInput& value) { m_pipelineProvisioningRepositoryHasBeenSet = true; m_pipelineProvisioningRepository = value; }

    /**
     * <p>A linked repository for pipeline provisioning. Specify it if you have
     * environments configured for self-managed provisioning with services that include
     * pipelines. A linked repository is a repository that has been registered with
     * Proton. For more information, see <a>CreateRepository</a>.</p> <p>To remove a
     * previously configured repository, set
     * <code>deletePipelineProvisioningRepository</code> to <code>true</code>, and
     * don't set <code>pipelineProvisioningRepository</code>.</p>
     */
    inline void SetPipelineProvisioningRepository(RepositoryBranchInput&& value) { m_pipelineProvisioningRepositoryHasBeenSet = true; m_pipelineProvisioningRepository = std::move(value); }

    /**
     * <p>A linked repository for pipeline provisioning. Specify it if you have
     * environments configured for self-managed provisioning with services that include
     * pipelines. A linked repository is a repository that has been registered with
     * Proton. For more information, see <a>CreateRepository</a>.</p> <p>To remove a
     * previously configured repository, set
     * <code>deletePipelineProvisioningRepository</code> to <code>true</code>, and
     * don't set <code>pipelineProvisioningRepository</code>.</p>
     */
    inline UpdateAccountSettingsRequest& WithPipelineProvisioningRepository(const RepositoryBranchInput& value) { SetPipelineProvisioningRepository(value); return *this;}

    /**
     * <p>A linked repository for pipeline provisioning. Specify it if you have
     * environments configured for self-managed provisioning with services that include
     * pipelines. A linked repository is a repository that has been registered with
     * Proton. For more information, see <a>CreateRepository</a>.</p> <p>To remove a
     * previously configured repository, set
     * <code>deletePipelineProvisioningRepository</code> to <code>true</code>, and
     * don't set <code>pipelineProvisioningRepository</code>.</p>
     */
    inline UpdateAccountSettingsRequest& WithPipelineProvisioningRepository(RepositoryBranchInput&& value) { SetPipelineProvisioningRepository(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p> <p>To remove a previously configured ARN, specify an empty
     * string.</p>
     */
    inline const Aws::String& GetPipelineServiceRoleArn() const{ return m_pipelineServiceRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p> <p>To remove a previously configured ARN, specify an empty
     * string.</p>
     */
    inline bool PipelineServiceRoleArnHasBeenSet() const { return m_pipelineServiceRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p> <p>To remove a previously configured ARN, specify an empty
     * string.</p>
     */
    inline void SetPipelineServiceRoleArn(const Aws::String& value) { m_pipelineServiceRoleArnHasBeenSet = true; m_pipelineServiceRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p> <p>To remove a previously configured ARN, specify an empty
     * string.</p>
     */
    inline void SetPipelineServiceRoleArn(Aws::String&& value) { m_pipelineServiceRoleArnHasBeenSet = true; m_pipelineServiceRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p> <p>To remove a previously configured ARN, specify an empty
     * string.</p>
     */
    inline void SetPipelineServiceRoleArn(const char* value) { m_pipelineServiceRoleArnHasBeenSet = true; m_pipelineServiceRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p> <p>To remove a previously configured ARN, specify an empty
     * string.</p>
     */
    inline UpdateAccountSettingsRequest& WithPipelineServiceRoleArn(const Aws::String& value) { SetPipelineServiceRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p> <p>To remove a previously configured ARN, specify an empty
     * string.</p>
     */
    inline UpdateAccountSettingsRequest& WithPipelineServiceRoleArn(Aws::String&& value) { SetPipelineServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p> <p>To remove a previously configured ARN, specify an empty
     * string.</p>
     */
    inline UpdateAccountSettingsRequest& WithPipelineServiceRoleArn(const char* value) { SetPipelineServiceRoleArn(value); return *this;}

  private:

    bool m_deletePipelineProvisioningRepository;
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
