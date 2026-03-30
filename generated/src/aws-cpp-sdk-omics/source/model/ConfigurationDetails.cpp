/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/omics/model/ConfigurationDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Omics {
namespace Model {

ConfigurationDetails::ConfigurationDetails(JsonView jsonValue) { *this = jsonValue; }

ConfigurationDetails& ConfigurationDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("arn")) {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("uuid")) {
    m_uuid = jsonValue.GetString("uuid");
    m_uuidHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationDetails::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("arn", m_arn);
  }

  if (m_uuidHasBeenSet) {
    payload.WithString("uuid", m_uuid);
  }

  return payload;
}

}  // namespace Model
}  // namespace Omics
}  // namespace Aws
