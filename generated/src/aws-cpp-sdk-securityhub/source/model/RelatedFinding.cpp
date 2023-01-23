/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/RelatedFinding.h>
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

RelatedFinding::RelatedFinding() : 
    m_productArnHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

RelatedFinding::RelatedFinding(JsonView jsonValue) : 
    m_productArnHasBeenSet(false),
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

RelatedFinding& RelatedFinding::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProductArn"))
  {
    m_productArn = jsonValue.GetString("ProductArn");

    m_productArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  return *this;
}

JsonValue RelatedFinding::Jsonize() const
{
  JsonValue payload;

  if(m_productArnHasBeenSet)
  {
   payload.WithString("ProductArn", m_productArn);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
