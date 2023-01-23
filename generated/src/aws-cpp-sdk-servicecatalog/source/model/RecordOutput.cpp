/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/RecordOutput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

RecordOutput::RecordOutput() : 
    m_outputKeyHasBeenSet(false),
    m_outputValueHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

RecordOutput::RecordOutput(JsonView jsonValue) : 
    m_outputKeyHasBeenSet(false),
    m_outputValueHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

RecordOutput& RecordOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OutputKey"))
  {
    m_outputKey = jsonValue.GetString("OutputKey");

    m_outputKeyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputValue"))
  {
    m_outputValue = jsonValue.GetString("OutputValue");

    m_outputValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue RecordOutput::Jsonize() const
{
  JsonValue payload;

  if(m_outputKeyHasBeenSet)
  {
   payload.WithString("OutputKey", m_outputKey);

  }

  if(m_outputValueHasBeenSet)
  {
   payload.WithString("OutputValue", m_outputValue);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
