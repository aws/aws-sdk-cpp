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
 * <p>The switching configuration where the router output switches to the new
 * router input immediately. This type does not require any additional
 * settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/ImmediateFabricSwitchingConfiguration">AWS
 * API Reference</a></p>
 */
class ImmediateFabricSwitchingConfiguration {
 public:
  AWS_MEDIACONNECT_API ImmediateFabricSwitchingConfiguration() = default;
  AWS_MEDIACONNECT_API ImmediateFabricSwitchingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API ImmediateFabricSwitchingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
