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
    AWS_PROTON_API ServiceInstanceState() = default;
    AWS_PROTON_API ServiceInstanceState(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API ServiceInstanceState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IDs for the last successful components deployed for this service
     * instance.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLastSuccessfulComponentDeploymentIds() const { return m_lastSuccessfulComponentDeploymentIds; }
    inline bool LastSuccessfulComponentDeploymentIdsHasBeenSet() const { return m_lastSuccessfulComponentDeploymentIdsHasBeenSet; }
    template<typename LastSuccessfulComponentDeploymentIdsT = Aws::Vector<Aws::String>>
    void SetLastSuccessfulComponentDeploymentIds(LastSuccessfulComponentDeploymentIdsT&& value) { m_lastSuccessfulComponentDeploymentIdsHasBeenSet = true; m_lastSuccessfulComponentDeploymentIds = std::forward<LastSuccessfulComponentDeploymentIdsT>(value); }
    template<typename LastSuccessfulComponentDeploymentIdsT = Aws::Vector<Aws::String>>
    ServiceInstanceState& WithLastSuccessfulComponentDeploymentIds(LastSuccessfulComponentDeploymentIdsT&& value) { SetLastSuccessfulComponentDeploymentIds(std::forward<LastSuccessfulComponentDeploymentIdsT>(value)); return *this;}
    template<typename LastSuccessfulComponentDeploymentIdsT = Aws::String>
    ServiceInstanceState& AddLastSuccessfulComponentDeploymentIds(LastSuccessfulComponentDeploymentIdsT&& value) { m_lastSuccessfulComponentDeploymentIdsHasBeenSet = true; m_lastSuccessfulComponentDeploymentIds.emplace_back(std::forward<LastSuccessfulComponentDeploymentIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID for the last successful environment deployed for this service
     * instance.</p>
     */
    inline const Aws::String& GetLastSuccessfulEnvironmentDeploymentId() const { return m_lastSuccessfulEnvironmentDeploymentId; }
    inline bool LastSuccessfulEnvironmentDeploymentIdHasBeenSet() const { return m_lastSuccessfulEnvironmentDeploymentIdHasBeenSet; }
    template<typename LastSuccessfulEnvironmentDeploymentIdT = Aws::String>
    void SetLastSuccessfulEnvironmentDeploymentId(LastSuccessfulEnvironmentDeploymentIdT&& value) { m_lastSuccessfulEnvironmentDeploymentIdHasBeenSet = true; m_lastSuccessfulEnvironmentDeploymentId = std::forward<LastSuccessfulEnvironmentDeploymentIdT>(value); }
    template<typename LastSuccessfulEnvironmentDeploymentIdT = Aws::String>
    ServiceInstanceState& WithLastSuccessfulEnvironmentDeploymentId(LastSuccessfulEnvironmentDeploymentIdT&& value) { SetLastSuccessfulEnvironmentDeploymentId(std::forward<LastSuccessfulEnvironmentDeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for the last successful service pipeline deployed for this service
     * instance.</p>
     */
    inline const Aws::String& GetLastSuccessfulServicePipelineDeploymentId() const { return m_lastSuccessfulServicePipelineDeploymentId; }
    inline bool LastSuccessfulServicePipelineDeploymentIdHasBeenSet() const { return m_lastSuccessfulServicePipelineDeploymentIdHasBeenSet; }
    template<typename LastSuccessfulServicePipelineDeploymentIdT = Aws::String>
    void SetLastSuccessfulServicePipelineDeploymentId(LastSuccessfulServicePipelineDeploymentIdT&& value) { m_lastSuccessfulServicePipelineDeploymentIdHasBeenSet = true; m_lastSuccessfulServicePipelineDeploymentId = std::forward<LastSuccessfulServicePipelineDeploymentIdT>(value); }
    template<typename LastSuccessfulServicePipelineDeploymentIdT = Aws::String>
    ServiceInstanceState& WithLastSuccessfulServicePipelineDeploymentId(LastSuccessfulServicePipelineDeploymentIdT&& value) { SetLastSuccessfulServicePipelineDeploymentId(std::forward<LastSuccessfulServicePipelineDeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service spec that was used to create the service instance.</p>
     */
    inline const Aws::String& GetSpec() const { return m_spec; }
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
    template<typename SpecT = Aws::String>
    void SetSpec(SpecT&& value) { m_specHasBeenSet = true; m_spec = std::forward<SpecT>(value); }
    template<typename SpecT = Aws::String>
    ServiceInstanceState& WithSpec(SpecT&& value) { SetSpec(std::forward<SpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The major version of the service template that was used to create the service
     * pipeline.</p>
     */
    inline const Aws::String& GetTemplateMajorVersion() const { return m_templateMajorVersion; }
    inline bool TemplateMajorVersionHasBeenSet() const { return m_templateMajorVersionHasBeenSet; }
    template<typename TemplateMajorVersionT = Aws::String>
    void SetTemplateMajorVersion(TemplateMajorVersionT&& value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion = std::forward<TemplateMajorVersionT>(value); }
    template<typename TemplateMajorVersionT = Aws::String>
    ServiceInstanceState& WithTemplateMajorVersion(TemplateMajorVersionT&& value) { SetTemplateMajorVersion(std::forward<TemplateMajorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minor version of the service template that was used to create the service
     * pipeline.</p>
     */
    inline const Aws::String& GetTemplateMinorVersion() const { return m_templateMinorVersion; }
    inline bool TemplateMinorVersionHasBeenSet() const { return m_templateMinorVersionHasBeenSet; }
    template<typename TemplateMinorVersionT = Aws::String>
    void SetTemplateMinorVersion(TemplateMinorVersionT&& value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion = std::forward<TemplateMinorVersionT>(value); }
    template<typename TemplateMinorVersionT = Aws::String>
    ServiceInstanceState& WithTemplateMinorVersion(TemplateMinorVersionT&& value) { SetTemplateMinorVersion(std::forward<TemplateMinorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service template that was used to create the service
     * instance.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    ServiceInstanceState& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
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
