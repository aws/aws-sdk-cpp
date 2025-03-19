/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53-recovery-readiness/Route53RecoveryReadiness_EXPORTS.h>
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
namespace Route53RecoveryReadiness
{
namespace Model
{

  /**
   * <p>Information relating to readiness check status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-recovery-readiness-2019-12-02/Message">AWS
   * API Reference</a></p>
   */
  class Message
  {
  public:
    AWS_ROUTE53RECOVERYREADINESS_API Message() = default;
    AWS_ROUTE53RECOVERYREADINESS_API Message(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Message& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RECOVERYREADINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The text of a readiness check message.</p>
     */
    inline const Aws::String& GetMessageText() const { return m_messageText; }
    inline bool MessageTextHasBeenSet() const { return m_messageTextHasBeenSet; }
    template<typename MessageTextT = Aws::String>
    void SetMessageText(MessageTextT&& value) { m_messageTextHasBeenSet = true; m_messageText = std::forward<MessageTextT>(value); }
    template<typename MessageTextT = Aws::String>
    Message& WithMessageText(MessageTextT&& value) { SetMessageText(std::forward<MessageTextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_messageText;
    bool m_messageTextHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53RecoveryReadiness
} // namespace Aws
