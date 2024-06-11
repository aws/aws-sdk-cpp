/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Filter.h>
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
   * <p>A list of nested <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_Filter.html">Filter</a>
   * objects. A resource must satisfy the conditions of all filters to be included in
   * the results returned from the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_Search.html">Search</a>
   * API.</p> <p>For example, to filter on a training job's
   * <code>InputDataConfig</code> property with a specific channel name and
   * <code>S3Uri</code> prefix, define the following filters:</p> <ul> <li> <p>
   * <code>'{Name:"InputDataConfig.ChannelName", "Operator":"Equals",
   * "Value":"train"}',</code> </p> </li> <li> <p>
   * <code>'{Name:"InputDataConfig.DataSource.S3DataSource.S3Uri",
   * "Operator":"Contains", "Value":"mybucket/catdata"}'</code> </p> </li>
   * </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/NestedFilters">AWS
   * API Reference</a></p>
   */
  class NestedFilters
  {
  public:
    AWS_SAGEMAKER_API NestedFilters();
    AWS_SAGEMAKER_API NestedFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API NestedFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the property to use in the nested filters. The value must match a
     * listed property name, such as <code>InputDataConfig</code>.</p>
     */
    inline const Aws::String& GetNestedPropertyName() const{ return m_nestedPropertyName; }
    inline bool NestedPropertyNameHasBeenSet() const { return m_nestedPropertyNameHasBeenSet; }
    inline void SetNestedPropertyName(const Aws::String& value) { m_nestedPropertyNameHasBeenSet = true; m_nestedPropertyName = value; }
    inline void SetNestedPropertyName(Aws::String&& value) { m_nestedPropertyNameHasBeenSet = true; m_nestedPropertyName = std::move(value); }
    inline void SetNestedPropertyName(const char* value) { m_nestedPropertyNameHasBeenSet = true; m_nestedPropertyName.assign(value); }
    inline NestedFilters& WithNestedPropertyName(const Aws::String& value) { SetNestedPropertyName(value); return *this;}
    inline NestedFilters& WithNestedPropertyName(Aws::String&& value) { SetNestedPropertyName(std::move(value)); return *this;}
    inline NestedFilters& WithNestedPropertyName(const char* value) { SetNestedPropertyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of filters. Each filter acts on a property. Filters must contain at
     * least one <code>Filters</code> value. For example, a <code>NestedFilters</code>
     * call might include a filter on the <code>PropertyName</code> parameter of the
     * <code>InputDataConfig</code> property:
     * <code>InputDataConfig.DataSource.S3DataSource.S3Uri</code>.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline NestedFilters& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline NestedFilters& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline NestedFilters& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline NestedFilters& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_nestedPropertyName;
    bool m_nestedPropertyNameHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
