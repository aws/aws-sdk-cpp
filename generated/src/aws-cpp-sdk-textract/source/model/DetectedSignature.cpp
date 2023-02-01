/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/DetectedSignature.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

DetectedSignature::DetectedSignature() : 
    m_page(0),
    m_pageHasBeenSet(false)
{
}

DetectedSignature::DetectedSignature(JsonView jsonValue) : 
    m_page(0),
    m_pageHasBeenSet(false)
{
  *this = jsonValue;
}

DetectedSignature& DetectedSignature::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Page"))
  {
    m_page = jsonValue.GetInteger("Page");

    m_pageHasBeenSet = true;
  }

  return *this;
}

JsonValue DetectedSignature::Jsonize() const
{
  JsonValue payload;

  if(m_pageHasBeenSet)
  {
   payload.WithInteger("Page", m_page);

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
