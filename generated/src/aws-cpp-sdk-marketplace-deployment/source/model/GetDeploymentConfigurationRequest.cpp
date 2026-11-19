/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-deployment/model/GetDeploymentConfigurationRequest.h>

#include <utility>

using namespace Aws::MarketplaceDeployment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetDeploymentConfigurationRequest::SerializePayload() const { return {}; }
