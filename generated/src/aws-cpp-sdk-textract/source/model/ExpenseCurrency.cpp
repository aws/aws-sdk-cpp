/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/ExpenseCurrency.h>
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

ExpenseCurrency::ExpenseCurrency() : 
    m_codeHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false)
{
}

ExpenseCurrency::ExpenseCurrency(JsonView jsonValue) : 
    m_codeHasBeenSet(false),
    m_confidence(0.0),
    m_confidenceHasBeenSet(false)
{
  *this = jsonValue;
}

ExpenseCurrency& ExpenseCurrency::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = jsonValue.GetString("Code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Confidence"))
  {
    m_confidence = jsonValue.GetDouble("Confidence");

    m_confidenceHasBeenSet = true;
  }

  return *this;
}

JsonValue ExpenseCurrency::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", m_code);

  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithDouble("Confidence", m_confidence);

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
