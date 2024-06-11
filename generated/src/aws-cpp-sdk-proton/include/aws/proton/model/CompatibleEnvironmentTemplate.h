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
   * <p>Compatible environment template data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/CompatibleEnvironmentTemplate">AWS
   * API Reference</a></p>
   */
  class CompatibleEnvironmentTemplate
  {
  public:
    AWS_PROTON_API CompatibleEnvironmentTemplate();
    AWS_PROTON_API CompatibleEnvironmentTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API CompatibleEnvironmentTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The major version of the compatible environment template.</p>
     */
    inline const Aws::String& GetMajorVersion() const{ return m_majorVersion; }
    inline bool MajorVersionHasBeenSet() const { return m_majorVersionHasBeenSet; }
    inline void SetMajorVersion(const Aws::String& value) { m_majorVersionHasBeenSet = true; m_majorVersion = value; }
    inline void SetMajorVersion(Aws::String&& value) { m_majorVersionHasBeenSet = true; m_majorVersion = std::move(value); }
    inline void SetMajorVersion(const char* value) { m_majorVersionHasBeenSet = true; m_majorVersion.assign(value); }
    inline CompatibleEnvironmentTemplate& WithMajorVersion(const Aws::String& value) { SetMajorVersion(value); return *this;}
    inline CompatibleEnvironmentTemplate& WithMajorVersion(Aws::String&& value) { SetMajorVersion(std::move(value)); return *this;}
    inline CompatibleEnvironmentTemplate& WithMajorVersion(const char* value) { SetMajorVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compatible environment template name.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline CompatibleEnvironmentTemplate& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline CompatibleEnvironmentTemplate& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline CompatibleEnvironmentTemplate& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}
  private:

    Aws::String m_majorVersion;
    bool m_majorVersionHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
