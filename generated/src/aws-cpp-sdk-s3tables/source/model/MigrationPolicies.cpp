/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/MigrationPolicies.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

MigrationPolicies::MigrationPolicies(JsonView jsonValue) { *this = jsonValue; }

MigrationPolicies& MigrationPolicies::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("unmatchedSourceFieldsPolicy")) {
    m_unmatchedSourceFieldsPolicy =
        UnmatchedSourceFieldsPolicyMapper::GetUnmatchedSourceFieldsPolicyForName(jsonValue.GetString("unmatchedSourceFieldsPolicy"));
    m_unmatchedSourceFieldsPolicyHasBeenSet = true;
  }
  if (jsonValue.ValueExists("incompatibleValuesPolicy")) {
    m_incompatibleValuesPolicy =
        IncompatibleValuesPolicyMapper::GetIncompatibleValuesPolicyForName(jsonValue.GetString("incompatibleValuesPolicy"));
    m_incompatibleValuesPolicyHasBeenSet = true;
  }
  return *this;
}

JsonValue MigrationPolicies::Jsonize() const {
  JsonValue payload;

  if (m_unmatchedSourceFieldsPolicyHasBeenSet) {
    payload.WithString("unmatchedSourceFieldsPolicy",
                       UnmatchedSourceFieldsPolicyMapper::GetNameForUnmatchedSourceFieldsPolicy(m_unmatchedSourceFieldsPolicy));
  }

  if (m_incompatibleValuesPolicyHasBeenSet) {
    payload.WithString("incompatibleValuesPolicy",
                       IncompatibleValuesPolicyMapper::GetNameForIncompatibleValuesPolicy(m_incompatibleValuesPolicy));
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
