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
 * <p>Configuration for an external Bedrock knowledge base.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/ExternalBedrockKnowledgeBaseConfig">AWS
 * API Reference</a></p>
 */
class ExternalBedrockKnowledgeBaseConfig {
 public:
  AWS_QCONNECT_API ExternalBedrockKnowledgeBaseConfig() = default;
  AWS_QCONNECT_API ExternalBedrockKnowledgeBaseConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API ExternalBedrockKnowledgeBaseConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the external Bedrock knowledge base.</p>
   */
  inline const Aws::String& GetBedrockKnowledgeBaseArn() const { return m_bedrockKnowledgeBaseArn; }
  inline bool BedrockKnowledgeBaseArnHasBeenSet() const { return m_bedrockKnowledgeBaseArnHasBeenSet; }
  template <typename BedrockKnowledgeBaseArnT = Aws::String>
  void SetBedrockKnowledgeBaseArn(BedrockKnowledgeBaseArnT&& value) {
    m_bedrockKnowledgeBaseArnHasBeenSet = true;
    m_bedrockKnowledgeBaseArn = std::forward<BedrockKnowledgeBaseArnT>(value);
  }
  template <typename BedrockKnowledgeBaseArnT = Aws::String>
  ExternalBedrockKnowledgeBaseConfig& WithBedrockKnowledgeBaseArn(BedrockKnowledgeBaseArnT&& value) {
    SetBedrockKnowledgeBaseArn(std::forward<BedrockKnowledgeBaseArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role used to access the external
   * Bedrock knowledge base.</p>
   */
  inline const Aws::String& GetAccessRoleArn() const { return m_accessRoleArn; }
  inline bool AccessRoleArnHasBeenSet() const { return m_accessRoleArnHasBeenSet; }
  template <typename AccessRoleArnT = Aws::String>
  void SetAccessRoleArn(AccessRoleArnT&& value) {
    m_accessRoleArnHasBeenSet = true;
    m_accessRoleArn = std::forward<AccessRoleArnT>(value);
  }
  template <typename AccessRoleArnT = Aws::String>
  ExternalBedrockKnowledgeBaseConfig& WithAccessRoleArn(AccessRoleArnT&& value) {
    SetAccessRoleArn(std::forward<AccessRoleArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bedrockKnowledgeBaseArn;
  bool m_bedrockKnowledgeBaseArnHasBeenSet = false;

  Aws::String m_accessRoleArn;
  bool m_accessRoleArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
