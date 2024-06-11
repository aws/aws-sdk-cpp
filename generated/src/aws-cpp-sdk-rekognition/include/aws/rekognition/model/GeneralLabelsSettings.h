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
    AWS_REKOGNITION_API GeneralLabelsSettings();
    AWS_REKOGNITION_API GeneralLabelsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API GeneralLabelsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The labels that should be included in the return from DetectLabels.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabelInclusionFilters() const{ return m_labelInclusionFilters; }
    inline bool LabelInclusionFiltersHasBeenSet() const { return m_labelInclusionFiltersHasBeenSet; }
    inline void SetLabelInclusionFilters(const Aws::Vector<Aws::String>& value) { m_labelInclusionFiltersHasBeenSet = true; m_labelInclusionFilters = value; }
    inline void SetLabelInclusionFilters(Aws::Vector<Aws::String>&& value) { m_labelInclusionFiltersHasBeenSet = true; m_labelInclusionFilters = std::move(value); }
    inline GeneralLabelsSettings& WithLabelInclusionFilters(const Aws::Vector<Aws::String>& value) { SetLabelInclusionFilters(value); return *this;}
    inline GeneralLabelsSettings& WithLabelInclusionFilters(Aws::Vector<Aws::String>&& value) { SetLabelInclusionFilters(std::move(value)); return *this;}
    inline GeneralLabelsSettings& AddLabelInclusionFilters(const Aws::String& value) { m_labelInclusionFiltersHasBeenSet = true; m_labelInclusionFilters.push_back(value); return *this; }
    inline GeneralLabelsSettings& AddLabelInclusionFilters(Aws::String&& value) { m_labelInclusionFiltersHasBeenSet = true; m_labelInclusionFilters.push_back(std::move(value)); return *this; }
    inline GeneralLabelsSettings& AddLabelInclusionFilters(const char* value) { m_labelInclusionFiltersHasBeenSet = true; m_labelInclusionFilters.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The labels that should be excluded from the return from DetectLabels.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabelExclusionFilters() const{ return m_labelExclusionFilters; }
    inline bool LabelExclusionFiltersHasBeenSet() const { return m_labelExclusionFiltersHasBeenSet; }
    inline void SetLabelExclusionFilters(const Aws::Vector<Aws::String>& value) { m_labelExclusionFiltersHasBeenSet = true; m_labelExclusionFilters = value; }
    inline void SetLabelExclusionFilters(Aws::Vector<Aws::String>&& value) { m_labelExclusionFiltersHasBeenSet = true; m_labelExclusionFilters = std::move(value); }
    inline GeneralLabelsSettings& WithLabelExclusionFilters(const Aws::Vector<Aws::String>& value) { SetLabelExclusionFilters(value); return *this;}
    inline GeneralLabelsSettings& WithLabelExclusionFilters(Aws::Vector<Aws::String>&& value) { SetLabelExclusionFilters(std::move(value)); return *this;}
    inline GeneralLabelsSettings& AddLabelExclusionFilters(const Aws::String& value) { m_labelExclusionFiltersHasBeenSet = true; m_labelExclusionFilters.push_back(value); return *this; }
    inline GeneralLabelsSettings& AddLabelExclusionFilters(Aws::String&& value) { m_labelExclusionFiltersHasBeenSet = true; m_labelExclusionFilters.push_back(std::move(value)); return *this; }
    inline GeneralLabelsSettings& AddLabelExclusionFilters(const char* value) { m_labelExclusionFiltersHasBeenSet = true; m_labelExclusionFilters.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The label categories that should be included in the return from
     * DetectLabels.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabelCategoryInclusionFilters() const{ return m_labelCategoryInclusionFilters; }
    inline bool LabelCategoryInclusionFiltersHasBeenSet() const { return m_labelCategoryInclusionFiltersHasBeenSet; }
    inline void SetLabelCategoryInclusionFilters(const Aws::Vector<Aws::String>& value) { m_labelCategoryInclusionFiltersHasBeenSet = true; m_labelCategoryInclusionFilters = value; }
    inline void SetLabelCategoryInclusionFilters(Aws::Vector<Aws::String>&& value) { m_labelCategoryInclusionFiltersHasBeenSet = true; m_labelCategoryInclusionFilters = std::move(value); }
    inline GeneralLabelsSettings& WithLabelCategoryInclusionFilters(const Aws::Vector<Aws::String>& value) { SetLabelCategoryInclusionFilters(value); return *this;}
    inline GeneralLabelsSettings& WithLabelCategoryInclusionFilters(Aws::Vector<Aws::String>&& value) { SetLabelCategoryInclusionFilters(std::move(value)); return *this;}
    inline GeneralLabelsSettings& AddLabelCategoryInclusionFilters(const Aws::String& value) { m_labelCategoryInclusionFiltersHasBeenSet = true; m_labelCategoryInclusionFilters.push_back(value); return *this; }
    inline GeneralLabelsSettings& AddLabelCategoryInclusionFilters(Aws::String&& value) { m_labelCategoryInclusionFiltersHasBeenSet = true; m_labelCategoryInclusionFilters.push_back(std::move(value)); return *this; }
    inline GeneralLabelsSettings& AddLabelCategoryInclusionFilters(const char* value) { m_labelCategoryInclusionFiltersHasBeenSet = true; m_labelCategoryInclusionFilters.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The label categories that should be excluded from the return from
     * DetectLabels.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLabelCategoryExclusionFilters() const{ return m_labelCategoryExclusionFilters; }
    inline bool LabelCategoryExclusionFiltersHasBeenSet() const { return m_labelCategoryExclusionFiltersHasBeenSet; }
    inline void SetLabelCategoryExclusionFilters(const Aws::Vector<Aws::String>& value) { m_labelCategoryExclusionFiltersHasBeenSet = true; m_labelCategoryExclusionFilters = value; }
    inline void SetLabelCategoryExclusionFilters(Aws::Vector<Aws::String>&& value) { m_labelCategoryExclusionFiltersHasBeenSet = true; m_labelCategoryExclusionFilters = std::move(value); }
    inline GeneralLabelsSettings& WithLabelCategoryExclusionFilters(const Aws::Vector<Aws::String>& value) { SetLabelCategoryExclusionFilters(value); return *this;}
    inline GeneralLabelsSettings& WithLabelCategoryExclusionFilters(Aws::Vector<Aws::String>&& value) { SetLabelCategoryExclusionFilters(std::move(value)); return *this;}
    inline GeneralLabelsSettings& AddLabelCategoryExclusionFilters(const Aws::String& value) { m_labelCategoryExclusionFiltersHasBeenSet = true; m_labelCategoryExclusionFilters.push_back(value); return *this; }
    inline GeneralLabelsSettings& AddLabelCategoryExclusionFilters(Aws::String&& value) { m_labelCategoryExclusionFiltersHasBeenSet = true; m_labelCategoryExclusionFilters.push_back(std::move(value)); return *this; }
    inline GeneralLabelsSettings& AddLabelCategoryExclusionFilters(const char* value) { m_labelCategoryExclusionFiltersHasBeenSet = true; m_labelCategoryExclusionFilters.push_back(value); return *this; }
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
