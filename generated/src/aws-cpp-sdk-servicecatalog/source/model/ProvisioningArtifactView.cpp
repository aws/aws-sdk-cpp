/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog/model/ProvisioningArtifactView.h>
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

ProvisioningArtifactView::ProvisioningArtifactView() : 
    m_productViewSummaryHasBeenSet(false),
    m_provisioningArtifactHasBeenSet(false)
{
}

ProvisioningArtifactView::ProvisioningArtifactView(JsonView jsonValue) : 
    m_productViewSummaryHasBeenSet(false),
    m_provisioningArtifactHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisioningArtifactView& ProvisioningArtifactView::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProductViewSummary"))
  {
    m_productViewSummary = jsonValue.GetObject("ProductViewSummary");

    m_productViewSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProvisioningArtifact"))
  {
    m_provisioningArtifact = jsonValue.GetObject("ProvisioningArtifact");

    m_provisioningArtifactHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisioningArtifactView::Jsonize() const
{
  JsonValue payload;

  if(m_productViewSummaryHasBeenSet)
  {
   payload.WithObject("ProductViewSummary", m_productViewSummary.Jsonize());

  }

  if(m_provisioningArtifactHasBeenSet)
  {
   payload.WithObject("ProvisioningArtifact", m_provisioningArtifact.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
