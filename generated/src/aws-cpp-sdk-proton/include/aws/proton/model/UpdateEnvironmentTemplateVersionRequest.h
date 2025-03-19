/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/TemplateVersionStatus.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class UpdateEnvironmentTemplateVersionRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API UpdateEnvironmentTemplateVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEnvironmentTemplateVersion"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A description of environment template version to update.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateEnvironmentTemplateVersionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To update a major version of an environment template, include <code>major
     * Version</code>.</p>
     */
    inline const Aws::String& GetMajorVersion() const { return m_majorVersion; }
    inline bool MajorVersionHasBeenSet() const { return m_majorVersionHasBeenSet; }
    template<typename MajorVersionT = Aws::String>
    void SetMajorVersion(MajorVersionT&& value) { m_majorVersionHasBeenSet = true; m_majorVersion = std::forward<MajorVersionT>(value); }
    template<typename MajorVersionT = Aws::String>
    UpdateEnvironmentTemplateVersionRequest& WithMajorVersion(MajorVersionT&& value) { SetMajorVersion(std::forward<MajorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To update a minor version of an environment template, include
     * <code>minorVersion</code>.</p>
     */
    inline const Aws::String& GetMinorVersion() const { return m_minorVersion; }
    inline bool MinorVersionHasBeenSet() const { return m_minorVersionHasBeenSet; }
    template<typename MinorVersionT = Aws::String>
    void SetMinorVersion(MinorVersionT&& value) { m_minorVersionHasBeenSet = true; m_minorVersion = std::forward<MinorVersionT>(value); }
    template<typename MinorVersionT = Aws::String>
    UpdateEnvironmentTemplateVersionRequest& WithMinorVersion(MinorVersionT&& value) { SetMinorVersion(std::forward<MinorVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the environment template minor version to update.</p>
     */
    inline TemplateVersionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(TemplateVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateEnvironmentTemplateVersionRequest& WithStatus(TemplateVersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the environment template.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    UpdateEnvironmentTemplateVersionRequest& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_majorVersion;
    bool m_majorVersionHasBeenSet = false;

    Aws::String m_minorVersion;
    bool m_minorVersionHasBeenSet = false;

    TemplateVersionStatus m_status{TemplateVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
