/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>

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
   * <p> Provides statistics about a dataset. For more information, see
   * <a>DescribeDataset</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DatasetStats">AWS
   * API Reference</a></p>
   */
  class DatasetStats
  {
  public:
    AWS_REKOGNITION_API DatasetStats();
    AWS_REKOGNITION_API DatasetStats(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DatasetStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The total number of images in the dataset that have labels. </p>
     */
    inline int GetLabeledEntries() const{ return m_labeledEntries; }

    /**
     * <p> The total number of images in the dataset that have labels. </p>
     */
    inline bool LabeledEntriesHasBeenSet() const { return m_labeledEntriesHasBeenSet; }

    /**
     * <p> The total number of images in the dataset that have labels. </p>
     */
    inline void SetLabeledEntries(int value) { m_labeledEntriesHasBeenSet = true; m_labeledEntries = value; }

    /**
     * <p> The total number of images in the dataset that have labels. </p>
     */
    inline DatasetStats& WithLabeledEntries(int value) { SetLabeledEntries(value); return *this;}


    /**
     * <p> The total number of images in the dataset. </p>
     */
    inline int GetTotalEntries() const{ return m_totalEntries; }

    /**
     * <p> The total number of images in the dataset. </p>
     */
    inline bool TotalEntriesHasBeenSet() const { return m_totalEntriesHasBeenSet; }

    /**
     * <p> The total number of images in the dataset. </p>
     */
    inline void SetTotalEntries(int value) { m_totalEntriesHasBeenSet = true; m_totalEntries = value; }

    /**
     * <p> The total number of images in the dataset. </p>
     */
    inline DatasetStats& WithTotalEntries(int value) { SetTotalEntries(value); return *this;}


    /**
     * <p> The total number of labels declared in the dataset. </p>
     */
    inline int GetTotalLabels() const{ return m_totalLabels; }

    /**
     * <p> The total number of labels declared in the dataset. </p>
     */
    inline bool TotalLabelsHasBeenSet() const { return m_totalLabelsHasBeenSet; }

    /**
     * <p> The total number of labels declared in the dataset. </p>
     */
    inline void SetTotalLabels(int value) { m_totalLabelsHasBeenSet = true; m_totalLabels = value; }

    /**
     * <p> The total number of labels declared in the dataset. </p>
     */
    inline DatasetStats& WithTotalLabels(int value) { SetTotalLabels(value); return *this;}


    /**
     * <p> The total number of entries that contain at least one error. </p>
     */
    inline int GetErrorEntries() const{ return m_errorEntries; }

    /**
     * <p> The total number of entries that contain at least one error. </p>
     */
    inline bool ErrorEntriesHasBeenSet() const { return m_errorEntriesHasBeenSet; }

    /**
     * <p> The total number of entries that contain at least one error. </p>
     */
    inline void SetErrorEntries(int value) { m_errorEntriesHasBeenSet = true; m_errorEntries = value; }

    /**
     * <p> The total number of entries that contain at least one error. </p>
     */
    inline DatasetStats& WithErrorEntries(int value) { SetErrorEntries(value); return *this;}

  private:

    int m_labeledEntries;
    bool m_labeledEntriesHasBeenSet = false;

    int m_totalEntries;
    bool m_totalEntriesHasBeenSet = false;

    int m_totalLabels;
    bool m_totalLabelsHasBeenSet = false;

    int m_errorEntries;
    bool m_errorEntriesHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
