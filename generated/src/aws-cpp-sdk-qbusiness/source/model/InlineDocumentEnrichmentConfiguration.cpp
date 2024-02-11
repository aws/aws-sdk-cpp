/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qbusiness/model/InlineDocumentEnrichmentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QBusiness
{
namespace Model
{

InlineDocumentEnrichmentConfiguration::InlineDocumentEnrichmentConfiguration() : 
    m_conditionHasBeenSet(false),
    m_documentContentOperator(DocumentContentOperator::NOT_SET),
    m_documentContentOperatorHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

InlineDocumentEnrichmentConfiguration::InlineDocumentEnrichmentConfiguration(JsonView jsonValue) : 
    m_conditionHasBeenSet(false),
    m_documentContentOperator(DocumentContentOperator::NOT_SET),
    m_documentContentOperatorHasBeenSet(false),
    m_targetHasBeenSet(false)
{
  *this = jsonValue;
}

InlineDocumentEnrichmentConfiguration& InlineDocumentEnrichmentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("condition"))
  {
    m_condition = jsonValue.GetObject("condition");

    m_conditionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("documentContentOperator"))
  {
    m_documentContentOperator = DocumentContentOperatorMapper::GetDocumentContentOperatorForName(jsonValue.GetString("documentContentOperator"));

    m_documentContentOperatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetObject("target");

    m_targetHasBeenSet = true;
  }

  return *this;
}

JsonValue InlineDocumentEnrichmentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_conditionHasBeenSet)
  {
   payload.WithObject("condition", m_condition.Jsonize());

  }

  if(m_documentContentOperatorHasBeenSet)
  {
   payload.WithString("documentContentOperator", DocumentContentOperatorMapper::GetNameForDocumentContentOperator(m_documentContentOperator));
  }

  if(m_targetHasBeenSet)
  {
   payload.WithObject("target", m_target.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QBusiness
} // namespace Aws
