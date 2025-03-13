/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/LogicalOperator.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker-geospatial/model/PropertyFilter.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p>A list of PropertyFilter objects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/PropertyFilters">AWS
   * API Reference</a></p>
   */
  class PropertyFilters
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API PropertyFilters() = default;
    AWS_SAGEMAKERGEOSPATIAL_API PropertyFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API PropertyFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Logical Operator used to combine the Property Filters.</p>
     */
    inline LogicalOperator GetLogicalOperator() const { return m_logicalOperator; }
    inline bool LogicalOperatorHasBeenSet() const { return m_logicalOperatorHasBeenSet; }
    inline void SetLogicalOperator(LogicalOperator value) { m_logicalOperatorHasBeenSet = true; m_logicalOperator = value; }
    inline PropertyFilters& WithLogicalOperator(LogicalOperator value) { SetLogicalOperator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Property Filters.</p>
     */
    inline const Aws::Vector<PropertyFilter>& GetProperties() const { return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    template<typename PropertiesT = Aws::Vector<PropertyFilter>>
    void SetProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties = std::forward<PropertiesT>(value); }
    template<typename PropertiesT = Aws::Vector<PropertyFilter>>
    PropertyFilters& WithProperties(PropertiesT&& value) { SetProperties(std::forward<PropertiesT>(value)); return *this;}
    template<typename PropertiesT = PropertyFilter>
    PropertyFilters& AddProperties(PropertiesT&& value) { m_propertiesHasBeenSet = true; m_properties.emplace_back(std::forward<PropertiesT>(value)); return *this; }
    ///@}
  private:

    LogicalOperator m_logicalOperator{LogicalOperator::NOT_SET};
    bool m_logicalOperatorHasBeenSet = false;

    Aws::Vector<PropertyFilter> m_properties;
    bool m_propertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
