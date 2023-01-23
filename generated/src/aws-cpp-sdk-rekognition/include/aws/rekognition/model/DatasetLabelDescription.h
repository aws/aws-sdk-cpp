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
    AWS_REKOGNITION_API DatasetLabelDescription();
    AWS_REKOGNITION_API DatasetLabelDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DatasetLabelDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The name of the label. </p>
     */
    inline const Aws::String& GetLabelName() const{ return m_labelName; }

    /**
     * <p> The name of the label. </p>
     */
    inline bool LabelNameHasBeenSet() const { return m_labelNameHasBeenSet; }

    /**
     * <p> The name of the label. </p>
     */
    inline void SetLabelName(const Aws::String& value) { m_labelNameHasBeenSet = true; m_labelName = value; }

    /**
     * <p> The name of the label. </p>
     */
    inline void SetLabelName(Aws::String&& value) { m_labelNameHasBeenSet = true; m_labelName = std::move(value); }

    /**
     * <p> The name of the label. </p>
     */
    inline void SetLabelName(const char* value) { m_labelNameHasBeenSet = true; m_labelName.assign(value); }

    /**
     * <p> The name of the label. </p>
     */
    inline DatasetLabelDescription& WithLabelName(const Aws::String& value) { SetLabelName(value); return *this;}

    /**
     * <p> The name of the label. </p>
     */
    inline DatasetLabelDescription& WithLabelName(Aws::String&& value) { SetLabelName(std::move(value)); return *this;}

    /**
     * <p> The name of the label. </p>
     */
    inline DatasetLabelDescription& WithLabelName(const char* value) { SetLabelName(value); return *this;}


    /**
     * <p> Statistics about the label. </p>
     */
    inline const DatasetLabelStats& GetLabelStats() const{ return m_labelStats; }

    /**
     * <p> Statistics about the label. </p>
     */
    inline bool LabelStatsHasBeenSet() const { return m_labelStatsHasBeenSet; }

    /**
     * <p> Statistics about the label. </p>
     */
    inline void SetLabelStats(const DatasetLabelStats& value) { m_labelStatsHasBeenSet = true; m_labelStats = value; }

    /**
     * <p> Statistics about the label. </p>
     */
    inline void SetLabelStats(DatasetLabelStats&& value) { m_labelStatsHasBeenSet = true; m_labelStats = std::move(value); }

    /**
     * <p> Statistics about the label. </p>
     */
    inline DatasetLabelDescription& WithLabelStats(const DatasetLabelStats& value) { SetLabelStats(value); return *this;}

    /**
     * <p> Statistics about the label. </p>
     */
    inline DatasetLabelDescription& WithLabelStats(DatasetLabelStats&& value) { SetLabelStats(std::move(value)); return *this;}

  private:

    Aws::String m_labelName;
    bool m_labelNameHasBeenSet = false;

    DatasetLabelStats m_labelStats;
    bool m_labelStatsHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
