/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/MediaConnectRouterOutputSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

MediaConnectRouterOutputSettings::MediaConnectRouterOutputSettings(JsonView jsonValue) { *this = jsonValue; }

MediaConnectRouterOutputSettings& MediaConnectRouterOutputSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("connectedRouterInputs")) {
    m_connectedRouterInputs = jsonValue.GetObject("connectedRouterInputs");
    m_connectedRouterInputsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("containerSettings")) {
    m_containerSettings = jsonValue.GetObject("containerSettings");
    m_containerSettingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destination")) {
    m_destination = jsonValue.GetObject("destination");
    m_destinationHasBeenSet = true;
  }
  return *this;
}

JsonValue MediaConnectRouterOutputSettings::Jsonize() const {
  JsonValue payload;

  if (m_connectedRouterInputsHasBeenSet) {
    payload.WithObject("connectedRouterInputs", m_connectedRouterInputs.Jsonize());
  }

  if (m_containerSettingsHasBeenSet) {
    payload.WithObject("containerSettings", m_containerSettings.Jsonize());
  }

  if (m_destinationHasBeenSet) {
    payload.WithObject("destination", m_destination.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
