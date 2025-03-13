/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workdocs/model/ResourcePathComponent.h>
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
namespace WorkDocs
{
namespace Model
{

  /**
   * <p>Describes the path information of a resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workdocs-2016-05-01/ResourcePath">AWS
   * API Reference</a></p>
   */
  class ResourcePath
  {
  public:
    AWS_WORKDOCS_API ResourcePath() = default;
    AWS_WORKDOCS_API ResourcePath(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API ResourcePath& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKDOCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The components of the resource path.</p>
     */
    inline const Aws::Vector<ResourcePathComponent>& GetComponents() const { return m_components; }
    inline bool ComponentsHasBeenSet() const { return m_componentsHasBeenSet; }
    template<typename ComponentsT = Aws::Vector<ResourcePathComponent>>
    void SetComponents(ComponentsT&& value) { m_componentsHasBeenSet = true; m_components = std::forward<ComponentsT>(value); }
    template<typename ComponentsT = Aws::Vector<ResourcePathComponent>>
    ResourcePath& WithComponents(ComponentsT&& value) { SetComponents(std::forward<ComponentsT>(value)); return *this;}
    template<typename ComponentsT = ResourcePathComponent>
    ResourcePath& AddComponents(ComponentsT&& value) { m_componentsHasBeenSet = true; m_components.emplace_back(std::forward<ComponentsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ResourcePathComponent> m_components;
    bool m_componentsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkDocs
} // namespace Aws
