/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/ClassificationStatus.h>
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

ClassificationStatus::ClassificationStatus() : 
    m_codeHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
}

ClassificationStatus::ClassificationStatus(JsonView jsonValue) : 
    m_codeHasBeenSet(false),
    m_reasonHasBeenSet(false)
{
  *this = jsonValue;
}

ClassificationStatus& ClassificationStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = jsonValue.GetString("Code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Reason"))
  {
    m_reason = jsonValue.GetString("Reason");

    m_reasonHasBeenSet = true;
  }

  return *this;
}

JsonValue ClassificationStatus::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", m_code);

  }

  if(m_reasonHasBeenSet)
  {
   payload.WithString("Reason", m_reason);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
