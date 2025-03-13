/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/SESV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SESV2
{
namespace Model
{

  /**
   * <p>&gt;Represents a request to create a preview of the MIME content of an email
   * when provided with a template and a set of replacement data.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/TestRenderEmailTemplateRequest">AWS
   * API Reference</a></p>
   */
  class TestRenderEmailTemplateRequest : public SESV2Request
  {
  public:
    AWS_SESV2_API TestRenderEmailTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestRenderEmailTemplate"; }

    AWS_SESV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the template.</p>
     */
    inline const Aws::String& GetTemplateName() const { return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    template<typename TemplateNameT = Aws::String>
    void SetTemplateName(TemplateNameT&& value) { m_templateNameHasBeenSet = true; m_templateName = std::forward<TemplateNameT>(value); }
    template<typename TemplateNameT = Aws::String>
    TestRenderEmailTemplateRequest& WithTemplateName(TemplateNameT&& value) { SetTemplateName(std::forward<TemplateNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of replacement values to apply to the template. This parameter is a
     * JSON object, typically consisting of key-value pairs in which the keys
     * correspond to replacement tags in the email template.</p>
     */
    inline const Aws::String& GetTemplateData() const { return m_templateData; }
    inline bool TemplateDataHasBeenSet() const { return m_templateDataHasBeenSet; }
    template<typename TemplateDataT = Aws::String>
    void SetTemplateData(TemplateDataT&& value) { m_templateDataHasBeenSet = true; m_templateData = std::forward<TemplateDataT>(value); }
    template<typename TemplateDataT = Aws::String>
    TestRenderEmailTemplateRequest& WithTemplateData(TemplateDataT&& value) { SetTemplateData(std::forward<TemplateDataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_templateData;
    bool m_templateDataHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
