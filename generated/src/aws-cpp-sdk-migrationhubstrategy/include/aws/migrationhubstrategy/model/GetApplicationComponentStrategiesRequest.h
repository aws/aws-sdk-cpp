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
  class GetApplicationComponentStrategiesRequest : public MigrationHubStrategyRecommendationsRequest
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API GetApplicationComponentStrategiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetApplicationComponentStrategies"; }

    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::String SerializePayload() const override;


    /**
     * <p> The ID of the application component. The ID is unique within an AWS
     * account.</p>
     */
    inline const Aws::String& GetApplicationComponentId() const{ return m_applicationComponentId; }

    /**
     * <p> The ID of the application component. The ID is unique within an AWS
     * account.</p>
     */
    inline bool ApplicationComponentIdHasBeenSet() const { return m_applicationComponentIdHasBeenSet; }

    /**
     * <p> The ID of the application component. The ID is unique within an AWS
     * account.</p>
     */
    inline void SetApplicationComponentId(const Aws::String& value) { m_applicationComponentIdHasBeenSet = true; m_applicationComponentId = value; }

    /**
     * <p> The ID of the application component. The ID is unique within an AWS
     * account.</p>
     */
    inline void SetApplicationComponentId(Aws::String&& value) { m_applicationComponentIdHasBeenSet = true; m_applicationComponentId = std::move(value); }

    /**
     * <p> The ID of the application component. The ID is unique within an AWS
     * account.</p>
     */
    inline void SetApplicationComponentId(const char* value) { m_applicationComponentIdHasBeenSet = true; m_applicationComponentId.assign(value); }

    /**
     * <p> The ID of the application component. The ID is unique within an AWS
     * account.</p>
     */
    inline GetApplicationComponentStrategiesRequest& WithApplicationComponentId(const Aws::String& value) { SetApplicationComponentId(value); return *this;}

    /**
     * <p> The ID of the application component. The ID is unique within an AWS
     * account.</p>
     */
    inline GetApplicationComponentStrategiesRequest& WithApplicationComponentId(Aws::String&& value) { SetApplicationComponentId(std::move(value)); return *this;}

    /**
     * <p> The ID of the application component. The ID is unique within an AWS
     * account.</p>
     */
    inline GetApplicationComponentStrategiesRequest& WithApplicationComponentId(const char* value) { SetApplicationComponentId(value); return *this;}

  private:

    Aws::String m_applicationComponentId;
    bool m_applicationComponentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
