/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/servicecatalog-appregistry/model/AssociateResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppRegistry::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateResourceRequest::AssociateResourceRequest() : 
    m_applicationHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceHasBeenSet(false)
{
}

Aws::String AssociateResourceRequest::SerializePayload() const
{
  return {};
}




