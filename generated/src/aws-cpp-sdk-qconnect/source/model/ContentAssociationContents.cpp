/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/qconnect/model/ContentAssociationContents.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QConnect
{
namespace Model
{

ContentAssociationContents::ContentAssociationContents(JsonView jsonValue)
{
  *this = jsonValue;
}

ContentAssociationContents& ContentAssociationContents::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("amazonConnectGuideAssociation"))
  {
    m_amazonConnectGuideAssociation = jsonValue.GetObject("amazonConnectGuideAssociation");
    m_amazonConnectGuideAssociationHasBeenSet = true;
  }
  return *this;
}

JsonValue ContentAssociationContents::Jsonize() const
{
  JsonValue payload;

  if(m_amazonConnectGuideAssociationHasBeenSet)
  {
   payload.WithObject("amazonConnectGuideAssociation", m_amazonConnectGuideAssociation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QConnect
} // namespace Aws
