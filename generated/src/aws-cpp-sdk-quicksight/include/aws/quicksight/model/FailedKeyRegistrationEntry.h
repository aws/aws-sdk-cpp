/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>An entry that appears when a <code>KeyRegistration</code> update to
   * QuickSight fails.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FailedKeyRegistrationEntry">AWS
   * API Reference</a></p>
   */
  class FailedKeyRegistrationEntry
  {
  public:
    AWS_QUICKSIGHT_API FailedKeyRegistrationEntry() = default;
    AWS_QUICKSIGHT_API FailedKeyRegistrationEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FailedKeyRegistrationEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the KMS key that failed to update.</p>
     */
    inline const Aws::String& GetKeyArn() const { return m_keyArn; }
    inline bool KeyArnHasBeenSet() const { return m_keyArnHasBeenSet; }
    template<typename KeyArnT = Aws::String>
    void SetKeyArn(KeyArnT&& value) { m_keyArnHasBeenSet = true; m_keyArn = std::forward<KeyArnT>(value); }
    template<typename KeyArnT = Aws::String>
    FailedKeyRegistrationEntry& WithKeyArn(KeyArnT&& value) { SetKeyArn(std::forward<KeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that provides information about why a
     * <code>FailedKeyRegistrationEntry</code> error occurred.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    FailedKeyRegistrationEntry& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP status of a <code>FailedKeyRegistrationEntry</code> error.</p>
     */
    inline int GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(int value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline FailedKeyRegistrationEntry& WithStatusCode(int value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean that indicates whether a <code>FailedKeyRegistrationEntry</code>
     * resulted from user error. If the value of this property is <code>True</code>,
     * the error was caused by user error. If the value of this property is
     * <code>False</code>, the error occurred on the backend. If your job continues
     * fail and with a <code>False</code> <code>SenderFault</code> value, contact
     * Amazon Web Services Support.</p>
     */
    inline bool GetSenderFault() const { return m_senderFault; }
    inline bool SenderFaultHasBeenSet() const { return m_senderFaultHasBeenSet; }
    inline void SetSenderFault(bool value) { m_senderFaultHasBeenSet = true; m_senderFault = value; }
    inline FailedKeyRegistrationEntry& WithSenderFault(bool value) { SetSenderFault(value); return *this;}
    ///@}
  private:

    Aws::String m_keyArn;
    bool m_keyArnHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    int m_statusCode{0};
    bool m_statusCodeHasBeenSet = false;

    bool m_senderFault{false};
    bool m_senderFaultHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
