/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/BulkEmailContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

BulkEmailContent::BulkEmailContent() : 
    m_templateHasBeenSet(false)
{
}

BulkEmailContent::BulkEmailContent(JsonView jsonValue) : 
    m_templateHasBeenSet(false)
{
  *this = jsonValue;
}

BulkEmailContent& BulkEmailContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Template"))
  {
    m_template = jsonValue.GetObject("Template");

    m_templateHasBeenSet = true;
  }

  return *this;
}

JsonValue BulkEmailContent::Jsonize() const
{
  JsonValue payload;

  if(m_templateHasBeenSet)
  {
   payload.WithObject("Template", m_template.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
