/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DestinationParameterValueConfiguration.h>
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
   * <p>The configuration of adding parameters in action.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SetParameterValueConfiguration">AWS
   * API Reference</a></p>
   */
  class SetParameterValueConfiguration
  {
  public:
    AWS_QUICKSIGHT_API SetParameterValueConfiguration() = default;
    AWS_QUICKSIGHT_API SetParameterValueConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SetParameterValueConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The destination parameter name of the
     * <code>SetParameterValueConfiguration</code>.</p>
     */
    inline const Aws::String& GetDestinationParameterName() const { return m_destinationParameterName; }
    inline bool DestinationParameterNameHasBeenSet() const { return m_destinationParameterNameHasBeenSet; }
    template<typename DestinationParameterNameT = Aws::String>
    void SetDestinationParameterName(DestinationParameterNameT&& value) { m_destinationParameterNameHasBeenSet = true; m_destinationParameterName = std::forward<DestinationParameterNameT>(value); }
    template<typename DestinationParameterNameT = Aws::String>
    SetParameterValueConfiguration& WithDestinationParameterName(DestinationParameterNameT&& value) { SetDestinationParameterName(std::forward<DestinationParameterNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DestinationParameterValueConfiguration& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = DestinationParameterValueConfiguration>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = DestinationParameterValueConfiguration>
    SetParameterValueConfiguration& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_destinationParameterName;
    bool m_destinationParameterNameHasBeenSet = false;

    DestinationParameterValueConfiguration m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
