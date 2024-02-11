/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/InspectionData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

InspectionData::InspectionData() : 
    m_inputHasBeenSet(false),
    m_afterInputPathHasBeenSet(false),
    m_afterParametersHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_afterResultSelectorHasBeenSet(false),
    m_afterResultPathHasBeenSet(false),
    m_requestHasBeenSet(false),
    m_responseHasBeenSet(false)
{
}

InspectionData::InspectionData(JsonView jsonValue) : 
    m_inputHasBeenSet(false),
    m_afterInputPathHasBeenSet(false),
    m_afterParametersHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_afterResultSelectorHasBeenSet(false),
    m_afterResultPathHasBeenSet(false),
    m_requestHasBeenSet(false),
    m_responseHasBeenSet(false)
{
  *this = jsonValue;
}

InspectionData& InspectionData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetString("input");

    m_inputHasBeenSet = true;
  }

  if(jsonValue.ValueExists("afterInputPath"))
  {
    m_afterInputPath = jsonValue.GetString("afterInputPath");

    m_afterInputPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("afterParameters"))
  {
    m_afterParameters = jsonValue.GetString("afterParameters");

    m_afterParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("result"))
  {
    m_result = jsonValue.GetString("result");

    m_resultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("afterResultSelector"))
  {
    m_afterResultSelector = jsonValue.GetString("afterResultSelector");

    m_afterResultSelectorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("afterResultPath"))
  {
    m_afterResultPath = jsonValue.GetString("afterResultPath");

    m_afterResultPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("request"))
  {
    m_request = jsonValue.GetObject("request");

    m_requestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("response"))
  {
    m_response = jsonValue.GetObject("response");

    m_responseHasBeenSet = true;
  }

  return *this;
}

JsonValue InspectionData::Jsonize() const
{
  JsonValue payload;

  if(m_inputHasBeenSet)
  {
   payload.WithString("input", m_input);

  }

  if(m_afterInputPathHasBeenSet)
  {
   payload.WithString("afterInputPath", m_afterInputPath);

  }

  if(m_afterParametersHasBeenSet)
  {
   payload.WithString("afterParameters", m_afterParameters);

  }

  if(m_resultHasBeenSet)
  {
   payload.WithString("result", m_result);

  }

  if(m_afterResultSelectorHasBeenSet)
  {
   payload.WithString("afterResultSelector", m_afterResultSelector);

  }

  if(m_afterResultPathHasBeenSet)
  {
   payload.WithString("afterResultPath", m_afterResultPath);

  }

  if(m_requestHasBeenSet)
  {
   payload.WithObject("request", m_request.Jsonize());

  }

  if(m_responseHasBeenSet)
  {
   payload.WithObject("response", m_response.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
