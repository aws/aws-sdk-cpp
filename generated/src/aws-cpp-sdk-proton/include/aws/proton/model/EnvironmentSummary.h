/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/proton/model/DeploymentStatus.h>
#include <aws/proton/model/Provisioning.h>
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
   * <p>Summary data of an Proton environment resource. An Proton environment is a
   * set of resources shared across Proton services.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/EnvironmentSummary">AWS
   * API Reference</a></p>
   */
  class EnvironmentSummary
  {
  public:
    AWS_PROTON_API EnvironmentSummary();
    AWS_PROTON_API EnvironmentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API EnvironmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline EnvironmentSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline EnvironmentSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the environment.</p>
     */
    inline EnvironmentSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in this environment. It determines the
     * scope of infrastructure that a component can provision.</p> <p>The environment
     * must have a <code>componentRoleArn</code> to allow directly defined components
     * to be associated with the environment.</p> <p>For more information about
     * components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::String& GetComponentRoleArn() const{ return m_componentRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in this environment. It determines the
     * scope of infrastructure that a component can provision.</p> <p>The environment
     * must have a <code>componentRoleArn</code> to allow directly defined components
     * to be associated with the environment.</p> <p>For more information about
     * components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline bool ComponentRoleArnHasBeenSet() const { return m_componentRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in this environment. It determines the
     * scope of infrastructure that a component can provision.</p> <p>The environment
     * must have a <code>componentRoleArn</code> to allow directly defined components
     * to be associated with the environment.</p> <p>For more information about
     * components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetComponentRoleArn(const Aws::String& value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in this environment. It determines the
     * scope of infrastructure that a component can provision.</p> <p>The environment
     * must have a <code>componentRoleArn</code> to allow directly defined components
     * to be associated with the environment.</p> <p>For more information about
     * components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetComponentRoleArn(Aws::String&& value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in this environment. It determines the
     * scope of infrastructure that a component can provision.</p> <p>The environment
     * must have a <code>componentRoleArn</code> to allow directly defined components
     * to be associated with the environment.</p> <p>For more information about
     * components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline void SetComponentRoleArn(const char* value) { m_componentRoleArnHasBeenSet = true; m_componentRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in this environment. It determines the
     * scope of infrastructure that a component can provision.</p> <p>The environment
     * must have a <code>componentRoleArn</code> to allow directly defined components
     * to be associated with the environment.</p> <p>For more information about
     * components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline EnvironmentSummary& WithComponentRoleArn(const Aws::String& value) { SetComponentRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in this environment. It determines the
     * scope of infrastructure that a component can provision.</p> <p>The environment
     * must have a <code>componentRoleArn</code> to allow directly defined components
     * to be associated with the environment.</p> <p>For more information about
     * components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline EnvironmentSummary& WithComponentRoleArn(Aws::String&& value) { SetComponentRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM service role that Proton uses when
     * provisioning directly defined components in this environment. It determines the
     * scope of infrastructure that a component can provision.</p> <p>The environment
     * must have a <code>componentRoleArn</code> to allow directly defined components
     * to be associated with the environment.</p> <p>For more information about
     * components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline EnvironmentSummary& WithComponentRoleArn(const char* value) { SetComponentRoleArn(value); return *this;}


    /**
     * <p>The time when the environment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time when the environment was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time when the environment was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time when the environment was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time when the environment was created.</p>
     */
    inline EnvironmentSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time when the environment was created.</p>
     */
    inline EnvironmentSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The environment deployment status.</p>
     */
    inline const DeploymentStatus& GetDeploymentStatus() const{ return m_deploymentStatus; }

    /**
     * <p>The environment deployment status.</p>
     */
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }

    /**
     * <p>The environment deployment status.</p>
     */
    inline void SetDeploymentStatus(const DeploymentStatus& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }

    /**
     * <p>The environment deployment status.</p>
     */
    inline void SetDeploymentStatus(DeploymentStatus&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::move(value); }

    /**
     * <p>The environment deployment status.</p>
     */
    inline EnvironmentSummary& WithDeploymentStatus(const DeploymentStatus& value) { SetDeploymentStatus(value); return *this;}

    /**
     * <p>The environment deployment status.</p>
     */
    inline EnvironmentSummary& WithDeploymentStatus(DeploymentStatus&& value) { SetDeploymentStatus(std::move(value)); return *this;}


    /**
     * <p>An environment deployment status message.</p>
     */
    inline const Aws::String& GetDeploymentStatusMessage() const{ return m_deploymentStatusMessage; }

    /**
     * <p>An environment deployment status message.</p>
     */
    inline bool DeploymentStatusMessageHasBeenSet() const { return m_deploymentStatusMessageHasBeenSet; }

    /**
     * <p>An environment deployment status message.</p>
     */
    inline void SetDeploymentStatusMessage(const Aws::String& value) { m_deploymentStatusMessageHasBeenSet = true; m_deploymentStatusMessage = value; }

    /**
     * <p>An environment deployment status message.</p>
     */
    inline void SetDeploymentStatusMessage(Aws::String&& value) { m_deploymentStatusMessageHasBeenSet = true; m_deploymentStatusMessage = std::move(value); }

    /**
     * <p>An environment deployment status message.</p>
     */
    inline void SetDeploymentStatusMessage(const char* value) { m_deploymentStatusMessageHasBeenSet = true; m_deploymentStatusMessage.assign(value); }

    /**
     * <p>An environment deployment status message.</p>
     */
    inline EnvironmentSummary& WithDeploymentStatusMessage(const Aws::String& value) { SetDeploymentStatusMessage(value); return *this;}

    /**
     * <p>An environment deployment status message.</p>
     */
    inline EnvironmentSummary& WithDeploymentStatusMessage(Aws::String&& value) { SetDeploymentStatusMessage(std::move(value)); return *this;}

    /**
     * <p>An environment deployment status message.</p>
     */
    inline EnvironmentSummary& WithDeploymentStatusMessage(const char* value) { SetDeploymentStatusMessage(value); return *this;}


    /**
     * <p>The description of the environment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the environment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the environment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the environment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the environment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the environment.</p>
     */
    inline EnvironmentSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the environment.</p>
     */
    inline EnvironmentSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the environment.</p>
     */
    inline EnvironmentSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the environment account connection that the environment is
     * associated with.</p>
     */
    inline const Aws::String& GetEnvironmentAccountConnectionId() const{ return m_environmentAccountConnectionId; }

    /**
     * <p>The ID of the environment account connection that the environment is
     * associated with.</p>
     */
    inline bool EnvironmentAccountConnectionIdHasBeenSet() const { return m_environmentAccountConnectionIdHasBeenSet; }

    /**
     * <p>The ID of the environment account connection that the environment is
     * associated with.</p>
     */
    inline void SetEnvironmentAccountConnectionId(const Aws::String& value) { m_environmentAccountConnectionIdHasBeenSet = true; m_environmentAccountConnectionId = value; }

    /**
     * <p>The ID of the environment account connection that the environment is
     * associated with.</p>
     */
    inline void SetEnvironmentAccountConnectionId(Aws::String&& value) { m_environmentAccountConnectionIdHasBeenSet = true; m_environmentAccountConnectionId = std::move(value); }

    /**
     * <p>The ID of the environment account connection that the environment is
     * associated with.</p>
     */
    inline void SetEnvironmentAccountConnectionId(const char* value) { m_environmentAccountConnectionIdHasBeenSet = true; m_environmentAccountConnectionId.assign(value); }

    /**
     * <p>The ID of the environment account connection that the environment is
     * associated with.</p>
     */
    inline EnvironmentSummary& WithEnvironmentAccountConnectionId(const Aws::String& value) { SetEnvironmentAccountConnectionId(value); return *this;}

    /**
     * <p>The ID of the environment account connection that the environment is
     * associated with.</p>
     */
    inline EnvironmentSummary& WithEnvironmentAccountConnectionId(Aws::String&& value) { SetEnvironmentAccountConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment account connection that the environment is
     * associated with.</p>
     */
    inline EnvironmentSummary& WithEnvironmentAccountConnectionId(const char* value) { SetEnvironmentAccountConnectionId(value); return *this;}


    /**
     * <p>The ID of the environment account that the environment infrastructure
     * resources are provisioned in.</p>
     */
    inline const Aws::String& GetEnvironmentAccountId() const{ return m_environmentAccountId; }

    /**
     * <p>The ID of the environment account that the environment infrastructure
     * resources are provisioned in.</p>
     */
    inline bool EnvironmentAccountIdHasBeenSet() const { return m_environmentAccountIdHasBeenSet; }

    /**
     * <p>The ID of the environment account that the environment infrastructure
     * resources are provisioned in.</p>
     */
    inline void SetEnvironmentAccountId(const Aws::String& value) { m_environmentAccountIdHasBeenSet = true; m_environmentAccountId = value; }

    /**
     * <p>The ID of the environment account that the environment infrastructure
     * resources are provisioned in.</p>
     */
    inline void SetEnvironmentAccountId(Aws::String&& value) { m_environmentAccountIdHasBeenSet = true; m_environmentAccountId = std::move(value); }

    /**
     * <p>The ID of the environment account that the environment infrastructure
     * resources are provisioned in.</p>
     */
    inline void SetEnvironmentAccountId(const char* value) { m_environmentAccountIdHasBeenSet = true; m_environmentAccountId.assign(value); }

    /**
     * <p>The ID of the environment account that the environment infrastructure
     * resources are provisioned in.</p>
     */
    inline EnvironmentSummary& WithEnvironmentAccountId(const Aws::String& value) { SetEnvironmentAccountId(value); return *this;}

    /**
     * <p>The ID of the environment account that the environment infrastructure
     * resources are provisioned in.</p>
     */
    inline EnvironmentSummary& WithEnvironmentAccountId(Aws::String&& value) { SetEnvironmentAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment account that the environment infrastructure
     * resources are provisioned in.</p>
     */
    inline EnvironmentSummary& WithEnvironmentAccountId(const char* value) { SetEnvironmentAccountId(value); return *this;}


    /**
     * <p>The time when a deployment of the environment was last attempted.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDeploymentAttemptedAt() const{ return m_lastDeploymentAttemptedAt; }

    /**
     * <p>The time when a deployment of the environment was last attempted.</p>
     */
    inline bool LastDeploymentAttemptedAtHasBeenSet() const { return m_lastDeploymentAttemptedAtHasBeenSet; }

    /**
     * <p>The time when a deployment of the environment was last attempted.</p>
     */
    inline void SetLastDeploymentAttemptedAt(const Aws::Utils::DateTime& value) { m_lastDeploymentAttemptedAtHasBeenSet = true; m_lastDeploymentAttemptedAt = value; }

    /**
     * <p>The time when a deployment of the environment was last attempted.</p>
     */
    inline void SetLastDeploymentAttemptedAt(Aws::Utils::DateTime&& value) { m_lastDeploymentAttemptedAtHasBeenSet = true; m_lastDeploymentAttemptedAt = std::move(value); }

    /**
     * <p>The time when a deployment of the environment was last attempted.</p>
     */
    inline EnvironmentSummary& WithLastDeploymentAttemptedAt(const Aws::Utils::DateTime& value) { SetLastDeploymentAttemptedAt(value); return *this;}

    /**
     * <p>The time when a deployment of the environment was last attempted.</p>
     */
    inline EnvironmentSummary& WithLastDeploymentAttemptedAt(Aws::Utils::DateTime&& value) { SetLastDeploymentAttemptedAt(std::move(value)); return *this;}


    /**
     * <p>The time when the environment was last deployed successfully.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDeploymentSucceededAt() const{ return m_lastDeploymentSucceededAt; }

    /**
     * <p>The time when the environment was last deployed successfully.</p>
     */
    inline bool LastDeploymentSucceededAtHasBeenSet() const { return m_lastDeploymentSucceededAtHasBeenSet; }

    /**
     * <p>The time when the environment was last deployed successfully.</p>
     */
    inline void SetLastDeploymentSucceededAt(const Aws::Utils::DateTime& value) { m_lastDeploymentSucceededAtHasBeenSet = true; m_lastDeploymentSucceededAt = value; }

    /**
     * <p>The time when the environment was last deployed successfully.</p>
     */
    inline void SetLastDeploymentSucceededAt(Aws::Utils::DateTime&& value) { m_lastDeploymentSucceededAtHasBeenSet = true; m_lastDeploymentSucceededAt = std::move(value); }

    /**
     * <p>The time when the environment was last deployed successfully.</p>
     */
    inline EnvironmentSummary& WithLastDeploymentSucceededAt(const Aws::Utils::DateTime& value) { SetLastDeploymentSucceededAt(value); return *this;}

    /**
     * <p>The time when the environment was last deployed successfully.</p>
     */
    inline EnvironmentSummary& WithLastDeploymentSucceededAt(Aws::Utils::DateTime&& value) { SetLastDeploymentSucceededAt(std::move(value)); return *this;}


    /**
     * <p>The name of the environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the environment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the environment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the environment.</p>
     */
    inline EnvironmentSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline EnvironmentSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment.</p>
     */
    inline EnvironmentSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make calls to other services on your behalf.</p>
     */
    inline const Aws::String& GetProtonServiceRoleArn() const{ return m_protonServiceRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make calls to other services on your behalf.</p>
     */
    inline bool ProtonServiceRoleArnHasBeenSet() const { return m_protonServiceRoleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make calls to other services on your behalf.</p>
     */
    inline void SetProtonServiceRoleArn(const Aws::String& value) { m_protonServiceRoleArnHasBeenSet = true; m_protonServiceRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make calls to other services on your behalf.</p>
     */
    inline void SetProtonServiceRoleArn(Aws::String&& value) { m_protonServiceRoleArnHasBeenSet = true; m_protonServiceRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make calls to other services on your behalf.</p>
     */
    inline void SetProtonServiceRoleArn(const char* value) { m_protonServiceRoleArnHasBeenSet = true; m_protonServiceRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make calls to other services on your behalf.</p>
     */
    inline EnvironmentSummary& WithProtonServiceRoleArn(const Aws::String& value) { SetProtonServiceRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make calls to other services on your behalf.</p>
     */
    inline EnvironmentSummary& WithProtonServiceRoleArn(Aws::String&& value) { SetProtonServiceRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Proton service role that allows Proton
     * to make calls to other services on your behalf.</p>
     */
    inline EnvironmentSummary& WithProtonServiceRoleArn(const char* value) { SetProtonServiceRoleArn(value); return *this;}


    /**
     * <p>When included, indicates that the environment template is for customer
     * provisioned and managed infrastructure.</p>
     */
    inline const Provisioning& GetProvisioning() const{ return m_provisioning; }

    /**
     * <p>When included, indicates that the environment template is for customer
     * provisioned and managed infrastructure.</p>
     */
    inline bool ProvisioningHasBeenSet() const { return m_provisioningHasBeenSet; }

    /**
     * <p>When included, indicates that the environment template is for customer
     * provisioned and managed infrastructure.</p>
     */
    inline void SetProvisioning(const Provisioning& value) { m_provisioningHasBeenSet = true; m_provisioning = value; }

    /**
     * <p>When included, indicates that the environment template is for customer
     * provisioned and managed infrastructure.</p>
     */
    inline void SetProvisioning(Provisioning&& value) { m_provisioningHasBeenSet = true; m_provisioning = std::move(value); }

    /**
     * <p>When included, indicates that the environment template is for customer
     * provisioned and managed infrastructure.</p>
     */
    inline EnvironmentSummary& WithProvisioning(const Provisioning& value) { SetProvisioning(value); return *this;}

    /**
     * <p>When included, indicates that the environment template is for customer
     * provisioned and managed infrastructure.</p>
     */
    inline EnvironmentSummary& WithProvisioning(Provisioning&& value) { SetProvisioning(std::move(value)); return *this;}


    /**
     * <p>The major version of the environment template.</p>
     */
    inline const Aws::String& GetTemplateMajorVersion() const{ return m_templateMajorVersion; }

    /**
     * <p>The major version of the environment template.</p>
     */
    inline bool TemplateMajorVersionHasBeenSet() const { return m_templateMajorVersionHasBeenSet; }

    /**
     * <p>The major version of the environment template.</p>
     */
    inline void SetTemplateMajorVersion(const Aws::String& value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion = value; }

    /**
     * <p>The major version of the environment template.</p>
     */
    inline void SetTemplateMajorVersion(Aws::String&& value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion = std::move(value); }

    /**
     * <p>The major version of the environment template.</p>
     */
    inline void SetTemplateMajorVersion(const char* value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion.assign(value); }

    /**
     * <p>The major version of the environment template.</p>
     */
    inline EnvironmentSummary& WithTemplateMajorVersion(const Aws::String& value) { SetTemplateMajorVersion(value); return *this;}

    /**
     * <p>The major version of the environment template.</p>
     */
    inline EnvironmentSummary& WithTemplateMajorVersion(Aws::String&& value) { SetTemplateMajorVersion(std::move(value)); return *this;}

    /**
     * <p>The major version of the environment template.</p>
     */
    inline EnvironmentSummary& WithTemplateMajorVersion(const char* value) { SetTemplateMajorVersion(value); return *this;}


    /**
     * <p>The minor version of the environment template.</p>
     */
    inline const Aws::String& GetTemplateMinorVersion() const{ return m_templateMinorVersion; }

    /**
     * <p>The minor version of the environment template.</p>
     */
    inline bool TemplateMinorVersionHasBeenSet() const { return m_templateMinorVersionHasBeenSet; }

    /**
     * <p>The minor version of the environment template.</p>
     */
    inline void SetTemplateMinorVersion(const Aws::String& value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion = value; }

    /**
     * <p>The minor version of the environment template.</p>
     */
    inline void SetTemplateMinorVersion(Aws::String&& value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion = std::move(value); }

    /**
     * <p>The minor version of the environment template.</p>
     */
    inline void SetTemplateMinorVersion(const char* value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion.assign(value); }

    /**
     * <p>The minor version of the environment template.</p>
     */
    inline EnvironmentSummary& WithTemplateMinorVersion(const Aws::String& value) { SetTemplateMinorVersion(value); return *this;}

    /**
     * <p>The minor version of the environment template.</p>
     */
    inline EnvironmentSummary& WithTemplateMinorVersion(Aws::String&& value) { SetTemplateMinorVersion(std::move(value)); return *this;}

    /**
     * <p>The minor version of the environment template.</p>
     */
    inline EnvironmentSummary& WithTemplateMinorVersion(const char* value) { SetTemplateMinorVersion(value); return *this;}


    /**
     * <p>The name of the environment template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the environment template.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the environment template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the environment template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the environment template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the environment template.</p>
     */
    inline EnvironmentSummary& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the environment template.</p>
     */
    inline EnvironmentSummary& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment template.</p>
     */
    inline EnvironmentSummary& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_componentRoleArn;
    bool m_componentRoleArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    DeploymentStatus m_deploymentStatus;
    bool m_deploymentStatusHasBeenSet = false;

    Aws::String m_deploymentStatusMessage;
    bool m_deploymentStatusMessageHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_environmentAccountConnectionId;
    bool m_environmentAccountConnectionIdHasBeenSet = false;

    Aws::String m_environmentAccountId;
    bool m_environmentAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastDeploymentAttemptedAt;
    bool m_lastDeploymentAttemptedAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastDeploymentSucceededAt;
    bool m_lastDeploymentSucceededAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_protonServiceRoleArn;
    bool m_protonServiceRoleArnHasBeenSet = false;

    Provisioning m_provisioning;
    bool m_provisioningHasBeenSet = false;

    Aws::String m_templateMajorVersion;
    bool m_templateMajorVersionHasBeenSet = false;

    Aws::String m_templateMinorVersion;
    bool m_templateMinorVersionHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
