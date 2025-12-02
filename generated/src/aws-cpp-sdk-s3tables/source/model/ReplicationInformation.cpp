/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/ReplicationInformation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

ReplicationInformation::ReplicationInformation(JsonView jsonValue) { *this = jsonValue; }

ReplicationInformation& ReplicationInformation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceTableARN")) {
    m_sourceTableARN = jsonValue.GetString("sourceTableARN");
    m_sourceTableARNHasBeenSet = true;
  }
  return *this;
}

JsonValue ReplicationInformation::Jsonize() const {
  JsonValue payload;

  if (m_sourceTableARNHasBeenSet) {
    payload.WithString("sourceTableARN", m_sourceTableARN);
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
