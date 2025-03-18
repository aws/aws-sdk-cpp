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
   * <p>The options for data bars.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataBarsOptions">AWS
   * API Reference</a></p>
   */
  class DataBarsOptions
  {
  public:
    AWS_QUICKSIGHT_API DataBarsOptions() = default;
    AWS_QUICKSIGHT_API DataBarsOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataBarsOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field ID for the data bars options.</p>
     */
    inline const Aws::String& GetFieldId() const { return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    template<typename FieldIdT = Aws::String>
    void SetFieldId(FieldIdT&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::forward<FieldIdT>(value); }
    template<typename FieldIdT = Aws::String>
    DataBarsOptions& WithFieldId(FieldIdT&& value) { SetFieldId(std::forward<FieldIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color of the positive data bar.</p>
     */
    inline const Aws::String& GetPositiveColor() const { return m_positiveColor; }
    inline bool PositiveColorHasBeenSet() const { return m_positiveColorHasBeenSet; }
    template<typename PositiveColorT = Aws::String>
    void SetPositiveColor(PositiveColorT&& value) { m_positiveColorHasBeenSet = true; m_positiveColor = std::forward<PositiveColorT>(value); }
    template<typename PositiveColorT = Aws::String>
    DataBarsOptions& WithPositiveColor(PositiveColorT&& value) { SetPositiveColor(std::forward<PositiveColorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The color of the negative data bar.</p>
     */
    inline const Aws::String& GetNegativeColor() const { return m_negativeColor; }
    inline bool NegativeColorHasBeenSet() const { return m_negativeColorHasBeenSet; }
    template<typename NegativeColorT = Aws::String>
    void SetNegativeColor(NegativeColorT&& value) { m_negativeColorHasBeenSet = true; m_negativeColor = std::forward<NegativeColorT>(value); }
    template<typename NegativeColorT = Aws::String>
    DataBarsOptions& WithNegativeColor(NegativeColorT&& value) { SetNegativeColor(std::forward<NegativeColorT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    Aws::String m_positiveColor;
    bool m_positiveColorHasBeenSet = false;

    Aws::String m_negativeColor;
    bool m_negativeColorHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
