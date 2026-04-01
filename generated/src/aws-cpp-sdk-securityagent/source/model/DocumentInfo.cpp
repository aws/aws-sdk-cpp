/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/DocumentInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

DocumentInfo::DocumentInfo(JsonView jsonValue) { *this = jsonValue; }

DocumentInfo& DocumentInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3Location")) {
    m_s3Location = jsonValue.GetString("s3Location");
    m_s3LocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("artifactId")) {
    m_artifactId = jsonValue.GetString("artifactId");
    m_artifactIdHasBeenSet = true;
  }
  return *this;
}

JsonValue DocumentInfo::Jsonize() const {
  JsonValue payload;

  if (m_s3LocationHasBeenSet) {
    payload.WithString("s3Location", m_s3Location);
  }

  if (m_artifactIdHasBeenSet) {
    payload.WithString("artifactId", m_artifactId);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
