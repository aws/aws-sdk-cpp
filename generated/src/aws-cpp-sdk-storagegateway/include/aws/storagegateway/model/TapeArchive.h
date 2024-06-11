/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Represents a virtual tape that is archived in the virtual tape shelf
   * (VTS).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/TapeArchive">AWS
   * API Reference</a></p>
   */
  class TapeArchive
  {
  public:
    AWS_STORAGEGATEWAY_API TapeArchive();
    AWS_STORAGEGATEWAY_API TapeArchive(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API TapeArchive& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an archived virtual tape.</p>
     */
    inline const Aws::String& GetTapeARN() const{ return m_tapeARN; }
    inline bool TapeARNHasBeenSet() const { return m_tapeARNHasBeenSet; }
    inline void SetTapeARN(const Aws::String& value) { m_tapeARNHasBeenSet = true; m_tapeARN = value; }
    inline void SetTapeARN(Aws::String&& value) { m_tapeARNHasBeenSet = true; m_tapeARN = std::move(value); }
    inline void SetTapeARN(const char* value) { m_tapeARNHasBeenSet = true; m_tapeARN.assign(value); }
    inline TapeArchive& WithTapeARN(const Aws::String& value) { SetTapeARN(value); return *this;}
    inline TapeArchive& WithTapeARN(Aws::String&& value) { SetTapeARN(std::move(value)); return *this;}
    inline TapeArchive& WithTapeARN(const char* value) { SetTapeARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The barcode that identifies the archived virtual tape.</p>
     */
    inline const Aws::String& GetTapeBarcode() const{ return m_tapeBarcode; }
    inline bool TapeBarcodeHasBeenSet() const { return m_tapeBarcodeHasBeenSet; }
    inline void SetTapeBarcode(const Aws::String& value) { m_tapeBarcodeHasBeenSet = true; m_tapeBarcode = value; }
    inline void SetTapeBarcode(Aws::String&& value) { m_tapeBarcodeHasBeenSet = true; m_tapeBarcode = std::move(value); }
    inline void SetTapeBarcode(const char* value) { m_tapeBarcodeHasBeenSet = true; m_tapeBarcode.assign(value); }
    inline TapeArchive& WithTapeBarcode(const Aws::String& value) { SetTapeBarcode(value); return *this;}
    inline TapeArchive& WithTapeBarcode(Aws::String&& value) { SetTapeBarcode(std::move(value)); return *this;}
    inline TapeArchive& WithTapeBarcode(const char* value) { SetTapeBarcode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the virtual tape was created.</p>
     */
    inline const Aws::Utils::DateTime& GetTapeCreatedDate() const{ return m_tapeCreatedDate; }
    inline bool TapeCreatedDateHasBeenSet() const { return m_tapeCreatedDateHasBeenSet; }
    inline void SetTapeCreatedDate(const Aws::Utils::DateTime& value) { m_tapeCreatedDateHasBeenSet = true; m_tapeCreatedDate = value; }
    inline void SetTapeCreatedDate(Aws::Utils::DateTime&& value) { m_tapeCreatedDateHasBeenSet = true; m_tapeCreatedDate = std::move(value); }
    inline TapeArchive& WithTapeCreatedDate(const Aws::Utils::DateTime& value) { SetTapeCreatedDate(value); return *this;}
    inline TapeArchive& WithTapeCreatedDate(Aws::Utils::DateTime&& value) { SetTapeCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of the archived virtual tape.</p>
     */
    inline long long GetTapeSizeInBytes() const{ return m_tapeSizeInBytes; }
    inline bool TapeSizeInBytesHasBeenSet() const { return m_tapeSizeInBytesHasBeenSet; }
    inline void SetTapeSizeInBytes(long long value) { m_tapeSizeInBytesHasBeenSet = true; m_tapeSizeInBytes = value; }
    inline TapeArchive& WithTapeSizeInBytes(long long value) { SetTapeSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the archiving of the virtual tape was completed.</p> <p>The
     * default timestamp format is in the ISO8601 extended YYYY-MM-DD'T'HH:MM:SS'Z'
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }
    inline TapeArchive& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}
    inline TapeArchive& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the tape gateway that the virtual tape is
     * being retrieved to.</p> <p>The virtual tape is retrieved from the virtual tape
     * shelf (VTS).</p>
     */
    inline const Aws::String& GetRetrievedTo() const{ return m_retrievedTo; }
    inline bool RetrievedToHasBeenSet() const { return m_retrievedToHasBeenSet; }
    inline void SetRetrievedTo(const Aws::String& value) { m_retrievedToHasBeenSet = true; m_retrievedTo = value; }
    inline void SetRetrievedTo(Aws::String&& value) { m_retrievedToHasBeenSet = true; m_retrievedTo = std::move(value); }
    inline void SetRetrievedTo(const char* value) { m_retrievedToHasBeenSet = true; m_retrievedTo.assign(value); }
    inline TapeArchive& WithRetrievedTo(const Aws::String& value) { SetRetrievedTo(value); return *this;}
    inline TapeArchive& WithRetrievedTo(Aws::String&& value) { SetRetrievedTo(std::move(value)); return *this;}
    inline TapeArchive& WithRetrievedTo(const char* value) { SetRetrievedTo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the archived virtual tape.</p>
     */
    inline const Aws::String& GetTapeStatus() const{ return m_tapeStatus; }
    inline bool TapeStatusHasBeenSet() const { return m_tapeStatusHasBeenSet; }
    inline void SetTapeStatus(const Aws::String& value) { m_tapeStatusHasBeenSet = true; m_tapeStatus = value; }
    inline void SetTapeStatus(Aws::String&& value) { m_tapeStatusHasBeenSet = true; m_tapeStatus = std::move(value); }
    inline void SetTapeStatus(const char* value) { m_tapeStatusHasBeenSet = true; m_tapeStatus.assign(value); }
    inline TapeArchive& WithTapeStatus(const Aws::String& value) { SetTapeStatus(value); return *this;}
    inline TapeArchive& WithTapeStatus(Aws::String&& value) { SetTapeStatus(std::move(value)); return *this;}
    inline TapeArchive& WithTapeStatus(const char* value) { SetTapeStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of data stored on the virtual tape.</p>  <p>This
     * value is not available for tapes created prior to May 13, 2015.</p> 
     */
    inline long long GetTapeUsedInBytes() const{ return m_tapeUsedInBytes; }
    inline bool TapeUsedInBytesHasBeenSet() const { return m_tapeUsedInBytesHasBeenSet; }
    inline void SetTapeUsedInBytes(long long value) { m_tapeUsedInBytesHasBeenSet = true; m_tapeUsedInBytes = value; }
    inline TapeArchive& WithTapeUsedInBytes(long long value) { SetTapeUsedInBytes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetKMSKey() const{ return m_kMSKey; }
    inline bool KMSKeyHasBeenSet() const { return m_kMSKeyHasBeenSet; }
    inline void SetKMSKey(const Aws::String& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }
    inline void SetKMSKey(Aws::String&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::move(value); }
    inline void SetKMSKey(const char* value) { m_kMSKeyHasBeenSet = true; m_kMSKey.assign(value); }
    inline TapeArchive& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}
    inline TapeArchive& WithKMSKey(Aws::String&& value) { SetKMSKey(std::move(value)); return *this;}
    inline TapeArchive& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the pool that was used to archive the tape. The tapes in this pool
     * are archived in the S3 storage class that is associated with the pool.</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
    inline void SetPoolId(const Aws::String& value) { m_poolIdHasBeenSet = true; m_poolId = value; }
    inline void SetPoolId(Aws::String&& value) { m_poolIdHasBeenSet = true; m_poolId = std::move(value); }
    inline void SetPoolId(const char* value) { m_poolIdHasBeenSet = true; m_poolId.assign(value); }
    inline TapeArchive& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}
    inline TapeArchive& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}
    inline TapeArchive& WithPoolId(const char* value) { SetPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> if the archived tape is stored as
     * write-once-read-many (WORM).</p>
     */
    inline bool GetWorm() const{ return m_worm; }
    inline bool WormHasBeenSet() const { return m_wormHasBeenSet; }
    inline void SetWorm(bool value) { m_wormHasBeenSet = true; m_worm = value; }
    inline TapeArchive& WithWorm(bool value) { SetWorm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the archived tape is subject to tape retention lock, the date that the
     * archived tape started being retained.</p>
     */
    inline const Aws::Utils::DateTime& GetRetentionStartDate() const{ return m_retentionStartDate; }
    inline bool RetentionStartDateHasBeenSet() const { return m_retentionStartDateHasBeenSet; }
    inline void SetRetentionStartDate(const Aws::Utils::DateTime& value) { m_retentionStartDateHasBeenSet = true; m_retentionStartDate = value; }
    inline void SetRetentionStartDate(Aws::Utils::DateTime&& value) { m_retentionStartDateHasBeenSet = true; m_retentionStartDate = std::move(value); }
    inline TapeArchive& WithRetentionStartDate(const Aws::Utils::DateTime& value) { SetRetentionStartDate(value); return *this;}
    inline TapeArchive& WithRetentionStartDate(Aws::Utils::DateTime&& value) { SetRetentionStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the tape entered the custom tape pool.</p> <p>The default
     * timestamp format is in the ISO8601 extended YYYY-MM-DD'T'HH:MM:SS'Z' format.</p>
     */
    inline const Aws::Utils::DateTime& GetPoolEntryDate() const{ return m_poolEntryDate; }
    inline bool PoolEntryDateHasBeenSet() const { return m_poolEntryDateHasBeenSet; }
    inline void SetPoolEntryDate(const Aws::Utils::DateTime& value) { m_poolEntryDateHasBeenSet = true; m_poolEntryDate = value; }
    inline void SetPoolEntryDate(Aws::Utils::DateTime&& value) { m_poolEntryDateHasBeenSet = true; m_poolEntryDate = std::move(value); }
    inline TapeArchive& WithPoolEntryDate(const Aws::Utils::DateTime& value) { SetPoolEntryDate(value); return *this;}
    inline TapeArchive& WithPoolEntryDate(Aws::Utils::DateTime&& value) { SetPoolEntryDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_tapeARN;
    bool m_tapeARNHasBeenSet = false;

    Aws::String m_tapeBarcode;
    bool m_tapeBarcodeHasBeenSet = false;

    Aws::Utils::DateTime m_tapeCreatedDate;
    bool m_tapeCreatedDateHasBeenSet = false;

    long long m_tapeSizeInBytes;
    bool m_tapeSizeInBytesHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet = false;

    Aws::String m_retrievedTo;
    bool m_retrievedToHasBeenSet = false;

    Aws::String m_tapeStatus;
    bool m_tapeStatusHasBeenSet = false;

    long long m_tapeUsedInBytes;
    bool m_tapeUsedInBytesHasBeenSet = false;

    Aws::String m_kMSKey;
    bool m_kMSKeyHasBeenSet = false;

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    bool m_worm;
    bool m_wormHasBeenSet = false;

    Aws::Utils::DateTime m_retentionStartDate;
    bool m_retentionStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_poolEntryDate;
    bool m_poolEntryDateHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
