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
    AWS_SSM_API ResolvedTargets();
    AWS_SSM_API ResolvedTargets(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API ResolvedTargets& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of parameter values sent to targets that resolved during the
     * Automation execution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParameterValues() const{ return m_parameterValues; }

    /**
     * <p>A list of parameter values sent to targets that resolved during the
     * Automation execution.</p>
     */
    inline bool ParameterValuesHasBeenSet() const { return m_parameterValuesHasBeenSet; }

    /**
     * <p>A list of parameter values sent to targets that resolved during the
     * Automation execution.</p>
     */
    inline void SetParameterValues(const Aws::Vector<Aws::String>& value) { m_parameterValuesHasBeenSet = true; m_parameterValues = value; }

    /**
     * <p>A list of parameter values sent to targets that resolved during the
     * Automation execution.</p>
     */
    inline void SetParameterValues(Aws::Vector<Aws::String>&& value) { m_parameterValuesHasBeenSet = true; m_parameterValues = std::move(value); }

    /**
     * <p>A list of parameter values sent to targets that resolved during the
     * Automation execution.</p>
     */
    inline ResolvedTargets& WithParameterValues(const Aws::Vector<Aws::String>& value) { SetParameterValues(value); return *this;}

    /**
     * <p>A list of parameter values sent to targets that resolved during the
     * Automation execution.</p>
     */
    inline ResolvedTargets& WithParameterValues(Aws::Vector<Aws::String>&& value) { SetParameterValues(std::move(value)); return *this;}

    /**
     * <p>A list of parameter values sent to targets that resolved during the
     * Automation execution.</p>
     */
    inline ResolvedTargets& AddParameterValues(const Aws::String& value) { m_parameterValuesHasBeenSet = true; m_parameterValues.push_back(value); return *this; }

    /**
     * <p>A list of parameter values sent to targets that resolved during the
     * Automation execution.</p>
     */
    inline ResolvedTargets& AddParameterValues(Aws::String&& value) { m_parameterValuesHasBeenSet = true; m_parameterValues.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of parameter values sent to targets that resolved during the
     * Automation execution.</p>
     */
    inline ResolvedTargets& AddParameterValues(const char* value) { m_parameterValuesHasBeenSet = true; m_parameterValues.push_back(value); return *this; }


    /**
     * <p>A boolean value indicating whether the resolved target list is truncated.</p>
     */
    inline bool GetTruncated() const{ return m_truncated; }

    /**
     * <p>A boolean value indicating whether the resolved target list is truncated.</p>
     */
    inline bool TruncatedHasBeenSet() const { return m_truncatedHasBeenSet; }

    /**
     * <p>A boolean value indicating whether the resolved target list is truncated.</p>
     */
    inline void SetTruncated(bool value) { m_truncatedHasBeenSet = true; m_truncated = value; }

    /**
     * <p>A boolean value indicating whether the resolved target list is truncated.</p>
     */
    inline ResolvedTargets& WithTruncated(bool value) { SetTruncated(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_parameterValues;
    bool m_parameterValuesHasBeenSet = false;

    bool m_truncated;
    bool m_truncatedHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
