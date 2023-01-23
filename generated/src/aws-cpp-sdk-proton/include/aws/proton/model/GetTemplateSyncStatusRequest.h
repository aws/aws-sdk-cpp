/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/TemplateType.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class GetTemplateSyncStatusRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API GetTemplateSyncStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTemplateSyncStatus"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The template name.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The template name.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The template name.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The template name.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The template name.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The template name.</p>
     */
    inline GetTemplateSyncStatusRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The template name.</p>
     */
    inline GetTemplateSyncStatusRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The template name.</p>
     */
    inline GetTemplateSyncStatusRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The template type.</p>
     */
    inline const TemplateType& GetTemplateType() const{ return m_templateType; }

    /**
     * <p>The template type.</p>
     */
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }

    /**
     * <p>The template type.</p>
     */
    inline void SetTemplateType(const TemplateType& value) { m_templateTypeHasBeenSet = true; m_templateType = value; }

    /**
     * <p>The template type.</p>
     */
    inline void SetTemplateType(TemplateType&& value) { m_templateTypeHasBeenSet = true; m_templateType = std::move(value); }

    /**
     * <p>The template type.</p>
     */
    inline GetTemplateSyncStatusRequest& WithTemplateType(const TemplateType& value) { SetTemplateType(value); return *this;}

    /**
     * <p>The template type.</p>
     */
    inline GetTemplateSyncStatusRequest& WithTemplateType(TemplateType&& value) { SetTemplateType(std::move(value)); return *this;}


    /**
     * <p>The template major version.</p>
     */
    inline const Aws::String& GetTemplateVersion() const{ return m_templateVersion; }

    /**
     * <p>The template major version.</p>
     */
    inline bool TemplateVersionHasBeenSet() const { return m_templateVersionHasBeenSet; }

    /**
     * <p>The template major version.</p>
     */
    inline void SetTemplateVersion(const Aws::String& value) { m_templateVersionHasBeenSet = true; m_templateVersion = value; }

    /**
     * <p>The template major version.</p>
     */
    inline void SetTemplateVersion(Aws::String&& value) { m_templateVersionHasBeenSet = true; m_templateVersion = std::move(value); }

    /**
     * <p>The template major version.</p>
     */
    inline void SetTemplateVersion(const char* value) { m_templateVersionHasBeenSet = true; m_templateVersion.assign(value); }

    /**
     * <p>The template major version.</p>
     */
    inline GetTemplateSyncStatusRequest& WithTemplateVersion(const Aws::String& value) { SetTemplateVersion(value); return *this;}

    /**
     * <p>The template major version.</p>
     */
    inline GetTemplateSyncStatusRequest& WithTemplateVersion(Aws::String&& value) { SetTemplateVersion(std::move(value)); return *this;}

    /**
     * <p>The template major version.</p>
     */
    inline GetTemplateSyncStatusRequest& WithTemplateVersion(const char* value) { SetTemplateVersion(value); return *this;}

  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    TemplateType m_templateType;
    bool m_templateTypeHasBeenSet = false;

    Aws::String m_templateVersion;
    bool m_templateVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
