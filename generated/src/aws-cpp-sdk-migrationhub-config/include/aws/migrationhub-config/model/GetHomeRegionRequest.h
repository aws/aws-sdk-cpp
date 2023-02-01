/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhub-config/MigrationHubConfig_EXPORTS.h>
#include <aws/migrationhub-config/MigrationHubConfigRequest.h>

namespace Aws
{
namespace MigrationHubConfig
{
namespace Model
{

  /**
   */
  class GetHomeRegionRequest : public MigrationHubConfigRequest
  {
  public:
    AWS_MIGRATIONHUBCONFIG_API GetHomeRegionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetHomeRegion"; }

    AWS_MIGRATIONHUBCONFIG_API Aws::String SerializePayload() const override;

    AWS_MIGRATIONHUBCONFIG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  };

} // namespace Model
} // namespace MigrationHubConfig
} // namespace Aws
