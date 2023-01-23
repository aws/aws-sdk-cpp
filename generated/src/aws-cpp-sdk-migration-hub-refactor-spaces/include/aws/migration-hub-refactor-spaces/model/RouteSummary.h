/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/migration-hub-refactor-spaces/model/ErrorResponse.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/migration-hub-refactor-spaces/model/RouteType.h>
#include <aws/migration-hub-refactor-spaces/model/RouteState.h>
#include <aws/migration-hub-refactor-spaces/model/HttpMethod.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MigrationHubRefactorSpaces
{
namespace Model
{

  /**
   * <p>The summary information for the routes as a response to
   * <code>ListRoutes</code>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/RouteSummary">AWS
   * API Reference</a></p>
   */
  class RouteSummary
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API RouteSummary();
    AWS_MIGRATIONHUBREFACTORSPACES_API RouteSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API RouteSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the application. </p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The unique identifier of the application. </p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The unique identifier of the application. </p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The unique identifier of the application. </p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The unique identifier of the application. </p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The unique identifier of the application. </p>
     */
    inline RouteSummary& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The unique identifier of the application. </p>
     */
    inline RouteSummary& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the application. </p>
     */
    inline RouteSummary& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the route. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the route. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the route. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the route. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the route. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the route. </p>
     */
    inline RouteSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the route. </p>
     */
    inline RouteSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the route. </p>
     */
    inline RouteSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the route creator. </p>
     */
    inline const Aws::String& GetCreatedByAccountId() const{ return m_createdByAccountId; }

    /**
     * <p>The Amazon Web Services account ID of the route creator. </p>
     */
    inline bool CreatedByAccountIdHasBeenSet() const { return m_createdByAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the route creator. </p>
     */
    inline void SetCreatedByAccountId(const Aws::String& value) { m_createdByAccountIdHasBeenSet = true; m_createdByAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the route creator. </p>
     */
    inline void SetCreatedByAccountId(Aws::String&& value) { m_createdByAccountIdHasBeenSet = true; m_createdByAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the route creator. </p>
     */
    inline void SetCreatedByAccountId(const char* value) { m_createdByAccountIdHasBeenSet = true; m_createdByAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the route creator. </p>
     */
    inline RouteSummary& WithCreatedByAccountId(const Aws::String& value) { SetCreatedByAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the route creator. </p>
     */
    inline RouteSummary& WithCreatedByAccountId(Aws::String&& value) { SetCreatedByAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the route creator. </p>
     */
    inline RouteSummary& WithCreatedByAccountId(const char* value) { SetCreatedByAccountId(value); return *this;}


    /**
     * <p>A timestamp that indicates when the route is created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>A timestamp that indicates when the route is created. </p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates when the route is created. </p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>A timestamp that indicates when the route is created. </p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the route is created. </p>
     */
    inline RouteSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the route is created. </p>
     */
    inline RouteSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline RouteSummary& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline RouteSummary& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline RouteSummary& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>Any error associated with the route resource. </p>
     */
    inline const ErrorResponse& GetError() const{ return m_error; }

    /**
     * <p>Any error associated with the route resource. </p>
     */
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }

    /**
     * <p>Any error associated with the route resource. </p>
     */
    inline void SetError(const ErrorResponse& value) { m_errorHasBeenSet = true; m_error = value; }

    /**
     * <p>Any error associated with the route resource. </p>
     */
    inline void SetError(ErrorResponse&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }

    /**
     * <p>Any error associated with the route resource. </p>
     */
    inline RouteSummary& WithError(const ErrorResponse& value) { SetError(value); return *this;}

    /**
     * <p>Any error associated with the route resource. </p>
     */
    inline RouteSummary& WithError(ErrorResponse&& value) { SetError(std::move(value)); return *this;}


    /**
     * <p>Indicates whether to match all subpaths of the given source path. If this
     * value is <code>false</code>, requests must match the source path exactly before
     * they are forwarded to this route's service.</p>
     */
    inline bool GetIncludeChildPaths() const{ return m_includeChildPaths; }

    /**
     * <p>Indicates whether to match all subpaths of the given source path. If this
     * value is <code>false</code>, requests must match the source path exactly before
     * they are forwarded to this route's service.</p>
     */
    inline bool IncludeChildPathsHasBeenSet() const { return m_includeChildPathsHasBeenSet; }

    /**
     * <p>Indicates whether to match all subpaths of the given source path. If this
     * value is <code>false</code>, requests must match the source path exactly before
     * they are forwarded to this route's service.</p>
     */
    inline void SetIncludeChildPaths(bool value) { m_includeChildPathsHasBeenSet = true; m_includeChildPaths = value; }

    /**
     * <p>Indicates whether to match all subpaths of the given source path. If this
     * value is <code>false</code>, requests must match the source path exactly before
     * they are forwarded to this route's service.</p>
     */
    inline RouteSummary& WithIncludeChildPaths(bool value) { SetIncludeChildPaths(value); return *this;}


    /**
     * <p>A timestamp that indicates when the route was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>A timestamp that indicates when the route was last updated. </p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates when the route was last updated. </p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>A timestamp that indicates when the route was last updated. </p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the route was last updated. </p>
     */
    inline RouteSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the route was last updated. </p>
     */
    inline RouteSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>A list of HTTP methods to match. An empty list matches all values. If a
     * method is present, only HTTP requests using that method are forwarded to this
     * route’s service. </p>
     */
    inline const Aws::Vector<HttpMethod>& GetMethods() const{ return m_methods; }

    /**
     * <p>A list of HTTP methods to match. An empty list matches all values. If a
     * method is present, only HTTP requests using that method are forwarded to this
     * route’s service. </p>
     */
    inline bool MethodsHasBeenSet() const { return m_methodsHasBeenSet; }

    /**
     * <p>A list of HTTP methods to match. An empty list matches all values. If a
     * method is present, only HTTP requests using that method are forwarded to this
     * route’s service. </p>
     */
    inline void SetMethods(const Aws::Vector<HttpMethod>& value) { m_methodsHasBeenSet = true; m_methods = value; }

    /**
     * <p>A list of HTTP methods to match. An empty list matches all values. If a
     * method is present, only HTTP requests using that method are forwarded to this
     * route’s service. </p>
     */
    inline void SetMethods(Aws::Vector<HttpMethod>&& value) { m_methodsHasBeenSet = true; m_methods = std::move(value); }

    /**
     * <p>A list of HTTP methods to match. An empty list matches all values. If a
     * method is present, only HTTP requests using that method are forwarded to this
     * route’s service. </p>
     */
    inline RouteSummary& WithMethods(const Aws::Vector<HttpMethod>& value) { SetMethods(value); return *this;}

    /**
     * <p>A list of HTTP methods to match. An empty list matches all values. If a
     * method is present, only HTTP requests using that method are forwarded to this
     * route’s service. </p>
     */
    inline RouteSummary& WithMethods(Aws::Vector<HttpMethod>&& value) { SetMethods(std::move(value)); return *this;}

    /**
     * <p>A list of HTTP methods to match. An empty list matches all values. If a
     * method is present, only HTTP requests using that method are forwarded to this
     * route’s service. </p>
     */
    inline RouteSummary& AddMethods(const HttpMethod& value) { m_methodsHasBeenSet = true; m_methods.push_back(value); return *this; }

    /**
     * <p>A list of HTTP methods to match. An empty list matches all values. If a
     * method is present, only HTTP requests using that method are forwarded to this
     * route’s service. </p>
     */
    inline RouteSummary& AddMethods(HttpMethod&& value) { m_methodsHasBeenSet = true; m_methods.push_back(std::move(value)); return *this; }


    /**
     * <p>The Amazon Web Services account ID of the route owner.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }

    /**
     * <p>The Amazon Web Services account ID of the route owner.</p>
     */
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the route owner.</p>
     */
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the route owner.</p>
     */
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the route owner.</p>
     */
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the route owner.</p>
     */
    inline RouteSummary& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the route owner.</p>
     */
    inline RouteSummary& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the route owner.</p>
     */
    inline RouteSummary& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}


    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPathResourceToId() const{ return m_pathResourceToId; }

    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline bool PathResourceToIdHasBeenSet() const { return m_pathResourceToIdHasBeenSet; }

    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline void SetPathResourceToId(const Aws::Map<Aws::String, Aws::String>& value) { m_pathResourceToIdHasBeenSet = true; m_pathResourceToId = value; }

    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline void SetPathResourceToId(Aws::Map<Aws::String, Aws::String>&& value) { m_pathResourceToIdHasBeenSet = true; m_pathResourceToId = std::move(value); }

    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline RouteSummary& WithPathResourceToId(const Aws::Map<Aws::String, Aws::String>& value) { SetPathResourceToId(value); return *this;}

    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline RouteSummary& WithPathResourceToId(Aws::Map<Aws::String, Aws::String>&& value) { SetPathResourceToId(std::move(value)); return *this;}

    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline RouteSummary& AddPathResourceToId(const Aws::String& key, const Aws::String& value) { m_pathResourceToIdHasBeenSet = true; m_pathResourceToId.emplace(key, value); return *this; }

    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline RouteSummary& AddPathResourceToId(Aws::String&& key, const Aws::String& value) { m_pathResourceToIdHasBeenSet = true; m_pathResourceToId.emplace(std::move(key), value); return *this; }

    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline RouteSummary& AddPathResourceToId(const Aws::String& key, Aws::String&& value) { m_pathResourceToIdHasBeenSet = true; m_pathResourceToId.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline RouteSummary& AddPathResourceToId(Aws::String&& key, Aws::String&& value) { m_pathResourceToIdHasBeenSet = true; m_pathResourceToId.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline RouteSummary& AddPathResourceToId(const char* key, Aws::String&& value) { m_pathResourceToIdHasBeenSet = true; m_pathResourceToId.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline RouteSummary& AddPathResourceToId(Aws::String&& key, const char* value) { m_pathResourceToIdHasBeenSet = true; m_pathResourceToId.emplace(std::move(key), value); return *this; }

    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline RouteSummary& AddPathResourceToId(const char* key, const char* value) { m_pathResourceToIdHasBeenSet = true; m_pathResourceToId.emplace(key, value); return *this; }


    /**
     * <p>The unique identifier of the route. </p>
     */
    inline const Aws::String& GetRouteId() const{ return m_routeId; }

    /**
     * <p>The unique identifier of the route. </p>
     */
    inline bool RouteIdHasBeenSet() const { return m_routeIdHasBeenSet; }

    /**
     * <p>The unique identifier of the route. </p>
     */
    inline void SetRouteId(const Aws::String& value) { m_routeIdHasBeenSet = true; m_routeId = value; }

    /**
     * <p>The unique identifier of the route. </p>
     */
    inline void SetRouteId(Aws::String&& value) { m_routeIdHasBeenSet = true; m_routeId = std::move(value); }

    /**
     * <p>The unique identifier of the route. </p>
     */
    inline void SetRouteId(const char* value) { m_routeIdHasBeenSet = true; m_routeId.assign(value); }

    /**
     * <p>The unique identifier of the route. </p>
     */
    inline RouteSummary& WithRouteId(const Aws::String& value) { SetRouteId(value); return *this;}

    /**
     * <p>The unique identifier of the route. </p>
     */
    inline RouteSummary& WithRouteId(Aws::String&& value) { SetRouteId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the route. </p>
     */
    inline RouteSummary& WithRouteId(const char* value) { SetRouteId(value); return *this;}


    /**
     * <p>The route type of the route. </p>
     */
    inline const RouteType& GetRouteType() const{ return m_routeType; }

    /**
     * <p>The route type of the route. </p>
     */
    inline bool RouteTypeHasBeenSet() const { return m_routeTypeHasBeenSet; }

    /**
     * <p>The route type of the route. </p>
     */
    inline void SetRouteType(const RouteType& value) { m_routeTypeHasBeenSet = true; m_routeType = value; }

    /**
     * <p>The route type of the route. </p>
     */
    inline void SetRouteType(RouteType&& value) { m_routeTypeHasBeenSet = true; m_routeType = std::move(value); }

    /**
     * <p>The route type of the route. </p>
     */
    inline RouteSummary& WithRouteType(const RouteType& value) { SetRouteType(value); return *this;}

    /**
     * <p>The route type of the route. </p>
     */
    inline RouteSummary& WithRouteType(RouteType&& value) { SetRouteType(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the service. </p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }

    /**
     * <p>The unique identifier of the service. </p>
     */
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }

    /**
     * <p>The unique identifier of the service. </p>
     */
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }

    /**
     * <p>The unique identifier of the service. </p>
     */
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }

    /**
     * <p>The unique identifier of the service. </p>
     */
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }

    /**
     * <p>The unique identifier of the service. </p>
     */
    inline RouteSummary& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}

    /**
     * <p>The unique identifier of the service. </p>
     */
    inline RouteSummary& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the service. </p>
     */
    inline RouteSummary& WithServiceId(const char* value) { SetServiceId(value); return *this;}


    /**
     * <p>The path to use to match traffic. Paths must start with <code>/</code> and
     * are relative to the base of the application.</p>
     */
    inline const Aws::String& GetSourcePath() const{ return m_sourcePath; }

    /**
     * <p>The path to use to match traffic. Paths must start with <code>/</code> and
     * are relative to the base of the application.</p>
     */
    inline bool SourcePathHasBeenSet() const { return m_sourcePathHasBeenSet; }

    /**
     * <p>The path to use to match traffic. Paths must start with <code>/</code> and
     * are relative to the base of the application.</p>
     */
    inline void SetSourcePath(const Aws::String& value) { m_sourcePathHasBeenSet = true; m_sourcePath = value; }

    /**
     * <p>The path to use to match traffic. Paths must start with <code>/</code> and
     * are relative to the base of the application.</p>
     */
    inline void SetSourcePath(Aws::String&& value) { m_sourcePathHasBeenSet = true; m_sourcePath = std::move(value); }

    /**
     * <p>The path to use to match traffic. Paths must start with <code>/</code> and
     * are relative to the base of the application.</p>
     */
    inline void SetSourcePath(const char* value) { m_sourcePathHasBeenSet = true; m_sourcePath.assign(value); }

    /**
     * <p>The path to use to match traffic. Paths must start with <code>/</code> and
     * are relative to the base of the application.</p>
     */
    inline RouteSummary& WithSourcePath(const Aws::String& value) { SetSourcePath(value); return *this;}

    /**
     * <p>The path to use to match traffic. Paths must start with <code>/</code> and
     * are relative to the base of the application.</p>
     */
    inline RouteSummary& WithSourcePath(Aws::String&& value) { SetSourcePath(std::move(value)); return *this;}

    /**
     * <p>The path to use to match traffic. Paths must start with <code>/</code> and
     * are relative to the base of the application.</p>
     */
    inline RouteSummary& WithSourcePath(const char* value) { SetSourcePath(value); return *this;}


    /**
     * <p>The current state of the route. </p>
     */
    inline const RouteState& GetState() const{ return m_state; }

    /**
     * <p>The current state of the route. </p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The current state of the route. </p>
     */
    inline void SetState(const RouteState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The current state of the route. </p>
     */
    inline void SetState(RouteState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The current state of the route. </p>
     */
    inline RouteSummary& WithState(const RouteState& value) { SetState(value); return *this;}

    /**
     * <p>The current state of the route. </p>
     */
    inline RouteSummary& WithState(RouteState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The tags assigned to the route. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the route. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the route. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the route. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the route. </p>
     */
    inline RouteSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the route. </p>
     */
    inline RouteSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the route. </p>
     */
    inline RouteSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the route. </p>
     */
    inline RouteSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the route. </p>
     */
    inline RouteSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the route. </p>
     */
    inline RouteSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the route. </p>
     */
    inline RouteSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the route. </p>
     */
    inline RouteSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the route. </p>
     */
    inline RouteSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_createdByAccountId;
    bool m_createdByAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    ErrorResponse m_error;
    bool m_errorHasBeenSet = false;

    bool m_includeChildPaths;
    bool m_includeChildPathsHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Vector<HttpMethod> m_methods;
    bool m_methodsHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_pathResourceToId;
    bool m_pathResourceToIdHasBeenSet = false;

    Aws::String m_routeId;
    bool m_routeIdHasBeenSet = false;

    RouteType m_routeType;
    bool m_routeTypeHasBeenSet = false;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::String m_sourcePath;
    bool m_sourcePathHasBeenSet = false;

    RouteState m_state;
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
