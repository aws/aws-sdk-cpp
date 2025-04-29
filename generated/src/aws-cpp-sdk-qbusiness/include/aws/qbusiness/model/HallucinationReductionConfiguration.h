/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/HallucinationReductionControl.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Configuration information required to setup hallucination reduction. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/hallucination-reduction.html">
   * hallucination reduction</a>.</p>  <p>The hallucination reduction feature
   * won't work if chat orchestration controls are enabled for your application.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/HallucinationReductionConfiguration">AWS
   * API Reference</a></p>
   */
  class HallucinationReductionConfiguration
  {
  public:
    AWS_QBUSINESS_API HallucinationReductionConfiguration() = default;
    AWS_QBUSINESS_API HallucinationReductionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API HallucinationReductionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Controls whether hallucination reduction has been enabled or disabled for
     * your application. The default status is <code>DISABLED</code>. </p>
     */
    inline HallucinationReductionControl GetHallucinationReductionControl() const { return m_hallucinationReductionControl; }
    inline bool HallucinationReductionControlHasBeenSet() const { return m_hallucinationReductionControlHasBeenSet; }
    inline void SetHallucinationReductionControl(HallucinationReductionControl value) { m_hallucinationReductionControlHasBeenSet = true; m_hallucinationReductionControl = value; }
    inline HallucinationReductionConfiguration& WithHallucinationReductionControl(HallucinationReductionControl value) { SetHallucinationReductionControl(value); return *this;}
    ///@}
  private:

    HallucinationReductionControl m_hallucinationReductionControl{HallucinationReductionControl::NOT_SET};
    bool m_hallucinationReductionControlHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
