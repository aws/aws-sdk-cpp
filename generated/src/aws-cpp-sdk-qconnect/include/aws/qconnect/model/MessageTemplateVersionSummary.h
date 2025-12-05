/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ChannelSubtype.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>The summary of the message template version.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/MessageTemplateVersionSummary">AWS
 * API Reference</a></p>
 */
class MessageTemplateVersionSummary {
 public:
  AWS_QCONNECT_API MessageTemplateVersionSummary() = default;
  AWS_QCONNECT_API MessageTemplateVersionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API MessageTemplateVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the message template.</p>
   */
  inline const Aws::String& GetMessageTemplateArn() const { return m_messageTemplateArn; }
  inline bool MessageTemplateArnHasBeenSet() const { return m_messageTemplateArnHasBeenSet; }
  template <typename MessageTemplateArnT = Aws::String>
  void SetMessageTemplateArn(MessageTemplateArnT&& value) {
    m_messageTemplateArnHasBeenSet = true;
    m_messageTemplateArn = std::forward<MessageTemplateArnT>(value);
  }
  template <typename MessageTemplateArnT = Aws::String>
  MessageTemplateVersionSummary& WithMessageTemplateArn(MessageTemplateArnT&& value) {
    SetMessageTemplateArn(std::forward<MessageTemplateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the message template.</p>
   */
  inline const Aws::String& GetMessageTemplateId() const { return m_messageTemplateId; }
  inline bool MessageTemplateIdHasBeenSet() const { return m_messageTemplateIdHasBeenSet; }
  template <typename MessageTemplateIdT = Aws::String>
  void SetMessageTemplateId(MessageTemplateIdT&& value) {
    m_messageTemplateIdHasBeenSet = true;
    m_messageTemplateId = std::forward<MessageTemplateIdT>(value);
  }
  template <typename MessageTemplateIdT = Aws::String>
  MessageTemplateVersionSummary& WithMessageTemplateId(MessageTemplateIdT&& value) {
    SetMessageTemplateId(std::forward<MessageTemplateIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the knowledge base.</p>
   */
  inline const Aws::String& GetKnowledgeBaseArn() const { return m_knowledgeBaseArn; }
  inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }
  template <typename KnowledgeBaseArnT = Aws::String>
  void SetKnowledgeBaseArn(KnowledgeBaseArnT&& value) {
    m_knowledgeBaseArnHasBeenSet = true;
    m_knowledgeBaseArn = std::forward<KnowledgeBaseArnT>(value);
  }
  template <typename KnowledgeBaseArnT = Aws::String>
  MessageTemplateVersionSummary& WithKnowledgeBaseArn(KnowledgeBaseArnT&& value) {
    SetKnowledgeBaseArn(std::forward<KnowledgeBaseArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the knowledge base.</p>
   */
  inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
  inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
  template <typename KnowledgeBaseIdT = Aws::String>
  void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    m_knowledgeBaseIdHasBeenSet = true;
    m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value);
  }
  template <typename KnowledgeBaseIdT = Aws::String>
  MessageTemplateVersionSummary& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the message template.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  MessageTemplateVersionSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The channel of the message template.</p>
   */
  inline const Aws::String& GetChannel() const { return m_channel; }
  inline bool ChannelHasBeenSet() const { return m_channelHasBeenSet; }
  template <typename ChannelT = Aws::String>
  void SetChannel(ChannelT&& value) {
    m_channelHasBeenSet = true;
    m_channel = std::forward<ChannelT>(value);
  }
  template <typename ChannelT = Aws::String>
  MessageTemplateVersionSummary& WithChannel(ChannelT&& value) {
    SetChannel(std::forward<ChannelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The channel subtype this message template applies to.</p>
   */
  inline ChannelSubtype GetChannelSubtype() const { return m_channelSubtype; }
  inline bool ChannelSubtypeHasBeenSet() const { return m_channelSubtypeHasBeenSet; }
  inline void SetChannelSubtype(ChannelSubtype value) {
    m_channelSubtypeHasBeenSet = true;
    m_channelSubtype = value;
  }
  inline MessageTemplateVersionSummary& WithChannelSubtype(ChannelSubtype value) {
    SetChannelSubtype(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the version of the message template is activated.</p>
   */
  inline bool GetIsActive() const { return m_isActive; }
  inline bool IsActiveHasBeenSet() const { return m_isActiveHasBeenSet; }
  inline void SetIsActive(bool value) {
    m_isActiveHasBeenSet = true;
    m_isActive = value;
  }
  inline MessageTemplateVersionSummary& WithIsActive(bool value) {
    SetIsActive(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version number of the message template version.</p>
   */
  inline long long GetVersionNumber() const { return m_versionNumber; }
  inline bool VersionNumberHasBeenSet() const { return m_versionNumberHasBeenSet; }
  inline void SetVersionNumber(long long value) {
    m_versionNumberHasBeenSet = true;
    m_versionNumber = value;
  }
  inline MessageTemplateVersionSummary& WithVersionNumber(long long value) {
    SetVersionNumber(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_messageTemplateArn;

  Aws::String m_messageTemplateId;

  Aws::String m_knowledgeBaseArn;

  Aws::String m_knowledgeBaseId;

  Aws::String m_name;

  Aws::String m_channel;

  ChannelSubtype m_channelSubtype{ChannelSubtype::NOT_SET};

  bool m_isActive{false};

  long long m_versionNumber{0};
  bool m_messageTemplateArnHasBeenSet = false;
  bool m_messageTemplateIdHasBeenSet = false;
  bool m_knowledgeBaseArnHasBeenSet = false;
  bool m_knowledgeBaseIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_channelHasBeenSet = false;
  bool m_channelSubtypeHasBeenSet = false;
  bool m_isActiveHasBeenSet = false;
  bool m_versionNumberHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
