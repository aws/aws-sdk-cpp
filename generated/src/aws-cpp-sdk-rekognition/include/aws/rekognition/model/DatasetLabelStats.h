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
   * <p> Statistics about a label used in a dataset. For more information, see
   * <a>DatasetLabelDescription</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DatasetLabelStats">AWS
   * API Reference</a></p>
   */
  class DatasetLabelStats
  {
  public:
    AWS_REKOGNITION_API DatasetLabelStats();
    AWS_REKOGNITION_API DatasetLabelStats(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DatasetLabelStats& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The total number of images that use the label. </p>
     */
    inline int GetEntryCount() const{ return m_entryCount; }

    /**
     * <p> The total number of images that use the label. </p>
     */
    inline bool EntryCountHasBeenSet() const { return m_entryCountHasBeenSet; }

    /**
     * <p> The total number of images that use the label. </p>
     */
    inline void SetEntryCount(int value) { m_entryCountHasBeenSet = true; m_entryCount = value; }

    /**
     * <p> The total number of images that use the label. </p>
     */
    inline DatasetLabelStats& WithEntryCount(int value) { SetEntryCount(value); return *this;}


    /**
     * <p> The total number of images that have the label assigned to a bounding box.
     * </p>
     */
    inline int GetBoundingBoxCount() const{ return m_boundingBoxCount; }

    /**
     * <p> The total number of images that have the label assigned to a bounding box.
     * </p>
     */
    inline bool BoundingBoxCountHasBeenSet() const { return m_boundingBoxCountHasBeenSet; }

    /**
     * <p> The total number of images that have the label assigned to a bounding box.
     * </p>
     */
    inline void SetBoundingBoxCount(int value) { m_boundingBoxCountHasBeenSet = true; m_boundingBoxCount = value; }

    /**
     * <p> The total number of images that have the label assigned to a bounding box.
     * </p>
     */
    inline DatasetLabelStats& WithBoundingBoxCount(int value) { SetBoundingBoxCount(value); return *this;}

  private:

    int m_entryCount;
    bool m_entryCountHasBeenSet = false;

    int m_boundingBoxCount;
    bool m_boundingBoxCountHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
