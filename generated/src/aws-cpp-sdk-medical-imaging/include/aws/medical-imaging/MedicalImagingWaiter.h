/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Waiter.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/medical-imaging/MedicalImagingClient.h>

#include <algorithm>

namespace Aws {
namespace MedicalImaging {

template <typename DerivedClient = MedicalImagingClient>
class MedicalImagingWaiter {
 public:
};
}  // namespace MedicalImaging
}  // namespace Aws
