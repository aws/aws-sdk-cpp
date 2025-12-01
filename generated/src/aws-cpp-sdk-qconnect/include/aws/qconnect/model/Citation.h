/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/CitationSpan.h>
#include <aws/qconnect/model/ReferenceType.h>

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
 * <p>A citation that references source content.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/Citation">AWS
 * API Reference</a></p>
 */
class Citation {
 public:
  AWS_QCONNECT_API Citation() = default;
  AWS_QCONNECT_API Citation(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Citation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the content being cited.</p>
   */
  inline const Aws::String& GetContentId() const { return m_contentId; }
  inline bool ContentIdHasBeenSet() const { return m_contentIdHasBeenSet; }
  template <typename ContentIdT = Aws::String>
  void SetContentId(ContentIdT&& value) {
    m_contentIdHasBeenSet = true;
    m_contentId = std::forward<ContentIdT>(value);
  }
  template <typename ContentIdT = Aws::String>
  Citation& WithContentId(ContentIdT&& value) {
    SetContentId(std::forward<ContentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The title of the cited content.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  Citation& WithTitle(TitleT&& value) {
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
  Citation& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const CitationSpan& GetCitationSpan() const { return m_citationSpan; }
  inline bool CitationSpanHasBeenSet() const { return m_citationSpanHasBeenSet; }
  template <typename CitationSpanT = CitationSpan>
  void SetCitationSpan(CitationSpanT&& value) {
    m_citationSpanHasBeenSet = true;
    m_citationSpan = std::forward<CitationSpanT>(value);
  }
  template <typename CitationSpanT = CitationSpan>
  Citation& WithCitationSpan(CitationSpanT&& value) {
    SetCitationSpan(std::forward<CitationSpanT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source URL for the citation.</p>
   */
  inline const Aws::String& GetSourceURL() const { return m_sourceURL; }
  inline bool SourceURLHasBeenSet() const { return m_sourceURLHasBeenSet; }
  template <typename SourceURLT = Aws::String>
  void SetSourceURL(SourceURLT&& value) {
    m_sourceURLHasBeenSet = true;
    m_sourceURL = std::forward<SourceURLT>(value);
  }
  template <typename SourceURLT = Aws::String>
  Citation& WithSourceURL(SourceURLT&& value) {
    SetSourceURL(std::forward<SourceURLT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A type to define the KB origin of a cited content</p>
   */
  inline ReferenceType GetReferenceType() const { return m_referenceType; }
  inline bool ReferenceTypeHasBeenSet() const { return m_referenceTypeHasBeenSet; }
  inline void SetReferenceType(ReferenceType value) {
    m_referenceTypeHasBeenSet = true;
    m_referenceType = value;
  }
  inline Citation& WithReferenceType(ReferenceType value) {
    SetReferenceType(value);
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

  CitationSpan m_citationSpan;
  bool m_citationSpanHasBeenSet = false;

  Aws::String m_sourceURL;
  bool m_sourceURLHasBeenSet = false;

  ReferenceType m_referenceType{ReferenceType::NOT_SET};
  bool m_referenceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
