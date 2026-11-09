/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3tables/model/SourceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {

SourceConfiguration::SourceConfiguration(JsonView jsonValue) { *this = jsonValue; }

SourceConfiguration& SourceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("glueTable")) {
    m_glueTable = jsonValue.GetObject("glueTable");
    m_glueTableHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_glueTableHasBeenSet) {
    payload.WithObject("glueTable", m_glueTable.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
