/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The configuration for a custom label on a
   * <code>ReferenceLine</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ReferenceLineCustomLabelConfiguration">AWS
   * API Reference</a></p>
   */
  class ReferenceLineCustomLabelConfiguration
  {
  public:
    AWS_QUICKSIGHT_API ReferenceLineCustomLabelConfiguration() = default;
    AWS_QUICKSIGHT_API ReferenceLineCustomLabelConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ReferenceLineCustomLabelConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The string text of the custom label.</p>
     */
    inline const Aws::String& GetCustomLabel() const { return m_customLabel; }
    inline bool CustomLabelHasBeenSet() const { return m_customLabelHasBeenSet; }
    template<typename CustomLabelT = Aws::String>
    void SetCustomLabel(CustomLabelT&& value) { m_customLabelHasBeenSet = true; m_customLabel = std::forward<CustomLabelT>(value); }
    template<typename CustomLabelT = Aws::String>
    ReferenceLineCustomLabelConfiguration& WithCustomLabel(CustomLabelT&& value) { SetCustomLabel(std::forward<CustomLabelT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customLabel;
    bool m_customLabelHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
