/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/DatasetLabelStats.h>
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
   * <p> Describes a dataset label. For more information, see
   * <a>ListDatasetLabels</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DatasetLabelDescription">AWS
   * API Reference</a></p>
   */
  class DatasetLabelDescription
  {
  public:
    AWS_REKOGNITION_API DatasetLabelDescription() = default;
    AWS_REKOGNITION_API DatasetLabelDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DatasetLabelDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the label. </p>
     */
    inline const Aws::String& GetLabelName() const { return m_labelName; }
    inline bool LabelNameHasBeenSet() const { return m_labelNameHasBeenSet; }
    template<typename LabelNameT = Aws::String>
    void SetLabelName(LabelNameT&& value) { m_labelNameHasBeenSet = true; m_labelName = std::forward<LabelNameT>(value); }
    template<typename LabelNameT = Aws::String>
    DatasetLabelDescription& WithLabelName(LabelNameT&& value) { SetLabelName(std::forward<LabelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Statistics about the label. </p>
     */
    inline const DatasetLabelStats& GetLabelStats() const { return m_labelStats; }
    inline bool LabelStatsHasBeenSet() const { return m_labelStatsHasBeenSet; }
    template<typename LabelStatsT = DatasetLabelStats>
    void SetLabelStats(LabelStatsT&& value) { m_labelStatsHasBeenSet = true; m_labelStats = std::forward<LabelStatsT>(value); }
    template<typename LabelStatsT = DatasetLabelStats>
    DatasetLabelDescription& WithLabelStats(LabelStatsT&& value) { SetLabelStats(std::forward<LabelStatsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_labelName;
    bool m_labelNameHasBeenSet = false;

    DatasetLabelStats m_labelStats;
    bool m_labelStatsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
