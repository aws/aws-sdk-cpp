/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/S3TablesParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

S3TablesParameters::S3TablesParameters(JsonView jsonValue) { *this = jsonValue; }

S3TablesParameters& S3TablesParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TableBucketArn")) {
    m_tableBucketArn = jsonValue.GetString("TableBucketArn");
    m_tableBucketArnHasBeenSet = true;
  }
  return *this;
}

JsonValue S3TablesParameters::Jsonize() const {
  JsonValue payload;

  if (m_tableBucketArnHasBeenSet) {
    payload.WithString("TableBucketArn", m_tableBucketArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
