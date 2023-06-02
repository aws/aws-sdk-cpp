/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ManagedProductDescriptor.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

ManagedProductDescriptor::ManagedProductDescriptor() : 
    m_vendorNameHasBeenSet(false),
    m_managedRuleSetNameHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_productLinkHasBeenSet(false),
    m_productTitleHasBeenSet(false),
    m_productDescriptionHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_isVersioningSupported(false),
    m_isVersioningSupportedHasBeenSet(false),
    m_isAdvancedManagedRuleSet(false),
    m_isAdvancedManagedRuleSetHasBeenSet(false)
{
}

ManagedProductDescriptor::ManagedProductDescriptor(JsonView jsonValue) : 
    m_vendorNameHasBeenSet(false),
    m_managedRuleSetNameHasBeenSet(false),
    m_productIdHasBeenSet(false),
    m_productLinkHasBeenSet(false),
    m_productTitleHasBeenSet(false),
    m_productDescriptionHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_isVersioningSupported(false),
    m_isVersioningSupportedHasBeenSet(false),
    m_isAdvancedManagedRuleSet(false),
    m_isAdvancedManagedRuleSetHasBeenSet(false)
{
  *this = jsonValue;
}

ManagedProductDescriptor& ManagedProductDescriptor::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VendorName"))
  {
    m_vendorName = jsonValue.GetString("VendorName");

    m_vendorNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManagedRuleSetName"))
  {
    m_managedRuleSetName = jsonValue.GetString("ManagedRuleSetName");

    m_managedRuleSetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductId"))
  {
    m_productId = jsonValue.GetString("ProductId");

    m_productIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductLink"))
  {
    m_productLink = jsonValue.GetString("ProductLink");

    m_productLinkHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductTitle"))
  {
    m_productTitle = jsonValue.GetString("ProductTitle");

    m_productTitleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProductDescription"))
  {
    m_productDescription = jsonValue.GetString("ProductDescription");

    m_productDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnsTopicArn"))
  {
    m_snsTopicArn = jsonValue.GetString("SnsTopicArn");

    m_snsTopicArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsVersioningSupported"))
  {
    m_isVersioningSupported = jsonValue.GetBool("IsVersioningSupported");

    m_isVersioningSupportedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IsAdvancedManagedRuleSet"))
  {
    m_isAdvancedManagedRuleSet = jsonValue.GetBool("IsAdvancedManagedRuleSet");

    m_isAdvancedManagedRuleSetHasBeenSet = true;
  }

  return *this;
}

JsonValue ManagedProductDescriptor::Jsonize() const
{
  JsonValue payload;

  if(m_vendorNameHasBeenSet)
  {
   payload.WithString("VendorName", m_vendorName);

  }

  if(m_managedRuleSetNameHasBeenSet)
  {
   payload.WithString("ManagedRuleSetName", m_managedRuleSetName);

  }

  if(m_productIdHasBeenSet)
  {
   payload.WithString("ProductId", m_productId);

  }

  if(m_productLinkHasBeenSet)
  {
   payload.WithString("ProductLink", m_productLink);

  }

  if(m_productTitleHasBeenSet)
  {
   payload.WithString("ProductTitle", m_productTitle);

  }

  if(m_productDescriptionHasBeenSet)
  {
   payload.WithString("ProductDescription", m_productDescription);

  }

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("SnsTopicArn", m_snsTopicArn);

  }

  if(m_isVersioningSupportedHasBeenSet)
  {
   payload.WithBool("IsVersioningSupported", m_isVersioningSupported);

  }

  if(m_isAdvancedManagedRuleSetHasBeenSet)
  {
   payload.WithBool("IsAdvancedManagedRuleSet", m_isAdvancedManagedRuleSet);

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
