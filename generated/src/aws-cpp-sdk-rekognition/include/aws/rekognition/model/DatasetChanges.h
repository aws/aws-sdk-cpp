/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/Array.h>
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
   * <p> Describes updates or additions to a dataset. A Single update or addition is
   * an entry (JSON Line) that provides information about a single image. To update
   * an existing entry, you match the <code>source-ref</code> field of the update
   * entry with the <code>source-ref</code> filed of the entry that you want to
   * update. If the <code>source-ref</code> field doesn't match an existing entry,
   * the entry is added to dataset as a new entry. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/DatasetChanges">AWS
   * API Reference</a></p>
   */
  class DatasetChanges
  {
  public:
    AWS_REKOGNITION_API DatasetChanges();
    AWS_REKOGNITION_API DatasetChanges(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API DatasetChanges& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A Base64-encoded binary data object containing one or JSON lines that either
     * update the dataset or are additions to the dataset. You change a dataset by
     * calling <a>UpdateDatasetEntries</a>. If you are using an AWS SDK to call
     * <code>UpdateDatasetEntries</code>, you don't need to encode <code>Changes</code>
     * as the SDK encodes the data for you. </p> <p>For example JSON lines, see
     * Image-Level labels in manifest files and and Object localization in manifest
     * files in the <i>Amazon Rekognition Custom Labels Developer Guide</i>. </p>
     */
    inline const Aws::Utils::ByteBuffer& GetGroundTruth() const{ return m_groundTruth; }

    /**
     * <p>A Base64-encoded binary data object containing one or JSON lines that either
     * update the dataset or are additions to the dataset. You change a dataset by
     * calling <a>UpdateDatasetEntries</a>. If you are using an AWS SDK to call
     * <code>UpdateDatasetEntries</code>, you don't need to encode <code>Changes</code>
     * as the SDK encodes the data for you. </p> <p>For example JSON lines, see
     * Image-Level labels in manifest files and and Object localization in manifest
     * files in the <i>Amazon Rekognition Custom Labels Developer Guide</i>. </p>
     */
    inline bool GroundTruthHasBeenSet() const { return m_groundTruthHasBeenSet; }

    /**
     * <p>A Base64-encoded binary data object containing one or JSON lines that either
     * update the dataset or are additions to the dataset. You change a dataset by
     * calling <a>UpdateDatasetEntries</a>. If you are using an AWS SDK to call
     * <code>UpdateDatasetEntries</code>, you don't need to encode <code>Changes</code>
     * as the SDK encodes the data for you. </p> <p>For example JSON lines, see
     * Image-Level labels in manifest files and and Object localization in manifest
     * files in the <i>Amazon Rekognition Custom Labels Developer Guide</i>. </p>
     */
    inline void SetGroundTruth(const Aws::Utils::ByteBuffer& value) { m_groundTruthHasBeenSet = true; m_groundTruth = value; }

    /**
     * <p>A Base64-encoded binary data object containing one or JSON lines that either
     * update the dataset or are additions to the dataset. You change a dataset by
     * calling <a>UpdateDatasetEntries</a>. If you are using an AWS SDK to call
     * <code>UpdateDatasetEntries</code>, you don't need to encode <code>Changes</code>
     * as the SDK encodes the data for you. </p> <p>For example JSON lines, see
     * Image-Level labels in manifest files and and Object localization in manifest
     * files in the <i>Amazon Rekognition Custom Labels Developer Guide</i>. </p>
     */
    inline void SetGroundTruth(Aws::Utils::ByteBuffer&& value) { m_groundTruthHasBeenSet = true; m_groundTruth = std::move(value); }

    /**
     * <p>A Base64-encoded binary data object containing one or JSON lines that either
     * update the dataset or are additions to the dataset. You change a dataset by
     * calling <a>UpdateDatasetEntries</a>. If you are using an AWS SDK to call
     * <code>UpdateDatasetEntries</code>, you don't need to encode <code>Changes</code>
     * as the SDK encodes the data for you. </p> <p>For example JSON lines, see
     * Image-Level labels in manifest files and and Object localization in manifest
     * files in the <i>Amazon Rekognition Custom Labels Developer Guide</i>. </p>
     */
    inline DatasetChanges& WithGroundTruth(const Aws::Utils::ByteBuffer& value) { SetGroundTruth(value); return *this;}

    /**
     * <p>A Base64-encoded binary data object containing one or JSON lines that either
     * update the dataset or are additions to the dataset. You change a dataset by
     * calling <a>UpdateDatasetEntries</a>. If you are using an AWS SDK to call
     * <code>UpdateDatasetEntries</code>, you don't need to encode <code>Changes</code>
     * as the SDK encodes the data for you. </p> <p>For example JSON lines, see
     * Image-Level labels in manifest files and and Object localization in manifest
     * files in the <i>Amazon Rekognition Custom Labels Developer Guide</i>. </p>
     */
    inline DatasetChanges& WithGroundTruth(Aws::Utils::ByteBuffer&& value) { SetGroundTruth(std::move(value)); return *this;}

  private:

    Aws::Utils::ByteBuffer m_groundTruth;
    bool m_groundTruthHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
