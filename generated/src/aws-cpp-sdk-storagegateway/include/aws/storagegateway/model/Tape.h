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
   * <p>Describes a virtual tape object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/Tape">AWS
   * API Reference</a></p>
   */
  class Tape
  {
  public:
    AWS_STORAGEGATEWAY_API Tape() = default;
    AWS_STORAGEGATEWAY_API Tape(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Tape& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the virtual tape.</p>
     */
    inline const Aws::String& GetTapeARN() const { return m_tapeARN; }
    inline bool TapeARNHasBeenSet() const { return m_tapeARNHasBeenSet; }
    template<typename TapeARNT = Aws::String>
    void SetTapeARN(TapeARNT&& value) { m_tapeARNHasBeenSet = true; m_tapeARN = std::forward<TapeARNT>(value); }
    template<typename TapeARNT = Aws::String>
    Tape& WithTapeARN(TapeARNT&& value) { SetTapeARN(std::forward<TapeARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The barcode that identifies a specific virtual tape.</p>
     */
    inline const Aws::String& GetTapeBarcode() const { return m_tapeBarcode; }
    inline bool TapeBarcodeHasBeenSet() const { return m_tapeBarcodeHasBeenSet; }
    template<typename TapeBarcodeT = Aws::String>
    void SetTapeBarcode(TapeBarcodeT&& value) { m_tapeBarcodeHasBeenSet = true; m_tapeBarcode = std::forward<TapeBarcodeT>(value); }
    template<typename TapeBarcodeT = Aws::String>
    Tape& WithTapeBarcode(TapeBarcodeT&& value) { SetTapeBarcode(std::forward<TapeBarcodeT>(value)); return *this;}
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
    Tape& WithTapeCreatedDate(TapeCreatedDateT&& value) { SetTapeCreatedDate(std::forward<TapeCreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of the virtual tape capacity.</p>
     */
    inline long long GetTapeSizeInBytes() const { return m_tapeSizeInBytes; }
    inline bool TapeSizeInBytesHasBeenSet() const { return m_tapeSizeInBytesHasBeenSet; }
    inline void SetTapeSizeInBytes(long long value) { m_tapeSizeInBytesHasBeenSet = true; m_tapeSizeInBytes = value; }
    inline Tape& WithTapeSizeInBytes(long long value) { SetTapeSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the virtual tape.</p>
     */
    inline const Aws::String& GetTapeStatus() const { return m_tapeStatus; }
    inline bool TapeStatusHasBeenSet() const { return m_tapeStatusHasBeenSet; }
    template<typename TapeStatusT = Aws::String>
    void SetTapeStatus(TapeStatusT&& value) { m_tapeStatusHasBeenSet = true; m_tapeStatus = std::forward<TapeStatusT>(value); }
    template<typename TapeStatusT = Aws::String>
    Tape& WithTapeStatus(TapeStatusT&& value) { SetTapeStatus(std::forward<TapeStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual tape library (VTL) device that the virtual tape is associated
     * with.</p>
     */
    inline const Aws::String& GetVTLDevice() const { return m_vTLDevice; }
    inline bool VTLDeviceHasBeenSet() const { return m_vTLDeviceHasBeenSet; }
    template<typename VTLDeviceT = Aws::String>
    void SetVTLDevice(VTLDeviceT&& value) { m_vTLDeviceHasBeenSet = true; m_vTLDevice = std::forward<VTLDeviceT>(value); }
    template<typename VTLDeviceT = Aws::String>
    Tape& WithVTLDevice(VTLDeviceT&& value) { SetVTLDevice(std::forward<VTLDeviceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For archiving virtual tapes, indicates how much data remains to be uploaded
     * before archiving is complete.</p> <p>Range: 0 (not started) to 100
     * (complete).</p>
     */
    inline double GetProgress() const { return m_progress; }
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }
    inline void SetProgress(double value) { m_progressHasBeenSet = true; m_progress = value; }
    inline Tape& WithProgress(double value) { SetProgress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of data stored on the virtual tape.</p>  <p>This
     * value is not available for tapes created prior to May 13, 2015.</p> 
     */
    inline long long GetTapeUsedInBytes() const { return m_tapeUsedInBytes; }
    inline bool TapeUsedInBytesHasBeenSet() const { return m_tapeUsedInBytesHasBeenSet; }
    inline void SetTapeUsedInBytes(long long value) { m_tapeUsedInBytesHasBeenSet = true; m_tapeUsedInBytes = value; }
    inline Tape& WithTapeUsedInBytes(long long value) { SetTapeUsedInBytes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetKMSKey() const { return m_kMSKey; }
    inline bool KMSKeyHasBeenSet() const { return m_kMSKeyHasBeenSet; }
    template<typename KMSKeyT = Aws::String>
    void SetKMSKey(KMSKeyT&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::forward<KMSKeyT>(value); }
    template<typename KMSKeyT = Aws::String>
    Tape& WithKMSKey(KMSKeyT&& value) { SetKMSKey(std::forward<KMSKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the pool that contains tapes that will be archived. The tapes in
     * this pool are archived in the S3 storage class that is associated with the pool.
     * When you use your backup application to eject the tape, the tape is archived
     * directly into the storage class (S3 Glacier or S3 Glacier Deep Archive) that
     * corresponds to the pool.</p>
     */
    inline const Aws::String& GetPoolId() const { return m_poolId; }
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
    template<typename PoolIdT = Aws::String>
    void SetPoolId(PoolIdT&& value) { m_poolIdHasBeenSet = true; m_poolId = std::forward<PoolIdT>(value); }
    template<typename PoolIdT = Aws::String>
    Tape& WithPoolId(PoolIdT&& value) { SetPoolId(std::forward<PoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the tape is archived as write-once-read-many (WORM), this value is
     * <code>true</code>.</p>
     */
    inline bool GetWorm() const { return m_worm; }
    inline bool WormHasBeenSet() const { return m_wormHasBeenSet; }
    inline void SetWorm(bool value) { m_wormHasBeenSet = true; m_worm = value; }
    inline Tape& WithWorm(bool value) { SetWorm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the tape is first archived with tape retention lock
     * enabled.</p>
     */
    inline const Aws::Utils::DateTime& GetRetentionStartDate() const { return m_retentionStartDate; }
    inline bool RetentionStartDateHasBeenSet() const { return m_retentionStartDateHasBeenSet; }
    template<typename RetentionStartDateT = Aws::Utils::DateTime>
    void SetRetentionStartDate(RetentionStartDateT&& value) { m_retentionStartDateHasBeenSet = true; m_retentionStartDate = std::forward<RetentionStartDateT>(value); }
    template<typename RetentionStartDateT = Aws::Utils::DateTime>
    Tape& WithRetentionStartDate(RetentionStartDateT&& value) { SetRetentionStartDate(std::forward<RetentionStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the tape enters a custom tape pool.</p>
     */
    inline const Aws::Utils::DateTime& GetPoolEntryDate() const { return m_poolEntryDate; }
    inline bool PoolEntryDateHasBeenSet() const { return m_poolEntryDateHasBeenSet; }
    template<typename PoolEntryDateT = Aws::Utils::DateTime>
    void SetPoolEntryDate(PoolEntryDateT&& value) { m_poolEntryDateHasBeenSet = true; m_poolEntryDate = std::forward<PoolEntryDateT>(value); }
    template<typename PoolEntryDateT = Aws::Utils::DateTime>
    Tape& WithPoolEntryDate(PoolEntryDateT&& value) { SetPoolEntryDate(std::forward<PoolEntryDateT>(value)); return *this;}
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

    Aws::String m_tapeStatus;
    bool m_tapeStatusHasBeenSet = false;

    Aws::String m_vTLDevice;
    bool m_vTLDeviceHasBeenSet = false;

    double m_progress{0.0};
    bool m_progressHasBeenSet = false;

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
