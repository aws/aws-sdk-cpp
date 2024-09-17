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
   * <p>Summary data of an Proton environment account connection
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/EnvironmentAccountConnectionSummary">AWS
   * API Reference</a></p>
   */
  class EnvironmentAccountConnectionSummary
  {
  public:
    AWS_PROTON_API EnvironmentAccountConnectionSummary();
    AWS_PROTON_API EnvironmentAccountConnectionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API EnvironmentAccountConnectionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the environment account connection.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline EnvironmentAccountConnectionSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline EnvironmentAccountConnectionSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline EnvironmentAccountConnectionSummary& WithArn(const char* value) { SetArn(value); return *this;}
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
    inline EnvironmentAccountConnectionSummary& WithComponentRoleArn(const Aws::String& value) { SetComponentRoleArn(value); return *this;}
    inline EnvironmentAccountConnectionSummary& WithComponentRoleArn(Aws::String&& value) { SetComponentRoleArn(std::move(value)); return *this;}
    inline EnvironmentAccountConnectionSummary& WithComponentRoleArn(const char* value) { SetComponentRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment account that's connected to the environment account
     * connection.</p>
     */
    inline const Aws::String& GetEnvironmentAccountId() const{ return m_environmentAccountId; }
    inline bool EnvironmentAccountIdHasBeenSet() const { return m_environmentAccountIdHasBeenSet; }
    inline void SetEnvironmentAccountId(const Aws::String& value) { m_environmentAccountIdHasBeenSet = true; m_environmentAccountId = value; }
    inline void SetEnvironmentAccountId(Aws::String&& value) { m_environmentAccountIdHasBeenSet = true; m_environmentAccountId = std::move(value); }
    inline void SetEnvironmentAccountId(const char* value) { m_environmentAccountIdHasBeenSet = true; m_environmentAccountId.assign(value); }
    inline EnvironmentAccountConnectionSummary& WithEnvironmentAccountId(const Aws::String& value) { SetEnvironmentAccountId(value); return *this;}
    inline EnvironmentAccountConnectionSummary& WithEnvironmentAccountId(Aws::String&& value) { SetEnvironmentAccountId(std::move(value)); return *this;}
    inline EnvironmentAccountConnectionSummary& WithEnvironmentAccountId(const char* value) { SetEnvironmentAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment that's associated with the environment account
     * connection.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }
    inline EnvironmentAccountConnectionSummary& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}
    inline EnvironmentAccountConnectionSummary& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}
    inline EnvironmentAccountConnectionSummary& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment account connection.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline EnvironmentAccountConnectionSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline EnvironmentAccountConnectionSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline EnvironmentAccountConnectionSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the environment account connection was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const{ return m_lastModifiedAt; }
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }
    inline void SetLastModifiedAt(const Aws::Utils::DateTime& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = value; }
    inline void SetLastModifiedAt(Aws::Utils::DateTime&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::move(value); }
    inline EnvironmentAccountConnectionSummary& WithLastModifiedAt(const Aws::Utils::DateTime& value) { SetLastModifiedAt(value); return *this;}
    inline EnvironmentAccountConnectionSummary& WithLastModifiedAt(Aws::Utils::DateTime&& value) { SetLastModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the management account that's connected to the environment account
     * connection.</p>
     */
    inline const Aws::String& GetManagementAccountId() const{ return m_managementAccountId; }
    inline bool ManagementAccountIdHasBeenSet() const { return m_managementAccountIdHasBeenSet; }
    inline void SetManagementAccountId(const Aws::String& value) { m_managementAccountIdHasBeenSet = true; m_managementAccountId = value; }
    inline void SetManagementAccountId(Aws::String&& value) { m_managementAccountIdHasBeenSet = true; m_managementAccountId = std::move(value); }
    inline void SetManagementAccountId(const char* value) { m_managementAccountIdHasBeenSet = true; m_managementAccountId.assign(value); }
    inline EnvironmentAccountConnectionSummary& WithManagementAccountId(const Aws::String& value) { SetManagementAccountId(value); return *this;}
    inline EnvironmentAccountConnectionSummary& WithManagementAccountId(Aws::String&& value) { SetManagementAccountId(std::move(value)); return *this;}
    inline EnvironmentAccountConnectionSummary& WithManagementAccountId(const char* value) { SetManagementAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the environment account connection request was made.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestedAt() const{ return m_requestedAt; }
    inline bool RequestedAtHasBeenSet() const { return m_requestedAtHasBeenSet; }
    inline void SetRequestedAt(const Aws::Utils::DateTime& value) { m_requestedAtHasBeenSet = true; m_requestedAt = value; }
    inline void SetRequestedAt(Aws::Utils::DateTime&& value) { m_requestedAtHasBeenSet = true; m_requestedAt = std::move(value); }
    inline EnvironmentAccountConnectionSummary& WithRequestedAt(const Aws::Utils::DateTime& value) { SetRequestedAt(value); return *this;}
    inline EnvironmentAccountConnectionSummary& WithRequestedAt(Aws::Utils::DateTime&& value) { SetRequestedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM service role that's associated with the environment account
     * connection.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline EnvironmentAccountConnectionSummary& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline EnvironmentAccountConnectionSummary& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline EnvironmentAccountConnectionSummary& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the environment account connection.</p>
     */
    inline const EnvironmentAccountConnectionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const EnvironmentAccountConnectionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(EnvironmentAccountConnectionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline EnvironmentAccountConnectionSummary& WithStatus(const EnvironmentAccountConnectionStatus& value) { SetStatus(value); return *this;}
    inline EnvironmentAccountConnectionSummary& WithStatus(EnvironmentAccountConnectionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_componentRoleArn;
    bool m_componentRoleArnHasBeenSet = false;

    Aws::String m_environmentAccountId;
    bool m_environmentAccountIdHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt;
    bool m_lastModifiedAtHasBeenSet = false;

    Aws::String m_managementAccountId;
    bool m_managementAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_requestedAt;
    bool m_requestedAtHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    EnvironmentAccountConnectionStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
