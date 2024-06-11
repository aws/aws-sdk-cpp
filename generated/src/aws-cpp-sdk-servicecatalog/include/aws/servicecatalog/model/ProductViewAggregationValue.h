/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>A single product view aggregation value/count pair, containing metadata about
   * each product to which the calling user has access.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProductViewAggregationValue">AWS
   * API Reference</a></p>
   */
  class ProductViewAggregationValue
  {
  public:
    AWS_SERVICECATALOG_API ProductViewAggregationValue();
    AWS_SERVICECATALOG_API ProductViewAggregationValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API ProductViewAggregationValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The value of the product view aggregation.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline ProductViewAggregationValue& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline ProductViewAggregationValue& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline ProductViewAggregationValue& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An approximate count of the products that match the value.</p>
     */
    inline int GetApproximateCount() const{ return m_approximateCount; }
    inline bool ApproximateCountHasBeenSet() const { return m_approximateCountHasBeenSet; }
    inline void SetApproximateCount(int value) { m_approximateCountHasBeenSet = true; m_approximateCount = value; }
    inline ProductViewAggregationValue& WithApproximateCount(int value) { SetApproximateCount(value); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    int m_approximateCount;
    bool m_approximateCountHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
