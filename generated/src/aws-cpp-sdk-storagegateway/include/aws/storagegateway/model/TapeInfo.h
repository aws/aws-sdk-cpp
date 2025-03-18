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
   * <p>Describes a virtual tape.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/TapeInfo">AWS
   * API Reference</a></p>
   */
  class TapeInfo
  {
  public:
    AWS_STORAGEGATEWAY_API TapeInfo() = default;
    AWS_STORAGEGATEWAY_API TapeInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API TapeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a virtual tape.</p>
     */
    inline const Aws::String& GetTapeARN() const { return m_tapeARN; }
    inline bool TapeARNHasBeenSet() const { return m_tapeARNHasBeenSet; }
    template<typename TapeARNT = Aws::String>
    void SetTapeARN(TapeARNT&& value) { m_tapeARNHasBeenSet = true; m_tapeARN = std::forward<TapeARNT>(value); }
    template<typename TapeARNT = Aws::String>
    TapeInfo& WithTapeARN(TapeARNT&& value) { SetTapeARN(std::forward<TapeARNT>(value)); return *this;}
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
    TapeInfo& WithTapeBarcode(TapeBarcodeT&& value) { SetTapeBarcode(std::forward<TapeBarcodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of a virtual tape.</p>
     */
    inline long long GetTapeSizeInBytes() const { return m_tapeSizeInBytes; }
    inline bool TapeSizeInBytesHasBeenSet() const { return m_tapeSizeInBytesHasBeenSet; }
    inline void SetTapeSizeInBytes(long long value) { m_tapeSizeInBytesHasBeenSet = true; m_tapeSizeInBytes = value; }
    inline TapeInfo& WithTapeSizeInBytes(long long value) { SetTapeSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the tape.</p>
     */
    inline const Aws::String& GetTapeStatus() const { return m_tapeStatus; }
    inline bool TapeStatusHasBeenSet() const { return m_tapeStatusHasBeenSet; }
    template<typename TapeStatusT = Aws::String>
    void SetTapeStatus(TapeStatusT&& value) { m_tapeStatusHasBeenSet = true; m_tapeStatus = std::forward<TapeStatusT>(value); }
    template<typename TapeStatusT = Aws::String>
    TapeInfo& WithTapeStatus(TapeStatusT&& value) { SetTapeStatus(std::forward<TapeStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a>ListGateways</a>
     * operation to return a list of gateways for your account and Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    TapeInfo& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the pool that you want to add your tape to for archiving. The tape
     * in this pool is archived in the S3 storage class that is associated with the
     * pool. When you use your backup application to eject the tape, the tape is
     * archived directly into the storage class (S3 Glacier or S3 Glacier Deep Archive)
     * that corresponds to the pool.</p>
     */
    inline const Aws::String& GetPoolId() const { return m_poolId; }
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
    template<typename PoolIdT = Aws::String>
    void SetPoolId(PoolIdT&& value) { m_poolIdHasBeenSet = true; m_poolId = std::forward<PoolIdT>(value); }
    template<typename PoolIdT = Aws::String>
    TapeInfo& WithPoolId(PoolIdT&& value) { SetPoolId(std::forward<PoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the tape became subject to tape retention lock.</p>
     */
    inline const Aws::Utils::DateTime& GetRetentionStartDate() const { return m_retentionStartDate; }
    inline bool RetentionStartDateHasBeenSet() const { return m_retentionStartDateHasBeenSet; }
    template<typename RetentionStartDateT = Aws::Utils::DateTime>
    void SetRetentionStartDate(RetentionStartDateT&& value) { m_retentionStartDateHasBeenSet = true; m_retentionStartDate = std::forward<RetentionStartDateT>(value); }
    template<typename RetentionStartDateT = Aws::Utils::DateTime>
    TapeInfo& WithRetentionStartDate(RetentionStartDateT&& value) { SetRetentionStartDate(std::forward<RetentionStartDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the tape entered the custom tape pool with tape retention lock
     * enabled.</p>
     */
    inline const Aws::Utils::DateTime& GetPoolEntryDate() const { return m_poolEntryDate; }
    inline bool PoolEntryDateHasBeenSet() const { return m_poolEntryDateHasBeenSet; }
    template<typename PoolEntryDateT = Aws::Utils::DateTime>
    void SetPoolEntryDate(PoolEntryDateT&& value) { m_poolEntryDateHasBeenSet = true; m_poolEntryDate = std::forward<PoolEntryDateT>(value); }
    template<typename PoolEntryDateT = Aws::Utils::DateTime>
    TapeInfo& WithPoolEntryDate(PoolEntryDateT&& value) { SetPoolEntryDate(std::forward<PoolEntryDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tapeARN;
    bool m_tapeARNHasBeenSet = false;

    Aws::String m_tapeBarcode;
    bool m_tapeBarcodeHasBeenSet = false;

    long long m_tapeSizeInBytes{0};
    bool m_tapeSizeInBytesHasBeenSet = false;

    Aws::String m_tapeStatus;
    bool m_tapeStatusHasBeenSet = false;

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    Aws::Utils::DateTime m_retentionStartDate{};
    bool m_retentionStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_poolEntryDate{};
    bool m_poolEntryDateHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
