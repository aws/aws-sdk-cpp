/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>
#include <aws/securityagent/model/ArtifactType.h>

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
 * <p>Files containing relevant data for review</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/Artifact">AWS
 * API Reference</a></p>
 */
class Artifact {
 public:
  AWS_SECURITYAGENT_API Artifact() = default;
  AWS_SECURITYAGENT_API Artifact(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Artifact& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The content of the artifact</p>
   */
  inline const Aws::String& GetContents() const { return m_contents; }
  inline bool ContentsHasBeenSet() const { return m_contentsHasBeenSet; }
  template <typename ContentsT = Aws::String>
  void SetContents(ContentsT&& value) {
    m_contentsHasBeenSet = true;
    m_contents = std::forward<ContentsT>(value);
  }
  template <typename ContentsT = Aws::String>
  Artifact& WithContents(ContentsT&& value) {
    SetContents(std::forward<ContentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The file type of the artifact</p>
   */
  inline ArtifactType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ArtifactType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline Artifact& WithType(ArtifactType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_contents;

  ArtifactType m_type{ArtifactType::NOT_SET};
  bool m_contentsHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
