/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/SourceConnectionParameters.h>
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

SourceConnectionParameters::SourceConnectionParameters() : 
    m_codeStarHasBeenSet(false)
{
}

SourceConnectionParameters::SourceConnectionParameters(JsonView jsonValue) : 
    m_codeStarHasBeenSet(false)
{
  *this = jsonValue;
}

SourceConnectionParameters& SourceConnectionParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CodeStar"))
  {
    m_codeStar = jsonValue.GetObject("CodeStar");

    m_codeStarHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceConnectionParameters::Jsonize() const
{
  JsonValue payload;

  if(m_codeStarHasBeenSet)
  {
   payload.WithObject("CodeStar", m_codeStar.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
