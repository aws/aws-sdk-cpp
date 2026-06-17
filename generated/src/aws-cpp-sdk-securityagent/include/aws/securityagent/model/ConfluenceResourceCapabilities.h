/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Capabilities for an integrated Confluence space.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/ConfluenceResourceCapabilities">AWS
 * API Reference</a></p>
 */
class ConfluenceResourceCapabilities {
 public:
  AWS_SECURITYAGENT_API ConfluenceResourceCapabilities() = default;
  AWS_SECURITYAGENT_API ConfluenceResourceCapabilities(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API ConfluenceResourceCapabilities& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether to fetch documents from this space.</p>
   */
  inline bool GetFetchDocument() const { return m_fetchDocument; }
  inline bool FetchDocumentHasBeenSet() const { return m_fetchDocumentHasBeenSet; }
  inline void SetFetchDocument(bool value) {
    m_fetchDocumentHasBeenSet = true;
    m_fetchDocument = value;
  }
  inline ConfluenceResourceCapabilities& WithFetchDocument(bool value) {
    SetFetchDocument(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to create documents in this space.</p>
   */
  inline bool GetCreateDocument() const { return m_createDocument; }
  inline bool CreateDocumentHasBeenSet() const { return m_createDocumentHasBeenSet; }
  inline void SetCreateDocument(bool value) {
    m_createDocumentHasBeenSet = true;
    m_createDocument = value;
  }
  inline ConfluenceResourceCapabilities& WithCreateDocument(bool value) {
    SetCreateDocument(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether to update documents in this space.</p>
   */
  inline bool GetUpdateDocument() const { return m_updateDocument; }
  inline bool UpdateDocumentHasBeenSet() const { return m_updateDocumentHasBeenSet; }
  inline void SetUpdateDocument(bool value) {
    m_updateDocumentHasBeenSet = true;
    m_updateDocument = value;
  }
  inline ConfluenceResourceCapabilities& WithUpdateDocument(bool value) {
    SetUpdateDocument(value);
    return *this;
  }
  ///@}
 private:
  bool m_fetchDocument{false};

  bool m_createDocument{false};

  bool m_updateDocument{false};
  bool m_fetchDocumentHasBeenSet = false;
  bool m_createDocumentHasBeenSet = false;
  bool m_updateDocumentHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
