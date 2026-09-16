/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sqs/model/BatchResultErrorEntry.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SQS {
namespace Model {

BatchResultErrorEntry::BatchResultErrorEntry(JsonView jsonValue) { *this = jsonValue; }

BatchResultErrorEntry& BatchResultErrorEntry::operator=(JsonView jsonValue) { return *this; }

JsonValue BatchResultErrorEntry::Jsonize() const {
  JsonValue payload;
  return payload;
}

}  // namespace Model
}  // namespace SQS
}  // namespace Aws
