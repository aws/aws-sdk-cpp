/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ImageSetConfiguration.h>
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

ImageSetConfiguration::ImageSetConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ImageSetConfiguration& ImageSetConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Original"))
  {
    m_original = jsonValue.GetObject("Original");
    m_originalHasBeenSet = true;
  }
  return *this;
}

JsonValue ImageSetConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_originalHasBeenSet)
  {
   payload.WithObject("Original", m_original.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
