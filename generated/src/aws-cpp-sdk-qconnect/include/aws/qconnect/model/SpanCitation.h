/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

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
 * <p>A citation that spans a specific range of text.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SpanCitation">AWS
 * API Reference</a></p>
 */
class SpanCitation {
 public:
  AWS_QCONNECT_API SpanCitation() = default;
  AWS_QCONNECT_API SpanCitation(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API SpanCitation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the content being cited in the span.</p>
   */
  inline const Aws::String& GetContentId() const { return m_contentId; }
  inline bool ContentIdHasBeenSet() const { return m_contentIdHasBeenSet; }
  template <typename ContentIdT = Aws::String>
  void SetContentId(ContentIdT&& value) {
    m_contentIdHasBeenSet = true;
    m_contentId = std::forward<ContentIdT>(value);
  }
  template <typename ContentIdT = Aws::String>
  SpanCitation& WithContentId(ContentIdT&& value) {
    SetContentId(std::forward<ContentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title of the content being cited in the span.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  SpanCitation& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the knowledge base containing the cited content.</p>
   */
  inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
  inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
  template <typename KnowledgeBaseIdT = Aws::String>
  void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    m_knowledgeBaseIdHasBeenSet = true;
    m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value);
  }
  template <typename KnowledgeBaseIdT = Aws::String>
  SpanCitation& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the knowledge base containing the cited
   * content.</p>
   */
  inline const Aws::String& GetKnowledgeBaseArn() const { return m_knowledgeBaseArn; }
  inline bool KnowledgeBaseArnHasBeenSet() const { return m_knowledgeBaseArnHasBeenSet; }
  template <typename KnowledgeBaseArnT = Aws::String>
  void SetKnowledgeBaseArn(KnowledgeBaseArnT&& value) {
    m_knowledgeBaseArnHasBeenSet = true;
    m_knowledgeBaseArn = std::forward<KnowledgeBaseArnT>(value);
  }
  template <typename KnowledgeBaseArnT = Aws::String>
  SpanCitation& WithKnowledgeBaseArn(KnowledgeBaseArnT&& value) {
    SetKnowledgeBaseArn(std::forward<KnowledgeBaseArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_contentId;
  bool m_contentIdHasBeenSet = false;

  Aws::String m_title;
  bool m_titleHasBeenSet = false;

  Aws::String m_knowledgeBaseId;
  bool m_knowledgeBaseIdHasBeenSet = false;

  Aws::String m_knowledgeBaseArn;
  bool m_knowledgeBaseArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
