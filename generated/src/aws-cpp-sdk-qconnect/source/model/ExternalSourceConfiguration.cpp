﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/ExternalSourceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

ExternalSourceConfiguration::ExternalSourceConfiguration(JsonView jsonValue) { *this = jsonValue; }

ExternalSourceConfiguration& ExternalSourceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("source")) {
    m_source = ExternalSourceMapper::GetExternalSourceForName(jsonValue.GetString("source"));
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configuration")) {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ExternalSourceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sourceHasBeenSet) {
    payload.WithString("source", ExternalSourceMapper::GetNameForExternalSource(m_source));
  }

  if (m_configurationHasBeenSet) {
    payload.WithObject("configuration", m_configuration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
