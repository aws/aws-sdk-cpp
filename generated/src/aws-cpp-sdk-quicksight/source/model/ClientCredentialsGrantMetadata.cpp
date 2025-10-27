/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/ClientCredentialsGrantMetadata.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

ClientCredentialsGrantMetadata::ClientCredentialsGrantMetadata(JsonView jsonValue) { *this = jsonValue; }

ClientCredentialsGrantMetadata& ClientCredentialsGrantMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BaseEndpoint")) {
    m_baseEndpoint = jsonValue.GetString("BaseEndpoint");
    m_baseEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClientCredentialsSource")) {
    m_clientCredentialsSource =
        ClientCredentialsSourceMapper::GetClientCredentialsSourceForName(jsonValue.GetString("ClientCredentialsSource"));
    m_clientCredentialsSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ClientCredentialsDetails")) {
    m_clientCredentialsDetails = jsonValue.GetObject("ClientCredentialsDetails");
    m_clientCredentialsDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue ClientCredentialsGrantMetadata::Jsonize() const {
  JsonValue payload;

  if (m_baseEndpointHasBeenSet) {
    payload.WithString("BaseEndpoint", m_baseEndpoint);
  }

  if (m_clientCredentialsSourceHasBeenSet) {
    payload.WithString("ClientCredentialsSource",
                       ClientCredentialsSourceMapper::GetNameForClientCredentialsSource(m_clientCredentialsSource));
  }

  if (m_clientCredentialsDetailsHasBeenSet) {
    payload.WithObject("ClientCredentialsDetails", m_clientCredentialsDetails.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
