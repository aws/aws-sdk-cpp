/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/securityhub/model/SoftwareResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SecurityHub {
namespace Model {

SoftwareResult::SoftwareResult(JsonView jsonValue) { *this = jsonValue; }

SoftwareResult& SoftwareResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PackageName")) {
    m_packageName = jsonValue.GetString("PackageName");
    m_packageNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PackageVersion")) {
    m_packageVersion = jsonValue.GetString("PackageVersion");
    m_packageVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PackageType")) {
    m_packageType = jsonValue.GetString("PackageType");
    m_packageTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceCount")) {
    m_resourceCount = jsonValue.GetInteger("ResourceCount");
    m_resourceCountHasBeenSet = true;
  }
  return *this;
}

JsonValue SoftwareResult::Jsonize() const {
  JsonValue payload;

  if (m_packageNameHasBeenSet) {
    payload.WithString("PackageName", m_packageName);
  }

  if (m_packageVersionHasBeenSet) {
    payload.WithString("PackageVersion", m_packageVersion);
  }

  if (m_packageTypeHasBeenSet) {
    payload.WithString("PackageType", m_packageType);
  }

  if (m_resourceCountHasBeenSet) {
    payload.WithInteger("ResourceCount", m_resourceCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
