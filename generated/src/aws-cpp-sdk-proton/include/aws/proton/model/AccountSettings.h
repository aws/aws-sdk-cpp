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
    AWS_PROTON_API AccountSettings() = default;
    AWS_PROTON_API AccountSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API AccountSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service role that Proton uses for
     * provisioning pipelines. Proton assumes this role for CodeBuild-based
     * provisioning.</p>
     */
    inline const Aws::String& GetPipelineCodebuildRoleArn() const { return m_pipelineCodebuildRoleArn; }
    inline bool PipelineCodebuildRoleArnHasBeenSet() const { return m_pipelineCodebuildRoleArnHasBeenSet; }
    template<typename PipelineCodebuildRoleArnT = Aws::String>
    void SetPipelineCodebuildRoleArn(PipelineCodebuildRoleArnT&& value) { m_pipelineCodebuildRoleArnHasBeenSet = true; m_pipelineCodebuildRoleArn = std::forward<PipelineCodebuildRoleArnT>(value); }
    template<typename PipelineCodebuildRoleArnT = Aws::String>
    AccountSettings& WithPipelineCodebuildRoleArn(PipelineCodebuildRoleArnT&& value) { SetPipelineCodebuildRoleArn(std::forward<PipelineCodebuildRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The linked repository for pipeline provisioning. Required if you have
     * environments configured for self-managed provisioning with services that include
     * pipelines. A linked repository is a repository that has been registered with
     * Proton. For more information, see <a>CreateRepository</a>.</p>
     */
    inline const RepositoryBranch& GetPipelineProvisioningRepository() const { return m_pipelineProvisioningRepository; }
    inline bool PipelineProvisioningRepositoryHasBeenSet() const { return m_pipelineProvisioningRepositoryHasBeenSet; }
    template<typename PipelineProvisioningRepositoryT = RepositoryBranch>
    void SetPipelineProvisioningRepository(PipelineProvisioningRepositoryT&& value) { m_pipelineProvisioningRepositoryHasBeenSet = true; m_pipelineProvisioningRepository = std::forward<PipelineProvisioningRepositoryT>(value); }
    template<typename PipelineProvisioningRepositoryT = RepositoryBranch>
    AccountSettings& WithPipelineProvisioningRepository(PipelineProvisioningRepositoryT&& value) { SetPipelineProvisioningRepository(std::forward<PipelineProvisioningRepositoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service role you want to use for
     * provisioning pipelines. Assumed by Proton for Amazon Web Services-managed
     * provisioning, and by customer-owned automation for self-managed
     * provisioning.</p>
     */
    inline const Aws::String& GetPipelineServiceRoleArn() const { return m_pipelineServiceRoleArn; }
    inline bool PipelineServiceRoleArnHasBeenSet() const { return m_pipelineServiceRoleArnHasBeenSet; }
    template<typename PipelineServiceRoleArnT = Aws::String>
    void SetPipelineServiceRoleArn(PipelineServiceRoleArnT&& value) { m_pipelineServiceRoleArnHasBeenSet = true; m_pipelineServiceRoleArn = std::forward<PipelineServiceRoleArnT>(value); }
    template<typename PipelineServiceRoleArnT = Aws::String>
    AccountSettings& WithPipelineServiceRoleArn(PipelineServiceRoleArnT&& value) { SetPipelineServiceRoleArn(std::forward<PipelineServiceRoleArnT>(value)); return *this;}
    ///@}
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
