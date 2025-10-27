/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ReadClientCredentialsGrantMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ReadClientCredentialsGrantMetadata::ReadClientCredentialsGrantMetadata(JsonView jsonValue) { *this = jsonValue; }

ReadClientCredentialsGrantMetadata& ReadClientCredentialsGrantMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BaseEndpoint")) {
    m_baseEndpoint = jsonValue.GetString("BaseEndpoint");
    m_baseEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReadClientCredentialsDetails")) {
    m_readClientCredentialsDetails = jsonValue.GetObject("ReadClientCredentialsDetails");
    m_readClientCredentialsDetailsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClientCredentialsSource")) {
    m_clientCredentialsSource =
        ClientCredentialsSourceMapper::GetClientCredentialsSourceForName(jsonValue.GetString("ClientCredentialsSource"));
    m_clientCredentialsSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue ReadClientCredentialsGrantMetadata::Jsonize() const {
  JsonValue payload;

  if (m_baseEndpointHasBeenSet) {
    payload.WithString("BaseEndpoint", m_baseEndpoint);
  }

  if (m_readClientCredentialsDetailsHasBeenSet) {
    payload.WithObject("ReadClientCredentialsDetails", m_readClientCredentialsDetails.Jsonize());
  }

  if (m_clientCredentialsSourceHasBeenSet) {
    payload.WithString("ClientCredentialsSource",
                       ClientCredentialsSourceMapper::GetNameForClientCredentialsSource(m_clientCredentialsSource));
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
