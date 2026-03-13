/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mgn/model/SourceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace mgn {
namespace Model {

SourceConfiguration::SourceConfiguration(JsonView jsonValue) { *this = jsonValue; }

SourceConfiguration& SourceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sourceEnvironment")) {
    m_sourceEnvironment = SourceEnvironmentMapper::GetSourceEnvironmentForName(jsonValue.GetString("sourceEnvironment"));
    m_sourceEnvironmentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceS3Configuration")) {
    m_sourceS3Configuration = jsonValue.GetObject("sourceS3Configuration");
    m_sourceS3ConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_sourceEnvironmentHasBeenSet) {
    payload.WithString("sourceEnvironment", SourceEnvironmentMapper::GetNameForSourceEnvironment(m_sourceEnvironment));
  }

  if (m_sourceS3ConfigurationHasBeenSet) {
    payload.WithObject("sourceS3Configuration", m_sourceS3Configuration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
