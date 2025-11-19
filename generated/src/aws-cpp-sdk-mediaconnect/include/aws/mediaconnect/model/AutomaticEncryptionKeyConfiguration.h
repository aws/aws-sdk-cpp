/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaConnect {
namespace Model {

/**
 * <p>Configuration settings for automatic encryption key management, where
 * MediaConnect handles key creation and rotation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AutomaticEncryptionKeyConfiguration">AWS
 * API Reference</a></p>
 */
class AutomaticEncryptionKeyConfiguration {
 public:
  AWS_MEDIACONNECT_API AutomaticEncryptionKeyConfiguration() = default;
  AWS_MEDIACONNECT_API AutomaticEncryptionKeyConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API AutomaticEncryptionKeyConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
