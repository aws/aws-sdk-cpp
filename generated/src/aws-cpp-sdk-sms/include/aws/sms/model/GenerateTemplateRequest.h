/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/SMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/OutputFormat.h>
#include <utility>

namespace Aws
{
namespace SMS
{
namespace Model
{

  /**
   */
  class GenerateTemplateRequest : public SMSRequest
  {
  public:
    AWS_SMS_API GenerateTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GenerateTemplate"; }

    AWS_SMS_API Aws::String SerializePayload() const override;

    AWS_SMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the application associated with the CloudFormation template.</p>
     */
    inline const Aws::String& GetAppId() const { return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    template<typename AppIdT = Aws::String>
    void SetAppId(AppIdT&& value) { m_appIdHasBeenSet = true; m_appId = std::forward<AppIdT>(value); }
    template<typename AppIdT = Aws::String>
    GenerateTemplateRequest& WithAppId(AppIdT&& value) { SetAppId(std::forward<AppIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format for generating the CloudFormation template.</p>
     */
    inline OutputFormat GetTemplateFormat() const { return m_templateFormat; }
    inline bool TemplateFormatHasBeenSet() const { return m_templateFormatHasBeenSet; }
    inline void SetTemplateFormat(OutputFormat value) { m_templateFormatHasBeenSet = true; m_templateFormat = value; }
    inline GenerateTemplateRequest& WithTemplateFormat(OutputFormat value) { SetTemplateFormat(value); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    OutputFormat m_templateFormat{OutputFormat::NOT_SET};
    bool m_templateFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
