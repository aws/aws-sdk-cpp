/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityagent/model/CaCertificateSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityAgent {
namespace Model {

CaCertificateSource::CaCertificateSource(JsonView jsonValue) { *this = jsonValue; }

CaCertificateSource& CaCertificateSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("inlinePem")) {
    m_inlinePem = jsonValue.GetString("inlinePem");
    m_inlinePemHasBeenSet = true;
  }
  if (jsonValue.ValueExists("artifactId")) {
    m_artifactId = jsonValue.GetString("artifactId");
    m_artifactIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3Location")) {
    m_s3Location = jsonValue.GetString("s3Location");
    m_s3LocationHasBeenSet = true;
  }
  return *this;
}

JsonValue CaCertificateSource::Jsonize() const {
  JsonValue payload;

  if (m_inlinePemHasBeenSet) {
    payload.WithString("inlinePem", m_inlinePem);
  }

  if (m_artifactIdHasBeenSet) {
    payload.WithString("artifactId", m_artifactId);
  }

  if (m_s3LocationHasBeenSet) {
    payload.WithString("s3Location", m_s3Location);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
