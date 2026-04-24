/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/SourceCodeRepository.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

SourceCodeRepository::SourceCodeRepository(JsonView jsonValue) { *this = jsonValue; }

SourceCodeRepository& SourceCodeRepository::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3Location")) {
    m_s3Location = jsonValue.GetString("s3Location");
    m_s3LocationHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceCodeRepository::Jsonize() const {
  JsonValue payload;

  if (m_s3LocationHasBeenSet) {
    payload.WithString("s3Location", m_s3Location);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
