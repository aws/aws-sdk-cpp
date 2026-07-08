/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/opensearch/model/DomainUseCase.h>

using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchService {
namespace Model {
namespace DomainUseCaseMapper {

static const int SEARCH_HASH = HashingUtils::HashString("SEARCH");
static const int VECTOR_HASH = HashingUtils::HashString("VECTOR");
static const int OBSERVABILITY_HASH = HashingUtils::HashString("OBSERVABILITY");
static const int MIXED_HASH = HashingUtils::HashString("MIXED");

DomainUseCase GetDomainUseCaseForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == SEARCH_HASH) {
    return DomainUseCase::SEARCH;
  } else if (hashCode == VECTOR_HASH) {
    return DomainUseCase::VECTOR;
  } else if (hashCode == OBSERVABILITY_HASH) {
    return DomainUseCase::OBSERVABILITY;
  } else if (hashCode == MIXED_HASH) {
    return DomainUseCase::MIXED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DomainUseCase>(hashCode);
  }

  return DomainUseCase::NOT_SET;
}

Aws::String GetNameForDomainUseCase(DomainUseCase enumValue) {
  switch (enumValue) {
    case DomainUseCase::NOT_SET:
      return {};
    case DomainUseCase::SEARCH:
      return "SEARCH";
    case DomainUseCase::VECTOR:
      return "VECTOR";
    case DomainUseCase::OBSERVABILITY:
      return "OBSERVABILITY";
    case DomainUseCase::MIXED:
      return "MIXED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DomainUseCaseMapper
}  // namespace Model
}  // namespace OpenSearchService
}  // namespace Aws
