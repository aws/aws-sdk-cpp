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
   * <p>The detailed data about the current state of the service
   * pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ServicePipelineState">AWS
   * API Reference</a></p>
   */
  class ServicePipelineState
  {
  public:
    AWS_PROTON_API ServicePipelineState();
    AWS_PROTON_API ServicePipelineState(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API ServicePipelineState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The service spec that was used to create the service pipeline.</p>
     */
    inline const Aws::String& GetSpec() const{ return m_spec; }
    inline bool SpecHasBeenSet() const { return m_specHasBeenSet; }
    inline void SetSpec(const Aws::String& value) { m_specHasBeenSet = true; m_spec = value; }
    inline void SetSpec(Aws::String&& value) { m_specHasBeenSet = true; m_spec = std::move(value); }
    inline void SetSpec(const char* value) { m_specHasBeenSet = true; m_spec.assign(value); }
    inline ServicePipelineState& WithSpec(const Aws::String& value) { SetSpec(value); return *this;}
    inline ServicePipelineState& WithSpec(Aws::String&& value) { SetSpec(std::move(value)); return *this;}
    inline ServicePipelineState& WithSpec(const char* value) { SetSpec(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The major version of the service template that was used to create the service
     * pipeline.</p>
     */
    inline const Aws::String& GetTemplateMajorVersion() const{ return m_templateMajorVersion; }
    inline bool TemplateMajorVersionHasBeenSet() const { return m_templateMajorVersionHasBeenSet; }
    inline void SetTemplateMajorVersion(const Aws::String& value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion = value; }
    inline void SetTemplateMajorVersion(Aws::String&& value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion = std::move(value); }
    inline void SetTemplateMajorVersion(const char* value) { m_templateMajorVersionHasBeenSet = true; m_templateMajorVersion.assign(value); }
    inline ServicePipelineState& WithTemplateMajorVersion(const Aws::String& value) { SetTemplateMajorVersion(value); return *this;}
    inline ServicePipelineState& WithTemplateMajorVersion(Aws::String&& value) { SetTemplateMajorVersion(std::move(value)); return *this;}
    inline ServicePipelineState& WithTemplateMajorVersion(const char* value) { SetTemplateMajorVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minor version of the service template that was used to create the service
     * pipeline.</p>
     */
    inline const Aws::String& GetTemplateMinorVersion() const{ return m_templateMinorVersion; }
    inline bool TemplateMinorVersionHasBeenSet() const { return m_templateMinorVersionHasBeenSet; }
    inline void SetTemplateMinorVersion(const Aws::String& value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion = value; }
    inline void SetTemplateMinorVersion(Aws::String&& value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion = std::move(value); }
    inline void SetTemplateMinorVersion(const char* value) { m_templateMinorVersionHasBeenSet = true; m_templateMinorVersion.assign(value); }
    inline ServicePipelineState& WithTemplateMinorVersion(const Aws::String& value) { SetTemplateMinorVersion(value); return *this;}
    inline ServicePipelineState& WithTemplateMinorVersion(Aws::String&& value) { SetTemplateMinorVersion(std::move(value)); return *this;}
    inline ServicePipelineState& WithTemplateMinorVersion(const char* value) { SetTemplateMinorVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the service template that was used to create the service
     * pipeline.</p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline ServicePipelineState& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline ServicePipelineState& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline ServicePipelineState& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}
  private:

    Aws::String m_spec;
    bool m_specHasBeenSet = false;

    Aws::String m_templateMajorVersion;
    bool m_templateMajorVersionHasBeenSet = false;

    Aws::String m_templateMinorVersion;
    bool m_templateMinorVersionHasBeenSet = false;

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
