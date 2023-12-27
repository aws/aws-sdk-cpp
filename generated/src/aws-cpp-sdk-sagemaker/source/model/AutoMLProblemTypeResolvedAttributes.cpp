/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLProblemTypeResolvedAttributes.h>
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

AutoMLProblemTypeResolvedAttributes::AutoMLProblemTypeResolvedAttributes() : 
    m_tabularResolvedAttributesHasBeenSet(false),
    m_textGenerationResolvedAttributesHasBeenSet(false)
{
}

AutoMLProblemTypeResolvedAttributes::AutoMLProblemTypeResolvedAttributes(JsonView jsonValue) : 
    m_tabularResolvedAttributesHasBeenSet(false),
    m_textGenerationResolvedAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

AutoMLProblemTypeResolvedAttributes& AutoMLProblemTypeResolvedAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TabularResolvedAttributes"))
  {
    m_tabularResolvedAttributes = jsonValue.GetObject("TabularResolvedAttributes");

    m_tabularResolvedAttributesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextGenerationResolvedAttributes"))
  {
    m_textGenerationResolvedAttributes = jsonValue.GetObject("TextGenerationResolvedAttributes");

    m_textGenerationResolvedAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoMLProblemTypeResolvedAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_tabularResolvedAttributesHasBeenSet)
  {
   payload.WithObject("TabularResolvedAttributes", m_tabularResolvedAttributes.Jsonize());

  }

  if(m_textGenerationResolvedAttributesHasBeenSet)
  {
   payload.WithObject("TextGenerationResolvedAttributes", m_textGenerationResolvedAttributes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
