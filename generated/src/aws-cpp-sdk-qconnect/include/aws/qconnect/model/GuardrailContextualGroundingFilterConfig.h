/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/GuardrailContextualGroundingFilterType.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The filter configuration details for the AI Guardrail's contextual grounding
   * filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/GuardrailContextualGroundingFilterConfig">AWS
   * API Reference</a></p>
   */
  class GuardrailContextualGroundingFilterConfig
  {
  public:
    AWS_QCONNECT_API GuardrailContextualGroundingFilterConfig() = default;
    AWS_QCONNECT_API GuardrailContextualGroundingFilterConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API GuardrailContextualGroundingFilterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The filter type for the AI Guardrail's contextual grounding filter.</p>
     */
    inline GuardrailContextualGroundingFilterType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(GuardrailContextualGroundingFilterType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GuardrailContextualGroundingFilterConfig& WithType(GuardrailContextualGroundingFilterType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The threshold details for the AI Guardrail's contextual grounding filter.</p>
     */
    inline double GetThreshold() const { return m_threshold; }
    inline bool ThresholdHasBeenSet() const { return m_thresholdHasBeenSet; }
    inline void SetThreshold(double value) { m_thresholdHasBeenSet = true; m_threshold = value; }
    inline GuardrailContextualGroundingFilterConfig& WithThreshold(double value) { SetThreshold(value); return *this;}
    ///@}
  private:

    GuardrailContextualGroundingFilterType m_type{GuardrailContextualGroundingFilterType::NOT_SET};
    bool m_typeHasBeenSet = false;

    double m_threshold{0.0};
    bool m_thresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
