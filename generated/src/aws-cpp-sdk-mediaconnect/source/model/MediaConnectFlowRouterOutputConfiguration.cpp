/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/MediaConnectFlowRouterOutputConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

MediaConnectFlowRouterOutputConfiguration::MediaConnectFlowRouterOutputConfiguration(JsonView jsonValue) { *this = jsonValue; }

MediaConnectFlowRouterOutputConfiguration& MediaConnectFlowRouterOutputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("flowArn")) {
    m_flowArn = jsonValue.GetString("flowArn");
    m_flowArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("flowSourceArn")) {
    m_flowSourceArn = jsonValue.GetString("flowSourceArn");
    m_flowSourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationTransitEncryption")) {
    m_destinationTransitEncryption = jsonValue.GetObject("destinationTransitEncryption");
    m_destinationTransitEncryptionHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaConnectFlowRouterOutputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_flowArnHasBeenSet) {
    payload.WithString("flowArn", m_flowArn);
  }

  if (m_flowSourceArnHasBeenSet) {
    payload.WithString("flowSourceArn", m_flowSourceArn);
  }

  if (m_destinationTransitEncryptionHasBeenSet) {
    payload.WithObject("destinationTransitEncryption", m_destinationTransitEncryption.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
