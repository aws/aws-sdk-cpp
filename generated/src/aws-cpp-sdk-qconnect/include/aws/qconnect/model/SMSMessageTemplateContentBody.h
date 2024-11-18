/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/MessageTemplateBodyContentProvider.h>
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
   * <p>The body to use in SMS messages.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SMSMessageTemplateContentBody">AWS
   * API Reference</a></p>
   */
  class SMSMessageTemplateContentBody
  {
  public:
    AWS_QCONNECT_API SMSMessageTemplateContentBody();
    AWS_QCONNECT_API SMSMessageTemplateContentBody(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API SMSMessageTemplateContentBody& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message body to use in SMS messages.</p>
     */
    inline const MessageTemplateBodyContentProvider& GetPlainText() const{ return m_plainText; }
    inline bool PlainTextHasBeenSet() const { return m_plainTextHasBeenSet; }
    inline void SetPlainText(const MessageTemplateBodyContentProvider& value) { m_plainTextHasBeenSet = true; m_plainText = value; }
    inline void SetPlainText(MessageTemplateBodyContentProvider&& value) { m_plainTextHasBeenSet = true; m_plainText = std::move(value); }
    inline SMSMessageTemplateContentBody& WithPlainText(const MessageTemplateBodyContentProvider& value) { SetPlainText(value); return *this;}
    inline SMSMessageTemplateContentBody& WithPlainText(MessageTemplateBodyContentProvider&& value) { SetPlainText(std::move(value)); return *this;}
    ///@}
  private:

    MessageTemplateBodyContentProvider m_plainText;
    bool m_plainTextHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
