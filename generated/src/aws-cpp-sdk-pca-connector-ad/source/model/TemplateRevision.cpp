/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pca-connector-ad/model/TemplateRevision.h>
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

TemplateRevision::TemplateRevision() : 
    m_majorRevision(0),
    m_majorRevisionHasBeenSet(false),
    m_minorRevision(0),
    m_minorRevisionHasBeenSet(false)
{
}

TemplateRevision::TemplateRevision(JsonView jsonValue) : 
    m_majorRevision(0),
    m_majorRevisionHasBeenSet(false),
    m_minorRevision(0),
    m_minorRevisionHasBeenSet(false)
{
  *this = jsonValue;
}

TemplateRevision& TemplateRevision::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MajorRevision"))
  {
    m_majorRevision = jsonValue.GetInteger("MajorRevision");

    m_majorRevisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinorRevision"))
  {
    m_minorRevision = jsonValue.GetInteger("MinorRevision");

    m_minorRevisionHasBeenSet = true;
  }

  return *this;
}

JsonValue TemplateRevision::Jsonize() const
{
  JsonValue payload;

  if(m_majorRevisionHasBeenSet)
  {
   payload.WithInteger("MajorRevision", m_majorRevision);

  }

  if(m_minorRevisionHasBeenSet)
  {
   payload.WithInteger("MinorRevision", m_minorRevision);

  }

  return payload;
}

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
