/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace PinpointSMSVoice {

class PinpointSMSVoiceClient;

template <typename DerivedClient>
class PinpointSMSVoicePaginationBase {
 public:
  virtual ~PinpointSMSVoicePaginationBase() = default;
};
}  // namespace PinpointSMSVoice
}  // namespace Aws
