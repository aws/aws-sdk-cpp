/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/proton/model/EnvironmentAccountConnectionStatus.h>
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
   * <p>Detailed data of an Proton environment account connection
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/EnvironmentAccountConnection">AWS
   * API Reference</a></p>
   */
  class EnvironmentAccountConnection
  {
  public:
    AWS_PROTON_API EnvironmentAccountConnection() = default;
    AWS_PROTON_API EnvironmentAccountConnection(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API EnvironmentAccountConnection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the environment account connection.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    EnvironmentAccountConnection& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

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
    EnvironmentAccountConnection& WithCodebuildRoleArn(CodebuildRoleArnT&& value) { SetCodebuildRoleArn(std::forward<CodebuildRoleArnT>(value)); return *this;}
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
    EnvironmentAccountConnection& WithComponentRoleArn(ComponentRoleArnT&& value) { SetComponentRoleArn(std::forward<ComponentRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment account that's connected to the environment account
     * connection.</p>
     */
    inline const Aws::String& GetEnvironmentAccountId() const { return m_environmentAccountId; }
    inline bool EnvironmentAccountIdHasBeenSet() const { return m_environmentAccountIdHasBeenSet; }
    template<typename EnvironmentAccountIdT = Aws::String>
    void SetEnvironmentAccountId(EnvironmentAccountIdT&& value) { m_environmentAccountIdHasBeenSet = true; m_environmentAccountId = std::forward<EnvironmentAccountIdT>(value); }
    template<typename EnvironmentAccountIdT = Aws::String>
    EnvironmentAccountConnection& WithEnvironmentAccountId(EnvironmentAccountIdT&& value) { SetEnvironmentAccountId(std::forward<EnvironmentAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment that's associated with the environment account
     * connection.</p>
     */
    inline const Aws::String& GetEnvironmentName() const { return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    template<typename EnvironmentNameT = Aws::String>
    void SetEnvironmentName(EnvironmentNameT&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::forward<EnvironmentNameT>(value); }
    template<typename EnvironmentNameT = Aws::String>
    EnvironmentAccountConnection& WithEnvironmentName(EnvironmentNameT&& value) { SetEnvironmentName(std::forward<EnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment account connection.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    EnvironmentAccountConnection& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the environment account connection was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const { return m_lastModifiedAt; }
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    void SetLastModifiedAt(LastModifiedAtT&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::forward<LastModifiedAtT>(value); }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    EnvironmentAccountConnection& WithLastModifiedAt(LastModifiedAtT&& value) { SetLastModifiedAt(std::forward<LastModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the management account that's connected to the environment account
     * connection.</p>
     */
    inline const Aws::String& GetManagementAccountId() const { return m_managementAccountId; }
    inline bool ManagementAccountIdHasBeenSet() const { return m_managementAccountIdHasBeenSet; }
    template<typename ManagementAccountIdT = Aws::String>
    void SetManagementAccountId(ManagementAccountIdT&& value) { m_managementAccountIdHasBeenSet = true; m_managementAccountId = std::forward<ManagementAccountIdT>(value); }
    template<typename ManagementAccountIdT = Aws::String>
    EnvironmentAccountConnection& WithManagementAccountId(ManagementAccountIdT&& value) { SetManagementAccountId(std::forward<ManagementAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the environment account connection request was made.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedAt() const { return m_requestedAt; }
    inline bool RequestedAtHasBeenSet() const { return m_requestedAtHasBeenSet; }
    template<typename RequestedAtT = Aws::Utils::DateTime>
    void SetRequestedAt(RequestedAtT&& value) { m_requestedAtHasBeenSet = true; m_requestedAt = std::forward<RequestedAtT>(value); }
    template<typename RequestedAtT = Aws::Utils::DateTime>
    EnvironmentAccountConnection& WithRequestedAt(RequestedAtT&& value) { SetRequestedAt(std::forward<RequestedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM service role that's associated with the environment account
     * connection.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    EnvironmentAccountConnection& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the environment account connection.</p>
     */
    inline EnvironmentAccountConnectionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EnvironmentAccountConnectionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline EnvironmentAccountConnection& WithStatus(EnvironmentAccountConnectionStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_codebuildRoleArn;
    bool m_codebuildRoleArnHasBeenSet = false;

    Aws::String m_componentRoleArn;
    bool m_componentRoleArnHasBeenSet = false;

    Aws::String m_environmentAccountId;
    bool m_environmentAccountIdHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt{};
    bool m_lastModifiedAtHasBeenSet = false;

    Aws::String m_managementAccountId;
    bool m_managementAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_requestedAt{};
    bool m_requestedAtHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    EnvironmentAccountConnectionStatus m_status{EnvironmentAccountConnectionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
