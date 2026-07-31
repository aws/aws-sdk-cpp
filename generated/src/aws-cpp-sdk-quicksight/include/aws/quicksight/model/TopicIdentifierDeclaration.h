/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>A topic.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicIdentifierDeclaration">AWS
 * API Reference</a></p>
 */
class TopicIdentifierDeclaration {
 public:
  AWS_QUICKSIGHT_API TopicIdentifierDeclaration() = default;
  AWS_QUICKSIGHT_API TopicIdentifierDeclaration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API TopicIdentifierDeclaration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the topic, typically the topic's name.</p>
   */
  inline const Aws::String& GetIdentifier() const { return m_identifier; }
  inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
  template <typename IdentifierT = Aws::String>
  void SetIdentifier(IdentifierT&& value) {
    m_identifierHasBeenSet = true;
    m_identifier = std::forward<IdentifierT>(value);
  }
  template <typename IdentifierT = Aws::String>
  TopicIdentifierDeclaration& WithIdentifier(IdentifierT&& value) {
    SetIdentifier(std::forward<IdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the topic.</p>
   */
  inline const Aws::String& GetTopicArn() const { return m_topicArn; }
  inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
  template <typename TopicArnT = Aws::String>
  void SetTopicArn(TopicArnT&& value) {
    m_topicArnHasBeenSet = true;
    m_topicArn = std::forward<TopicArnT>(value);
  }
  template <typename TopicArnT = Aws::String>
  TopicIdentifierDeclaration& WithTopicArn(TopicArnT&& value) {
    SetTopicArn(std::forward<TopicArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identifier;

  Aws::String m_topicArn;
  bool m_identifierHasBeenSet = false;
  bool m_topicArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
