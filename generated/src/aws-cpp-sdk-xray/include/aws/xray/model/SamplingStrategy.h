/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/model/SamplingStrategyName.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>The name and value of a sampling rule to apply to a trace
   * summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/SamplingStrategy">AWS
   * API Reference</a></p>
   */
  class SamplingStrategy
  {
  public:
    AWS_XRAY_API SamplingStrategy() = default;
    AWS_XRAY_API SamplingStrategy(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API SamplingStrategy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of a sampling rule.</p>
     */
    inline SamplingStrategyName GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(SamplingStrategyName value) { m_nameHasBeenSet = true; m_name = value; }
    inline SamplingStrategy& WithName(SamplingStrategyName value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of a sampling rule.</p>
     */
    inline double GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }
    inline SamplingStrategy& WithValue(double value) { SetValue(value); return *this;}
    ///@}
  private:

    SamplingStrategyName m_name{SamplingStrategyName::NOT_SET};
    bool m_nameHasBeenSet = false;

    double m_value{0.0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
