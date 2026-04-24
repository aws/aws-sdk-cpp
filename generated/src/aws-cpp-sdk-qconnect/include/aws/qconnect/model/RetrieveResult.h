/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
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
 * <p>A single result from a content retrieval operation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/RetrieveResult">AWS
 * API Reference</a></p>
 */
class RetrieveResult {
 public:
  AWS_QCONNECT_API RetrieveResult() = default;
  AWS_QCONNECT_API RetrieveResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API RetrieveResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the assistant association for the retrieved result.</p>
   */
  inline const Aws::String& GetAssociationId() const { return m_associationId; }
  inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
  template <typename AssociationIdT = Aws::String>
  void SetAssociationId(AssociationIdT&& value) {
    m_associationIdHasBeenSet = true;
    m_associationId = std::forward<AssociationIdT>(value);
  }
  template <typename AssociationIdT = Aws::String>
  RetrieveResult& WithAssociationId(AssociationIdT&& value) {
    SetAssociationId(std::forward<AssociationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL, URI, or ID of the retrieved content when available, or a UUID when
   * unavailable.</p>
   */
  inline const Aws::String& GetSourceId() const { return m_sourceId; }
  inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
  template <typename SourceIdT = Aws::String>
  void SetSourceId(SourceIdT&& value) {
    m_sourceIdHasBeenSet = true;
    m_sourceId = std::forward<SourceIdT>(value);
  }
  template <typename SourceIdT = Aws::String>
  RetrieveResult& WithSourceId(SourceIdT&& value) {
    SetSourceId(std::forward<SourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A type to define the KB origin of a retrieved content.</p>
   */
  inline ReferenceType GetReferenceType() const { return m_referenceType; }
  inline bool ReferenceTypeHasBeenSet() const { return m_referenceTypeHasBeenSet; }
  inline void SetReferenceType(ReferenceType value) {
    m_referenceTypeHasBeenSet = true;
    m_referenceType = value;
  }
  inline RetrieveResult& WithReferenceType(ReferenceType value) {
    SetReferenceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The text content of the retrieved result.</p>
   */
  inline const Aws::String& GetContentText() const { return m_contentText; }
  inline bool ContentTextHasBeenSet() const { return m_contentTextHasBeenSet; }
  template <typename ContentTextT = Aws::String>
  void SetContentText(ContentTextT&& value) {
    m_contentTextHasBeenSet = true;
    m_contentText = std::forward<ContentTextT>(value);
  }
  template <typename ContentTextT = Aws::String>
  RetrieveResult& WithContentText(ContentTextT&& value) {
    SetContentText(std::forward<ContentTextT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_associationId;

  Aws::String m_sourceId;

  ReferenceType m_referenceType{ReferenceType::NOT_SET};

  Aws::String m_contentText;
  bool m_associationIdHasBeenSet = false;
  bool m_sourceIdHasBeenSet = false;
  bool m_referenceTypeHasBeenSet = false;
  bool m_contentTextHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
