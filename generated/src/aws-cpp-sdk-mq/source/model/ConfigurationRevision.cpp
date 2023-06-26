/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/ConfigurationRevision.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MQ
{
namespace Model
{

ConfigurationRevision::ConfigurationRevision() : 
    m_createdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_revision(0),
    m_revisionHasBeenSet(false)
{
}

ConfigurationRevision::ConfigurationRevision(JsonView jsonValue) : 
    m_createdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_revision(0),
    m_revisionHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigurationRevision& ConfigurationRevision::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetString("created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetInteger("revision");

    m_revisionHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigurationRevision::Jsonize() const
{
  JsonValue payload;

  if(m_createdHasBeenSet)
  {
   payload.WithString("created", m_created.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_revisionHasBeenSet)
  {
   payload.WithInteger("revision", m_revision);

  }

  return payload;
}

} // namespace Model
} // namespace MQ
} // namespace Aws
