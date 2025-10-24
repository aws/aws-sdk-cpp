/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rtbfabric/model/LinkApplicationLogConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RTBFabric {
namespace Model {

LinkApplicationLogConfiguration::LinkApplicationLogConfiguration(JsonView jsonValue) { *this = jsonValue; }

LinkApplicationLogConfiguration& LinkApplicationLogConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sampling")) {
    m_sampling = jsonValue.GetObject("sampling");
    m_samplingHasBeenSet = true;
  }
  return *this;
}

JsonValue LinkApplicationLogConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_samplingHasBeenSet) {
    payload.WithObject("sampling", m_sampling.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace RTBFabric
}  // namespace Aws
