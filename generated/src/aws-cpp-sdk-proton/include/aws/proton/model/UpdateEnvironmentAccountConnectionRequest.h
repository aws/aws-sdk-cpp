/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class UpdateEnvironmentAccountConnectionRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API UpdateEnvironmentAccountConnectionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEnvironmentAccountConnection"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role in the environment
     * account. Proton uses this role to provision infrastructure resources using
     * CodeBuild-based provisioning in the associated environment account.</p>
     */
    inline const Aws::String& GetCodebuildRoleArn() const { return m_codebuildRoleArn; }
    inline bool CodebuildRoleArnHasBeenSet() const { return m_codebuildRoleArnHasBeenSet; }
    template<typename CodebuildRoleArnT = Aws::String>
    void SetCodebuildRoleArn(CodebuildRoleArnT&& value) { m_codebuildRoleArnHasBeenSet = true; m_codebuildRoleArn = std::forward<CodebuildRoleArnT>(value); }
    template<typename CodebuildRoleArnT = Aws::String>
    UpdateEnvironmentAccountConnectionRequest& WithCodebuildRoleArn(CodebuildRoleArnT&& value) { SetCodebuildRoleArn(std::forward<CodebuildRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in the associated environment account.
     * It determines the scope of infrastructure that a component can provision in the
     * account.</p> <p>The environment account connection must have a
     * <code>componentRoleArn</code> to allow directly defined components to be
     * associated with any environments running in the account.</p> <p>For more
     * information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::String& GetComponentRoleArn() const { return m_componentRoleArn; }
    inline bool ComponentRoleArnHasBeenSet() const { return m_componentRoleArnHasBeenSet; }
    template<typename ComponentRoleArnT = Aws::String>
    void SetComponentRoleArn(ComponentRoleArnT&& value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn = std::forward<ComponentRoleArnT>(value); }
    template<typename ComponentRoleArnT = Aws::String>
    UpdateEnvironmentAccountConnectionRequest& WithComponentRoleArn(ComponentRoleArnT&& value) { SetComponentRoleArn(std::forward<ComponentRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment account connection to update.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    UpdateEnvironmentAccountConnectionRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that's associated with
     * the environment account connection to update.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateEnvironmentAccountConnectionRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_codebuildRoleArn;
    bool m_codebuildRoleArnHasBeenSet = false;

    Aws::String m_componentRoleArn;
    bool m_componentRoleArnHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
