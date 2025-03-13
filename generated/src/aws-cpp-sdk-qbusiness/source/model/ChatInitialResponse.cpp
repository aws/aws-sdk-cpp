/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/ChatInitialResponse.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

ChatInitialResponse::ChatInitialResponse(JsonView jsonValue)
{
  *this = jsonValue;
}

ChatInitialResponse& ChatInitialResponse::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

ChatInitialResponse::ChatInitialResponse(const Http::HeaderValueCollection& headers) : ChatInitialResponse()
{
  AWS_UNREFERENCED_PARAM(headers);
}

JsonValue ChatInitialResponse::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
