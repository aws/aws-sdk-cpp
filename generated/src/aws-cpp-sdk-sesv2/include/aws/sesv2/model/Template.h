/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/EmailTemplateContent.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/MessageHeader.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that defines the email template to use for an email message, and
   * the values to use for any message variables in that template. An <i>email
   * template</i> is a type of message template that contains content that you want
   * to reuse in email messages that you send. You can specifiy the email template by
   * providing the name or ARN of an <i>email template</i> previously saved in your
   * Amazon SES account or by providing the full template content.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/Template">AWS API
   * Reference</a></p>
   */
  class Template
  {
  public:
    AWS_SESV2_API Template();
    AWS_SESV2_API Template(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Template& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the template. You will refer to this name when you send email
     * using the <code>SendTemplatedEmail</code> or <code>SendBulkTemplatedEmail</code>
     * operations. </p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }
    inline Template& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}
    inline Template& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}
    inline Template& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }
    inline Template& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}
    inline Template& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}
    inline Template& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content of the template.</p>  <p>Amazon SES supports only simple
     * substitions when you send email using the <code>SendEmail</code> or
     * <code>SendBulkEmail</code> operations and you provide the full template content
     * in the request.</p> 
     */
    inline const EmailTemplateContent& GetTemplateContent() const{ return m_templateContent; }
    inline bool TemplateContentHasBeenSet() const { return m_templateContentHasBeenSet; }
    inline void SetTemplateContent(const EmailTemplateContent& value) { m_templateContentHasBeenSet = true; m_templateContent = value; }
    inline void SetTemplateContent(EmailTemplateContent&& value) { m_templateContentHasBeenSet = true; m_templateContent = std::move(value); }
    inline Template& WithTemplateContent(const EmailTemplateContent& value) { SetTemplateContent(value); return *this;}
    inline Template& WithTemplateContent(EmailTemplateContent&& value) { SetTemplateContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines the values to use for message variables in the
     * template. This object is a set of key-value pairs. Each key defines a message
     * variable in the template. The corresponding value defines the value to use for
     * that variable.</p>
     */
    inline const Aws::String& GetTemplateData() const{ return m_templateData; }
    inline bool TemplateDataHasBeenSet() const { return m_templateDataHasBeenSet; }
    inline void SetTemplateData(const Aws::String& value) { m_templateDataHasBeenSet = true; m_templateData = value; }
    inline void SetTemplateData(Aws::String&& value) { m_templateDataHasBeenSet = true; m_templateData = std::move(value); }
    inline void SetTemplateData(const char* value) { m_templateDataHasBeenSet = true; m_templateData.assign(value); }
    inline Template& WithTemplateData(const Aws::String& value) { SetTemplateData(value); return *this;}
    inline Template& WithTemplateData(Aws::String&& value) { SetTemplateData(std::move(value)); return *this;}
    inline Template& WithTemplateData(const char* value) { SetTemplateData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of message headers that will be added to the email message.</p>
     */
    inline const Aws::Vector<MessageHeader>& GetHeaders() const{ return m_headers; }
    inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
    inline void SetHeaders(const Aws::Vector<MessageHeader>& value) { m_headersHasBeenSet = true; m_headers = value; }
    inline void SetHeaders(Aws::Vector<MessageHeader>&& value) { m_headersHasBeenSet = true; m_headers = std::move(value); }
    inline Template& WithHeaders(const Aws::Vector<MessageHeader>& value) { SetHeaders(value); return *this;}
    inline Template& WithHeaders(Aws::Vector<MessageHeader>&& value) { SetHeaders(std::move(value)); return *this;}
    inline Template& AddHeaders(const MessageHeader& value) { m_headersHasBeenSet = true; m_headers.push_back(value); return *this; }
    inline Template& AddHeaders(MessageHeader&& value) { m_headersHasBeenSet = true; m_headers.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;

    EmailTemplateContent m_templateContent;
    bool m_templateContentHasBeenSet = false;

    Aws::String m_templateData;
    bool m_templateDataHasBeenSet = false;

    Aws::Vector<MessageHeader> m_headers;
    bool m_headersHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
