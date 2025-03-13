/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/proton/model/TemplateVersionStatus.h>
#include <aws/proton/model/CompatibleEnvironmentTemplate.h>
#include <aws/proton/model/ServiceTemplateSupportedComponentSourceType.h>
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
   * <p>Detailed data of an Proton service template version resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ServiceTemplateVersion">AWS
   * API Reference</a></p>
   */
  class ServiceTemplateVersion
  {
  public:
    AWS_PROTON_API ServiceTemplateVersion() = default;
    AWS_PROTON_API ServiceTemplateVersion(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API ServiceTemplateVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the version of a service template.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ServiceTemplateVersion& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of compatible environment template names for the major version of a
     * service template.</p>
     */
    inline const Aws::Vector<CompatibleEnvironmentTemplate>& GetCompatibleEnvironmentTemplates() const { return m_compatibleEnvironmentTemplates; }
    inline bool CompatibleEnvironmentTemplatesHasBeenSet() const { return m_compatibleEnvironmentTemplatesHasBeenSet; }
    template<typename CompatibleEnvironmentTemplatesT = Aws::Vector<CompatibleEnvironmentTemplate>>
    void SetCompatibleEnvironmentTemplates(CompatibleEnvironmentTemplatesT&& value) { m_compatibleEnvironmentTemplatesHasBeenSet = true; m_compatibleEnvironmentTemplates = std::forward<CompatibleEnvironmentTemplatesT>(value); }
    template<typename CompatibleEnvironmentTemplatesT = Aws::Vector<CompatibleEnvironmentTemplate>>
    ServiceTemplateVersion& WithCompatibleEnvironmentTemplates(CompatibleEnvironmentTemplatesT&& value) { SetCompatibleEnvironmentTemplates(std::forward<CompatibleEnvironmentTemplatesT>(value)); return *this;}
    template<typename CompatibleEnvironmentTemplatesT = CompatibleEnvironmentTemplate>
    ServiceTemplateVersion& AddCompatibleEnvironmentTemplates(CompatibleEnvironmentTemplatesT&& value) { m_compatibleEnvironmentTemplatesHasBeenSet = true; m_compatibleEnvironmentTemplates.emplace_back(std::forward<CompatibleEnvironmentTemplatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time when the version of a service template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ServiceTemplateVersion& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the version of a service template.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ServiceTemplateVersion& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the version of a service template was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const { return m_lastModifiedAt; }
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    void SetLastModifiedAt(LastModifiedAtT&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::forward<LastModifiedAtT>(value); }
    template<typename LastModifiedAtT = Aws::Utils::DateTime>
    ServiceTemplateVersion& WithLastModifiedAt(LastModifiedAtT&& value) { SetLastModifiedAt(std::forward<LastModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest major version that's associated with the version of a service
     * template.</p>
     */
    inline const Aws::String& GetMajorVersion() const { return m_majorVersion; }
    inline bool MajorVersionHasBeenSet() const { return m_majorVersionHasBeenSet; }
    template<typename MajorVersionT = Aws::String>
    void SetMajorVersion(MajorVersionT&& value) { m_majorVersionHasBeenSet = true; m_majorVersion = std::forward<MajorVersionT>(value); }
    template<typename MajorVersionT = Aws::String>
    ServiceTemplateVersion& WithMajorVersion(MajorVersionT&& value) { SetMajorVersion(std::forward<MajorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minor version of a service template.</p>
     */
    inline const Aws::String& GetMinorVersion() const { return m_minorVersion; }
    inline bool MinorVersionHasBeenSet() const { return m_minorVersionHasBeenSet; }
    template<typename MinorVersionT = Aws::String>
    void SetMinorVersion(MinorVersionT&& value) { m_minorVersionHasBeenSet = true; m_minorVersion = std::forward<MinorVersionT>(value); }
    template<typename MinorVersionT = Aws::String>
    ServiceTemplateVersion& WithMinorVersion(MinorVersionT&& value) { SetMinorVersion(std::forward<MinorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommended minor version of the service template.</p>
     */
    inline const Aws::String& GetRecommendedMinorVersion() const { return m_recommendedMinorVersion; }
    inline bool RecommendedMinorVersionHasBeenSet() const { return m_recommendedMinorVersionHasBeenSet; }
    template<typename RecommendedMinorVersionT = Aws::String>
    void SetRecommendedMinorVersion(RecommendedMinorVersionT&& value) { m_recommendedMinorVersionHasBeenSet = true; m_recommendedMinorVersion = std::forward<RecommendedMinorVersionT>(value); }
    template<typename RecommendedMinorVersionT = Aws::String>
    ServiceTemplateVersion& WithRecommendedMinorVersion(RecommendedMinorVersionT&& value) { SetRecommendedMinorVersion(std::forward<RecommendedMinorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema of the version of a service template.</p>
     */
    inline const Aws::String& GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = Aws::String>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::String>
    ServiceTemplateVersion& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service template version status.</p>
     */
    inline TemplateVersionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TemplateVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ServiceTemplateVersion& WithStatus(TemplateVersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A service template version status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ServiceTemplateVersion& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
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
    ServiceTemplateVersion& WithSupportedComponentSources(SupportedComponentSourcesT&& value) { SetSupportedComponentSources(std::forward<SupportedComponentSourcesT>(value)); return *this;}
    inline ServiceTemplateVersion& AddSupportedComponentSources(ServiceTemplateSupportedComponentSourceType value) { m_supportedComponentSourcesHasBeenSet = true; m_supportedComponentSources.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the version of a service template.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    ServiceTemplateVersion& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<CompatibleEnvironmentTemplate> m_compatibleEnvironmentTemplates;
    bool m_compatibleEnvironmentTemplatesHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt{};
    bool m_lastModifiedAtHasBeenSet = false;

    Aws::String m_majorVersion;
    bool m_majorVersionHasBeenSet = false;

    Aws::String m_minorVersion;
    bool m_minorVersionHasBeenSet = false;

    Aws::String m_recommendedMinorVersion;
    bool m_recommendedMinorVersionHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    TemplateVersionStatus m_status{TemplateVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Vector<ServiceTemplateSupportedComponentSourceType> m_supportedComponentSources;
    bool m_supportedComponentSourcesHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
