/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/proton/model/TemplateVersionStatus.h>
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
   * <p>Summary data of an Proton service template version resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ServiceTemplateVersionSummary">AWS
   * API Reference</a></p>
   */
  class ServiceTemplateVersionSummary
  {
  public:
    AWS_PROTON_API ServiceTemplateVersionSummary();
    AWS_PROTON_API ServiceTemplateVersionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API ServiceTemplateVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the version of a service template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ServiceTemplateVersionSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ServiceTemplateVersionSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ServiceTemplateVersionSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the version of a service template was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ServiceTemplateVersionSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ServiceTemplateVersionSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the version of a service template.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ServiceTemplateVersionSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ServiceTemplateVersionSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ServiceTemplateVersionSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the version of a service template was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedAt() const{ return m_lastModifiedAt; }
    inline bool LastModifiedAtHasBeenSet() const { return m_lastModifiedAtHasBeenSet; }
    inline void SetLastModifiedAt(const Aws::Utils::DateTime& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = value; }
    inline void SetLastModifiedAt(Aws::Utils::DateTime&& value) { m_lastModifiedAtHasBeenSet = true; m_lastModifiedAt = std::move(value); }
    inline ServiceTemplateVersionSummary& WithLastModifiedAt(const Aws::Utils::DateTime& value) { SetLastModifiedAt(value); return *this;}
    inline ServiceTemplateVersionSummary& WithLastModifiedAt(Aws::Utils::DateTime&& value) { SetLastModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest major version that's associated with the version of a service
     * template.</p>
     */
    inline const Aws::String& GetMajorVersion() const{ return m_majorVersion; }
    inline bool MajorVersionHasBeenSet() const { return m_majorVersionHasBeenSet; }
    inline void SetMajorVersion(const Aws::String& value) { m_majorVersionHasBeenSet = true; m_majorVersion = value; }
    inline void SetMajorVersion(Aws::String&& value) { m_majorVersionHasBeenSet = true; m_majorVersion = std::move(value); }
    inline void SetMajorVersion(const char* value) { m_majorVersionHasBeenSet = true; m_majorVersion.assign(value); }
    inline ServiceTemplateVersionSummary& WithMajorVersion(const Aws::String& value) { SetMajorVersion(value); return *this;}
    inline ServiceTemplateVersionSummary& WithMajorVersion(Aws::String&& value) { SetMajorVersion(std::move(value)); return *this;}
    inline ServiceTemplateVersionSummary& WithMajorVersion(const char* value) { SetMajorVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minor version of a service template.</p>
     */
    inline const Aws::String& GetMinorVersion() const{ return m_minorVersion; }
    inline bool MinorVersionHasBeenSet() const { return m_minorVersionHasBeenSet; }
    inline void SetMinorVersion(const Aws::String& value) { m_minorVersionHasBeenSet = true; m_minorVersion = value; }
    inline void SetMinorVersion(Aws::String&& value) { m_minorVersionHasBeenSet = true; m_minorVersion = std::move(value); }
    inline void SetMinorVersion(const char* value) { m_minorVersionHasBeenSet = true; m_minorVersion.assign(value); }
    inline ServiceTemplateVersionSummary& WithMinorVersion(const Aws::String& value) { SetMinorVersion(value); return *this;}
    inline ServiceTemplateVersionSummary& WithMinorVersion(Aws::String&& value) { SetMinorVersion(std::move(value)); return *this;}
    inline ServiceTemplateVersionSummary& WithMinorVersion(const char* value) { SetMinorVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommended minor version of the service template.</p>
     */
    inline const Aws::String& GetRecommendedMinorVersion() const{ return m_recommendedMinorVersion; }
    inline bool RecommendedMinorVersionHasBeenSet() const { return m_recommendedMinorVersionHasBeenSet; }
    inline void SetRecommendedMinorVersion(const Aws::String& value) { m_recommendedMinorVersionHasBeenSet = true; m_recommendedMinorVersion = value; }
    inline void SetRecommendedMinorVersion(Aws::String&& value) { m_recommendedMinorVersionHasBeenSet = true; m_recommendedMinorVersion = std::move(value); }
    inline void SetRecommendedMinorVersion(const char* value) { m_recommendedMinorVersionHasBeenSet = true; m_recommendedMinorVersion.assign(value); }
    inline ServiceTemplateVersionSummary& WithRecommendedMinorVersion(const Aws::String& value) { SetRecommendedMinorVersion(value); return *this;}
    inline ServiceTemplateVersionSummary& WithRecommendedMinorVersion(Aws::String&& value) { SetRecommendedMinorVersion(std::move(value)); return *this;}
    inline ServiceTemplateVersionSummary& WithRecommendedMinorVersion(const char* value) { SetRecommendedMinorVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service template minor version status.</p>
     */
    inline const TemplateVersionStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TemplateVersionStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TemplateVersionStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ServiceTemplateVersionSummary& WithStatus(const TemplateVersionStatus& value) { SetStatus(value); return *this;}
    inline ServiceTemplateVersionSummary& WithStatus(TemplateVersionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A service template minor version status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline ServiceTemplateVersionSummary& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline ServiceTemplateVersionSummary& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline ServiceTemplateVersionSummary& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
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
    inline ServiceTemplateVersionSummary& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline ServiceTemplateVersionSummary& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline ServiceTemplateVersionSummary& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedAt;
    bool m_lastModifiedAtHasBeenSet = false;

    Aws::String m_majorVersion;
    bool m_majorVersionHasBeenSet = false;

    Aws::String m_minorVersion;
    bool m_minorVersionHasBeenSet = false;

    Aws::String m_recommendedMinorVersion;
    bool m_recommendedMinorVersionHasBeenSet = false;

    TemplateVersionStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
