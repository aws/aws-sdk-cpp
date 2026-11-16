/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/opensearchmemory/model/BlobSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace OpenSearchMemory {
namespace Model {

BlobSource::BlobSource(JsonView jsonValue) { *this = jsonValue; }

BlobSource& BlobSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3Location")) {
    m_s3Location = jsonValue.GetObject("s3Location");
    m_s3LocationHasBeenSet = true;
  }
  return *this;
}

JsonValue BlobSource::Jsonize() const {
  JsonValue payload;

  if (m_s3LocationHasBeenSet) {
    payload.WithObject("s3Location", m_s3Location.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
