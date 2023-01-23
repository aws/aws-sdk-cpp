/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/SetParameterValueConfiguration.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The set parameter operation that sets parameters in custom
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CustomActionSetParametersOperation">AWS
   * API Reference</a></p>
   */
  class CustomActionSetParametersOperation
  {
  public:
    AWS_QUICKSIGHT_API CustomActionSetParametersOperation();
    AWS_QUICKSIGHT_API CustomActionSetParametersOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CustomActionSetParametersOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The parameter that determines the value configuration.</p>
     */
    inline const Aws::Vector<SetParameterValueConfiguration>& GetParameterValueConfigurations() const{ return m_parameterValueConfigurations; }

    /**
     * <p>The parameter that determines the value configuration.</p>
     */
    inline bool ParameterValueConfigurationsHasBeenSet() const { return m_parameterValueConfigurationsHasBeenSet; }

    /**
     * <p>The parameter that determines the value configuration.</p>
     */
    inline void SetParameterValueConfigurations(const Aws::Vector<SetParameterValueConfiguration>& value) { m_parameterValueConfigurationsHasBeenSet = true; m_parameterValueConfigurations = value; }

    /**
     * <p>The parameter that determines the value configuration.</p>
     */
    inline void SetParameterValueConfigurations(Aws::Vector<SetParameterValueConfiguration>&& value) { m_parameterValueConfigurationsHasBeenSet = true; m_parameterValueConfigurations = std::move(value); }

    /**
     * <p>The parameter that determines the value configuration.</p>
     */
    inline CustomActionSetParametersOperation& WithParameterValueConfigurations(const Aws::Vector<SetParameterValueConfiguration>& value) { SetParameterValueConfigurations(value); return *this;}

    /**
     * <p>The parameter that determines the value configuration.</p>
     */
    inline CustomActionSetParametersOperation& WithParameterValueConfigurations(Aws::Vector<SetParameterValueConfiguration>&& value) { SetParameterValueConfigurations(std::move(value)); return *this;}

    /**
     * <p>The parameter that determines the value configuration.</p>
     */
    inline CustomActionSetParametersOperation& AddParameterValueConfigurations(const SetParameterValueConfiguration& value) { m_parameterValueConfigurationsHasBeenSet = true; m_parameterValueConfigurations.push_back(value); return *this; }

    /**
     * <p>The parameter that determines the value configuration.</p>
     */
    inline CustomActionSetParametersOperation& AddParameterValueConfigurations(SetParameterValueConfiguration&& value) { m_parameterValueConfigurationsHasBeenSet = true; m_parameterValueConfigurations.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<SetParameterValueConfiguration> m_parameterValueConfigurations;
    bool m_parameterValueConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
