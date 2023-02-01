/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhubstrategy/model/StrategyOption.h>
#include <utility>

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   */
  class UpdateServerConfigRequest : public MigrationHubStrategyRecommendationsRequest
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API UpdateServerConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateServerConfig"; }

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
    inline UpdateServerConfigRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p> The ID of the server. </p>
     */
    inline UpdateServerConfigRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p> The ID of the server. </p>
     */
    inline UpdateServerConfigRequest& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p> The preferred strategy options for the application component. See the
     * response from <a>GetServerStrategies</a>.</p>
     */
    inline const StrategyOption& GetStrategyOption() const{ return m_strategyOption; }

    /**
     * <p> The preferred strategy options for the application component. See the
     * response from <a>GetServerStrategies</a>.</p>
     */
    inline bool StrategyOptionHasBeenSet() const { return m_strategyOptionHasBeenSet; }

    /**
     * <p> The preferred strategy options for the application component. See the
     * response from <a>GetServerStrategies</a>.</p>
     */
    inline void SetStrategyOption(const StrategyOption& value) { m_strategyOptionHasBeenSet = true; m_strategyOption = value; }

    /**
     * <p> The preferred strategy options for the application component. See the
     * response from <a>GetServerStrategies</a>.</p>
     */
    inline void SetStrategyOption(StrategyOption&& value) { m_strategyOptionHasBeenSet = true; m_strategyOption = std::move(value); }

    /**
     * <p> The preferred strategy options for the application component. See the
     * response from <a>GetServerStrategies</a>.</p>
     */
    inline UpdateServerConfigRequest& WithStrategyOption(const StrategyOption& value) { SetStrategyOption(value); return *this;}

    /**
     * <p> The preferred strategy options for the application component. See the
     * response from <a>GetServerStrategies</a>.</p>
     */
    inline UpdateServerConfigRequest& WithStrategyOption(StrategyOption&& value) { SetStrategyOption(std::move(value)); return *this;}

  private:

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    StrategyOption m_strategyOption;
    bool m_strategyOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
