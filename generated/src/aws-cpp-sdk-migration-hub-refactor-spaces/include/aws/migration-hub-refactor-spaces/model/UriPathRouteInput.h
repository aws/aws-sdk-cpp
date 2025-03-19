/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/migration-hub-refactor-spaces/model/RouteActivationState.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The configuration for the URI path route type. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/UriPathRouteInput">AWS
   * API Reference</a></p>
   */
  class UriPathRouteInput
  {
  public:
    AWS_MIGRATIONHUBREFACTORSPACES_API UriPathRouteInput() = default;
    AWS_MIGRATIONHUBREFACTORSPACES_API UriPathRouteInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API UriPathRouteInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBREFACTORSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If set to <code>ACTIVE</code>, traffic is forwarded to this route’s service
     * after the route is created. </p>
     */
    inline RouteActivationState GetActivationState() const { return m_activationState; }
    inline bool ActivationStateHasBeenSet() const { return m_activationStateHasBeenSet; }
    inline void SetActivationState(RouteActivationState value) { m_activationStateHasBeenSet = true; m_activationState = value; }
    inline UriPathRouteInput& WithActivationState(RouteActivationState value) { SetActivationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If set to <code>true</code>, this option appends the source path to the
     * service URL endpoint.</p>
     */
    inline bool GetAppendSourcePath() const { return m_appendSourcePath; }
    inline bool AppendSourcePathHasBeenSet() const { return m_appendSourcePathHasBeenSet; }
    inline void SetAppendSourcePath(bool value) { m_appendSourcePathHasBeenSet = true; m_appendSourcePath = value; }
    inline UriPathRouteInput& WithAppendSourcePath(bool value) { SetAppendSourcePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to match all subpaths of the given source path. If this
     * value is <code>false</code>, requests must match the source path exactly before
     * they are forwarded to this route's service. </p>
     */
    inline bool GetIncludeChildPaths() const { return m_includeChildPaths; }
    inline bool IncludeChildPathsHasBeenSet() const { return m_includeChildPathsHasBeenSet; }
    inline void SetIncludeChildPaths(bool value) { m_includeChildPathsHasBeenSet = true; m_includeChildPaths = value; }
    inline UriPathRouteInput& WithIncludeChildPaths(bool value) { SetIncludeChildPaths(value); return *this;}
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
    UriPathRouteInput& WithMethods(MethodsT&& value) { SetMethods(std::forward<MethodsT>(value)); return *this;}
    inline UriPathRouteInput& AddMethods(HttpMethod value) { m_methodsHasBeenSet = true; m_methods.push_back(value); return *this; }
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
    UriPathRouteInput& WithSourcePath(SourcePathT&& value) { SetSourcePath(std::forward<SourcePathT>(value)); return *this;}
    ///@}
  private:

    RouteActivationState m_activationState{RouteActivationState::NOT_SET};
    bool m_activationStateHasBeenSet = false;

    bool m_appendSourcePath{false};
    bool m_appendSourcePathHasBeenSet = false;

    bool m_includeChildPaths{false};
    bool m_includeChildPathsHasBeenSet = false;

    Aws::Vector<HttpMethod> m_methods;
    bool m_methodsHasBeenSet = false;

    Aws::String m_sourcePath;
    bool m_sourcePathHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
