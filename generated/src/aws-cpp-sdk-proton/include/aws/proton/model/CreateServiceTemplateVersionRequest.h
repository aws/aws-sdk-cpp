/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/TemplateVersionSourceInput.h>
#include <aws/proton/model/CompatibleEnvironmentTemplateInput.h>
#include <aws/proton/model/ServiceTemplateSupportedComponentSourceType.h>
#include <aws/proton/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class CreateServiceTemplateVersionRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API CreateServiceTemplateVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateServiceTemplateVersion"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>When included, if two identical requests are made with the same client token,
     * Proton returns the service template version that the first request created.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateServiceTemplateVersionRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of environment template objects that are compatible with the new
     * service template version. A service instance based on this service template
     * version can run in environments based on compatible templates.</p>
     */
    inline const Aws::Vector<CompatibleEnvironmentTemplateInput>& GetCompatibleEnvironmentTemplates() const { return m_compatibleEnvironmentTemplates; }
    inline bool CompatibleEnvironmentTemplatesHasBeenSet() const { return m_compatibleEnvironmentTemplatesHasBeenSet; }
    template<typename CompatibleEnvironmentTemplatesT = Aws::Vector<CompatibleEnvironmentTemplateInput>>
    void SetCompatibleEnvironmentTemplates(CompatibleEnvironmentTemplatesT&& value) { m_compatibleEnvironmentTemplatesHasBeenSet = true; m_compatibleEnvironmentTemplates = std::forward<CompatibleEnvironmentTemplatesT>(value); }
    template<typename CompatibleEnvironmentTemplatesT = Aws::Vector<CompatibleEnvironmentTemplateInput>>
    CreateServiceTemplateVersionRequest& WithCompatibleEnvironmentTemplates(CompatibleEnvironmentTemplatesT&& value) { SetCompatibleEnvironmentTemplates(std::forward<CompatibleEnvironmentTemplatesT>(value)); return *this;}
    template<typename CompatibleEnvironmentTemplatesT = CompatibleEnvironmentTemplateInput>
    CreateServiceTemplateVersionRequest& AddCompatibleEnvironmentTemplates(CompatibleEnvironmentTemplatesT&& value) { m_compatibleEnvironmentTemplatesHasBeenSet = true; m_compatibleEnvironmentTemplates.emplace_back(std::forward<CompatibleEnvironmentTemplatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description of the new version of a service template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateServiceTemplateVersionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To create a new minor version of the service template, include a <code>major
     * Version</code>.</p> <p>To create a new major and minor version of the service
     * template, <i>exclude</i> <code>major Version</code>.</p>
     */
    inline const Aws::String& GetMajorVersion() const { return m_majorVersion; }
    inline bool MajorVersionHasBeenSet() const { return m_majorVersionHasBeenSet; }
    template<typename MajorVersionT = Aws::String>
    void SetMajorVersion(MajorVersionT&& value) { m_majorVersionHasBeenSet = true; m_majorVersion = std::forward<MajorVersionT>(value); }
    template<typename MajorVersionT = Aws::String>
    CreateServiceTemplateVersionRequest& WithMajorVersion(MajorVersionT&& value) { SetMajorVersion(std::forward<MajorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that includes the template bundle S3 bucket path and name for the
     * new version of a service template.</p>
     */
    inline const TemplateVersionSourceInput& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = TemplateVersionSourceInput>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = TemplateVersionSourceInput>
    CreateServiceTemplateVersionRequest& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of supported component sources. Components with supported sources
     * can be attached to service instances based on this service template version.</p>
     * <p>For more information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::Vector<ServiceTemplateSupportedComponentSourceType>& GetSupportedComponentSources() const { return m_supportedComponentSources; }
    inline bool SupportedComponentSourcesHasBeenSet() const { return m_supportedComponentSourcesHasBeenSet; }
    template<typename SupportedComponentSourcesT = Aws::Vector<ServiceTemplateSupportedComponentSourceType>>
    void SetSupportedComponentSources(SupportedComponentSourcesT&& value) { m_supportedComponentSourcesHasBeenSet = true; m_supportedComponentSources = std::forward<SupportedComponentSourcesT>(value); }
    template<typename SupportedComponentSourcesT = Aws::Vector<ServiceTemplateSupportedComponentSourceType>>
    CreateServiceTemplateVersionRequest& WithSupportedComponentSources(SupportedComponentSourcesT&& value) { SetSupportedComponentSources(std::forward<SupportedComponentSourcesT>(value)); return *this;}
    inline CreateServiceTemplateVersionRequest& AddSupportedComponentSources(ServiceTemplateSupportedComponentSourceType value) { m_supportedComponentSourcesHasBeenSet = true; m_supportedComponentSources.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * service template version. A tag is a key-value pair.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateServiceTemplateVersionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateServiceTemplateVersionRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
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
    CreateServiceTemplateVersionRequest& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Vector<CompatibleEnvironmentTemplateInput> m_compatibleEnvironmentTemplates;
    bool m_compatibleEnvironmentTemplatesHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_majorVersion;
    bool m_majorVersionHasBeenSet = false;

    TemplateVersionSourceInput m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Vector<ServiceTemplateSupportedComponentSourceType> m_supportedComponentSources;
    bool m_supportedComponentSourcesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
