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
 * <p>The configuration for automatic endpoint encryption. In this mode,
 * MediaConnect determines the encryption key when the endpoint connects. This type
 * does not require any additional settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/AutomaticEndpointEncryptionConfiguration">AWS
 * API Reference</a></p>
 */
class AutomaticEndpointEncryptionConfiguration {
 public:
  AWS_MEDIACONNECT_API AutomaticEndpointEncryptionConfiguration() = default;
  AWS_MEDIACONNECT_API AutomaticEndpointEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API AutomaticEndpointEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
