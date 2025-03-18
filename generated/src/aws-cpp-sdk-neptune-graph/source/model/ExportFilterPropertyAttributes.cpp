/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune-graph/model/ExportFilterPropertyAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace NeptuneGraph
{
namespace Model
{

ExportFilterPropertyAttributes::ExportFilterPropertyAttributes(JsonView jsonValue)
{
  *this = jsonValue;
}

ExportFilterPropertyAttributes& ExportFilterPropertyAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("outputType"))
  {
    m_outputType = jsonValue.GetString("outputType");
    m_outputTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourcePropertyName"))
  {
    m_sourcePropertyName = jsonValue.GetString("sourcePropertyName");
    m_sourcePropertyNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("multiValueHandling"))
  {
    m_multiValueHandling = MultiValueHandlingTypeMapper::GetMultiValueHandlingTypeForName(jsonValue.GetString("multiValueHandling"));
    m_multiValueHandlingHasBeenSet = true;
  }
  return *this;
}

JsonValue ExportFilterPropertyAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_outputTypeHasBeenSet)
  {
   payload.WithString("outputType", m_outputType);

  }

  if(m_sourcePropertyNameHasBeenSet)
  {
   payload.WithString("sourcePropertyName", m_sourcePropertyName);

  }

  if(m_multiValueHandlingHasBeenSet)
  {
   payload.WithString("multiValueHandling", MultiValueHandlingTypeMapper::GetNameForMultiValueHandlingType(m_multiValueHandling));
  }

  return payload;
}

} // namespace Model
} // namespace NeptuneGraph
} // namespace Aws
