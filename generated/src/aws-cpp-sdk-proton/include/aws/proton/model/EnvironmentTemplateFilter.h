/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
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
   * <p>A search filter for environment templates.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/EnvironmentTemplateFilter">AWS
   * API Reference</a></p>
   */
  class EnvironmentTemplateFilter
  {
  public:
    AWS_PROTON_API EnvironmentTemplateFilter();
    AWS_PROTON_API EnvironmentTemplateFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API EnvironmentTemplateFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Include <code>majorVersion</code> to filter search for a major version.</p>
     */
    inline const Aws::String& GetMajorVersion() const{ return m_majorVersion; }

    /**
     * <p>Include <code>majorVersion</code> to filter search for a major version.</p>
     */
    inline bool MajorVersionHasBeenSet() const { return m_majorVersionHasBeenSet; }

    /**
     * <p>Include <code>majorVersion</code> to filter search for a major version.</p>
     */
    inline void SetMajorVersion(const Aws::String& value) { m_majorVersionHasBeenSet = true; m_majorVersion = value; }

    /**
     * <p>Include <code>majorVersion</code> to filter search for a major version.</p>
     */
    inline void SetMajorVersion(Aws::String&& value) { m_majorVersionHasBeenSet = true; m_majorVersion = std::move(value); }

    /**
     * <p>Include <code>majorVersion</code> to filter search for a major version.</p>
     */
    inline void SetMajorVersion(const char* value) { m_majorVersionHasBeenSet = true; m_majorVersion.assign(value); }

    /**
     * <p>Include <code>majorVersion</code> to filter search for a major version.</p>
     */
    inline EnvironmentTemplateFilter& WithMajorVersion(const Aws::String& value) { SetMajorVersion(value); return *this;}

    /**
     * <p>Include <code>majorVersion</code> to filter search for a major version.</p>
     */
    inline EnvironmentTemplateFilter& WithMajorVersion(Aws::String&& value) { SetMajorVersion(std::move(value)); return *this;}

    /**
     * <p>Include <code>majorVersion</code> to filter search for a major version.</p>
     */
    inline EnvironmentTemplateFilter& WithMajorVersion(const char* value) { SetMajorVersion(value); return *this;}


    /**
     * <p>Include <code>templateName</code> to filter search for a template name.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>Include <code>templateName</code> to filter search for a template name.</p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>Include <code>templateName</code> to filter search for a template name.</p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>Include <code>templateName</code> to filter search for a template name.</p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>Include <code>templateName</code> to filter search for a template name.</p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>Include <code>templateName</code> to filter search for a template name.</p>
     */
    inline EnvironmentTemplateFilter& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>Include <code>templateName</code> to filter search for a template name.</p>
     */
    inline EnvironmentTemplateFilter& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>Include <code>templateName</code> to filter search for a template name.</p>
     */
    inline EnvironmentTemplateFilter& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}

  private:

    Aws::String m_majorVersion;
    bool m_majorVersionHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
