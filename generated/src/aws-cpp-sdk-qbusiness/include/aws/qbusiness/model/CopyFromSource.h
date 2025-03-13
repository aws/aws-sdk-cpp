/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/ConversationSource.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>The source reference for an existing attachment.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/CopyFromSource">AWS
   * API Reference</a></p>
   */
  class CopyFromSource
  {
  public:
    AWS_QBUSINESS_API CopyFromSource() = default;
    AWS_QBUSINESS_API CopyFromSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API CopyFromSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A reference to an attachment in an existing conversation.</p>
     */
    inline const ConversationSource& GetConversation() const { return m_conversation; }
    inline bool ConversationHasBeenSet() const { return m_conversationHasBeenSet; }
    template<typename ConversationT = ConversationSource>
    void SetConversation(ConversationT&& value) { m_conversationHasBeenSet = true; m_conversation = std::forward<ConversationT>(value); }
    template<typename ConversationT = ConversationSource>
    CopyFromSource& WithConversation(ConversationT&& value) { SetConversation(std::forward<ConversationT>(value)); return *this;}
    ///@}
  private:

    ConversationSource m_conversation;
    bool m_conversationHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
