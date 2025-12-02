/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/ManagedTableInformation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

ManagedTableInformation::ManagedTableInformation(JsonView jsonValue) { *this = jsonValue; }

ManagedTableInformation& ManagedTableInformation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("replicationInformation")) {
    m_replicationInformation = jsonValue.GetObject("replicationInformation");
    m_replicationInformationHasBeenSet = true;
  }
  return *this;
}

JsonValue ManagedTableInformation::Jsonize() const {
  JsonValue payload;

  if (m_replicationInformationHasBeenSet) {
    payload.WithObject("replicationInformation", m_replicationInformation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
