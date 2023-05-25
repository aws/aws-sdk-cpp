/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/Result.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

Result::Result() : 
    m_accountIdHasBeenSet(false),
    m_processingResultHasBeenSet(false)
{
}

Result::Result(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_processingResultHasBeenSet(false)
{
  *this = jsonValue;
}

Result& Result::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccountId"))
  {
    m_accountId = jsonValue.GetString("AccountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProcessingResult"))
  {
    m_processingResult = jsonValue.GetString("ProcessingResult");

    m_processingResultHasBeenSet = true;
  }

  return *this;
}

JsonValue Result::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("AccountId", m_accountId);

  }

  if(m_processingResultHasBeenSet)
  {
   payload.WithString("ProcessingResult", m_processingResult);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
