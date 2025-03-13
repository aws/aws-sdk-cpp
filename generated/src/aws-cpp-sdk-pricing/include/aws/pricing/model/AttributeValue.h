/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pricing/Pricing_EXPORTS.h>
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
namespace Pricing
{
namespace Model
{

  /**
   * <p>The values of a given attribute, such as <code>Throughput Optimized
   * HDD</code> or <code>Provisioned IOPS</code> for the <code>Amazon EC2</code>
   * <code>volumeType</code> attribute.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-2017-10-15/AttributeValue">AWS
   * API Reference</a></p>
   */
  class AttributeValue
  {
  public:
    AWS_PRICING_API AttributeValue() = default;
    AWS_PRICING_API AttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRICING_API AttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PRICING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The specific value of an <code>attributeName</code>.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    AttributeValue& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace Pricing
} // namespace Aws
