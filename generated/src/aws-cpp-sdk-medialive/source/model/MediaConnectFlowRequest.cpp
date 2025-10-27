/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/MediaConnectFlowRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

MediaConnectFlowRequest::MediaConnectFlowRequest(JsonView jsonValue) { *this = jsonValue; }

MediaConnectFlowRequest& MediaConnectFlowRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("flowArn")) {
    m_flowArn = jsonValue.GetString("flowArn");
    m_flowArnHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaConnectFlowRequest::Jsonize() const {
  JsonValue payload;

  if (m_flowArnHasBeenSet) {
    payload.WithString("flowArn", m_flowArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
