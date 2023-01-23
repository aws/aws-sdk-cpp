/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that defines the email template to use for an email message, and
   * the values to use for any message variables in that template. An <i>email
   * template</i> is a type of message template that contains content that you want
   * to define, save, and reuse in email messages that you send.</p><p><h3>See
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


    /**
     * <p>The name of the template. You will refer to this name when you send email
     * using the <code>SendTemplatedEmail</code> or <code>SendBulkTemplatedEmail</code>
     * operations. </p>
     */
    inline const Aws::String& GetTemplateName() const{ return m_templateName; }

    /**
     * <p>The name of the template. You will refer to this name when you send email
     * using the <code>SendTemplatedEmail</code> or <code>SendBulkTemplatedEmail</code>
     * operations. </p>
     */
    inline bool TemplateNameHasBeenSet() const { return m_templateNameHasBeenSet; }

    /**
     * <p>The name of the template. You will refer to this name when you send email
     * using the <code>SendTemplatedEmail</code> or <code>SendBulkTemplatedEmail</code>
     * operations. </p>
     */
    inline void SetTemplateName(const Aws::String& value) { m_templateNameHasBeenSet = true; m_templateName = value; }

    /**
     * <p>The name of the template. You will refer to this name when you send email
     * using the <code>SendTemplatedEmail</code> or <code>SendBulkTemplatedEmail</code>
     * operations. </p>
     */
    inline void SetTemplateName(Aws::String&& value) { m_templateNameHasBeenSet = true; m_templateName = std::move(value); }

    /**
     * <p>The name of the template. You will refer to this name when you send email
     * using the <code>SendTemplatedEmail</code> or <code>SendBulkTemplatedEmail</code>
     * operations. </p>
     */
    inline void SetTemplateName(const char* value) { m_templateNameHasBeenSet = true; m_templateName.assign(value); }

    /**
     * <p>The name of the template. You will refer to this name when you send email
     * using the <code>SendTemplatedEmail</code> or <code>SendBulkTemplatedEmail</code>
     * operations. </p>
     */
    inline Template& WithTemplateName(const Aws::String& value) { SetTemplateName(value); return *this;}

    /**
     * <p>The name of the template. You will refer to this name when you send email
     * using the <code>SendTemplatedEmail</code> or <code>SendBulkTemplatedEmail</code>
     * operations. </p>
     */
    inline Template& WithTemplateName(Aws::String&& value) { SetTemplateName(std::move(value)); return *this;}

    /**
     * <p>The name of the template. You will refer to this name when you send email
     * using the <code>SendTemplatedEmail</code> or <code>SendBulkTemplatedEmail</code>
     * operations. </p>
     */
    inline Template& WithTemplateName(const char* value) { SetTemplateName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline void SetTemplateArn(const Aws::String& value) { m_templateArnHasBeenSet = true; m_templateArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline void SetTemplateArn(Aws::String&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline void SetTemplateArn(const char* value) { m_templateArnHasBeenSet = true; m_templateArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline Template& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline Template& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline Template& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}


    /**
     * <p>An object that defines the values to use for message variables in the
     * template. This object is a set of key-value pairs. Each key defines a message
     * variable in the template. The corresponding value defines the value to use for
     * that variable.</p>
     */
    inline const Aws::String& GetTemplateData() const{ return m_templateData; }

    /**
     * <p>An object that defines the values to use for message variables in the
     * template. This object is a set of key-value pairs. Each key defines a message
     * variable in the template. The corresponding value defines the value to use for
     * that variable.</p>
     */
    inline bool TemplateDataHasBeenSet() const { return m_templateDataHasBeenSet; }

    /**
     * <p>An object that defines the values to use for message variables in the
     * template. This object is a set of key-value pairs. Each key defines a message
     * variable in the template. The corresponding value defines the value to use for
     * that variable.</p>
     */
    inline void SetTemplateData(const Aws::String& value) { m_templateDataHasBeenSet = true; m_templateData = value; }

    /**
     * <p>An object that defines the values to use for message variables in the
     * template. This object is a set of key-value pairs. Each key defines a message
     * variable in the template. The corresponding value defines the value to use for
     * that variable.</p>
     */
    inline void SetTemplateData(Aws::String&& value) { m_templateDataHasBeenSet = true; m_templateData = std::move(value); }

    /**
     * <p>An object that defines the values to use for message variables in the
     * template. This object is a set of key-value pairs. Each key defines a message
     * variable in the template. The corresponding value defines the value to use for
     * that variable.</p>
     */
    inline void SetTemplateData(const char* value) { m_templateDataHasBeenSet = true; m_templateData.assign(value); }

    /**
     * <p>An object that defines the values to use for message variables in the
     * template. This object is a set of key-value pairs. Each key defines a message
     * variable in the template. The corresponding value defines the value to use for
     * that variable.</p>
     */
    inline Template& WithTemplateData(const Aws::String& value) { SetTemplateData(value); return *this;}

    /**
     * <p>An object that defines the values to use for message variables in the
     * template. This object is a set of key-value pairs. Each key defines a message
     * variable in the template. The corresponding value defines the value to use for
     * that variable.</p>
     */
    inline Template& WithTemplateData(Aws::String&& value) { SetTemplateData(std::move(value)); return *this;}

    /**
     * <p>An object that defines the values to use for message variables in the
     * template. This object is a set of key-value pairs. Each key defines a message
     * variable in the template. The corresponding value defines the value to use for
     * that variable.</p>
     */
    inline Template& WithTemplateData(const char* value) { SetTemplateData(value); return *this;}

  private:

    Aws::String m_templateName;
    bool m_templateNameHasBeenSet = false;

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;

    Aws::String m_templateData;
    bool m_templateDataHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
