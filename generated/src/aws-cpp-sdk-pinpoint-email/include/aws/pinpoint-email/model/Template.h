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
    AWS_PINPOINTEMAIL_API Template() = default;
    AWS_PINPOINTEMAIL_API Template(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Template& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINTEMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the template.</p>
     */
    inline const Aws::String& GetTemplateArn() const { return m_templateArn; }
    inline bool TemplateArnHasBeenSet() const { return m_templateArnHasBeenSet; }
    template<typename TemplateArnT = Aws::String>
    void SetTemplateArn(TemplateArnT&& value) { m_templateArnHasBeenSet = true; m_templateArn = std::forward<TemplateArnT>(value); }
    template<typename TemplateArnT = Aws::String>
    Template& WithTemplateArn(TemplateArnT&& value) { SetTemplateArn(std::forward<TemplateArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that defines the values to use for message variables in the
     * template. This object is a set of key-value pairs. Each key defines a message
     * variable in the template. The corresponding value defines the value to use for
     * that variable.</p>
     */
    inline const Aws::String& GetTemplateData() const { return m_templateData; }
    inline bool TemplateDataHasBeenSet() const { return m_templateDataHasBeenSet; }
    template<typename TemplateDataT = Aws::String>
    void SetTemplateData(TemplateDataT&& value) { m_templateDataHasBeenSet = true; m_templateData = std::forward<TemplateDataT>(value); }
    template<typename TemplateDataT = Aws::String>
    Template& WithTemplateData(TemplateDataT&& value) { SetTemplateData(std::forward<TemplateDataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_templateArn;
    bool m_templateArnHasBeenSet = false;

    Aws::String m_templateData;
    bool m_templateDataHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointEmail
} // namespace Aws
