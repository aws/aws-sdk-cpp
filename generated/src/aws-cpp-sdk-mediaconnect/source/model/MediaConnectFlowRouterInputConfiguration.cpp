/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediaconnect/model/MediaConnectFlowRouterInputConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaConnect {
namespace Model {

MediaConnectFlowRouterInputConfiguration::MediaConnectFlowRouterInputConfiguration(JsonView jsonValue) { *this = jsonValue; }

MediaConnectFlowRouterInputConfiguration& MediaConnectFlowRouterInputConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("flowArn")) {
    m_flowArn = jsonValue.GetString("flowArn");
    m_flowArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("flowOutputArn")) {
    m_flowOutputArn = jsonValue.GetString("flowOutputArn");
    m_flowOutputArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceTransitDecryption")) {
    m_sourceTransitDecryption = jsonValue.GetObject("sourceTransitDecryption");
    m_sourceTransitDecryptionHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaConnectFlowRouterInputConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_flowArnHasBeenSet) {
    payload.WithString("flowArn", m_flowArn);
  }

  if (m_flowOutputArnHasBeenSet) {
    payload.WithString("flowOutputArn", m_flowOutputArn);
  }

  if (m_sourceTransitDecryptionHasBeenSet) {
    payload.WithObject("sourceTransitDecryption", m_sourceTransitDecryption.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
