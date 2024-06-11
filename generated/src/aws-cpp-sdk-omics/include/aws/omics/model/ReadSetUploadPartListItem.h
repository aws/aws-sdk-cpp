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
    AWS_OMICS_API ReadSetUploadPartListItem();
    AWS_OMICS_API ReadSetUploadPartListItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API ReadSetUploadPartListItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The number identifying the part in an upload. </p>
     */
    inline int GetPartNumber() const{ return m_partNumber; }
    inline bool PartNumberHasBeenSet() const { return m_partNumberHasBeenSet; }
    inline void SetPartNumber(int value) { m_partNumberHasBeenSet = true; m_partNumber = value; }
    inline ReadSetUploadPartListItem& WithPartNumber(int value) { SetPartNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The size of the the part in an upload. </p>
     */
    inline long long GetPartSize() const{ return m_partSize; }
    inline bool PartSizeHasBeenSet() const { return m_partSizeHasBeenSet; }
    inline void SetPartSize(long long value) { m_partSizeHasBeenSet = true; m_partSize = value; }
    inline ReadSetUploadPartListItem& WithPartSize(long long value) { SetPartSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The origin of the part being direct uploaded. </p>
     */
    inline const ReadSetPartSource& GetPartSource() const{ return m_partSource; }
    inline bool PartSourceHasBeenSet() const { return m_partSourceHasBeenSet; }
    inline void SetPartSource(const ReadSetPartSource& value) { m_partSourceHasBeenSet = true; m_partSource = value; }
    inline void SetPartSource(ReadSetPartSource&& value) { m_partSourceHasBeenSet = true; m_partSource = std::move(value); }
    inline ReadSetUploadPartListItem& WithPartSource(const ReadSetPartSource& value) { SetPartSource(value); return *this;}
    inline ReadSetUploadPartListItem& WithPartSource(ReadSetPartSource&& value) { SetPartSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique identifier used to confirm that parts are being added to the
     * correct upload. </p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }
    inline void SetChecksum(const Aws::String& value) { m_checksumHasBeenSet = true; m_checksum = value; }
    inline void SetChecksum(Aws::String&& value) { m_checksumHasBeenSet = true; m_checksum = std::move(value); }
    inline void SetChecksum(const char* value) { m_checksumHasBeenSet = true; m_checksum.assign(value); }
    inline ReadSetUploadPartListItem& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}
    inline ReadSetUploadPartListItem& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}
    inline ReadSetUploadPartListItem& WithChecksum(const char* value) { SetChecksum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time stamp for when a direct upload was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline ReadSetUploadPartListItem& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline ReadSetUploadPartListItem& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time stamp for the most recent update to an uploaded part. </p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline ReadSetUploadPartListItem& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline ReadSetUploadPartListItem& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}
  private:

    int m_partNumber;
    bool m_partNumberHasBeenSet = false;

    long long m_partSize;
    bool m_partSizeHasBeenSet = false;

    ReadSetPartSource m_partSource;
    bool m_partSourceHasBeenSet = false;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
