/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MigrationHubRefactorSpaces
{
namespace Model
{

  /**
   */
  class DeleteRouteRequest : public MigrationHubRefactorSpacesRequest
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API DeleteRouteRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRoute"; }

    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the application to delete the route from.</p>
     */
    inline const Aws::String& GetApplicationIdentifier() const { return m_applicationIdentifier; }
    inline bool ApplicationIdentifierHasBeenSet() const { return m_applicationIdentifierHasBeenSet; }
    template<typename ApplicationIdentifierT = Aws::String>
    void SetApplicationIdentifier(ApplicationIdentifierT&& value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier = std::forward<ApplicationIdentifierT>(value); }
    template<typename ApplicationIdentifierT = Aws::String>
    DeleteRouteRequest& WithApplicationIdentifier(ApplicationIdentifierT&& value) { SetApplicationIdentifier(std::forward<ApplicationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment to delete the route from.</p>
     */
    inline const Aws::String& GetEnvironmentIdentifier() const { return m_environmentIdentifier; }
    inline bool EnvironmentIdentifierHasBeenSet() const { return m_environmentIdentifierHasBeenSet; }
    template<typename EnvironmentIdentifierT = Aws::String>
    void SetEnvironmentIdentifier(EnvironmentIdentifierT&& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = std::forward<EnvironmentIdentifierT>(value); }
    template<typename EnvironmentIdentifierT = Aws::String>
    DeleteRouteRequest& WithEnvironmentIdentifier(EnvironmentIdentifierT&& value) { SetEnvironmentIdentifier(std::forward<EnvironmentIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the route to delete.</p>
     */
    inline const Aws::String& GetRouteIdentifier() const { return m_routeIdentifier; }
    inline bool RouteIdentifierHasBeenSet() const { return m_routeIdentifierHasBeenSet; }
    template<typename RouteIdentifierT = Aws::String>
    void SetRouteIdentifier(RouteIdentifierT&& value) { m_routeIdentifierHasBeenSet = true; m_routeIdentifier = std::forward<RouteIdentifierT>(value); }
    template<typename RouteIdentifierT = Aws::String>
    DeleteRouteRequest& WithRouteIdentifier(RouteIdentifierT&& value) { SetRouteIdentifier(std::forward<RouteIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationIdentifier;
    bool m_applicationIdentifierHasBeenSet = false;

    Aws::String m_environmentIdentifier;
    bool m_environmentIdentifierHasBeenSet = false;

    Aws::String m_routeIdentifier;
    bool m_routeIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
