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
    AWS_QCONNECT_API ConversationContext() = default;
    AWS_QCONNECT_API ConversationContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API ConversationContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The self service conversation history before the Amazon Q in Connect
     * session.</p>
     */
    inline const Aws::Vector<SelfServiceConversationHistory>& GetSelfServiceConversationHistory() const { return m_selfServiceConversationHistory; }
    inline bool SelfServiceConversationHistoryHasBeenSet() const { return m_selfServiceConversationHistoryHasBeenSet; }
    template<typename SelfServiceConversationHistoryT = Aws::Vector<SelfServiceConversationHistory>>
    void SetSelfServiceConversationHistory(SelfServiceConversationHistoryT&& value) { m_selfServiceConversationHistoryHasBeenSet = true; m_selfServiceConversationHistory = std::forward<SelfServiceConversationHistoryT>(value); }
    template<typename SelfServiceConversationHistoryT = Aws::Vector<SelfServiceConversationHistory>>
    ConversationContext& WithSelfServiceConversationHistory(SelfServiceConversationHistoryT&& value) { SetSelfServiceConversationHistory(std::forward<SelfServiceConversationHistoryT>(value)); return *this;}
    template<typename SelfServiceConversationHistoryT = SelfServiceConversationHistory>
    ConversationContext& AddSelfServiceConversationHistory(SelfServiceConversationHistoryT&& value) { m_selfServiceConversationHistoryHasBeenSet = true; m_selfServiceConversationHistory.emplace_back(std::forward<SelfServiceConversationHistoryT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SelfServiceConversationHistory> m_selfServiceConversationHistory;
    bool m_selfServiceConversationHistoryHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
