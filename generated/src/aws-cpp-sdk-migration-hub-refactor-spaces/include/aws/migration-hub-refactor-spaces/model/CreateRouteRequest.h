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
    AWS_MIGRATIONHUBREFACTORSPACES_API CreateRouteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRoute"; }

    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the application within which the route is being created.</p>
     */
    inline const Aws::String& GetApplicationIdentifier() const{ return m_applicationIdentifier; }

    /**
     * <p>The ID of the application within which the route is being created.</p>
     */
    inline bool ApplicationIdentifierHasBeenSet() const { return m_applicationIdentifierHasBeenSet; }

    /**
     * <p>The ID of the application within which the route is being created.</p>
     */
    inline void SetApplicationIdentifier(const Aws::String& value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier = value; }

    /**
     * <p>The ID of the application within which the route is being created.</p>
     */
    inline void SetApplicationIdentifier(Aws::String&& value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier = std::move(value); }

    /**
     * <p>The ID of the application within which the route is being created.</p>
     */
    inline void SetApplicationIdentifier(const char* value) { m_applicationIdentifierHasBeenSet = true; m_applicationIdentifier.assign(value); }

    /**
     * <p>The ID of the application within which the route is being created.</p>
     */
    inline CreateRouteRequest& WithApplicationIdentifier(const Aws::String& value) { SetApplicationIdentifier(value); return *this;}

    /**
     * <p>The ID of the application within which the route is being created.</p>
     */
    inline CreateRouteRequest& WithApplicationIdentifier(Aws::String&& value) { SetApplicationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the application within which the route is being created.</p>
     */
    inline CreateRouteRequest& WithApplicationIdentifier(const char* value) { SetApplicationIdentifier(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline CreateRouteRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline CreateRouteRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request.</p>
     */
    inline CreateRouteRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p> Configuration for the default route type. </p>
     */
    inline const DefaultRouteInput& GetDefaultRoute() const{ return m_defaultRoute; }

    /**
     * <p> Configuration for the default route type. </p>
     */
    inline bool DefaultRouteHasBeenSet() const { return m_defaultRouteHasBeenSet; }

    /**
     * <p> Configuration for the default route type. </p>
     */
    inline void SetDefaultRoute(const DefaultRouteInput& value) { m_defaultRouteHasBeenSet = true; m_defaultRoute = value; }

    /**
     * <p> Configuration for the default route type. </p>
     */
    inline void SetDefaultRoute(DefaultRouteInput&& value) { m_defaultRouteHasBeenSet = true; m_defaultRoute = std::move(value); }

    /**
     * <p> Configuration for the default route type. </p>
     */
    inline CreateRouteRequest& WithDefaultRoute(const DefaultRouteInput& value) { SetDefaultRoute(value); return *this;}

    /**
     * <p> Configuration for the default route type. </p>
     */
    inline CreateRouteRequest& WithDefaultRoute(DefaultRouteInput&& value) { SetDefaultRoute(std::move(value)); return *this;}


    /**
     * <p>The ID of the environment in which the route is created.</p>
     */
    inline const Aws::String& GetEnvironmentIdentifier() const{ return m_environmentIdentifier; }

    /**
     * <p>The ID of the environment in which the route is created.</p>
     */
    inline bool EnvironmentIdentifierHasBeenSet() const { return m_environmentIdentifierHasBeenSet; }

    /**
     * <p>The ID of the environment in which the route is created.</p>
     */
    inline void SetEnvironmentIdentifier(const Aws::String& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = value; }

    /**
     * <p>The ID of the environment in which the route is created.</p>
     */
    inline void SetEnvironmentIdentifier(Aws::String&& value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier = std::move(value); }

    /**
     * <p>The ID of the environment in which the route is created.</p>
     */
    inline void SetEnvironmentIdentifier(const char* value) { m_environmentIdentifierHasBeenSet = true; m_environmentIdentifier.assign(value); }

    /**
     * <p>The ID of the environment in which the route is created.</p>
     */
    inline CreateRouteRequest& WithEnvironmentIdentifier(const Aws::String& value) { SetEnvironmentIdentifier(value); return *this;}

    /**
     * <p>The ID of the environment in which the route is created.</p>
     */
    inline CreateRouteRequest& WithEnvironmentIdentifier(Aws::String&& value) { SetEnvironmentIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment in which the route is created.</p>
     */
    inline CreateRouteRequest& WithEnvironmentIdentifier(const char* value) { SetEnvironmentIdentifier(value); return *this;}


    /**
     * <p>The route type of the route. <code>DEFAULT</code> indicates that all traffic
     * that does not match another route is forwarded to the default route.
     * Applications must have a default route before any other routes can be created.
     * <code>URI_PATH</code> indicates a route that is based on a URI path.</p>
     */
    inline const RouteType& GetRouteType() const{ return m_routeType; }

    /**
     * <p>The route type of the route. <code>DEFAULT</code> indicates that all traffic
     * that does not match another route is forwarded to the default route.
     * Applications must have a default route before any other routes can be created.
     * <code>URI_PATH</code> indicates a route that is based on a URI path.</p>
     */
    inline bool RouteTypeHasBeenSet() const { return m_routeTypeHasBeenSet; }

    /**
     * <p>The route type of the route. <code>DEFAULT</code> indicates that all traffic
     * that does not match another route is forwarded to the default route.
     * Applications must have a default route before any other routes can be created.
     * <code>URI_PATH</code> indicates a route that is based on a URI path.</p>
     */
    inline void SetRouteType(const RouteType& value) { m_routeTypeHasBeenSet = true; m_routeType = value; }

    /**
     * <p>The route type of the route. <code>DEFAULT</code> indicates that all traffic
     * that does not match another route is forwarded to the default route.
     * Applications must have a default route before any other routes can be created.
     * <code>URI_PATH</code> indicates a route that is based on a URI path.</p>
     */
    inline void SetRouteType(RouteType&& value) { m_routeTypeHasBeenSet = true; m_routeType = std::move(value); }

    /**
     * <p>The route type of the route. <code>DEFAULT</code> indicates that all traffic
     * that does not match another route is forwarded to the default route.
     * Applications must have a default route before any other routes can be created.
     * <code>URI_PATH</code> indicates a route that is based on a URI path.</p>
     */
    inline CreateRouteRequest& WithRouteType(const RouteType& value) { SetRouteType(value); return *this;}

    /**
     * <p>The route type of the route. <code>DEFAULT</code> indicates that all traffic
     * that does not match another route is forwarded to the default route.
     * Applications must have a default route before any other routes can be created.
     * <code>URI_PATH</code> indicates a route that is based on a URI path.</p>
     */
    inline CreateRouteRequest& WithRouteType(RouteType&& value) { SetRouteType(std::move(value)); return *this;}


    /**
     * <p>The ID of the service in which the route is created. Traffic that matches
     * this route is forwarded to this service.</p>
     */
    inline const Aws::String& GetServiceIdentifier() const{ return m_serviceIdentifier; }

    /**
     * <p>The ID of the service in which the route is created. Traffic that matches
     * this route is forwarded to this service.</p>
     */
    inline bool ServiceIdentifierHasBeenSet() const { return m_serviceIdentifierHasBeenSet; }

    /**
     * <p>The ID of the service in which the route is created. Traffic that matches
     * this route is forwarded to this service.</p>
     */
    inline void SetServiceIdentifier(const Aws::String& value) { m_serviceIdentifierHasBeenSet = true; m_serviceIdentifier = value; }

    /**
     * <p>The ID of the service in which the route is created. Traffic that matches
     * this route is forwarded to this service.</p>
     */
    inline void SetServiceIdentifier(Aws::String&& value) { m_serviceIdentifierHasBeenSet = true; m_serviceIdentifier = std::move(value); }

    /**
     * <p>The ID of the service in which the route is created. Traffic that matches
     * this route is forwarded to this service.</p>
     */
    inline void SetServiceIdentifier(const char* value) { m_serviceIdentifierHasBeenSet = true; m_serviceIdentifier.assign(value); }

    /**
     * <p>The ID of the service in which the route is created. Traffic that matches
     * this route is forwarded to this service.</p>
     */
    inline CreateRouteRequest& WithServiceIdentifier(const Aws::String& value) { SetServiceIdentifier(value); return *this;}

    /**
     * <p>The ID of the service in which the route is created. Traffic that matches
     * this route is forwarded to this service.</p>
     */
    inline CreateRouteRequest& WithServiceIdentifier(Aws::String&& value) { SetServiceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID of the service in which the route is created. Traffic that matches
     * this route is forwarded to this service.</p>
     */
    inline CreateRouteRequest& WithServiceIdentifier(const char* value) { SetServiceIdentifier(value); return *this;}


    /**
     * <p>The tags to assign to the route. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to assign to the route. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to assign to the route. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to assign to the route. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to assign to the route. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline CreateRouteRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to assign to the route. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline CreateRouteRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to the route. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline CreateRouteRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to assign to the route. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline CreateRouteRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the route. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline CreateRouteRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the route. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline CreateRouteRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the route. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline CreateRouteRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to assign to the route. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline CreateRouteRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to assign to the route. A tag is a label that you assign to an
     * Amazon Web Services resource. Each tag consists of a key-value pair.. </p>
     */
    inline CreateRouteRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The configuration for the URI path route type. </p>
     */
    inline const UriPathRouteInput& GetUriPathRoute() const{ return m_uriPathRoute; }

    /**
     * <p>The configuration for the URI path route type. </p>
     */
    inline bool UriPathRouteHasBeenSet() const { return m_uriPathRouteHasBeenSet; }

    /**
     * <p>The configuration for the URI path route type. </p>
     */
    inline void SetUriPathRoute(const UriPathRouteInput& value) { m_uriPathRouteHasBeenSet = true; m_uriPathRoute = value; }

    /**
     * <p>The configuration for the URI path route type. </p>
     */
    inline void SetUriPathRoute(UriPathRouteInput&& value) { m_uriPathRouteHasBeenSet = true; m_uriPathRoute = std::move(value); }

    /**
     * <p>The configuration for the URI path route type. </p>
     */
    inline CreateRouteRequest& WithUriPathRoute(const UriPathRouteInput& value) { SetUriPathRoute(value); return *this;}

    /**
     * <p>The configuration for the URI path route type. </p>
     */
    inline CreateRouteRequest& WithUriPathRoute(UriPathRouteInput&& value) { SetUriPathRoute(std::move(value)); return *this;}

  private:

    Aws::String m_applicationIdentifier;
    bool m_applicationIdentifierHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    DefaultRouteInput m_defaultRoute;
    bool m_defaultRouteHasBeenSet = false;

    Aws::String m_environmentIdentifier;
    bool m_environmentIdentifierHasBeenSet = false;

    RouteType m_routeType;
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
