/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/SecurityRequirementArtifactFormat.h>

#include <utility>

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
 * <p>A document used as source material for importing security
 * requirements.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/SecurityRequirementArtifact">AWS
 * API Reference</a></p>
 */
class SecurityRequirementArtifact {
 public:
  AWS_SECURITYAGENT_API SecurityRequirementArtifact() = default;
  AWS_SECURITYAGENT_API SecurityRequirementArtifact(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API SecurityRequirementArtifact& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The file name of the document.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  SecurityRequirementArtifact& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The format of the document. Valid values are MD, PDF, TXT, DOCX, and DOC.</p>
   */
  inline SecurityRequirementArtifactFormat GetFormat() const { return m_format; }
  inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }
  inline void SetFormat(SecurityRequirementArtifactFormat value) {
    m_formatHasBeenSet = true;
    m_format = value;
  }
  inline SecurityRequirementArtifact& WithFormat(SecurityRequirementArtifactFormat value) {
    SetFormat(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The binary content of the document.</p>
   */
  inline const Aws::Utils::CryptoBuffer& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::Utils::CryptoBuffer>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::Utils::CryptoBuffer>
  SecurityRequirementArtifact& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  SecurityRequirementArtifactFormat m_format{SecurityRequirementArtifactFormat::NOT_SET};

  Aws::Utils::CryptoBuffer m_content{};
  bool m_nameHasBeenSet = false;
  bool m_formatHasBeenSet = false;
  bool m_contentHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
