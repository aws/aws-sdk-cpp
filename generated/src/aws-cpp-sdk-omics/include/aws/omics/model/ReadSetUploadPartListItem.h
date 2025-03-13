/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/ReadSetPartSource.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p> The metadata of a single part of a file that was added to a multipart
   * upload. A list of these parts is returned in the response to the
   * ListReadSetUploadParts API. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/ReadSetUploadPartListItem">AWS
   * API Reference</a></p>
   */
  class ReadSetUploadPartListItem
  {
  public:
    AWS_OMICS_API ReadSetUploadPartListItem() = default;
    AWS_OMICS_API ReadSetUploadPartListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ReadSetUploadPartListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The number identifying the part in an upload. </p>
     */
    inline int GetPartNumber() const { return m_partNumber; }
    inline bool PartNumberHasBeenSet() const { return m_partNumberHasBeenSet; }
    inline void SetPartNumber(int value) { m_partNumberHasBeenSet = true; m_partNumber = value; }
    inline ReadSetUploadPartListItem& WithPartNumber(int value) { SetPartNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The size of the the part in an upload. </p>
     */
    inline long long GetPartSize() const { return m_partSize; }
    inline bool PartSizeHasBeenSet() const { return m_partSizeHasBeenSet; }
    inline void SetPartSize(long long value) { m_partSizeHasBeenSet = true; m_partSize = value; }
    inline ReadSetUploadPartListItem& WithPartSize(long long value) { SetPartSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The origin of the part being direct uploaded. </p>
     */
    inline ReadSetPartSource GetPartSource() const { return m_partSource; }
    inline bool PartSourceHasBeenSet() const { return m_partSourceHasBeenSet; }
    inline void SetPartSource(ReadSetPartSource value) { m_partSourceHasBeenSet = true; m_partSource = value; }
    inline ReadSetUploadPartListItem& WithPartSource(ReadSetPartSource value) { SetPartSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier used to confirm that parts are being added to the
     * correct upload. </p>
     */
    inline const Aws::String& GetChecksum() const { return m_checksum; }
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }
    template<typename ChecksumT = Aws::String>
    void SetChecksum(ChecksumT&& value) { m_checksumHasBeenSet = true; m_checksum = std::forward<ChecksumT>(value); }
    template<typename ChecksumT = Aws::String>
    ReadSetUploadPartListItem& WithChecksum(ChecksumT&& value) { SetChecksum(std::forward<ChecksumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time stamp for when a direct upload was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ReadSetUploadPartListItem& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time stamp for the most recent update to an uploaded part. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    ReadSetUploadPartListItem& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}
  private:

    int m_partNumber{0};
    bool m_partNumberHasBeenSet = false;

    long long m_partSize{0};
    bool m_partSizeHasBeenSet = false;

    ReadSetPartSource m_partSource{ReadSetPartSource::NOT_SET};
    bool m_partSourceHasBeenSet = false;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
