/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sqs/model/MessageSystemAttributeValue.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SQS {
namespace Model {

MessageSystemAttributeValue::MessageSystemAttributeValue(JsonView jsonValue) { *this = jsonValue; }

MessageSystemAttributeValue& MessageSystemAttributeValue::operator=(JsonView jsonValue) { return *this; }

JsonValue MessageSystemAttributeValue::Jsonize() const {
  JsonValue payload;
  return payload;
}

}  // namespace Model
}  // namespace SQS
}  // namespace Aws
