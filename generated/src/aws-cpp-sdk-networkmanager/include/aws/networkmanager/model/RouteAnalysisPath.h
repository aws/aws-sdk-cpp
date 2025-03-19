/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/model/RouteAnalysisCompletion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/PathComponent.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes a route analysis path.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/RouteAnalysisPath">AWS
   * API Reference</a></p>
   */
  class RouteAnalysisPath
  {
  public:
    AWS_NETWORKMANAGER_API RouteAnalysisPath() = default;
    AWS_NETWORKMANAGER_API RouteAnalysisPath(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API RouteAnalysisPath& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the analysis at completion.</p>
     */
    inline const RouteAnalysisCompletion& GetCompletionStatus() const { return m_completionStatus; }
    inline bool CompletionStatusHasBeenSet() const { return m_completionStatusHasBeenSet; }
    template<typename CompletionStatusT = RouteAnalysisCompletion>
    void SetCompletionStatus(CompletionStatusT&& value) { m_completionStatusHasBeenSet = true; m_completionStatus = std::forward<CompletionStatusT>(value); }
    template<typename CompletionStatusT = RouteAnalysisCompletion>
    RouteAnalysisPath& WithCompletionStatus(CompletionStatusT&& value) { SetCompletionStatus(std::forward<CompletionStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route analysis path.</p>
     */
    inline const Aws::Vector<PathComponent>& GetPath() const { return m_path; }
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
    template<typename PathT = Aws::Vector<PathComponent>>
    void SetPath(PathT&& value) { m_pathHasBeenSet = true; m_path = std::forward<PathT>(value); }
    template<typename PathT = Aws::Vector<PathComponent>>
    RouteAnalysisPath& WithPath(PathT&& value) { SetPath(std::forward<PathT>(value)); return *this;}
    template<typename PathT = PathComponent>
    RouteAnalysisPath& AddPath(PathT&& value) { m_pathHasBeenSet = true; m_path.emplace_back(std::forward<PathT>(value)); return *this; }
    ///@}
  private:

    RouteAnalysisCompletion m_completionStatus;
    bool m_completionStatusHasBeenSet = false;

    Aws::Vector<PathComponent> m_path;
    bool m_pathHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
