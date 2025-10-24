/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/Proton_EXPORTS.h>

namespace Aws {
namespace Proton {
namespace Model {
enum class RepositoryProvider { NOT_SET, GITHUB, GITHUB_ENTERPRISE, BITBUCKET };

namespace RepositoryProviderMapper {
AWS_PROTON_API RepositoryProvider GetRepositoryProviderForName(const Aws::String& name);

AWS_PROTON_API Aws::String GetNameForRepositoryProvider(RepositoryProvider value);
}  // namespace RepositoryProviderMapper
}  // namespace Model
}  // namespace Proton
}  // namespace Aws
