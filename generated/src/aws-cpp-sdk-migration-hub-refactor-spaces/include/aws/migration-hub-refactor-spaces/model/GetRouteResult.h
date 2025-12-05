/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/migration-hub-refactor-spaces/model/ErrorResponse.h>
#include <aws/migration-hub-refactor-spaces/model/HttpMethod.h>
#include <aws/migration-hub-refactor-spaces/model/RouteState.h>
#include <aws/migration-hub-refactor-spaces/model/RouteType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MigrationHubRefactorSpaces {
namespace Model {
class GetRouteResult {
 public:
  AWS_MIGRATIONHUBREFACTORSPACES_API GetRouteResult() = default;
  AWS_MIGRATIONHUBREFACTORSPACES_API GetRouteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MIGRATIONHUBREFACTORSPACES_API GetRouteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>If set to <code>true</code>, this option appends the source path to the
   * service URL endpoint.</p>
   */
  inline bool GetAppendSourcePath() const { return m_appendSourcePath; }
  inline void SetAppendSourcePath(bool value) {
    m_appendSourcePathHasBeenSet = true;
    m_appendSourcePath = value;
  }
  inline GetRouteResult& WithAppendSourcePath(bool value) {
    SetAppendSourcePath(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the application that the route belongs to. </p>
   */
  inline const Aws::String& GetApplicationId() const { return m_applicationId; }
  template <typename ApplicationIdT = Aws::String>
  void SetApplicationId(ApplicationIdT&& value) {
    m_applicationIdHasBeenSet = true;
    m_applicationId = std::forward<ApplicationIdT>(value);
  }
  template <typename ApplicationIdT = Aws::String>
  GetRouteResult& WithApplicationId(ApplicationIdT&& value) {
    SetApplicationId(std::forward<ApplicationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the route.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetRouteResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the route creator.</p>
   */
  inline const Aws::String& GetCreatedByAccountId() const { return m_createdByAccountId; }
  template <typename CreatedByAccountIdT = Aws::String>
  void SetCreatedByAccountId(CreatedByAccountIdT&& value) {
    m_createdByAccountIdHasBeenSet = true;
    m_createdByAccountId = std::forward<CreatedByAccountIdT>(value);
  }
  template <typename CreatedByAccountIdT = Aws::String>
  GetRouteResult& WithCreatedByAccountId(CreatedByAccountIdT&& value) {
    SetCreatedByAccountId(std::forward<CreatedByAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of when the route is created. </p>
   */
  inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  void SetCreatedTime(CreatedTimeT&& value) {
    m_createdTimeHasBeenSet = true;
    m_createdTime = std::forward<CreatedTimeT>(value);
  }
  template <typename CreatedTimeT = Aws::Utils::DateTime>
  GetRouteResult& WithCreatedTime(CreatedTimeT&& value) {
    SetCreatedTime(std::forward<CreatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique identifier of the environment.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  GetRouteResult& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Any error associated with the route resource. </p>
   */
  inline const ErrorResponse& GetError() const { return m_error; }
  template <typename ErrorT = ErrorResponse>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = ErrorResponse>
  GetRouteResult& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether to match all subpaths of the given source path. If this
   * value is <code>false</code>, requests must match the source path exactly before
   * they are forwarded to this route's service. </p>
   */
  inline bool GetIncludeChildPaths() const { return m_includeChildPaths; }
  inline void SetIncludeChildPaths(bool value) {
    m_includeChildPathsHasBeenSet = true;
    m_includeChildPaths = value;
  }
  inline GetRouteResult& WithIncludeChildPaths(bool value) {
    SetIncludeChildPaths(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A timestamp that indicates when the route was last updated. </p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  void SetLastUpdatedTime(LastUpdatedTimeT&& value) {
    m_lastUpdatedTimeHasBeenSet = true;
    m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value);
  }
  template <typename LastUpdatedTimeT = Aws::Utils::DateTime>
  GetRouteResult& WithLastUpdatedTime(LastUpdatedTimeT&& value) {
    SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of HTTP methods to match. An empty list matches all values. If a
   * method is present, only HTTP requests using that method are forwarded to this
   * route’s service. </p>
   */
  inline const Aws::Vector<HttpMethod>& GetMethods() const { return m_methods; }
  template <typename MethodsT = Aws::Vector<HttpMethod>>
  void SetMethods(MethodsT&& value) {
    m_methodsHasBeenSet = true;
    m_methods = std::forward<MethodsT>(value);
  }
  template <typename MethodsT = Aws::Vector<HttpMethod>>
  GetRouteResult& WithMethods(MethodsT&& value) {
    SetMethods(std::forward<MethodsT>(value));
    return *this;
  }
  inline GetRouteResult& AddMethods(HttpMethod value) {
    m_methodsHasBeenSet = true;
    m_methods.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID of the route owner.</p>
   */
  inline const Aws::String& GetOwnerAccountId() const { return m_ownerAccountId; }
  template <typename OwnerAccountIdT = Aws::String>
  void SetOwnerAccountId(OwnerAccountIdT&& value) {
    m_ownerAccountIdHasBeenSet = true;
    m_ownerAccountId = std::forward<OwnerAccountIdT>(value);
  }
  template <typename OwnerAccountIdT = Aws::String>
  GetRouteResult& WithOwnerAccountId(OwnerAccountIdT&& value) {
    SetOwnerAccountId(std::forward<OwnerAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A mapping of Amazon API Gateway path resources to resource IDs. </p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetPathResourceToId() const { return m_pathResourceToId; }
  template <typename PathResourceToIdT = Aws::Map<Aws::String, Aws::String>>
  void SetPathResourceToId(PathResourceToIdT&& value) {
    m_pathResourceToIdHasBeenSet = true;
    m_pathResourceToId = std::forward<PathResourceToIdT>(value);
  }
  template <typename PathResourceToIdT = Aws::Map<Aws::String, Aws::String>>
  GetRouteResult& WithPathResourceToId(PathResourceToIdT&& value) {
    SetPathResourceToId(std::forward<PathResourceToIdT>(value));
    return *this;
  }
  template <typename PathResourceToIdKeyT = Aws::String, typename PathResourceToIdValueT = Aws::String>
  GetRouteResult& AddPathResourceToId(PathResourceToIdKeyT&& key, PathResourceToIdValueT&& value) {
    m_pathResourceToIdHasBeenSet = true;
    m_pathResourceToId.emplace(std::forward<PathResourceToIdKeyT>(key), std::forward<PathResourceToIdValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the route.</p> <p> <b>DEFAULT</b>: All traffic that
   * does not match another route is forwarded to the default route. Applications
   * must have a default route before any other routes can be created.</p> <p>
   * <b>URI_PATH</b>: A route that is based on a URI path.</p>
   */
  inline const Aws::String& GetRouteId() const { return m_routeId; }
  template <typename RouteIdT = Aws::String>
  void SetRouteId(RouteIdT&& value) {
    m_routeIdHasBeenSet = true;
    m_routeId = std::forward<RouteIdT>(value);
  }
  template <typename RouteIdT = Aws::String>
  GetRouteResult& WithRouteId(RouteIdT&& value) {
    SetRouteId(std::forward<RouteIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of route.</p>
   */
  inline RouteType GetRouteType() const { return m_routeType; }
  inline void SetRouteType(RouteType value) {
    m_routeTypeHasBeenSet = true;
    m_routeType = value;
  }
  inline GetRouteResult& WithRouteType(RouteType value) {
    SetRouteType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the service.</p>
   */
  inline const Aws::String& GetServiceId() const { return m_serviceId; }
  template <typename ServiceIdT = Aws::String>
  void SetServiceId(ServiceIdT&& value) {
    m_serviceIdHasBeenSet = true;
    m_serviceId = std::forward<ServiceIdT>(value);
  }
  template <typename ServiceIdT = Aws::String>
  GetRouteResult& WithServiceId(ServiceIdT&& value) {
    SetServiceId(std::forward<ServiceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This is the path that Refactor Spaces uses to match traffic. Paths must start
   * with <code>/</code> and are relative to the base of the application. To use path
   * parameters in the source path, add a variable in curly braces. For example, the
   * resource path {user} represents a path parameter called 'user'.</p>
   */
  inline const Aws::String& GetSourcePath() const { return m_sourcePath; }
  template <typename SourcePathT = Aws::String>
  void SetSourcePath(SourcePathT&& value) {
    m_sourcePathHasBeenSet = true;
    m_sourcePath = std::forward<SourcePathT>(value);
  }
  template <typename SourcePathT = Aws::String>
  GetRouteResult& WithSourcePath(SourcePathT&& value) {
    SetSourcePath(std::forward<SourcePathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the route. </p>
   */
  inline RouteState GetState() const { return m_state; }
  inline void SetState(RouteState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline GetRouteResult& WithState(RouteState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags assigned to the route. A tag is a label that you assign to an Amazon
   * Web Services resource. Each tag consists of a key-value pair. </p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  GetRouteResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  GetRouteResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetRouteResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_appendSourcePath{false};

  Aws::String m_applicationId;

  Aws::String m_arn;

  Aws::String m_createdByAccountId;

  Aws::Utils::DateTime m_createdTime{};

  Aws::String m_environmentId;

  ErrorResponse m_error;

  bool m_includeChildPaths{false};

  Aws::Utils::DateTime m_lastUpdatedTime{};

  Aws::Vector<HttpMethod> m_methods;

  Aws::String m_ownerAccountId;

  Aws::Map<Aws::String, Aws::String> m_pathResourceToId;

  Aws::String m_routeId;

  RouteType m_routeType{RouteType::NOT_SET};

  Aws::String m_serviceId;

  Aws::String m_sourcePath;

  RouteState m_state{RouteState::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::String m_requestId;
  bool m_appendSourcePathHasBeenSet = false;
  bool m_applicationIdHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_createdByAccountIdHasBeenSet = false;
  bool m_createdTimeHasBeenSet = false;
  bool m_environmentIdHasBeenSet = false;
  bool m_errorHasBeenSet = false;
  bool m_includeChildPathsHasBeenSet = false;
  bool m_lastUpdatedTimeHasBeenSet = false;
  bool m_methodsHasBeenSet = false;
  bool m_ownerAccountIdHasBeenSet = false;
  bool m_pathResourceToIdHasBeenSet = false;
  bool m_routeIdHasBeenSet = false;
  bool m_routeTypeHasBeenSet = false;
  bool m_serviceIdHasBeenSet = false;
  bool m_sourcePathHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MigrationHubRefactorSpaces
}  // namespace Aws
