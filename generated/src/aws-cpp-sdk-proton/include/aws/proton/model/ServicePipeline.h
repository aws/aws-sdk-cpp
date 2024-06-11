/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/proton/model/DeploymentStatus.h>
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
   * <p>Detailed data of an Proton service instance pipeline resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ServicePipeline">AWS
   * API Reference</a></p>
   */
  class ServicePipeline
  {
  public:
    AWS_PROTON_API ServicePipeline();
    AWS_PROTON_API ServicePipeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API ServicePipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the service pipeline.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ServicePipeline& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ServicePipeline& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ServicePipeline& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the service pipeline was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ServicePipeline& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ServicePipeline& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment status of the service pipeline.</p>
     */
    inline const DeploymentStatus& GetDeploymentStatus() const{ return m_deploymentStatus; }
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }
    inline void SetDeploymentStatus(const DeploymentStatus& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }
    inline void SetDeploymentStatus(DeploymentStatus&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::move(value); }
    inline ServicePipeline& WithDeploymentStatus(const DeploymentStatus& value) { SetDeploymentStatus(value); return *this;}
    inline ServicePipeline& WithDeploymentStatus(DeploymentStatus&& value) { SetDeploymentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A service pipeline deployment status message.</p>
     */
    inline const Aws::String& GetDeploymentStatusMessage() const{ return m_deploymentStatusMessage; }
    inline bool DeploymentStatusMessageHasBeenSet() const { return m_deploymentStatusMessageHasBeenSet; }
    inline void SetDeploymentStatusMessage(const Aws::String& value) { m_deploymentStatusMessageHasBeenSet = true; m_deploymentStatusMessage = value; }
    inline void SetDeploymentStatusMessage(Aws::String&& value) { m_deploymentStatusMessageHasBeenSet = true; m_deploymentStatusMessage = std::move(value); }
    inline void SetDeploymentStatusMessage(const char* value) { m_deploymentStatusMessageHasBeenSet = true; m_deploymentStatusMessage.assign(value); }
    inline ServicePipeline& WithDeploymentStatusMessage(const Aws::String& value) { SetDeploymentStatusMessage(value); return *this;}
    inline ServicePipeline& WithDeploymentStatusMessage(Aws::String&& value) { SetDeploymentStatusMessage(std::move(value)); return *this;}
    inline ServicePipeline& WithDeploymentStatusMessage(const char* value) { SetDeploymentStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the last attempted deployment of this service pipeline.</p>
     */
    inline const Aws::String& GetLastAttemptedDeploymentId() const{ return m_lastAttemptedDeploymentId; }
    inline bool LastAttemptedDeploymentIdHasBeenSet() const { return m_lastAttemptedDeploymentIdHasBeenSet; }
    inline void SetLastAttemptedDeploymentId(const Aws::String& value) { m_lastAttemptedDeploymentIdHasBeenSet = true; m_lastAttemptedDeploymentId = value; }
    inline void SetLastAttemptedDeploymentId(Aws::String&& value) { m_lastAttemptedDeploymentIdHasBeenSet = true; m_lastAttemptedDeploymentId = std::move(value); }
    inline void SetLastAttemptedDeploymentId(const char* value) { m_lastAttemptedDeploymentIdHasBeenSet = true; m_lastAttemptedDeploymentId.assign(value); }
    inline ServicePipeline& WithLastAttemptedDeploymentId(const Aws::String& value) { SetLastAttemptedDeploymentId(value); return *this;}
    inline ServicePipeline& WithLastAttemptedDeploymentId(Aws::String&& value) { SetLastAttemptedDeploymentId(std::move(value)); return *this;}
    inline ServicePipeline& WithLastAttemptedDeploymentId(const char* value) { SetLastAttemptedDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when a deployment of the service pipeline was last attempted.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDeploymentAttemptedAt() const{ return m_lastDeploymentAttemptedAt; }
    inline bool LastDeploymentAttemptedAtHasBeenSet() const { return m_lastDeploymentAttemptedAtHasBeenSet; }
    inline void SetLastDeploymentAttemptedAt(const Aws::Utils::DateTime& value) { m_lastDeploymentAttemptedAtHasBeenSet = true; m_lastDeploymentAttemptedAt = value; }
    inline void SetLastDeploymentAttemptedAt(Aws::Utils::DateTime&& value) { m_lastDeploymentAttemptedAtHasBeenSet = true; m_lastDeploymentAttemptedAt = std::move(value); }
    inline ServicePipeline& WithLastDeploymentAttemptedAt(const Aws::Utils::DateTime& value) { SetLastDeploymentAttemptedAt(value); return *this;}
    inline ServicePipeline& WithLastDeploymentAttemptedAt(Aws::Utils::DateTime&& value) { SetLastDeploymentAttemptedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the service pipeline was last deployed successfully.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDeploymentSucceededAt() const{ return m_lastDeploymentSucceededAt; }
    inline bool LastDeploymentSucceededAtHasBeenSet() const { return m_lastDeploymentSucceededAtHasBeenSet; }
    inline void SetLastDeploymentSucceededAt(const Aws::Utils::DateTime& value) { m_lastDeploymentSucceededAtHasBeenSet = true; m_lastDeploymentSucceededAt = value; }
    inline void SetLastDeploymentSucceededAt(Aws::Utils::DateTime&& value) { m_lastDeploymentSucceededAtHasBeenSet = true; m_lastDeploymentSucceededAt = std::move(value); }
    inline ServicePipeline& WithLastDeploymentSucceededAt(const Aws::Utils::DateTime& value) { SetLastDeploymentSucceededAt(value); return *this;}
    inline ServicePipeline& WithLastDeploymentSucceededAt(Aws::Utils::DateTime&& value) { SetLastDeploymentSucceededAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the last successful deployment of this service pipeline.</p>
     */
    inline const Aws::String& GetLastSucceededDeploymentId() const{ return m_lastSucceededDeploymentId; }
    inline bool LastSucceededDeploymentIdHasBeenSet() const { return m_lastSucceededDeploymentIdHasBeenSet; }
    inline void SetLastSucceededDeploymentId(const Aws::String& value) { m_lastSucceededDeploymentIdHasBeenSet = true; m_lastSucceededDeploymentId = value; }
    inline void SetLastSucceededDeploymentId(Aws::String&& value) { m_lastSucceededDeploymentIdHasBeenSet = true; m_lastSucceededDeploymentId = std::move(value); }
    inline void SetLastSucceededDeploymentId(const char* value) { m_lastSucceededDeploymentIdHasBeenSet = true; m_lastSucceededDeploymentId.assign(value); }
    inline ServicePipeline& WithLastSucceededDeploymentId(const Aws::String& value) { SetLastSucceededDeploymentId(value); return *this;}
    inline ServicePipeline& WithLastSucceededDeploymentId(Aws::String&& value) { SetLastSucceededDeploymentId(std::move(value)); return *this;}
    inline ServicePipeline& WithLastSucceededDeploymentId(const char* value) { SetLastSucceededDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service spec that was used to create the service pipeline.</p>
     */
    inline const Aws::String& GetSpec() const{ return m_spec; }
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
    inline void SetSpec(const Aws::String& value) { m_specHasBeenSet = true; m_spec = value; }
    inline void SetSpec(Aws::String&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }
    inline void SetSpec(const char* value) { m_specHasBeenSet = true; m_spec.assign(value); }
    inline ServicePipeline& WithSpec(const Aws::String& value) { SetSpec(value); return *this;}
    inline ServicePipeline& WithSpec(Aws::String&& value) { SetSpec(std::move(value)); return *this;}
    inline ServicePipeline& WithSpec(const char* value) { SetSpec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The major version of the service template that was used to create the service
     * pipeline.</p>
     */
    inline const Aws::String& GetTemplateMajorVersion() const{ return m_templateMajorVersion; }
    inline bool TemplateMajorVersionHasBeenSet() const { return m_templateMajorVersionHasBeenSet; }
    inline void SetTemplateMajorVersion(const Aws::String& value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion = value; }
    inline void SetTemplateMajorVersion(Aws::String&& value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion = std::move(value); }
    inline void SetTemplateMajorVersion(const char* value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion.assign(value); }
    inline ServicePipeline& WithTemplateMajorVersion(const Aws::String& value) { SetTemplateMajorVersion(value); return *this;}
    inline ServicePipeline& WithTemplateMajorVersion(Aws::String&& value) { SetTemplateMajorVersion(std::move(value)); return *this;}
    inline ServicePipeline& WithTemplateMajorVersion(const char* value) { SetTemplateMajorVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minor version of the service template that was used to create the service
     * pipeline.</p>
     */
    inline const Aws::String& GetTemplateMinorVersion() const{ return m_templateMinorVersion; }
    inline bool TemplateMinorVersionHasBeenSet() const { return m_templateMinorVersionHasBeenSet; }
    inline void SetTemplateMinorVersion(const Aws::String& value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion = value; }
    inline void SetTemplateMinorVersion(Aws::String&& value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion = std::move(value); }
    inline void SetTemplateMinorVersion(const char* value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion.assign(value); }
    inline ServicePipeline& WithTemplateMinorVersion(const Aws::String& value) { SetTemplateMinorVersion(value); return *this;}
    inline ServicePipeline& WithTemplateMinorVersion(Aws::String&& value) { SetTemplateMinorVersion(std::move(value)); return *this;}
    inline ServicePipeline& WithTemplateMinorVersion(const char* value) { SetTemplateMinorVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service template that was used to create the service
     * pipeline.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline ServicePipeline& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline ServicePipeline& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline ServicePipeline& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    DeploymentStatus m_deploymentStatus;
    bool m_deploymentStatusHasBeenSet = false;

    Aws::String m_deploymentStatusMessage;
    bool m_deploymentStatusMessageHasBeenSet = false;

    Aws::String m_lastAttemptedDeploymentId;
    bool m_lastAttemptedDeploymentIdHasBeenSet = false;

    Aws::Utils::DateTime m_lastDeploymentAttemptedAt;
    bool m_lastDeploymentAttemptedAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastDeploymentSucceededAt;
    bool m_lastDeploymentSucceededAtHasBeenSet = false;

    Aws::String m_lastSucceededDeploymentId;
    bool m_lastSucceededDeploymentIdHasBeenSet = false;

    Aws::String m_spec;
    bool m_specHasBeenSet = false;

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
