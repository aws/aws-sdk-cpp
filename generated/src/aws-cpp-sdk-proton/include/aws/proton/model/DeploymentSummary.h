/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/proton/model/DeploymentStatus.h>
#include <aws/proton/model/DeploymentTargetResourceType.h>
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
   * <p>Summary data of the deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/DeploymentSummary">AWS
   * API Reference</a></p>
   */
  class DeploymentSummary
  {
  public:
    AWS_PROTON_API DeploymentSummary();
    AWS_PROTON_API DeploymentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API DeploymentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the deployment.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DeploymentSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DeploymentSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DeploymentSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the deployment was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletedAt() const{ return m_completedAt; }
    inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
    inline void SetCompletedAt(const Aws::Utils::DateTime& value) { m_completedAtHasBeenSet = true; m_completedAt = value; }
    inline void SetCompletedAt(Aws::Utils::DateTime&& value) { m_completedAtHasBeenSet = true; m_completedAt = std::move(value); }
    inline DeploymentSummary& WithCompletedAt(const Aws::Utils::DateTime& value) { SetCompletedAt(value); return *this;}
    inline DeploymentSummary& WithCompletedAt(Aws::Utils::DateTime&& value) { SetCompletedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component associated with the deployment.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }
    inline DeploymentSummary& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}
    inline DeploymentSummary& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}
    inline DeploymentSummary& WithComponentName(const char* value) { SetComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the deployment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline DeploymentSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DeploymentSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the deployment.</p>
     */
    inline const DeploymentStatus& GetDeploymentStatus() const{ return m_deploymentStatus; }
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }
    inline void SetDeploymentStatus(const DeploymentStatus& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }
    inline void SetDeploymentStatus(DeploymentStatus&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::move(value); }
    inline DeploymentSummary& WithDeploymentStatus(const DeploymentStatus& value) { SetDeploymentStatus(value); return *this;}
    inline DeploymentSummary& WithDeploymentStatus(DeploymentStatus&& value) { SetDeploymentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment associated with the deployment.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }
    inline DeploymentSummary& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}
    inline DeploymentSummary& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}
    inline DeploymentSummary& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the deployment.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DeploymentSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DeploymentSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DeploymentSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the last attempted deployment.</p>
     */
    inline const Aws::String& GetLastAttemptedDeploymentId() const{ return m_lastAttemptedDeploymentId; }
    inline bool LastAttemptedDeploymentIdHasBeenSet() const { return m_lastAttemptedDeploymentIdHasBeenSet; }
    inline void SetLastAttemptedDeploymentId(const Aws::String& value) { m_lastAttemptedDeploymentIdHasBeenSet = true; m_lastAttemptedDeploymentId = value; }
    inline void SetLastAttemptedDeploymentId(Aws::String&& value) { m_lastAttemptedDeploymentIdHasBeenSet = true; m_lastAttemptedDeploymentId = std::move(value); }
    inline void SetLastAttemptedDeploymentId(const char* value) { m_lastAttemptedDeploymentIdHasBeenSet = true; m_lastAttemptedDeploymentId.assign(value); }
    inline DeploymentSummary& WithLastAttemptedDeploymentId(const Aws::String& value) { SetLastAttemptedDeploymentId(value); return *this;}
    inline DeploymentSummary& WithLastAttemptedDeploymentId(Aws::String&& value) { SetLastAttemptedDeploymentId(std::move(value)); return *this;}
    inline DeploymentSummary& WithLastAttemptedDeploymentId(const char* value) { SetLastAttemptedDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the deployment was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const{ return m_lastModifiedAt; }
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }
    inline void SetLastModifiedAt(const Aws::Utils::DateTime& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = value; }
    inline void SetLastModifiedAt(Aws::Utils::DateTime&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::move(value); }
    inline DeploymentSummary& WithLastModifiedAt(const Aws::Utils::DateTime& value) { SetLastModifiedAt(value); return *this;}
    inline DeploymentSummary& WithLastModifiedAt(Aws::Utils::DateTime&& value) { SetLastModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the last successful deployment.</p>
     */
    inline const Aws::String& GetLastSucceededDeploymentId() const{ return m_lastSucceededDeploymentId; }
    inline bool LastSucceededDeploymentIdHasBeenSet() const { return m_lastSucceededDeploymentIdHasBeenSet; }
    inline void SetLastSucceededDeploymentId(const Aws::String& value) { m_lastSucceededDeploymentIdHasBeenSet = true; m_lastSucceededDeploymentId = value; }
    inline void SetLastSucceededDeploymentId(Aws::String&& value) { m_lastSucceededDeploymentIdHasBeenSet = true; m_lastSucceededDeploymentId = std::move(value); }
    inline void SetLastSucceededDeploymentId(const char* value) { m_lastSucceededDeploymentIdHasBeenSet = true; m_lastSucceededDeploymentId.assign(value); }
    inline DeploymentSummary& WithLastSucceededDeploymentId(const Aws::String& value) { SetLastSucceededDeploymentId(value); return *this;}
    inline DeploymentSummary& WithLastSucceededDeploymentId(Aws::String&& value) { SetLastSucceededDeploymentId(std::move(value)); return *this;}
    inline DeploymentSummary& WithLastSucceededDeploymentId(const char* value) { SetLastSucceededDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service instance associated with the deployment.</p>
     */
    inline const Aws::String& GetServiceInstanceName() const{ return m_serviceInstanceName; }
    inline bool ServiceInstanceNameHasBeenSet() const { return m_serviceInstanceNameHasBeenSet; }
    inline void SetServiceInstanceName(const Aws::String& value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName = value; }
    inline void SetServiceInstanceName(Aws::String&& value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName = std::move(value); }
    inline void SetServiceInstanceName(const char* value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName.assign(value); }
    inline DeploymentSummary& WithServiceInstanceName(const Aws::String& value) { SetServiceInstanceName(value); return *this;}
    inline DeploymentSummary& WithServiceInstanceName(Aws::String&& value) { SetServiceInstanceName(std::move(value)); return *this;}
    inline DeploymentSummary& WithServiceInstanceName(const char* value) { SetServiceInstanceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service associated with the deployment.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline DeploymentSummary& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline DeploymentSummary& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline DeploymentSummary& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the target of the deployment.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }
    inline DeploymentSummary& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}
    inline DeploymentSummary& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}
    inline DeploymentSummary& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the target resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetTargetResourceCreatedAt() const{ return m_targetResourceCreatedAt; }
    inline bool TargetResourceCreatedAtHasBeenSet() const { return m_targetResourceCreatedAtHasBeenSet; }
    inline void SetTargetResourceCreatedAt(const Aws::Utils::DateTime& value) { m_targetResourceCreatedAtHasBeenSet = true; m_targetResourceCreatedAt = value; }
    inline void SetTargetResourceCreatedAt(Aws::Utils::DateTime&& value) { m_targetResourceCreatedAtHasBeenSet = true; m_targetResourceCreatedAt = std::move(value); }
    inline DeploymentSummary& WithTargetResourceCreatedAt(const Aws::Utils::DateTime& value) { SetTargetResourceCreatedAt(value); return *this;}
    inline DeploymentSummary& WithTargetResourceCreatedAt(Aws::Utils::DateTime&& value) { SetTargetResourceCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource type of the deployment target. It can be an environment,
     * service, service instance, or component.</p>
     */
    inline const DeploymentTargetResourceType& GetTargetResourceType() const{ return m_targetResourceType; }
    inline bool TargetResourceTypeHasBeenSet() const { return m_targetResourceTypeHasBeenSet; }
    inline void SetTargetResourceType(const DeploymentTargetResourceType& value) { m_targetResourceTypeHasBeenSet = true; m_targetResourceType = value; }
    inline void SetTargetResourceType(DeploymentTargetResourceType&& value) { m_targetResourceTypeHasBeenSet = true; m_targetResourceType = std::move(value); }
    inline DeploymentSummary& WithTargetResourceType(const DeploymentTargetResourceType& value) { SetTargetResourceType(value); return *this;}
    inline DeploymentSummary& WithTargetResourceType(DeploymentTargetResourceType&& value) { SetTargetResourceType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_completedAt;
    bool m_completedAtHasBeenSet = false;

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    DeploymentStatus m_deploymentStatus;
    bool m_deploymentStatusHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_lastAttemptedDeploymentId;
    bool m_lastAttemptedDeploymentIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt;
    bool m_lastModifiedAtHasBeenSet = false;

    Aws::String m_lastSucceededDeploymentId;
    bool m_lastSucceededDeploymentIdHasBeenSet = false;

    Aws::String m_serviceInstanceName;
    bool m_serviceInstanceNameHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::Utils::DateTime m_targetResourceCreatedAt;
    bool m_targetResourceCreatedAtHasBeenSet = false;

    DeploymentTargetResourceType m_targetResourceType;
    bool m_targetResourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
