/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/RepositoryBranch.h>
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
namespace Proton
{
namespace Model
{

  /**
   * <p>Proton settings that are used for multiple services in the Amazon Web
   * Services account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/AccountSettings">AWS
   * API Reference</a></p>
   */
  class AccountSettings
  {
  public:
    AWS_PROTON_API AccountSettings();
    AWS_PROTON_API AccountSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API AccountSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the service role that Proton uses for
     * provisioning pipelines. Proton assumes this role for CodeBuild-based
     * provisioning.</p>
     */
    inline const Aws::String& GetPipelineCodebuildRoleArn() const{ return m_pipelineCodebuildRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role that Proton uses for
     * provisioning pipelines. Proton assumes this role for CodeBuild-based
     * provisioning.</p>
     */
    inline bool PipelineCodebuildRoleArnHasBeenSet() const { return m_pipelineCodebuildRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role that Proton uses for
     * provisioning pipelines. Proton assumes this role for CodeBuild-based
     * provisioning.</p>
     */
    inline void SetPipelineCodebuildRoleArn(const Aws::String& value) { m_pipelineCodebuildRoleArnHasBeenSet = true; m_pipelineCodebuildRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role that Proton uses for
     * provisioning pipelines. Proton assumes this role for CodeBuild-based
     * provisioning.</p>
     */
    inline void SetPipelineCodebuildRoleArn(Aws::String&& value) { m_pipelineCodebuildRoleArnHasBeenSet = true; m_pipelineCodebuildRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role that Proton uses for
     * provisioning pipelines. Proton assumes this role for CodeBuild-based
     * provisioning.</p>
     */
    inline void SetPipelineCodebuildRoleArn(const char* value) { m_pipelineCodebuildRoleArnHasBeenSet = true; m_pipelineCodebuildRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role that Proton uses for
     * provisioning pipelines. Proton assumes this role for CodeBuild-based
     * provisioning.</p>
     */
    inline AccountSettings& WithPipelineCodebuildRoleArn(const Aws::String& value) { SetPipelineCodebuildRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service role that Proton uses for
     * provisioning pipelines. Proton assumes this role for CodeBuild-based
     * provisioning.</p>
     */
    inline AccountSettings& WithPipelineCodebuildRoleArn(Aws::String&& value) { SetPipelineCodebuildRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service role that Proton uses for
     * provisioning pipelines. Proton assumes this role for CodeBuild-based
     * provisioning.</p>
     */
    inline AccountSettings& WithPipelineCodebuildRoleArn(const char* value) { SetPipelineCodebuildRoleArn(value); return *this;}


    /**
     * <p>The linked repository for pipeline provisioning. Required if you have
     * environments configured for self-managed provisioning with services that include
     * pipelines. A linked repository is a repository that has been registered with
     * Proton. For more information, see <a>CreateRepository</a>.</p>
     */
    inline const RepositoryBranch& GetPipelineProvisioningRepository() const{ return m_pipelineProvisioningRepository; }

    /**
     * <p>The linked repository for pipeline provisioning. Required if you have
     * environments configured for self-managed provisioning with services that include
     * pipelines. A linked repository is a repository that has been registered with
     * Proton. For more information, see <a>CreateRepository</a>.</p>
     */
    inline bool PipelineProvisioningRepositoryHasBeenSet() const { return m_pipelineProvisioningRepositoryHasBeenSet; }

    /**
     * <p>The linked repository for pipeline provisioning. Required if you have
     * environments configured for self-managed provisioning with services that include
     * pipelines. A linked repository is a repository that has been registered with
     * Proton. For more information, see <a>CreateRepository</a>.</p>
     */
    inline void SetPipelineProvisioningRepository(const RepositoryBranch& value) { m_pipelineProvisioningRepositoryHasBeenSet = true; m_pipelineProvisioningRepository = value; }

    /**
     * <p>The linked repository for pipeline provisioning. Required if you have
     * environments configured for self-managed provisioning with services that include
     * pipelines. A linked repository is a repository that has been registered with
     * Proton. For more information, see <a>CreateRepository</a>.</p>
     */
    inline void SetPipelineProvisioningRepository(RepositoryBranch&& value) { m_pipelineProvisioningRepositoryHasBeenSet = true; m_pipelineProvisioningRepository = std::move(value); }

    /**
     * <p>The linked repository for pipeline provisioning. Required if you have
     * environments configured for self-managed provisioning with services that include
     * pipelines. A linked repository is a repository that has been registered with
     * Proton. For more information, see <a>CreateRepository</a>.</p>
     */
    inline AccountSettings& WithPipelineProvisioningRepository(const RepositoryBranch& value) { SetPipelineProvisioningRepository(value); return *this;}

    /**
     * <p>The linked repository for pipeline provisioning. Required if you have
     * environments configured for self-managed provisioning with services that include
     * pipelines. A linked repository is a repository that has been registered with
     * Proton. For more information, see <a>CreateRepository</a>.</p>
     */
    inline AccountSettings& WithPipelineProvisioningRepository(RepositoryBranch&& value) { SetPipelineProvisioningRepository(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p>
     */
    inline const Aws::String& GetPipelineServiceRoleArn() const{ return m_pipelineServiceRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p>
     */
    inline bool PipelineServiceRoleArnHasBeenSet() const { return m_pipelineServiceRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p>
     */
    inline void SetPipelineServiceRoleArn(const Aws::String& value) { m_pipelineServiceRoleArnHasBeenSet = true; m_pipelineServiceRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p>
     */
    inline void SetPipelineServiceRoleArn(Aws::String&& value) { m_pipelineServiceRoleArnHasBeenSet = true; m_pipelineServiceRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p>
     */
    inline void SetPipelineServiceRoleArn(const char* value) { m_pipelineServiceRoleArnHasBeenSet = true; m_pipelineServiceRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p>
     */
    inline AccountSettings& WithPipelineServiceRoleArn(const Aws::String& value) { SetPipelineServiceRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p>
     */
    inline AccountSettings& WithPipelineServiceRoleArn(Aws::String&& value) { SetPipelineServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p>
     */
    inline AccountSettings& WithPipelineServiceRoleArn(const char* value) { SetPipelineServiceRoleArn(value); return *this;}

  private:

    Aws::String m_pipelineCodebuildRoleArn;
    bool m_pipelineCodebuildRoleArnHasBeenSet = false;

    RepositoryBranch m_pipelineProvisioningRepository;
    bool m_pipelineProvisioningRepositoryHasBeenSet = false;

    Aws::String m_pipelineServiceRoleArn;
    bool m_pipelineServiceRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
