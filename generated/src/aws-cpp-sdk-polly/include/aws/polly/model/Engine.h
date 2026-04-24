/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/polly/Polly_EXPORTS.h>

namespace Aws {
namespace Polly {
namespace Model {
enum class Engine { NOT_SET, standard, neural, long_form, generative };

namespace EngineMapper {
AWS_POLLY_API Engine GetEngineForName(const Aws::String& name);

AWS_POLLY_API Aws::String GetNameForEngine(Engine value);
}  // namespace EngineMapper
}  // namespace Model
}  // namespace Polly
}  // namespace Aws
