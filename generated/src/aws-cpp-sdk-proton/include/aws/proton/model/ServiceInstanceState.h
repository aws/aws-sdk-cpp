/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The detailed data about the current state of this service
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ServiceInstanceState">AWS
   * API Reference</a></p>
   */
  class ServiceInstanceState
  {
  public:
    AWS_PROTON_API ServiceInstanceState();
    AWS_PROTON_API ServiceInstanceState(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API ServiceInstanceState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IDs for the last successful components deployed for this service
     * instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLastSuccessfulComponentDeploymentIds() const{ return m_lastSuccessfulComponentDeploymentIds; }
    inline bool LastSuccessfulComponentDeploymentIdsHasBeenSet() const { return m_lastSuccessfulComponentDeploymentIdsHasBeenSet; }
    inline void SetLastSuccessfulComponentDeploymentIds(const Aws::Vector<Aws::String>& value) { m_lastSuccessfulComponentDeploymentIdsHasBeenSet = true; m_lastSuccessfulComponentDeploymentIds = value; }
    inline void SetLastSuccessfulComponentDeploymentIds(Aws::Vector<Aws::String>&& value) { m_lastSuccessfulComponentDeploymentIdsHasBeenSet = true; m_lastSuccessfulComponentDeploymentIds = std::move(value); }
    inline ServiceInstanceState& WithLastSuccessfulComponentDeploymentIds(const Aws::Vector<Aws::String>& value) { SetLastSuccessfulComponentDeploymentIds(value); return *this;}
    inline ServiceInstanceState& WithLastSuccessfulComponentDeploymentIds(Aws::Vector<Aws::String>&& value) { SetLastSuccessfulComponentDeploymentIds(std::move(value)); return *this;}
    inline ServiceInstanceState& AddLastSuccessfulComponentDeploymentIds(const Aws::String& value) { m_lastSuccessfulComponentDeploymentIdsHasBeenSet = true; m_lastSuccessfulComponentDeploymentIds.push_back(value); return *this; }
    inline ServiceInstanceState& AddLastSuccessfulComponentDeploymentIds(Aws::String&& value) { m_lastSuccessfulComponentDeploymentIdsHasBeenSet = true; m_lastSuccessfulComponentDeploymentIds.push_back(std::move(value)); return *this; }
    inline ServiceInstanceState& AddLastSuccessfulComponentDeploymentIds(const char* value) { m_lastSuccessfulComponentDeploymentIdsHasBeenSet = true; m_lastSuccessfulComponentDeploymentIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID for the last successful environment deployed for this service
     * instance.</p>
     */
    inline const Aws::String& GetLastSuccessfulEnvironmentDeploymentId() const{ return m_lastSuccessfulEnvironmentDeploymentId; }
    inline bool LastSuccessfulEnvironmentDeploymentIdHasBeenSet() const { return m_lastSuccessfulEnvironmentDeploymentIdHasBeenSet; }
    inline void SetLastSuccessfulEnvironmentDeploymentId(const Aws::String& value) { m_lastSuccessfulEnvironmentDeploymentIdHasBeenSet = true; m_lastSuccessfulEnvironmentDeploymentId = value; }
    inline void SetLastSuccessfulEnvironmentDeploymentId(Aws::String&& value) { m_lastSuccessfulEnvironmentDeploymentIdHasBeenSet = true; m_lastSuccessfulEnvironmentDeploymentId = std::move(value); }
    inline void SetLastSuccessfulEnvironmentDeploymentId(const char* value) { m_lastSuccessfulEnvironmentDeploymentIdHasBeenSet = true; m_lastSuccessfulEnvironmentDeploymentId.assign(value); }
    inline ServiceInstanceState& WithLastSuccessfulEnvironmentDeploymentId(const Aws::String& value) { SetLastSuccessfulEnvironmentDeploymentId(value); return *this;}
    inline ServiceInstanceState& WithLastSuccessfulEnvironmentDeploymentId(Aws::String&& value) { SetLastSuccessfulEnvironmentDeploymentId(std::move(value)); return *this;}
    inline ServiceInstanceState& WithLastSuccessfulEnvironmentDeploymentId(const char* value) { SetLastSuccessfulEnvironmentDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the last successful service pipeline deployed for this service
     * instance.</p>
     */
    inline const Aws::String& GetLastSuccessfulServicePipelineDeploymentId() const{ return m_lastSuccessfulServicePipelineDeploymentId; }
    inline bool LastSuccessfulServicePipelineDeploymentIdHasBeenSet() const { return m_lastSuccessfulServicePipelineDeploymentIdHasBeenSet; }
    inline void SetLastSuccessfulServicePipelineDeploymentId(const Aws::String& value) { m_lastSuccessfulServicePipelineDeploymentIdHasBeenSet = true; m_lastSuccessfulServicePipelineDeploymentId = value; }
    inline void SetLastSuccessfulServicePipelineDeploymentId(Aws::String&& value) { m_lastSuccessfulServicePipelineDeploymentIdHasBeenSet = true; m_lastSuccessfulServicePipelineDeploymentId = std::move(value); }
    inline void SetLastSuccessfulServicePipelineDeploymentId(const char* value) { m_lastSuccessfulServicePipelineDeploymentIdHasBeenSet = true; m_lastSuccessfulServicePipelineDeploymentId.assign(value); }
    inline ServiceInstanceState& WithLastSuccessfulServicePipelineDeploymentId(const Aws::String& value) { SetLastSuccessfulServicePipelineDeploymentId(value); return *this;}
    inline ServiceInstanceState& WithLastSuccessfulServicePipelineDeploymentId(Aws::String&& value) { SetLastSuccessfulServicePipelineDeploymentId(std::move(value)); return *this;}
    inline ServiceInstanceState& WithLastSuccessfulServicePipelineDeploymentId(const char* value) { SetLastSuccessfulServicePipelineDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service spec that was used to create the service instance.</p>
     */
    inline const Aws::String& GetSpec() const{ return m_spec; }
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
    inline void SetSpec(const Aws::String& value) { m_specHasBeenSet = true; m_spec = value; }
    inline void SetSpec(Aws::String&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }
    inline void SetSpec(const char* value) { m_specHasBeenSet = true; m_spec.assign(value); }
    inline ServiceInstanceState& WithSpec(const Aws::String& value) { SetSpec(value); return *this;}
    inline ServiceInstanceState& WithSpec(Aws::String&& value) { SetSpec(std::move(value)); return *this;}
    inline ServiceInstanceState& WithSpec(const char* value) { SetSpec(value); return *this;}
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
    inline ServiceInstanceState& WithTemplateMajorVersion(const Aws::String& value) { SetTemplateMajorVersion(value); return *this;}
    inline ServiceInstanceState& WithTemplateMajorVersion(Aws::String&& value) { SetTemplateMajorVersion(std::move(value)); return *this;}
    inline ServiceInstanceState& WithTemplateMajorVersion(const char* value) { SetTemplateMajorVersion(value); return *this;}
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
    inline ServiceInstanceState& WithTemplateMinorVersion(const Aws::String& value) { SetTemplateMinorVersion(value); return *this;}
    inline ServiceInstanceState& WithTemplateMinorVersion(Aws::String&& value) { SetTemplateMinorVersion(std::move(value)); return *this;}
    inline ServiceInstanceState& WithTemplateMinorVersion(const char* value) { SetTemplateMinorVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service template that was used to create the service
     * instance.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline ServiceInstanceState& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline ServiceInstanceState& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline ServiceInstanceState& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_lastSuccessfulComponentDeploymentIds;
    bool m_lastSuccessfulComponentDeploymentIdsHasBeenSet = false;

    Aws::String m_lastSuccessfulEnvironmentDeploymentId;
    bool m_lastSuccessfulEnvironmentDeploymentIdHasBeenSet = false;

    Aws::String m_lastSuccessfulServicePipelineDeploymentId;
    bool m_lastSuccessfulServicePipelineDeploymentIdHasBeenSet = false;

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
