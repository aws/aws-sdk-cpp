/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableFieldLinkContentConfiguration.h>
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

TableFieldLinkContentConfiguration::TableFieldLinkContentConfiguration() : 
    m_customTextContentHasBeenSet(false),
    m_customIconContentHasBeenSet(false)
{
}

TableFieldLinkContentConfiguration::TableFieldLinkContentConfiguration(JsonView jsonValue) : 
    m_customTextContentHasBeenSet(false),
    m_customIconContentHasBeenSet(false)
{
  *this = jsonValue;
}

TableFieldLinkContentConfiguration& TableFieldLinkContentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CustomTextContent"))
  {
    m_customTextContent = jsonValue.GetObject("CustomTextContent");

    m_customTextContentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomIconContent"))
  {
    m_customIconContent = jsonValue.GetObject("CustomIconContent");

    m_customIconContentHasBeenSet = true;
  }

  return *this;
}

JsonValue TableFieldLinkContentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_customTextContentHasBeenSet)
  {
   payload.WithObject("CustomTextContent", m_customTextContent.Jsonize());

  }

  if(m_customIconContentHasBeenSet)
  {
   payload.WithObject("CustomIconContent", m_customIconContent.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
