/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Polly {
namespace Model {

/**
 * <p>Indicates the end of the input stream. After sending this event, the input
 * stream will be closed and all audio will be returned.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/polly-2016-06-10/CloseStreamEvent">AWS
 * API Reference</a></p>
 */
class CloseStreamEvent {
 public:
  AWS_POLLY_API CloseStreamEvent() = default;
  AWS_POLLY_API CloseStreamEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API CloseStreamEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_POLLY_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace Polly
}  // namespace Aws
