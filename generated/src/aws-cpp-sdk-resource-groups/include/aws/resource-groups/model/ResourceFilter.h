/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-groups/ResourceGroups_EXPORTS.h>
#include <aws/resource-groups/model/ResourceFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ResourceGroups
{
namespace Model
{

  /**
   * <p>A filter name and value pair that is used to obtain more specific results
   * from a list of resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/resource-groups-2017-11-27/ResourceFilter">AWS
   * API Reference</a></p>
   */
  class ResourceFilter
  {
  public:
    AWS_RESOURCEGROUPS_API ResourceFilter() = default;
    AWS_RESOURCEGROUPS_API ResourceFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API ResourceFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RESOURCEGROUPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the filter. Filter names are case-sensitive.</p>
     */
    inline ResourceFilterName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(ResourceFilterName value) { m_nameHasBeenSet = true; m_name = value; }
    inline ResourceFilter& WithName(ResourceFilterName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more filter values. Allowed filter values vary by resource filter
     * name, and are case-sensitive.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    ResourceFilter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    ResourceFilter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    ResourceFilterName m_name{ResourceFilterName::NOT_SET};
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceGroups
} // namespace Aws
