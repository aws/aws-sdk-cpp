/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/SMSMessageTemplateContentBody.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The content of the message template that applies to the SMS channel
   * subtype.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SMSMessageTemplateContent">AWS
   * API Reference</a></p>
   */
  class SMSMessageTemplateContent
  {
  public:
    AWS_QCONNECT_API SMSMessageTemplateContent();
    AWS_QCONNECT_API SMSMessageTemplateContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API SMSMessageTemplateContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The body to use in SMS messages.</p>
     */
    inline const SMSMessageTemplateContentBody& GetBody() const{ return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    inline void SetBody(const SMSMessageTemplateContentBody& value) { m_bodyHasBeenSet = true; m_body = value; }
    inline void SetBody(SMSMessageTemplateContentBody&& value) { m_bodyHasBeenSet = true; m_body = std::move(value); }
    inline SMSMessageTemplateContent& WithBody(const SMSMessageTemplateContentBody& value) { SetBody(value); return *this;}
    inline SMSMessageTemplateContent& WithBody(SMSMessageTemplateContentBody&& value) { SetBody(std::move(value)); return *this;}
    ///@}
  private:

    SMSMessageTemplateContentBody m_body;
    bool m_bodyHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
