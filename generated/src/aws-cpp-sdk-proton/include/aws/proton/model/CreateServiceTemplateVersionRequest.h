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
    AWS_PROTON_API CreateServiceTemplateVersionRequest();

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
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateServiceTemplateVersionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateServiceTemplateVersionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateServiceTemplateVersionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of environment template objects that are compatible with the new
     * service template version. A service instance based on this service template
     * version can run in environments based on compatible templates.</p>
     */
    inline const Aws::Vector<CompatibleEnvironmentTemplateInput>& GetCompatibleEnvironmentTemplates() const{ return m_compatibleEnvironmentTemplates; }
    inline bool CompatibleEnvironmentTemplatesHasBeenSet() const { return m_compatibleEnvironmentTemplatesHasBeenSet; }
    inline void SetCompatibleEnvironmentTemplates(const Aws::Vector<CompatibleEnvironmentTemplateInput>& value) { m_compatibleEnvironmentTemplatesHasBeenSet = true; m_compatibleEnvironmentTemplates = value; }
    inline void SetCompatibleEnvironmentTemplates(Aws::Vector<CompatibleEnvironmentTemplateInput>&& value) { m_compatibleEnvironmentTemplatesHasBeenSet = true; m_compatibleEnvironmentTemplates = std::move(value); }
    inline CreateServiceTemplateVersionRequest& WithCompatibleEnvironmentTemplates(const Aws::Vector<CompatibleEnvironmentTemplateInput>& value) { SetCompatibleEnvironmentTemplates(value); return *this;}
    inline CreateServiceTemplateVersionRequest& WithCompatibleEnvironmentTemplates(Aws::Vector<CompatibleEnvironmentTemplateInput>&& value) { SetCompatibleEnvironmentTemplates(std::move(value)); return *this;}
    inline CreateServiceTemplateVersionRequest& AddCompatibleEnvironmentTemplates(const CompatibleEnvironmentTemplateInput& value) { m_compatibleEnvironmentTemplatesHasBeenSet = true; m_compatibleEnvironmentTemplates.push_back(value); return *this; }
    inline CreateServiceTemplateVersionRequest& AddCompatibleEnvironmentTemplates(CompatibleEnvironmentTemplateInput&& value) { m_compatibleEnvironmentTemplatesHasBeenSet = true; m_compatibleEnvironmentTemplates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A description of the new version of a service template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateServiceTemplateVersionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateServiceTemplateVersionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateServiceTemplateVersionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>To create a new minor version of the service template, include a <code>major
     * Version</code>.</p> <p>To create a new major and minor version of the service
     * template, <i>exclude</i> <code>major Version</code>.</p>
     */
    inline const Aws::String& GetMajorVersion() const{ return m_majorVersion; }
    inline bool MajorVersionHasBeenSet() const { return m_majorVersionHasBeenSet; }
    inline void SetMajorVersion(const Aws::String& value) { m_majorVersionHasBeenSet = true; m_majorVersion = value; }
    inline void SetMajorVersion(Aws::String&& value) { m_majorVersionHasBeenSet = true; m_majorVersion = std::move(value); }
    inline void SetMajorVersion(const char* value) { m_majorVersionHasBeenSet = true; m_majorVersion.assign(value); }
    inline CreateServiceTemplateVersionRequest& WithMajorVersion(const Aws::String& value) { SetMajorVersion(value); return *this;}
    inline CreateServiceTemplateVersionRequest& WithMajorVersion(Aws::String&& value) { SetMajorVersion(std::move(value)); return *this;}
    inline CreateServiceTemplateVersionRequest& WithMajorVersion(const char* value) { SetMajorVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that includes the template bundle S3 bucket path and name for the
     * new version of a service template.</p>
     */
    inline const TemplateVersionSourceInput& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const TemplateVersionSourceInput& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(TemplateVersionSourceInput&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline CreateServiceTemplateVersionRequest& WithSource(const TemplateVersionSourceInput& value) { SetSource(value); return *this;}
    inline CreateServiceTemplateVersionRequest& WithSource(TemplateVersionSourceInput&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of supported component sources. Components with supported sources
     * can be attached to service instances based on this service template version.</p>
     * <p>For more information about components, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/ag-components.html">Proton
     * components</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::Vector<ServiceTemplateSupportedComponentSourceType>& GetSupportedComponentSources() const{ return m_supportedComponentSources; }
    inline bool SupportedComponentSourcesHasBeenSet() const { return m_supportedComponentSourcesHasBeenSet; }
    inline void SetSupportedComponentSources(const Aws::Vector<ServiceTemplateSupportedComponentSourceType>& value) { m_supportedComponentSourcesHasBeenSet = true; m_supportedComponentSources = value; }
    inline void SetSupportedComponentSources(Aws::Vector<ServiceTemplateSupportedComponentSourceType>&& value) { m_supportedComponentSourcesHasBeenSet = true; m_supportedComponentSources = std::move(value); }
    inline CreateServiceTemplateVersionRequest& WithSupportedComponentSources(const Aws::Vector<ServiceTemplateSupportedComponentSourceType>& value) { SetSupportedComponentSources(value); return *this;}
    inline CreateServiceTemplateVersionRequest& WithSupportedComponentSources(Aws::Vector<ServiceTemplateSupportedComponentSourceType>&& value) { SetSupportedComponentSources(std::move(value)); return *this;}
    inline CreateServiceTemplateVersionRequest& AddSupportedComponentSources(const ServiceTemplateSupportedComponentSourceType& value) { m_supportedComponentSourcesHasBeenSet = true; m_supportedComponentSources.push_back(value); return *this; }
    inline CreateServiceTemplateVersionRequest& AddSupportedComponentSources(ServiceTemplateSupportedComponentSourceType&& value) { m_supportedComponentSourcesHasBeenSet = true; m_supportedComponentSources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional list of metadata items that you can associate with the Proton
     * service template version. A tag is a key-value pair.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/proton/latest/userguide/resources.html">Proton
     * resources and tagging</a> in the <i>Proton User Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateServiceTemplateVersionRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateServiceTemplateVersionRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateServiceTemplateVersionRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateServiceTemplateVersionRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the service template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline CreateServiceTemplateVersionRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline CreateServiceTemplateVersionRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline CreateServiceTemplateVersionRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

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
