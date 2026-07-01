/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/OpenSearchService_EXPORTS.h>

namespace Aws {
namespace OpenSearchService {
namespace Model {
enum class DomainUseCase { NOT_SET, SEARCH, VECTOR, OBSERVABILITY, MIXED };

namespace DomainUseCaseMapper {
AWS_OPENSEARCHSERVICE_API DomainUseCase GetDomainUseCaseForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForDomainUseCase(DomainUseCase value);
}  // namespace DomainUseCaseMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
