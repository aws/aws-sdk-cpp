/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoParameter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

AutoParameter::AutoParameter() : 
    m_nameHasBeenSet(false),
    m_valueHintHasBeenSet(false)
{
}

AutoParameter::AutoParameter(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_valueHintHasBeenSet(false)
{
  *this = jsonValue;
}

AutoParameter& AutoParameter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueHint"))
  {
    m_valueHint = jsonValue.GetString("ValueHint");

    m_valueHintHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoParameter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_valueHintHasBeenSet)
  {
   payload.WithString("ValueHint", m_valueHint);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
