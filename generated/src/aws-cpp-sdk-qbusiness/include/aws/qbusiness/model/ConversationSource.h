/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>The source reference for an existing attachment in an existing
   * conversation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ConversationSource">AWS
   * API Reference</a></p>
   */
  class ConversationSource
  {
  public:
    AWS_QBUSINESS_API ConversationSource() = default;
    AWS_QBUSINESS_API ConversationSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API ConversationSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the Amazon Q Business conversation.</p>
     */
    inline const Aws::String& GetConversationId() const { return m_conversationId; }
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
    template<typename ConversationIdT = Aws::String>
    void SetConversationId(ConversationIdT&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::forward<ConversationIdT>(value); }
    template<typename ConversationIdT = Aws::String>
    ConversationSource& WithConversationId(ConversationIdT&& value) { SetConversationId(std::forward<ConversationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the Amazon Q Business attachment.</p>
     */
    inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    template<typename AttachmentIdT = Aws::String>
    void SetAttachmentId(AttachmentIdT&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::forward<AttachmentIdT>(value); }
    template<typename AttachmentIdT = Aws::String>
    ConversationSource& WithAttachmentId(AttachmentIdT&& value) { SetAttachmentId(std::forward<AttachmentIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
