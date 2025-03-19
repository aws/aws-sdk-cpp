/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Any dependencies related to hub content, such as scripts, model artifacts,
   * datasets, or notebooks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HubContentDependency">AWS
   * API Reference</a></p>
   */
  class HubContentDependency
  {
  public:
    AWS_SAGEMAKER_API HubContentDependency() = default;
    AWS_SAGEMAKER_API HubContentDependency(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HubContentDependency& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The hub content dependency origin path.</p>
     */
    inline const Aws::String& GetDependencyOriginPath() const { return m_dependencyOriginPath; }
    inline bool DependencyOriginPathHasBeenSet() const { return m_dependencyOriginPathHasBeenSet; }
    template<typename DependencyOriginPathT = Aws::String>
    void SetDependencyOriginPath(DependencyOriginPathT&& value) { m_dependencyOriginPathHasBeenSet = true; m_dependencyOriginPath = std::forward<DependencyOriginPathT>(value); }
    template<typename DependencyOriginPathT = Aws::String>
    HubContentDependency& WithDependencyOriginPath(DependencyOriginPathT&& value) { SetDependencyOriginPath(std::forward<DependencyOriginPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hub content dependency copy path.</p>
     */
    inline const Aws::String& GetDependencyCopyPath() const { return m_dependencyCopyPath; }
    inline bool DependencyCopyPathHasBeenSet() const { return m_dependencyCopyPathHasBeenSet; }
    template<typename DependencyCopyPathT = Aws::String>
    void SetDependencyCopyPath(DependencyCopyPathT&& value) { m_dependencyCopyPathHasBeenSet = true; m_dependencyCopyPath = std::forward<DependencyCopyPathT>(value); }
    template<typename DependencyCopyPathT = Aws::String>
    HubContentDependency& WithDependencyCopyPath(DependencyCopyPathT&& value) { SetDependencyCopyPath(std::forward<DependencyCopyPathT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dependencyOriginPath;
    bool m_dependencyOriginPathHasBeenSet = false;

    Aws::String m_dependencyCopyPath;
    bool m_dependencyCopyPathHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
