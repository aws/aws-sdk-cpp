/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Policy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

Policy::Policy() : 
    m_httpInputs(InputPolicy::NOT_SET),
    m_httpInputsHasBeenSet(false),
    m_httpsInputs(InputPolicy::NOT_SET),
    m_httpsInputsHasBeenSet(false),
    m_s3Inputs(InputPolicy::NOT_SET),
    m_s3InputsHasBeenSet(false)
{
}

Policy::Policy(JsonView jsonValue) : 
    m_httpInputs(InputPolicy::NOT_SET),
    m_httpInputsHasBeenSet(false),
    m_httpsInputs(InputPolicy::NOT_SET),
    m_httpsInputsHasBeenSet(false),
    m_s3Inputs(InputPolicy::NOT_SET),
    m_s3InputsHasBeenSet(false)
{
  *this = jsonValue;
}

Policy& Policy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("httpInputs"))
  {
    m_httpInputs = InputPolicyMapper::GetInputPolicyForName(jsonValue.GetString("httpInputs"));

    m_httpInputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("httpsInputs"))
  {
    m_httpsInputs = InputPolicyMapper::GetInputPolicyForName(jsonValue.GetString("httpsInputs"));

    m_httpsInputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Inputs"))
  {
    m_s3Inputs = InputPolicyMapper::GetInputPolicyForName(jsonValue.GetString("s3Inputs"));

    m_s3InputsHasBeenSet = true;
  }

  return *this;
}

JsonValue Policy::Jsonize() const
{
  JsonValue payload;

  if(m_httpInputsHasBeenSet)
  {
   payload.WithString("httpInputs", InputPolicyMapper::GetNameForInputPolicy(m_httpInputs));
  }

  if(m_httpsInputsHasBeenSet)
  {
   payload.WithString("httpsInputs", InputPolicyMapper::GetNameForInputPolicy(m_httpsInputs));
  }

  if(m_s3InputsHasBeenSet)
  {
   payload.WithString("s3Inputs", InputPolicyMapper::GetNameForInputPolicy(m_s3Inputs));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
