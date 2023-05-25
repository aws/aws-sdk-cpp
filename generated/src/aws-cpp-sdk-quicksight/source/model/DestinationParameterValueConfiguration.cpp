/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DestinationParameterValueConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

DestinationParameterValueConfiguration::DestinationParameterValueConfiguration() : 
    m_customValuesConfigurationHasBeenSet(false),
    m_selectAllValueOptions(SelectAllValueOptions::NOT_SET),
    m_selectAllValueOptionsHasBeenSet(false),
    m_sourceParameterNameHasBeenSet(false),
    m_sourceFieldHasBeenSet(false)
{
}

DestinationParameterValueConfiguration::DestinationParameterValueConfiguration(JsonView jsonValue) : 
    m_customValuesConfigurationHasBeenSet(false),
    m_selectAllValueOptions(SelectAllValueOptions::NOT_SET),
    m_selectAllValueOptionsHasBeenSet(false),
    m_sourceParameterNameHasBeenSet(false),
    m_sourceFieldHasBeenSet(false)
{
  *this = jsonValue;
}

DestinationParameterValueConfiguration& DestinationParameterValueConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomValuesConfiguration"))
  {
    m_customValuesConfiguration = jsonValue.GetObject("CustomValuesConfiguration");

    m_customValuesConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SelectAllValueOptions"))
  {
    m_selectAllValueOptions = SelectAllValueOptionsMapper::GetSelectAllValueOptionsForName(jsonValue.GetString("SelectAllValueOptions"));

    m_selectAllValueOptionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceParameterName"))
  {
    m_sourceParameterName = jsonValue.GetString("SourceParameterName");

    m_sourceParameterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceField"))
  {
    m_sourceField = jsonValue.GetString("SourceField");

    m_sourceFieldHasBeenSet = true;
  }

  return *this;
}

JsonValue DestinationParameterValueConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_customValuesConfigurationHasBeenSet)
  {
   payload.WithObject("CustomValuesConfiguration", m_customValuesConfiguration.Jsonize());

  }

  if(m_selectAllValueOptionsHasBeenSet)
  {
   payload.WithString("SelectAllValueOptions", SelectAllValueOptionsMapper::GetNameForSelectAllValueOptions(m_selectAllValueOptions));
  }

  if(m_sourceParameterNameHasBeenSet)
  {
   payload.WithString("SourceParameterName", m_sourceParameterName);

  }

  if(m_sourceFieldHasBeenSet)
  {
   payload.WithString("SourceField", m_sourceField);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
