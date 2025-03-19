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
    AWS_MIGRATIONHUBREFACTORSPACES_API RouteSummary() = default;
    AWS_MIGRATIONHUBREFACTORSPACES_API RouteSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API RouteSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If set to <code>true</code>, this option appends the source path to the
     * service URL endpoint.</p>
     */
    inline bool GetAppendSourcePath() const { return m_appendSourcePath; }
    inline bool AppendSourcePathHasBeenSet() const { return m_appendSourcePathHasBeenSet; }
    inline void SetAppendSourcePath(bool value) { m_appendSourcePathHasBeenSet = true; m_appendSourcePath = value; }
    inline RouteSummary& WithAppendSourcePath(bool value) { SetAppendSourcePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the application. </p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    RouteSummary& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the route. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    RouteSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the route creator. </p>
     */
    inline const Aws::String& GetCreatedByAccountId() const { return m_createdByAccountId; }
    inline bool CreatedByAccountIdHasBeenSet() const { return m_createdByAccountIdHasBeenSet; }
    template<typename CreatedByAccountIdT = Aws::String>
    void SetCreatedByAccountId(CreatedByAccountIdT&& value) { m_createdByAccountIdHasBeenSet = true; m_createdByAccountId = std::forward<CreatedByAccountIdT>(value); }
    template<typename CreatedByAccountIdT = Aws::String>
    RouteSummary& WithCreatedByAccountId(CreatedByAccountIdT&& value) { SetCreatedByAccountId(std::forward<CreatedByAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the route is created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    RouteSummary& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the environment. </p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    RouteSummary& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any error associated with the route resource. </p>
     */
    inline const ErrorResponse& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = ErrorResponse>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ErrorResponse>
    RouteSummary& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to match all subpaths of the given source path. If this
     * value is <code>false</code>, requests must match the source path exactly before
     * they are forwarded to this route's service.</p>
     */
    inline bool GetIncludeChildPaths() const { return m_includeChildPaths; }
    inline bool IncludeChildPathsHasBeenSet() const { return m_includeChildPathsHasBeenSet; }
    inline void SetIncludeChildPaths(bool value) { m_includeChildPathsHasBeenSet = true; m_includeChildPaths = value; }
    inline RouteSummary& WithIncludeChildPaths(bool value) { SetIncludeChildPaths(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the route was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    RouteSummary& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of HTTP methods to match. An empty list matches all values. If a
     * method is present, only HTTP requests using that method are forwarded to this
     * route’s service. </p>
     */
    inline const Aws::Vector<HttpMethod>& GetMethods() const { return m_methods; }
    inline bool MethodsHasBeenSet() const { return m_methodsHasBeenSet; }
    template<typename MethodsT = Aws::Vector<HttpMethod>>
    void SetMethods(MethodsT&& value) { m_methodsHasBeenSet = true; m_methods = std::forward<MethodsT>(value); }
    template<typename MethodsT = Aws::Vector<HttpMethod>>
    RouteSummary& WithMethods(MethodsT&& value) { SetMethods(std::forward<MethodsT>(value)); return *this;}
    inline RouteSummary& AddMethods(HttpMethod value) { m_methodsHasBeenSet = true; m_methods.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the route owner.</p>
     */
    inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
    inline bool OwnerAccountIdHasBeenSet() const { return m_ownerAccountIdHasBeenSet; }
    template<typename OwnerAccountIdT = Aws::String>
    void SetOwnerAccountId(OwnerAccountIdT&& value) { m_ownerAccountIdHasBeenSet = true; m_ownerAccountId = std::forward<OwnerAccountIdT>(value); }
    template<typename OwnerAccountIdT = Aws::String>
    RouteSummary& WithOwnerAccountId(OwnerAccountIdT&& value) { SetOwnerAccountId(std::forward<OwnerAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetPathResourceToId() const { return m_pathResourceToId; }
    inline bool PathResourceToIdHasBeenSet() const { return m_pathResourceToIdHasBeenSet; }
    template<typename PathResourceToIdT = Aws::Map<Aws::String, Aws::String>>
    void SetPathResourceToId(PathResourceToIdT&& value) { m_pathResourceToIdHasBeenSet = true; m_pathResourceToId = std::forward<PathResourceToIdT>(value); }
    template<typename PathResourceToIdT = Aws::Map<Aws::String, Aws::String>>
    RouteSummary& WithPathResourceToId(PathResourceToIdT&& value) { SetPathResourceToId(std::forward<PathResourceToIdT>(value)); return *this;}
    template<typename PathResourceToIdKeyT = Aws::String, typename PathResourceToIdValueT = Aws::String>
    RouteSummary& AddPathResourceToId(PathResourceToIdKeyT&& key, PathResourceToIdValueT&& value) {
      m_pathResourceToIdHasBeenSet = true; m_pathResourceToId.emplace(std::forward<PathResourceToIdKeyT>(key), std::forward<PathResourceToIdValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the route. </p>
     */
    inline const Aws::String& GetRouteId() const { return m_routeId; }
    inline bool RouteIdHasBeenSet() const { return m_routeIdHasBeenSet; }
    template<typename RouteIdT = Aws::String>
    void SetRouteId(RouteIdT&& value) { m_routeIdHasBeenSet = true; m_routeId = std::forward<RouteIdT>(value); }
    template<typename RouteIdT = Aws::String>
    RouteSummary& WithRouteId(RouteIdT&& value) { SetRouteId(std::forward<RouteIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route type of the route. </p>
     */
    inline RouteType GetRouteType() const { return m_routeType; }
    inline bool RouteTypeHasBeenSet() const { return m_routeTypeHasBeenSet; }
    inline void SetRouteType(RouteType value) { m_routeTypeHasBeenSet = true; m_routeType = value; }
    inline RouteSummary& WithRouteType(RouteType value) { SetRouteType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the service. </p>
     */
    inline const Aws::String& GetServiceId() const { return m_serviceId; }
    inline bool ServiceIdHasBeenSet() const { return m_serviceIdHasBeenSet; }
    template<typename ServiceIdT = Aws::String>
    void SetServiceId(ServiceIdT&& value) { m_serviceIdHasBeenSet = true; m_serviceId = std::forward<ServiceIdT>(value); }
    template<typename ServiceIdT = Aws::String>
    RouteSummary& WithServiceId(ServiceIdT&& value) { SetServiceId(std::forward<ServiceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the path that Refactor Spaces uses to match traffic. Paths must start
     * with <code>/</code> and are relative to the base of the application. To use path
     * parameters in the source path, add a variable in curly braces. For example, the
     * resource path {user} represents a path parameter called 'user'.</p>
     */
    inline const Aws::String& GetSourcePath() const { return m_sourcePath; }
    inline bool SourcePathHasBeenSet() const { return m_sourcePathHasBeenSet; }
    template<typename SourcePathT = Aws::String>
    void SetSourcePath(SourcePathT&& value) { m_sourcePathHasBeenSet = true; m_sourcePath = std::forward<SourcePathT>(value); }
    template<typename SourcePathT = Aws::String>
    RouteSummary& WithSourcePath(SourcePathT&& value) { SetSourcePath(std::forward<SourcePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the route. </p>
     */
    inline RouteState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(RouteState value) { m_stateHasBeenSet = true; m_state = value; }
    inline RouteSummary& WithState(RouteState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the route. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    RouteSummary& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    RouteSummary& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    bool m_appendSourcePath{false};
    bool m_appendSourcePathHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_createdByAccountId;
    bool m_createdByAccountIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    ErrorResponse m_error;
    bool m_errorHasBeenSet = false;

    bool m_includeChildPaths{false};
    bool m_includeChildPathsHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::Vector<HttpMethod> m_methods;
    bool m_methodsHasBeenSet = false;

    Aws::String m_ownerAccountId;
    bool m_ownerAccountIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_pathResourceToId;
    bool m_pathResourceToIdHasBeenSet = false;

    Aws::String m_routeId;
    bool m_routeIdHasBeenSet = false;

    RouteType m_routeType{RouteType::NOT_SET};
    bool m_routeTypeHasBeenSet = false;

    Aws::String m_serviceId;
    bool m_serviceIdHasBeenSet = false;

    Aws::String m_sourcePath;
    bool m_sourcePathHasBeenSet = false;

    RouteState m_state{RouteState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
