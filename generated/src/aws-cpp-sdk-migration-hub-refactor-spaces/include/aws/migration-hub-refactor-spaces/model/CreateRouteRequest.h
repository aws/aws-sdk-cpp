/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migration-hub-refactor-spaces/model/DefaultRouteInput.h>
#include <aws/migration-hub-refactor-spaces/model/RouteType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/migration-hub-refactor-spaces/model/UriPathRouteInput.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace MigrationHubRefactorSpaces
{
namespace Model
{

  /**
   */
  class CreateRouteRequest : public MigrationHubRefactorSpacesRequest
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API CreateRouteRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRoute"; }

    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the application within which the route is being created.</p>
     */
    inline const Aws::String& GetApplicationIdentifier() const { return m_applicationIdentifier; }
    inline bool ApplicationIdentifierHasBeenSet() const { return m_applicationIdentifierHasBeenSet; }
    template<typename ApplicationIdentifierT = Aws::String>
    void SetApplicationIdentifier(ApplicationIdentifierT&& value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier = std::forward<ApplicationIdentifierT>(value); }
    template<typename ApplicationIdentifierT = Aws::String>
    CreateRouteRequest& WithApplicationIdentifier(ApplicationIdentifierT&& value) { SetApplicationIdentifier(std::forward<ApplicationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateRouteRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Configuration for the default route type. </p>
     */
    inline const DefaultRouteInput& GetDefaultRoute() const { return m_defaultRoute; }
    inline bool DefaultRouteHasBeenSet() const { return m_defaultRouteHasBeenSet; }
    template<typename DefaultRouteT = DefaultRouteInput>
    void SetDefaultRoute(DefaultRouteT&& value) { m_defaultRouteHasBeenSet = true; m_defaultRoute = std::forward<DefaultRouteT>(value); }
    template<typename DefaultRouteT = DefaultRouteInput>
    CreateRouteRequest& WithDefaultRoute(DefaultRouteT&& value) { SetDefaultRoute(std::forward<DefaultRouteT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment in which the route is created.</p>
     */
    inline const Aws::String& GetEnvironmentIdentifier() const { return m_environmentIdentifier; }
    inline bool EnvironmentIdentifierHasBeenSet() const { return m_environmentIdentifierHasBeenSet; }
    template<typename EnvironmentIdentifierT = Aws::String>
    void SetEnvironmentIdentifier(EnvironmentIdentifierT&& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = std::forward<EnvironmentIdentifierT>(value); }
    template<typename EnvironmentIdentifierT = Aws::String>
    CreateRouteRequest& WithEnvironmentIdentifier(EnvironmentIdentifierT&& value) { SetEnvironmentIdentifier(std::forward<EnvironmentIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route type of the route. <code>DEFAULT</code> indicates that all traffic
     * that does not match another route is forwarded to the default route.
     * Applications must have a default route before any other routes can be created.
     * <code>URI_PATH</code> indicates a route that is based on a URI path.</p>
     */
    inline RouteType GetRouteType() const { return m_routeType; }
    inline bool RouteTypeHasBeenSet() const { return m_routeTypeHasBeenSet; }
    inline void SetRouteType(RouteType value) { m_routeTypeHasBeenSet = true; m_routeType = value; }
    inline CreateRouteRequest& WithRouteType(RouteType value) { SetRouteType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service in which the route is created. Traffic that matches
     * this route is forwarded to this service.</p>
     */
    inline const Aws::String& GetServiceIdentifier() const { return m_serviceIdentifier; }
    inline bool ServiceIdentifierHasBeenSet() const { return m_serviceIdentifierHasBeenSet; }
    template<typename ServiceIdentifierT = Aws::String>
    void SetServiceIdentifier(ServiceIdentifierT&& value) { m_serviceIdentifierHasBeenSet = true; m_serviceIdentifier = std::forward<ServiceIdentifierT>(value); }
    template<typename ServiceIdentifierT = Aws::String>
    CreateRouteRequest& WithServiceIdentifier(ServiceIdentifierT&& value) { SetServiceIdentifier(std::forward<ServiceIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to assign to the route. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateRouteRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateRouteRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The configuration for the URI path route type. </p>
     */
    inline const UriPathRouteInput& GetUriPathRoute() const { return m_uriPathRoute; }
    inline bool UriPathRouteHasBeenSet() const { return m_uriPathRouteHasBeenSet; }
    template<typename UriPathRouteT = UriPathRouteInput>
    void SetUriPathRoute(UriPathRouteT&& value) { m_uriPathRouteHasBeenSet = true; m_uriPathRoute = std::forward<UriPathRouteT>(value); }
    template<typename UriPathRouteT = UriPathRouteInput>
    CreateRouteRequest& WithUriPathRoute(UriPathRouteT&& value) { SetUriPathRoute(std::forward<UriPathRouteT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationIdentifier;
    bool m_applicationIdentifierHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    DefaultRouteInput m_defaultRoute;
    bool m_defaultRouteHasBeenSet = false;

    Aws::String m_environmentIdentifier;
    bool m_environmentIdentifierHasBeenSet = false;

    RouteType m_routeType{RouteType::NOT_SET};
    bool m_routeTypeHasBeenSet = false;

    Aws::String m_serviceIdentifier;
    bool m_serviceIdentifierHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    UriPathRouteInput m_uriPathRoute;
    bool m_uriPathRouteHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
