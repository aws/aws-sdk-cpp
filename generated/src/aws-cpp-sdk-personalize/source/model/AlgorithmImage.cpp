/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/AlgorithmImage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Personalize
{
namespace Model
{

AlgorithmImage::AlgorithmImage() : 
    m_nameHasBeenSet(false),
    m_dockerURIHasBeenSet(false)
{
}

AlgorithmImage::AlgorithmImage(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_dockerURIHasBeenSet(false)
{
  *this = jsonValue;
}

AlgorithmImage& AlgorithmImage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dockerURI"))
  {
    m_dockerURI = jsonValue.GetString("dockerURI");

    m_dockerURIHasBeenSet = true;
  }

  return *this;
}

JsonValue AlgorithmImage::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_dockerURIHasBeenSet)
  {
   payload.WithString("dockerURI", m_dockerURI);

  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
