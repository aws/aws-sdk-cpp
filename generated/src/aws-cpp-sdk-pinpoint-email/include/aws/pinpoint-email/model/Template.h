/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-email/PinpointEmail_EXPORTS.h>
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
namespace PinpointEmail
{
namespace Model
{

  class Template
  {
  public:
    AWS_PINPOINTEMAIL_API Template();
    AWS_PINPOINTEMAIL_API Template(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Template& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


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

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;

    Aws::String m_templateData;
    bool m_templateDataHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
