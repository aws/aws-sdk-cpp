/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
 * <p>An object that provides information about the configuration of a chat
 * agent.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RegisteredUserQuickChatEmbeddingConfiguration">AWS
 * API Reference</a></p>
 */
class RegisteredUserQuickChatEmbeddingConfiguration {
 public:
  AWS_QUICKSIGHT_API RegisteredUserQuickChatEmbeddingConfiguration() = default;
  AWS_QUICKSIGHT_API RegisteredUserQuickChatEmbeddingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API RegisteredUserQuickChatEmbeddingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
