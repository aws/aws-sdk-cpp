/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces-web/model/IconImageInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WorkSpacesWeb {
namespace Model {

IconImageInput::IconImageInput(JsonView jsonValue) { *this = jsonValue; }

IconImageInput& IconImageInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("blob")) {
    m_blob = HashingUtils::Base64Decode(jsonValue.GetString("blob"));
    m_blobHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3Uri")) {
    m_s3Uri = jsonValue.GetString("s3Uri");
    m_s3UriHasBeenSet = true;
  }
  return *this;
}

JsonValue IconImageInput::Jsonize() const {
  JsonValue payload;

  if (m_blobHasBeenSet) {
    payload.WithString("blob", HashingUtils::Base64Encode(m_blob));
  }

  if (m_s3UriHasBeenSet) {
    payload.WithString("s3Uri", m_s3Uri);
  }

  return payload;
}

}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
