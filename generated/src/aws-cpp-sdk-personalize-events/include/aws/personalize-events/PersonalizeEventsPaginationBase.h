/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>

#include <memory>

namespace Aws {
namespace PersonalizeEvents {

class PersonalizeEventsClient;

template <typename DerivedClient>
class PersonalizeEventsPaginationBase {
 public:
  virtual ~PersonalizeEventsPaginationBase() = default;
};
}  // namespace PersonalizeEvents
}  // namespace Aws
