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


    ///@{
    /**
     * <p>If set to <code>true</code>, this option appends the source path to the
     * service URL endpoint.</p>
     */
    inline bool GetAppendSourcePath() const{ return m_appendSourcePath; }
    inline bool AppendSourcePathHasBeenSet() const { return m_appendSourcePathHasBeenSet; }
    inline void SetAppendSourcePath(bool value) { m_appendSourcePathHasBeenSet = true; m_appendSourcePath = value; }
    inline RouteSummary& WithAppendSourcePath(bool value) { SetAppendSourcePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the application. </p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline RouteSummary& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline RouteSummary& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline RouteSummary& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the route. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline RouteSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline RouteSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline RouteSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the route creator. </p>
     */
    inline const Aws::String& GetCreatedByAccountId() const{ return m_createdByAccountId; }
    inline bool CreatedByAccountIdHasBeenSet() const { return m_createdByAccountIdHasBeenSet; }
    inline void SetCreatedByAccountId(const Aws::String& value) { m_createdByAccountIdHasBeenSet = true; m_createdByAccountId = value; }
    inline void SetCreatedByAccountId(Aws::String&& value) { m_createdByAccountIdHasBeenSet = true; m_createdByAccountId = std::move(value); }
    inline void SetCreatedByAccountId(const char* value) { m_createdByAccountIdHasBeenSet = true; m_createdByAccountId.assign(value); }
    inline RouteSummary& WithCreatedByAccountId(const Aws::String& value) { SetCreatedByAccountId(value); return *this;}
    inline RouteSummary& WithCreatedByAccountId(Aws::String&& value) { SetCreatedByAccountId(std::move(value)); return *this;}
    inline RouteSummary& WithCreatedByAccountId(const char* value) { SetCreatedByAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the route is created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline RouteSummary& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline RouteSummary& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline RouteSummary& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline RouteSummary& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline RouteSummary& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any error associated with the route resource. </p>
     */
    inline const ErrorResponse& GetError() const{ return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    inline void SetError(const ErrorResponse& value) { m_errorHasBeenSet = true; m_error = value; }
    inline void SetError(ErrorResponse&& value) { m_errorHasBeenSet = true; m_error = std::move(value); }
    inline RouteSummary& WithError(const ErrorResponse& value) { SetError(value); return *this;}
    inline RouteSummary& WithError(ErrorResponse&& value) { SetError(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to match all subpaths of the given source path. If this
     * value is <code>false</code>, requests must match the source path exactly before
     * they are forwarded to this route's service.</p>
     */
    inline bool GetIncludeChildPaths() const{ return m_includeChildPaths; }
    inline bool IncludeChildPathsHasBeenSet() const { return m_includeChildPathsHasBeenSet; }
    inline void SetIncludeChildPaths(bool value) { m_includeChildPathsHasBeenSet = true; m_includeChildPaths = value; }
    inline RouteSummary& WithIncludeChildPaths(bool value) { SetIncludeChildPaths(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the route was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline RouteSummary& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline RouteSummary& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of HTTP methods to match. An empty list matches all values. If a
     * method is present, only HTTP requests using that method are forwarded to this
     * route’s service. </p>
     */
    inline const Aws::Vector<HttpMethod>& GetMethods() const{ return m_methods; }
    inline bool MethodsHasBeenSet() const { return m_methodsHasBeenSet; }
    inline void SetMethods(const Aws::Vector<HttpMethod>& value) { m_methodsHasBeenSet = true; m_methods = value; }
    inline void SetMethods(Aws::Vector<HttpMethod>&& value) { m_methodsHasBeenSet = true; m_methods = std::move(value); }
    inline RouteSummary& WithMethods(const Aws::Vector<HttpMethod>& value) { SetMethods(value); return *this;}
    inline RouteSummary& WithMethods(Aws::Vector<HttpMethod>&& value) { SetMethods(std::move(value)); return *this;}
    inline RouteSummary& AddMethods(const HttpMethod& value) { m_methodsHasBeenSet = true; m_methods.push_back(value); return *this; }
    inline RouteSummary& AddMethods(HttpMethod&& value) { m_methodsHasBeenSet = true; m_methods.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the route owner.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const{ return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    inline void SetOwnerAccountId(const Aws::String& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = value; }
    inline void SetOwnerAccountId(Aws::String&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::move(value); }
    inline void SetOwnerAccountId(const char* value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId.assign(value); }
    inline RouteSummary& WithOwnerAccountId(const Aws::String& value) { SetOwnerAccountId(value); return *this;}
    inline RouteSummary& WithOwnerAccountId(Aws::String&& value) { SetOwnerAccountId(std::move(value)); return *this;}
    inline RouteSummary& WithOwnerAccountId(const char* value) { SetOwnerAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPathResourceToId() const{ return m_pathResourceToId; }
    inline bool PathResourceToIdHasBeenSet() const { return m_pathResourceToIdHasBeenSet; }
    inline void SetPathResourceToId(const Aws::Map<Aws::String, Aws::String>& value) { m_pathResourceToIdHasBeenSet = true; m_pathResourceToId = value; }
    inline void SetPathResourceToId(Aws::Map<Aws::String, Aws::String>&& value) { m_pathResourceToIdHasBeenSet = true; m_pathResourceToId = std::move(value); }
    inline RouteSummary& WithPathResourceToId(const Aws::Map<Aws::String, Aws::String>& value) { SetPathResourceToId(value); return *this;}
    inline RouteSummary& WithPathResourceToId(Aws::Map<Aws::String, Aws::String>&& value) { SetPathResourceToId(std::move(value)); return *this;}
    inline RouteSummary& AddPathResourceToId(const Aws::String& key, const Aws::String& value) { m_pathResourceToIdHasBeenSet = true; m_pathResourceToId.emplace(key, value); return *this; }
    inline RouteSummary& AddPathResourceToId(Aws::String&& key, const Aws::String& value) { m_pathResourceToIdHasBeenSet = true; m_pathResourceToId.emplace(std::move(key), value); return *this; }
    inline RouteSummary& AddPathResourceToId(const Aws::String& key, Aws::String&& value) { m_pathResourceToIdHasBeenSet = true; m_pathResourceToId.emplace(key, std::move(value)); return *this; }
    inline RouteSummary& AddPathResourceToId(Aws::String&& key, Aws::String&& value) { m_pathResourceToIdHasBeenSet = true; m_pathResourceToId.emplace(std::move(key), std::move(value)); return *this; }
    inline RouteSummary& AddPathResourceToId(const char* key, Aws::String&& value) { m_pathResourceToIdHasBeenSet = true; m_pathResourceToId.emplace(key, std::move(value)); return *this; }
    inline RouteSummary& AddPathResourceToId(Aws::String&& key, const char* value) { m_pathResourceToIdHasBeenSet = true; m_pathResourceToId.emplace(std::move(key), value); return *this; }
    inline RouteSummary& AddPathResourceToId(const char* key, const char* value) { m_pathResourceToIdHasBeenSet = true; m_pathResourceToId.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the route. </p>
     */
    inline const Aws::String& GetRouteId() const{ return m_routeId; }
    inline bool RouteIdHasBeenSet() const { return m_routeIdHasBeenSet; }
    inline void SetRouteId(const Aws::String& value) { m_routeIdHasBeenSet = true; m_routeId = value; }
    inline void SetRouteId(Aws::String&& value) { m_routeIdHasBeenSet = true; m_routeId = std::move(value); }
    inline void SetRouteId(const char* value) { m_routeIdHasBeenSet = true; m_routeId.assign(value); }
    inline RouteSummary& WithRouteId(const Aws::String& value) { SetRouteId(value); return *this;}
    inline RouteSummary& WithRouteId(Aws::String&& value) { SetRouteId(std::move(value)); return *this;}
    inline RouteSummary& WithRouteId(const char* value) { SetRouteId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route type of the route. </p>
     */
    inline const RouteType& GetRouteType() const{ return m_routeType; }
    inline bool RouteTypeHasBeenSet() const { return m_routeTypeHasBeenSet; }
    inline void SetRouteType(const RouteType& value) { m_routeTypeHasBeenSet = true; m_routeType = value; }
    inline void SetRouteType(RouteType&& value) { m_routeTypeHasBeenSet = true; m_routeType = std::move(value); }
    inline RouteSummary& WithRouteType(const RouteType& value) { SetRouteType(value); return *this;}
    inline RouteSummary& WithRouteType(RouteType&& value) { SetRouteType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the service. </p>
     */
    inline const Aws::String& GetServiceId() const{ return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    inline void SetServiceId(const Aws::String& value) { m_serviceIdHasBeenSet = true; m_serviceId = value; }
    inline void SetServiceId(Aws::String&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::move(value); }
    inline void SetServiceId(const char* value) { m_serviceIdHasBeenSet = true; m_serviceId.assign(value); }
    inline RouteSummary& WithServiceId(const Aws::String& value) { SetServiceId(value); return *this;}
    inline RouteSummary& WithServiceId(Aws::String&& value) { SetServiceId(std::move(value)); return *this;}
    inline RouteSummary& WithServiceId(const char* value) { SetServiceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the path that Refactor Spaces uses to match traffic. Paths must start
     * with <code>/</code> and are relative to the base of the application. To use path
     * parameters in the source path, add a variable in curly braces. For example, the
     * resource path {user} represents a path parameter called 'user'.</p>
     */
    inline const Aws::String& GetSourcePath() const{ return m_sourcePath; }
    inline bool SourcePathHasBeenSet() const { return m_sourcePathHasBeenSet; }
    inline void SetSourcePath(const Aws::String& value) { m_sourcePathHasBeenSet = true; m_sourcePath = value; }
    inline void SetSourcePath(Aws::String&& value) { m_sourcePathHasBeenSet = true; m_sourcePath = std::move(value); }
    inline void SetSourcePath(const char* value) { m_sourcePathHasBeenSet = true; m_sourcePath.assign(value); }
    inline RouteSummary& WithSourcePath(const Aws::String& value) { SetSourcePath(value); return *this;}
    inline RouteSummary& WithSourcePath(Aws::String&& value) { SetSourcePath(std::move(value)); return *this;}
    inline RouteSummary& WithSourcePath(const char* value) { SetSourcePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the route. </p>
     */
    inline const RouteState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const RouteState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(RouteState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline RouteSummary& WithState(const RouteState& value) { SetState(value); return *this;}
    inline RouteSummary& WithState(RouteState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the route. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline RouteSummary& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline RouteSummary& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline RouteSummary& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline RouteSummary& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline RouteSummary& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline RouteSummary& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline RouteSummary& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline RouteSummary& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline RouteSummary& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    bool m_appendSourcePath;
    bool m_appendSourcePathHasBeenSet = false;

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
