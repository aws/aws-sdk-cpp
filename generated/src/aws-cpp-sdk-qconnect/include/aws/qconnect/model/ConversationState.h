/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ConversationStatusReason.h>
#include <aws/qconnect/model/ConversationStatus.h>
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
    AWS_QCONNECT_API ConversationState();
    AWS_QCONNECT_API ConversationState(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ConversationState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The reason of the conversation state.</p>
     */
    inline const ConversationStatusReason& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const ConversationStatusReason& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(ConversationStatusReason&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline ConversationState& WithReason(const ConversationStatusReason& value) { SetReason(value); return *this;}
    inline ConversationState& WithReason(ConversationStatusReason&& value) { SetReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the conversation state.</p>
     */
    inline const ConversationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ConversationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ConversationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ConversationState& WithStatus(const ConversationStatus& value) { SetStatus(value); return *this;}
    inline ConversationState& WithStatus(ConversationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    ConversationStatusReason m_reason;
    bool m_reasonHasBeenSet = false;

    ConversationStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
