/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ConversationStatus.h>
#include <aws/qconnect/model/ConversationStatusReason.h>
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
   * <p>The conversation state associated to a message.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ConversationState">AWS
   * API Reference</a></p>
   */
  class ConversationState
  {
  public:
    AWS_QCONNECT_API ConversationState() = default;
    AWS_QCONNECT_API ConversationState(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ConversationState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the conversation state.</p>
     */
    inline ConversationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ConversationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ConversationState& WithStatus(ConversationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason of the conversation state.</p>
     */
    inline ConversationStatusReason GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(ConversationStatusReason value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline ConversationState& WithReason(ConversationStatusReason value) { SetReason(value); return *this;}
    ///@}
  private:

    ConversationStatus m_status{ConversationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ConversationStatusReason m_reason{ConversationStatusReason::NOT_SET};
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
