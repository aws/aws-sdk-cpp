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
    AWS_QCONNECT_API SMSMessageTemplateContent() = default;
    AWS_QCONNECT_API SMSMessageTemplateContent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API SMSMessageTemplateContent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The body to use in SMS messages.</p>
     */
    inline const SMSMessageTemplateContentBody& GetBody() const { return m_body; }
    inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
    template<typename BodyT = SMSMessageTemplateContentBody>
    void SetBody(BodyT&& value) { m_bodyHasBeenSet = true; m_body = std::forward<BodyT>(value); }
    template<typename BodyT = SMSMessageTemplateContentBody>
    SMSMessageTemplateContent& WithBody(BodyT&& value) { SetBody(std::forward<BodyT>(value)); return *this;}
    ///@}
  private:

    SMSMessageTemplateContentBody m_body;
    bool m_bodyHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
