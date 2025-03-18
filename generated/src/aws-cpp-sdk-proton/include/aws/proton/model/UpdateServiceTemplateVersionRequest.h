/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/TemplateVersionStatus.h>
#include <aws/proton/model/CompatibleEnvironmentTemplateInput.h>
#include <aws/proton/model/ServiceTemplateSupportedComponentSourceType.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class UpdateServiceTemplateVersionRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API UpdateServiceTemplateVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServiceTemplateVersion"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An array of environment template objects that are compatible with this
     * service template version. A service instance based on this service template
     * version can run in environments based on compatible templates.</p>
     */
    inline const Aws::Vector<CompatibleEnvironmentTemplateInput>& GetCompatibleEnvironmentTemplates() const { return m_compatibleEnvironmentTemplates; }
    inline bool CompatibleEnvironmentTemplatesHasBeenSet() const { return m_compatibleEnvironmentTemplatesHasBeenSet; }
    template<typename CompatibleEnvironmentTemplatesT = Aws::Vector<CompatibleEnvironmentTemplateInput>>
    void SetCompatibleEnvironmentTemplates(CompatibleEnvironmentTemplatesT&& value) { m_compatibleEnvironmentTemplatesHasBeenSet = true; m_compatibleEnvironmentTemplates = std::forward<CompatibleEnvironmentTemplatesT>(value); }
    template<typename CompatibleEnvironmentTemplatesT = Aws::Vector<CompatibleEnvironmentTemplateInput>>
    UpdateServiceTemplateVersionRequest& WithCompatibleEnvironmentTemplates(CompatibleEnvironmentTemplatesT&& value) { SetCompatibleEnvironmentTemplates(std::forward<CompatibleEnvironmentTemplatesT>(value)); return *this;}
    template<typename CompatibleEnvironmentTemplatesT = CompatibleEnvironmentTemplateInput>
    UpdateServiceTemplateVersionRequest& AddCompatibleEnvironmentTemplates(CompatibleEnvironmentTemplatesT&& value) { m_compatibleEnvironmentTemplatesHasBeenSet = true; m_compatibleEnvironmentTemplates.emplace_back(std::forward<CompatibleEnvironmentTemplatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description of a service template version to update.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateServiceTemplateVersionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To update a major version of a service template, include <code>major
     * Version</code>.</p>
     */
    inline const Aws::String& GetMajorVersion() const { return m_majorVersion; }
    inline bool MajorVersionHasBeenSet() const { return m_majorVersionHasBeenSet; }
    template<typename MajorVersionT = Aws::String>
    void SetMajorVersion(MajorVersionT&& value) { m_majorVersionHasBeenSet = true; m_majorVersion = std::forward<MajorVersionT>(value); }
    template<typename MajorVersionT = Aws::String>
    UpdateServiceTemplateVersionRequest& WithMajorVersion(MajorVersionT&& value) { SetMajorVersion(std::forward<MajorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To update a minor version of a service template, include
     * <code>minorVersion</code>.</p>
     */
    inline const Aws::String& GetMinorVersion() const { return m_minorVersion; }
    inline bool MinorVersionHasBeenSet() const { return m_minorVersionHasBeenSet; }
    template<typename MinorVersionT = Aws::String>
    void SetMinorVersion(MinorVersionT&& value) { m_minorVersionHasBeenSet = true; m_minorVersion = std::forward<MinorVersionT>(value); }
    template<typename MinorVersionT = Aws::String>
    UpdateServiceTemplateVersionRequest& WithMinorVersion(MinorVersionT&& value) { SetMinorVersion(std::forward<MinorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the service template minor version to update.</p>
     */
    inline TemplateVersionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TemplateVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateServiceTemplateVersionRequest& WithStatus(TemplateVersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of supported component sources. Components with supported sources
     * can be attached to service instances based on this service template version.</p>
     *  <p>A change to <code>supportedComponentSources</code> doesn't impact
     * existing component attachments to instances based on this template version. A
     * change only affects later associations.</p>  <p>For more information
     * about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::Vector<ServiceTemplateSupportedComponentSourceType>& GetSupportedComponentSources() const { return m_supportedComponentSources; }
    inline bool SupportedComponentSourcesHasBeenSet() const { return m_supportedComponentSourcesHasBeenSet; }
    template<typename SupportedComponentSourcesT = Aws::Vector<ServiceTemplateSupportedComponentSourceType>>
    void SetSupportedComponentSources(SupportedComponentSourcesT&& value) { m_supportedComponentSourcesHasBeenSet = true; m_supportedComponentSources = std::forward<SupportedComponentSourcesT>(value); }
    template<typename SupportedComponentSourcesT = Aws::Vector<ServiceTemplateSupportedComponentSourceType>>
    UpdateServiceTemplateVersionRequest& WithSupportedComponentSources(SupportedComponentSourcesT&& value) { SetSupportedComponentSources(std::forward<SupportedComponentSourcesT>(value)); return *this;}
    inline UpdateServiceTemplateVersionRequest& AddSupportedComponentSources(ServiceTemplateSupportedComponentSourceType value) { m_supportedComponentSourcesHasBeenSet = true; m_supportedComponentSources.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the service template.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    UpdateServiceTemplateVersionRequest& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CompatibleEnvironmentTemplateInput> m_compatibleEnvironmentTemplates;
    bool m_compatibleEnvironmentTemplatesHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_majorVersion;
    bool m_majorVersionHasBeenSet = false;

    Aws::String m_minorVersion;
    bool m_minorVersionHasBeenSet = false;

    TemplateVersionStatus m_status{TemplateVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<ServiceTemplateSupportedComponentSourceType> m_supportedComponentSources;
    bool m_supportedComponentSourcesHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
