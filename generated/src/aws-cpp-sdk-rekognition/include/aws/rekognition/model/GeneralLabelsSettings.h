/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Contains filters for the object labels returned by DetectLabels. Filters can
   * be inclusive, exclusive, or a combination of both and can be applied to
   * individual labels or entire label categories. To see a list of label categories,
   * see <a
   * href="https://docs.aws.amazon.com/rekognition/latest/dg/labels.html">Detecting
   * Labels</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/GeneralLabelsSettings">AWS
   * API Reference</a></p>
   */
  class GeneralLabelsSettings
  {
  public:
    AWS_REKOGNITION_API GeneralLabelsSettings() = default;
    AWS_REKOGNITION_API GeneralLabelsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API GeneralLabelsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The labels that should be included in the return from DetectLabels.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabelInclusionFilters() const { return m_labelInclusionFilters; }
    inline bool LabelInclusionFiltersHasBeenSet() const { return m_labelInclusionFiltersHasBeenSet; }
    template<typename LabelInclusionFiltersT = Aws::Vector<Aws::String>>
    void SetLabelInclusionFilters(LabelInclusionFiltersT&& value) { m_labelInclusionFiltersHasBeenSet = true; m_labelInclusionFilters = std::forward<LabelInclusionFiltersT>(value); }
    template<typename LabelInclusionFiltersT = Aws::Vector<Aws::String>>
    GeneralLabelsSettings& WithLabelInclusionFilters(LabelInclusionFiltersT&& value) { SetLabelInclusionFilters(std::forward<LabelInclusionFiltersT>(value)); return *this;}
    template<typename LabelInclusionFiltersT = Aws::String>
    GeneralLabelsSettings& AddLabelInclusionFilters(LabelInclusionFiltersT&& value) { m_labelInclusionFiltersHasBeenSet = true; m_labelInclusionFilters.emplace_back(std::forward<LabelInclusionFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The labels that should be excluded from the return from DetectLabels.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabelExclusionFilters() const { return m_labelExclusionFilters; }
    inline bool LabelExclusionFiltersHasBeenSet() const { return m_labelExclusionFiltersHasBeenSet; }
    template<typename LabelExclusionFiltersT = Aws::Vector<Aws::String>>
    void SetLabelExclusionFilters(LabelExclusionFiltersT&& value) { m_labelExclusionFiltersHasBeenSet = true; m_labelExclusionFilters = std::forward<LabelExclusionFiltersT>(value); }
    template<typename LabelExclusionFiltersT = Aws::Vector<Aws::String>>
    GeneralLabelsSettings& WithLabelExclusionFilters(LabelExclusionFiltersT&& value) { SetLabelExclusionFilters(std::forward<LabelExclusionFiltersT>(value)); return *this;}
    template<typename LabelExclusionFiltersT = Aws::String>
    GeneralLabelsSettings& AddLabelExclusionFilters(LabelExclusionFiltersT&& value) { m_labelExclusionFiltersHasBeenSet = true; m_labelExclusionFilters.emplace_back(std::forward<LabelExclusionFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The label categories that should be included in the return from
     * DetectLabels.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabelCategoryInclusionFilters() const { return m_labelCategoryInclusionFilters; }
    inline bool LabelCategoryInclusionFiltersHasBeenSet() const { return m_labelCategoryInclusionFiltersHasBeenSet; }
    template<typename LabelCategoryInclusionFiltersT = Aws::Vector<Aws::String>>
    void SetLabelCategoryInclusionFilters(LabelCategoryInclusionFiltersT&& value) { m_labelCategoryInclusionFiltersHasBeenSet = true; m_labelCategoryInclusionFilters = std::forward<LabelCategoryInclusionFiltersT>(value); }
    template<typename LabelCategoryInclusionFiltersT = Aws::Vector<Aws::String>>
    GeneralLabelsSettings& WithLabelCategoryInclusionFilters(LabelCategoryInclusionFiltersT&& value) { SetLabelCategoryInclusionFilters(std::forward<LabelCategoryInclusionFiltersT>(value)); return *this;}
    template<typename LabelCategoryInclusionFiltersT = Aws::String>
    GeneralLabelsSettings& AddLabelCategoryInclusionFilters(LabelCategoryInclusionFiltersT&& value) { m_labelCategoryInclusionFiltersHasBeenSet = true; m_labelCategoryInclusionFilters.emplace_back(std::forward<LabelCategoryInclusionFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The label categories that should be excluded from the return from
     * DetectLabels.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabelCategoryExclusionFilters() const { return m_labelCategoryExclusionFilters; }
    inline bool LabelCategoryExclusionFiltersHasBeenSet() const { return m_labelCategoryExclusionFiltersHasBeenSet; }
    template<typename LabelCategoryExclusionFiltersT = Aws::Vector<Aws::String>>
    void SetLabelCategoryExclusionFilters(LabelCategoryExclusionFiltersT&& value) { m_labelCategoryExclusionFiltersHasBeenSet = true; m_labelCategoryExclusionFilters = std::forward<LabelCategoryExclusionFiltersT>(value); }
    template<typename LabelCategoryExclusionFiltersT = Aws::Vector<Aws::String>>
    GeneralLabelsSettings& WithLabelCategoryExclusionFilters(LabelCategoryExclusionFiltersT&& value) { SetLabelCategoryExclusionFilters(std::forward<LabelCategoryExclusionFiltersT>(value)); return *this;}
    template<typename LabelCategoryExclusionFiltersT = Aws::String>
    GeneralLabelsSettings& AddLabelCategoryExclusionFilters(LabelCategoryExclusionFiltersT&& value) { m_labelCategoryExclusionFiltersHasBeenSet = true; m_labelCategoryExclusionFilters.emplace_back(std::forward<LabelCategoryExclusionFiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_labelInclusionFilters;
    bool m_labelInclusionFiltersHasBeenSet = false;

    Aws::Vector<Aws::String> m_labelExclusionFilters;
    bool m_labelExclusionFiltersHasBeenSet = false;

    Aws::Vector<Aws::String> m_labelCategoryInclusionFilters;
    bool m_labelCategoryInclusionFiltersHasBeenSet = false;

    Aws::Vector<Aws::String> m_labelCategoryExclusionFilters;
    bool m_labelCategoryExclusionFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
