/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/TemplateSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

TemplateSummary::TemplateSummary() : 
    m_arnHasBeenSet(false),
    m_connectorArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_objectIdentifierHasBeenSet(false),
    m_policySchema(0),
    m_policySchemaHasBeenSet(false),
    m_revisionHasBeenSet(false),
    m_status(TemplateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

TemplateSummary::TemplateSummary(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_connectorArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_definitionHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_objectIdentifierHasBeenSet(false),
    m_policySchema(0),
    m_policySchemaHasBeenSet(false),
    m_revisionHasBeenSet(false),
    m_status(TemplateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

TemplateSummary& TemplateSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectorArn"))
  {
    m_connectorArn = jsonValue.GetString("ConnectorArn");

    m_connectorArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Definition"))
  {
    m_definition = jsonValue.GetObject("Definition");

    m_definitionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectIdentifier"))
  {
    m_objectIdentifier = jsonValue.GetString("ObjectIdentifier");

    m_objectIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PolicySchema"))
  {
    m_policySchema = jsonValue.GetInteger("PolicySchema");

    m_policySchemaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Revision"))
  {
    m_revision = jsonValue.GetObject("Revision");

    m_revisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = TemplateStatusMapper::GetTemplateStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateSummary::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_connectorArnHasBeenSet)
  {
   payload.WithString("ConnectorArn", m_connectorArn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_definitionHasBeenSet)
  {
   payload.WithObject("Definition", m_definition.Jsonize());

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_objectIdentifierHasBeenSet)
  {
   payload.WithString("ObjectIdentifier", m_objectIdentifier);

  }

  if(m_policySchemaHasBeenSet)
  {
   payload.WithInteger("PolicySchema", m_policySchema);

  }

  if(m_revisionHasBeenSet)
  {
   payload.WithObject("Revision", m_revision.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", TemplateStatusMapper::GetNameForTemplateStatus(m_status));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
