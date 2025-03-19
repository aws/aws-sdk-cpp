/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
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
   * <p>The contribution analysis visual display for a line, pie, or bar
   * chart.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ContributionAnalysisDefault">AWS
   * API Reference</a></p>
   */
  class ContributionAnalysisDefault
  {
  public:
    AWS_QUICKSIGHT_API ContributionAnalysisDefault() = default;
    AWS_QUICKSIGHT_API ContributionAnalysisDefault(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ContributionAnalysisDefault& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The measure field that is used in the contribution analysis.</p>
     */
    inline const Aws::String& GetMeasureFieldId() const { return m_measureFieldId; }
    inline bool MeasureFieldIdHasBeenSet() const { return m_measureFieldIdHasBeenSet; }
    template<typename MeasureFieldIdT = Aws::String>
    void SetMeasureFieldId(MeasureFieldIdT&& value) { m_measureFieldIdHasBeenSet = true; m_measureFieldId = std::forward<MeasureFieldIdT>(value); }
    template<typename MeasureFieldIdT = Aws::String>
    ContributionAnalysisDefault& WithMeasureFieldId(MeasureFieldIdT&& value) { SetMeasureFieldId(std::forward<MeasureFieldIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimensions columns that are used in the contribution analysis, usually a
     * list of <code>ColumnIdentifiers</code>.</p>
     */
    inline const Aws::Vector<ColumnIdentifier>& GetContributorDimensions() const { return m_contributorDimensions; }
    inline bool ContributorDimensionsHasBeenSet() const { return m_contributorDimensionsHasBeenSet; }
    template<typename ContributorDimensionsT = Aws::Vector<ColumnIdentifier>>
    void SetContributorDimensions(ContributorDimensionsT&& value) { m_contributorDimensionsHasBeenSet = true; m_contributorDimensions = std::forward<ContributorDimensionsT>(value); }
    template<typename ContributorDimensionsT = Aws::Vector<ColumnIdentifier>>
    ContributionAnalysisDefault& WithContributorDimensions(ContributorDimensionsT&& value) { SetContributorDimensions(std::forward<ContributorDimensionsT>(value)); return *this;}
    template<typename ContributorDimensionsT = ColumnIdentifier>
    ContributionAnalysisDefault& AddContributorDimensions(ContributorDimensionsT&& value) { m_contributorDimensionsHasBeenSet = true; m_contributorDimensions.emplace_back(std::forward<ContributorDimensionsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_measureFieldId;
    bool m_measureFieldIdHasBeenSet = false;

    Aws::Vector<ColumnIdentifier> m_contributorDimensions;
    bool m_contributorDimensionsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
