/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Information about targets that resolved during the Automation
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/ResolvedTargets">AWS
   * API Reference</a></p>
   */
  class ResolvedTargets
  {
  public:
    AWS_SSM_API ResolvedTargets() = default;
    AWS_SSM_API ResolvedTargets(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ResolvedTargets& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of parameter values sent to targets that resolved during the
     * Automation execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParameterValues() const { return m_parameterValues; }
    inline bool ParameterValuesHasBeenSet() const { return m_parameterValuesHasBeenSet; }
    template<typename ParameterValuesT = Aws::Vector<Aws::String>>
    void SetParameterValues(ParameterValuesT&& value) { m_parameterValuesHasBeenSet = true; m_parameterValues = std::forward<ParameterValuesT>(value); }
    template<typename ParameterValuesT = Aws::Vector<Aws::String>>
    ResolvedTargets& WithParameterValues(ParameterValuesT&& value) { SetParameterValues(std::forward<ParameterValuesT>(value)); return *this;}
    template<typename ParameterValuesT = Aws::String>
    ResolvedTargets& AddParameterValues(ParameterValuesT&& value) { m_parameterValuesHasBeenSet = true; m_parameterValues.emplace_back(std::forward<ParameterValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A boolean value indicating whether the resolved target list is truncated.</p>
     */
    inline bool GetTruncated() const { return m_truncated; }
    inline bool TruncatedHasBeenSet() const { return m_truncatedHasBeenSet; }
    inline void SetTruncated(bool value) { m_truncatedHasBeenSet = true; m_truncated = value; }
    inline ResolvedTargets& WithTruncated(bool value) { SetTruncated(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_parameterValues;
    bool m_parameterValuesHasBeenSet = false;

    bool m_truncated{false};
    bool m_truncatedHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
