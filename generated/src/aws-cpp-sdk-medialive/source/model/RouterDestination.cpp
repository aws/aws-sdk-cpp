/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/medialive/model/RouterDestination.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MediaLive {
namespace Model {

RouterDestination::RouterDestination(JsonView jsonValue) { *this = jsonValue; }

RouterDestination& RouterDestination::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("availabilityZoneName")) {
    m_availabilityZoneName = jsonValue.GetString("availabilityZoneName");
    m_availabilityZoneNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("routerOutputArn")) {
    m_routerOutputArn = jsonValue.GetString("routerOutputArn");
    m_routerOutputArnHasBeenSet = true;
  }
  return *this;
}

JsonValue RouterDestination::Jsonize() const {
  JsonValue payload;

  if (m_availabilityZoneNameHasBeenSet) {
    payload.WithString("availabilityZoneName", m_availabilityZoneName);
  }

  if (m_routerOutputArnHasBeenSet) {
    payload.WithString("routerOutputArn", m_routerOutputArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace MediaLive
}  // namespace Aws
