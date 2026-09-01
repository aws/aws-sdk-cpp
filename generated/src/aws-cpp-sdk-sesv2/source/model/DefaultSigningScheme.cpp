/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sesv2/model/DefaultSigningScheme.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SESV2 {
namespace Model {

DefaultSigningScheme::DefaultSigningScheme(JsonView jsonValue) { *this = jsonValue; }

DefaultSigningScheme& DefaultSigningScheme::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue DefaultSigningScheme::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace SESV2
}  // namespace Aws
