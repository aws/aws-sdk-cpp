/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/SelfServiceConversationHistory.h>
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
   * <p>The conversation context to include in SendMessage.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ConversationContext">AWS
   * API Reference</a></p>
   */
  class ConversationContext
  {
  public:
    AWS_QCONNECT_API ConversationContext();
    AWS_QCONNECT_API ConversationContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ConversationContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The self service conversation history before the Amazon Q in Connect
     * session.</p>
     */
    inline const Aws::Vector<SelfServiceConversationHistory>& GetSelfServiceConversationHistory() const{ return m_selfServiceConversationHistory; }
    inline bool SelfServiceConversationHistoryHasBeenSet() const { return m_selfServiceConversationHistoryHasBeenSet; }
    inline void SetSelfServiceConversationHistory(const Aws::Vector<SelfServiceConversationHistory>& value) { m_selfServiceConversationHistoryHasBeenSet = true; m_selfServiceConversationHistory = value; }
    inline void SetSelfServiceConversationHistory(Aws::Vector<SelfServiceConversationHistory>&& value) { m_selfServiceConversationHistoryHasBeenSet = true; m_selfServiceConversationHistory = std::move(value); }
    inline ConversationContext& WithSelfServiceConversationHistory(const Aws::Vector<SelfServiceConversationHistory>& value) { SetSelfServiceConversationHistory(value); return *this;}
    inline ConversationContext& WithSelfServiceConversationHistory(Aws::Vector<SelfServiceConversationHistory>&& value) { SetSelfServiceConversationHistory(std::move(value)); return *this;}
    inline ConversationContext& AddSelfServiceConversationHistory(const SelfServiceConversationHistory& value) { m_selfServiceConversationHistoryHasBeenSet = true; m_selfServiceConversationHistory.push_back(value); return *this; }
    inline ConversationContext& AddSelfServiceConversationHistory(SelfServiceConversationHistory&& value) { m_selfServiceConversationHistoryHasBeenSet = true; m_selfServiceConversationHistory.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SelfServiceConversationHistory> m_selfServiceConversationHistory;
    bool m_selfServiceConversationHistoryHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
