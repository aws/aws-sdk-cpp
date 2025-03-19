/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/proton/model/DeploymentUpdateType.h>
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
  class UpdateServicePipelineRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API UpdateServicePipelineRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServicePipeline"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The deployment type.</p> <p>There are four modes for updating a service
     * pipeline. The <code>deploymentType</code> field defines the mode.</p> <dl> <dt/>
     * <dd> <p> <code>NONE</code> </p> <p>In this mode, a deployment <i>doesn't</i>
     * occur. Only the requested metadata parameters are updated.</p> </dd> <dt/> <dd>
     * <p> <code>CURRENT_VERSION</code> </p> <p>In this mode, the service pipeline is
     * deployed and updated with the new spec that you provide. Only requested
     * parameters are updated. <i>Don’t</i> include major or minor version parameters
     * when you use this <code>deployment-type</code>.</p> </dd> <dt/> <dd> <p>
     * <code>MINOR_VERSION</code> </p> <p>In this mode, the service pipeline is
     * deployed and updated with the published, recommended (latest) minor version of
     * the current major version in use, by default. You can specify a different minor
     * version of the current major version in use.</p> </dd> <dt/> <dd> <p>
     * <code>MAJOR_VERSION</code> </p> <p>In this mode, the service pipeline is
     * deployed and updated with the published, recommended (latest) major and minor
     * version of the current template, by default. You can specify a different major
     * version that's higher than the major version in use and a minor version.</p>
     * </dd> </dl>
     */
    inline DeploymentUpdateType GetDeploymentType() const { return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    inline void SetDeploymentType(DeploymentUpdateType value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline UpdateServicePipelineRequest& WithDeploymentType(DeploymentUpdateType value) { SetDeploymentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service to that the pipeline is associated with.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    UpdateServicePipelineRequest& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The spec for the service pipeline to update.</p>
     */
    inline const Aws::String& GetSpec() const { return m_spec; }
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
    template<typename SpecT = Aws::String>
    void SetSpec(SpecT&& value) { m_specHasBeenSet = true; m_spec = std::forward<SpecT>(value); }
    template<typename SpecT = Aws::String>
    UpdateServicePipelineRequest& WithSpec(SpecT&& value) { SetSpec(std::forward<SpecT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The major version of the service template that was used to create the service
     * that the pipeline is associated with.</p>
     */
    inline const Aws::String& GetTemplateMajorVersion() const { return m_templateMajorVersion; }
    inline bool TemplateMajorVersionHasBeenSet() const { return m_templateMajorVersionHasBeenSet; }
    template<typename TemplateMajorVersionT = Aws::String>
    void SetTemplateMajorVersion(TemplateMajorVersionT&& value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion = std::forward<TemplateMajorVersionT>(value); }
    template<typename TemplateMajorVersionT = Aws::String>
    UpdateServicePipelineRequest& WithTemplateMajorVersion(TemplateMajorVersionT&& value) { SetTemplateMajorVersion(std::forward<TemplateMajorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minor version of the service template that was used to create the service
     * that the pipeline is associated with.</p>
     */
    inline const Aws::String& GetTemplateMinorVersion() const { return m_templateMinorVersion; }
    inline bool TemplateMinorVersionHasBeenSet() const { return m_templateMinorVersionHasBeenSet; }
    template<typename TemplateMinorVersionT = Aws::String>
    void SetTemplateMinorVersion(TemplateMinorVersionT&& value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion = std::forward<TemplateMinorVersionT>(value); }
    template<typename TemplateMinorVersionT = Aws::String>
    UpdateServicePipelineRequest& WithTemplateMinorVersion(TemplateMinorVersionT&& value) { SetTemplateMinorVersion(std::forward<TemplateMinorVersionT>(value)); return *this;}
    ///@}
  private:

    DeploymentUpdateType m_deploymentType{DeploymentUpdateType::NOT_SET};
    bool m_deploymentTypeHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_spec;
    bool m_specHasBeenSet = false;

    Aws::String m_templateMajorVersion;
    bool m_templateMajorVersionHasBeenSet = false;

    Aws::String m_templateMinorVersion;
    bool m_templateMinorVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
