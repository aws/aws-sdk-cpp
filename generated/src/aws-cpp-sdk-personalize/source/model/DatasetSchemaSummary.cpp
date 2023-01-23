/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/personalize/model/DatasetSchemaSummary.h>
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

DatasetSchemaSummary::DatasetSchemaSummary() : 
    m_nameHasBeenSet(false),
    m_schemaArnHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_domain(Domain::NOT_SET),
    m_domainHasBeenSet(false)
{
}

DatasetSchemaSummary::DatasetSchemaSummary(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_schemaArnHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_domain(Domain::NOT_SET),
    m_domainHasBeenSet(false)
{
  *this = jsonValue;
}

DatasetSchemaSummary& DatasetSchemaSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("schemaArn"))
  {
    m_schemaArn = jsonValue.GetString("schemaArn");

    m_schemaArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("domain"))
  {
    m_domain = DomainMapper::GetDomainForName(jsonValue.GetString("domain"));

    m_domainHasBeenSet = true;
  }

  return *this;
}

JsonValue DatasetSchemaSummary::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_schemaArnHasBeenSet)
  {
   payload.WithString("schemaArn", m_schemaArn);

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  if(m_domainHasBeenSet)
  {
   payload.WithString("domain", DomainMapper::GetNameForDomain(m_domain));
  }

  return payload;
}

} // namespace Model
} // namespace Personalize
} // namespace Aws
