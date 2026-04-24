/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/MessageConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

MessageConfiguration::MessageConfiguration(JsonView jsonValue) { *this = jsonValue; }

MessageConfiguration& MessageConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("generateFillerMessage")) {
    m_generateFillerMessage = jsonValue.GetBool("generateFillerMessage");
    m_generateFillerMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("generateChunkedMessage")) {
    m_generateChunkedMessage = jsonValue.GetBool("generateChunkedMessage");
    m_generateChunkedMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue MessageConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_generateFillerMessageHasBeenSet) {
    payload.WithBool("generateFillerMessage", m_generateFillerMessage);
  }

  if (m_generateChunkedMessageHasBeenSet) {
    payload.WithBool("generateChunkedMessage", m_generateChunkedMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
