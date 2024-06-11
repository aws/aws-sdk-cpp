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
    AWS_PROTON_API UpdateEnvironmentAccountConnectionRequest();

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
    inline const Aws::String& GetCodebuildRoleArn() const{ return m_codebuildRoleArn; }
    inline bool CodebuildRoleArnHasBeenSet() const { return m_codebuildRoleArnHasBeenSet; }
    inline void SetCodebuildRoleArn(const Aws::String& value) { m_codebuildRoleArnHasBeenSet = true; m_codebuildRoleArn = value; }
    inline void SetCodebuildRoleArn(Aws::String&& value) { m_codebuildRoleArnHasBeenSet = true; m_codebuildRoleArn = std::move(value); }
    inline void SetCodebuildRoleArn(const char* value) { m_codebuildRoleArnHasBeenSet = true; m_codebuildRoleArn.assign(value); }
    inline UpdateEnvironmentAccountConnectionRequest& WithCodebuildRoleArn(const Aws::String& value) { SetCodebuildRoleArn(value); return *this;}
    inline UpdateEnvironmentAccountConnectionRequest& WithCodebuildRoleArn(Aws::String&& value) { SetCodebuildRoleArn(std::move(value)); return *this;}
    inline UpdateEnvironmentAccountConnectionRequest& WithCodebuildRoleArn(const char* value) { SetCodebuildRoleArn(value); return *this;}
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
    inline const Aws::String& GetComponentRoleArn() const{ return m_componentRoleArn; }
    inline bool ComponentRoleArnHasBeenSet() const { return m_componentRoleArnHasBeenSet; }
    inline void SetComponentRoleArn(const Aws::String& value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn = value; }
    inline void SetComponentRoleArn(Aws::String&& value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn = std::move(value); }
    inline void SetComponentRoleArn(const char* value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn.assign(value); }
    inline UpdateEnvironmentAccountConnectionRequest& WithComponentRoleArn(const Aws::String& value) { SetComponentRoleArn(value); return *this;}
    inline UpdateEnvironmentAccountConnectionRequest& WithComponentRoleArn(Aws::String&& value) { SetComponentRoleArn(std::move(value)); return *this;}
    inline UpdateEnvironmentAccountConnectionRequest& WithComponentRoleArn(const char* value) { SetComponentRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment account connection to update.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateEnvironmentAccountConnectionRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateEnvironmentAccountConnectionRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateEnvironmentAccountConnectionRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that's associated with
     * the environment account connection to update.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline UpdateEnvironmentAccountConnectionRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline UpdateEnvironmentAccountConnectionRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline UpdateEnvironmentAccountConnectionRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
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
