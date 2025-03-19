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
    AWS_STORAGEGATEWAY_API TapeArchive() = default;
    AWS_STORAGEGATEWAY_API TapeArchive(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API TapeArchive& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an archived virtual tape.</p>
     */
    inline const Aws::String& GetTapeARN() const { return m_tapeARN; }
    inline bool TapeARNHasBeenSet() const { return m_tapeARNHasBeenSet; }
    template<typename TapeARNT = Aws::String>
    void SetTapeARN(TapeARNT&& value) { m_tapeARNHasBeenSet = true; m_tapeARN = std::forward<TapeARNT>(value); }
    template<typename TapeARNT = Aws::String>
    TapeArchive& WithTapeARN(TapeARNT&& value) { SetTapeARN(std::forward<TapeARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The barcode that identifies the archived virtual tape.</p>
     */
    inline const Aws::String& GetTapeBarcode() const { return m_tapeBarcode; }
    inline bool TapeBarcodeHasBeenSet() const { return m_tapeBarcodeHasBeenSet; }
    template<typename TapeBarcodeT = Aws::String>
    void SetTapeBarcode(TapeBarcodeT&& value) { m_tapeBarcodeHasBeenSet = true; m_tapeBarcode = std::forward<TapeBarcodeT>(value); }
    template<typename TapeBarcodeT = Aws::String>
    TapeArchive& WithTapeBarcode(TapeBarcodeT&& value) { SetTapeBarcode(std::forward<TapeBarcodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the virtual tape was created.</p>
     */
    inline const Aws::Utils::DateTime& GetTapeCreatedDate() const { return m_tapeCreatedDate; }
    inline bool TapeCreatedDateHasBeenSet() const { return m_tapeCreatedDateHasBeenSet; }
    template<typename TapeCreatedDateT = Aws::Utils::DateTime>
    void SetTapeCreatedDate(TapeCreatedDateT&& value) { m_tapeCreatedDateHasBeenSet = true; m_tapeCreatedDate = std::forward<TapeCreatedDateT>(value); }
    template<typename TapeCreatedDateT = Aws::Utils::DateTime>
    TapeArchive& WithTapeCreatedDate(TapeCreatedDateT&& value) { SetTapeCreatedDate(std::forward<TapeCreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of the archived virtual tape.</p>
     */
    inline long long GetTapeSizeInBytes() const { return m_tapeSizeInBytes; }
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
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    TapeArchive& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the tape gateway that the virtual tape is
     * being retrieved to.</p> <p>The virtual tape is retrieved from the virtual tape
     * shelf (VTS).</p>
     */
    inline const Aws::String& GetRetrievedTo() const { return m_retrievedTo; }
    inline bool RetrievedToHasBeenSet() const { return m_retrievedToHasBeenSet; }
    template<typename RetrievedToT = Aws::String>
    void SetRetrievedTo(RetrievedToT&& value) { m_retrievedToHasBeenSet = true; m_retrievedTo = std::forward<RetrievedToT>(value); }
    template<typename RetrievedToT = Aws::String>
    TapeArchive& WithRetrievedTo(RetrievedToT&& value) { SetRetrievedTo(std::forward<RetrievedToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the archived virtual tape.</p>
     */
    inline const Aws::String& GetTapeStatus() const { return m_tapeStatus; }
    inline bool TapeStatusHasBeenSet() const { return m_tapeStatusHasBeenSet; }
    template<typename TapeStatusT = Aws::String>
    void SetTapeStatus(TapeStatusT&& value) { m_tapeStatusHasBeenSet = true; m_tapeStatus = std::forward<TapeStatusT>(value); }
    template<typename TapeStatusT = Aws::String>
    TapeArchive& WithTapeStatus(TapeStatusT&& value) { SetTapeStatus(std::forward<TapeStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of data stored on the virtual tape.</p>  <p>This
     * value is not available for tapes created prior to May 13, 2015.</p> 
     */
    inline long long GetTapeUsedInBytes() const { return m_tapeUsedInBytes; }
    inline bool TapeUsedInBytesHasBeenSet() const { return m_tapeUsedInBytesHasBeenSet; }
    inline void SetTapeUsedInBytes(long long value) { m_tapeUsedInBytesHasBeenSet = true; m_tapeUsedInBytes = value; }
    inline TapeArchive& WithTapeUsedInBytes(long long value) { SetTapeUsedInBytes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetKMSKey() const { return m_kMSKey; }
    inline bool KMSKeyHasBeenSet() const { return m_kMSKeyHasBeenSet; }
    template<typename KMSKeyT = Aws::String>
    void SetKMSKey(KMSKeyT&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::forward<KMSKeyT>(value); }
    template<typename KMSKeyT = Aws::String>
    TapeArchive& WithKMSKey(KMSKeyT&& value) { SetKMSKey(std::forward<KMSKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the pool that was used to archive the tape. The tapes in this pool
     * are archived in the S3 storage class that is associated with the pool.</p>
     */
    inline const Aws::String& GetPoolId() const { return m_poolId; }
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
    template<typename PoolIdT = Aws::String>
    void SetPoolId(PoolIdT&& value) { m_poolIdHasBeenSet = true; m_poolId = std::forward<PoolIdT>(value); }
    template<typename PoolIdT = Aws::String>
    TapeArchive& WithPoolId(PoolIdT&& value) { SetPoolId(std::forward<PoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> if the archived tape is stored as
     * write-once-read-many (WORM).</p>
     */
    inline bool GetWorm() const { return m_worm; }
    inline bool WormHasBeenSet() const { return m_wormHasBeenSet; }
    inline void SetWorm(bool value) { m_wormHasBeenSet = true; m_worm = value; }
    inline TapeArchive& WithWorm(bool value) { SetWorm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the archived tape is subject to tape retention lock, the date that the
     * archived tape started being retained.</p>
     */
    inline const Aws::Utils::DateTime& GetRetentionStartDate() const { return m_retentionStartDate; }
    inline bool RetentionStartDateHasBeenSet() const { return m_retentionStartDateHasBeenSet; }
    template<typename RetentionStartDateT = Aws::Utils::DateTime>
    void SetRetentionStartDate(RetentionStartDateT&& value) { m_retentionStartDateHasBeenSet = true; m_retentionStartDate = std::forward<RetentionStartDateT>(value); }
    template<typename RetentionStartDateT = Aws::Utils::DateTime>
    TapeArchive& WithRetentionStartDate(RetentionStartDateT&& value) { SetRetentionStartDate(std::forward<RetentionStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the tape entered the custom tape pool.</p> <p>The default
     * timestamp format is in the ISO8601 extended YYYY-MM-DD'T'HH:MM:SS'Z' format.</p>
     */
    inline const Aws::Utils::DateTime& GetPoolEntryDate() const { return m_poolEntryDate; }
    inline bool PoolEntryDateHasBeenSet() const { return m_poolEntryDateHasBeenSet; }
    template<typename PoolEntryDateT = Aws::Utils::DateTime>
    void SetPoolEntryDate(PoolEntryDateT&& value) { m_poolEntryDateHasBeenSet = true; m_poolEntryDate = std::forward<PoolEntryDateT>(value); }
    template<typename PoolEntryDateT = Aws::Utils::DateTime>
    TapeArchive& WithPoolEntryDate(PoolEntryDateT&& value) { SetPoolEntryDate(std::forward<PoolEntryDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tapeARN;
    bool m_tapeARNHasBeenSet = false;

    Aws::String m_tapeBarcode;
    bool m_tapeBarcodeHasBeenSet = false;

    Aws::Utils::DateTime m_tapeCreatedDate{};
    bool m_tapeCreatedDateHasBeenSet = false;

    long long m_tapeSizeInBytes{0};
    bool m_tapeSizeInBytesHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime{};
    bool m_completionTimeHasBeenSet = false;

    Aws::String m_retrievedTo;
    bool m_retrievedToHasBeenSet = false;

    Aws::String m_tapeStatus;
    bool m_tapeStatusHasBeenSet = false;

    long long m_tapeUsedInBytes{0};
    bool m_tapeUsedInBytesHasBeenSet = false;

    Aws::String m_kMSKey;
    bool m_kMSKeyHasBeenSet = false;

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    bool m_worm{false};
    bool m_wormHasBeenSet = false;

    Aws::Utils::DateTime m_retentionStartDate{};
    bool m_retentionStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_poolEntryDate{};
    bool m_poolEntryDateHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
