/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   */
  class GetServerStrategiesRequest : public MigrationHubStrategyRecommendationsRequest
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetServerStrategiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetServerStrategies"; }

    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String SerializePayload() const override;


    /**
     * <p> The ID of the server. </p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p> The ID of the server. </p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p> The ID of the server. </p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p> The ID of the server. </p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p> The ID of the server. </p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p> The ID of the server. </p>
     */
    inline GetServerStrategiesRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p> The ID of the server. </p>
     */
    inline GetServerStrategiesRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p> The ID of the server. </p>
     */
    inline GetServerStrategiesRequest& WithServerId(const char* value) { SetServerId(value); return *this;}

  private:

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
