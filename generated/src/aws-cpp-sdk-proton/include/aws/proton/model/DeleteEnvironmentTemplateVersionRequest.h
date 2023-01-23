/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
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
  class DeleteEnvironmentTemplateVersionRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API DeleteEnvironmentTemplateVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteEnvironmentTemplateVersion"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The environment template major version to delete.</p>
     */
    inline const Aws::String& GetMajorVersion() const{ return m_majorVersion; }

    /**
     * <p>The environment template major version to delete.</p>
     */
    inline bool MajorVersionHasBeenSet() const { return m_majorVersionHasBeenSet; }

    /**
     * <p>The environment template major version to delete.</p>
     */
    inline void SetMajorVersion(const Aws::String& value) { m_majorVersionHasBeenSet = true; m_majorVersion = value; }

    /**
     * <p>The environment template major version to delete.</p>
     */
    inline void SetMajorVersion(Aws::String&& value) { m_majorVersionHasBeenSet = true; m_majorVersion = std::move(value); }

    /**
     * <p>The environment template major version to delete.</p>
     */
    inline void SetMajorVersion(const char* value) { m_majorVersionHasBeenSet = true; m_majorVersion.assign(value); }

    /**
     * <p>The environment template major version to delete.</p>
     */
    inline DeleteEnvironmentTemplateVersionRequest& WithMajorVersion(const Aws::String& value) { SetMajorVersion(value); return *this;}

    /**
     * <p>The environment template major version to delete.</p>
     */
    inline DeleteEnvironmentTemplateVersionRequest& WithMajorVersion(Aws::String&& value) { SetMajorVersion(std::move(value)); return *this;}

    /**
     * <p>The environment template major version to delete.</p>
     */
    inline DeleteEnvironmentTemplateVersionRequest& WithMajorVersion(const char* value) { SetMajorVersion(value); return *this;}


    /**
     * <p>The environment template minor version to delete.</p>
     */
    inline const Aws::String& GetMinorVersion() const{ return m_minorVersion; }

    /**
     * <p>The environment template minor version to delete.</p>
     */
    inline bool MinorVersionHasBeenSet() const { return m_minorVersionHasBeenSet; }

    /**
     * <p>The environment template minor version to delete.</p>
     */
    inline void SetMinorVersion(const Aws::String& value) { m_minorVersionHasBeenSet = true; m_minorVersion = value; }

    /**
     * <p>The environment template minor version to delete.</p>
     */
    inline void SetMinorVersion(Aws::String&& value) { m_minorVersionHasBeenSet = true; m_minorVersion = std::move(value); }

    /**
     * <p>The environment template minor version to delete.</p>
     */
    inline void SetMinorVersion(const char* value) { m_minorVersionHasBeenSet = true; m_minorVersion.assign(value); }

    /**
     * <p>The environment template minor version to delete.</p>
     */
    inline DeleteEnvironmentTemplateVersionRequest& WithMinorVersion(const Aws::String& value) { SetMinorVersion(value); return *this;}

    /**
     * <p>The environment template minor version to delete.</p>
     */
    inline DeleteEnvironmentTemplateVersionRequest& WithMinorVersion(Aws::String&& value) { SetMinorVersion(std::move(value)); return *this;}

    /**
     * <p>The environment template minor version to delete.</p>
     */
    inline DeleteEnvironmentTemplateVersionRequest& WithMinorVersion(const char* value) { SetMinorVersion(value); return *this;}


    /**
     * <p>The name of the environment template.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the environment template.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the environment template.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the environment template.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the environment template.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the environment template.</p>
     */
    inline DeleteEnvironmentTemplateVersionRequest& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the environment template.</p>
     */
    inline DeleteEnvironmentTemplateVersionRequest& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the environment template.</p>
     */
    inline DeleteEnvironmentTemplateVersionRequest& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}

  private:

    Aws::String m_majorVersion;
    bool m_majorVersionHasBeenSet = false;

    Aws::String m_minorVersion;
    bool m_minorVersionHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
