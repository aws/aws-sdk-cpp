/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/InventoryFilter.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>A user-defined set of one or more filters on which to aggregate inventory
   * data. Groups return a count of resources that match and don't match the
   * specified criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/InventoryGroup">AWS
   * API Reference</a></p>
   */
  class InventoryGroup
  {
  public:
    AWS_SSM_API InventoryGroup();
    AWS_SSM_API InventoryGroup(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API InventoryGroup& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline InventoryGroup& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline InventoryGroup& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline InventoryGroup& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters define the criteria for the group. The <code>matchingCount</code>
     * field displays the number of resources that match the criteria. The
     * <code>notMatchingCount</code> field displays the number of resources that don't
     * match the criteria. </p>
     */
    inline const Aws::Vector<InventoryFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<InventoryFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<InventoryFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline InventoryGroup& WithFilters(const Aws::Vector<InventoryFilter>& value) { SetFilters(value); return *this;}
    inline InventoryGroup& WithFilters(Aws::Vector<InventoryFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline InventoryGroup& AddFilters(const InventoryFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline InventoryGroup& AddFilters(InventoryFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<InventoryFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
