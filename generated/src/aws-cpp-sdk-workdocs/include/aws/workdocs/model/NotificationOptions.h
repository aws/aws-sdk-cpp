/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Set of options which defines notification preferences of given
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/NotificationOptions">AWS
   * API Reference</a></p>
   */
  class NotificationOptions
  {
  public:
    AWS_WORKDOCS_API NotificationOptions() = default;
    AWS_WORKDOCS_API NotificationOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API NotificationOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Boolean value to indicate an email notification should be sent to the
     * recipients.</p>
     */
    inline bool GetSendEmail() const { return m_sendEmail; }
    inline bool SendEmailHasBeenSet() const { return m_sendEmailHasBeenSet; }
    inline void SetSendEmail(bool value) { m_sendEmailHasBeenSet = true; m_sendEmail = value; }
    inline NotificationOptions& WithSendEmail(bool value) { SetSendEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Text value to be included in the email body.</p>
     */
    inline const Aws::String& GetEmailMessage() const { return m_emailMessage; }
    inline bool EmailMessageHasBeenSet() const { return m_emailMessageHasBeenSet; }
    template<typename EmailMessageT = Aws::String>
    void SetEmailMessage(EmailMessageT&& value) { m_emailMessageHasBeenSet = true; m_emailMessage = std::forward<EmailMessageT>(value); }
    template<typename EmailMessageT = Aws::String>
    NotificationOptions& WithEmailMessage(EmailMessageT&& value) { SetEmailMessage(std::forward<EmailMessageT>(value)); return *this;}
    ///@}
  private:

    bool m_sendEmail{false};
    bool m_sendEmailHasBeenSet = false;

    Aws::String m_emailMessage;
    bool m_emailMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
