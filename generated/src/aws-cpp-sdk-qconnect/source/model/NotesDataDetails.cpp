/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/qconnect/model/NotesDataDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QConnect {
namespace Model {

NotesDataDetails::NotesDataDetails(JsonView jsonValue) { *this = jsonValue; }

NotesDataDetails& NotesDataDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("completion")) {
    m_completion = jsonValue.GetString("completion");
    m_completionHasBeenSet = true;
  }
  return *this;
}

JsonValue NotesDataDetails::Jsonize() const {
  JsonValue payload;

  if (m_completionHasBeenSet) {
    payload.WithString("completion", m_completion);
  }

  return payload;
}

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
