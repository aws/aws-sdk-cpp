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
    AWS_STORAGEGATEWAY_API TapeInfo();
    AWS_STORAGEGATEWAY_API TapeInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API TapeInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a virtual tape.</p>
     */
    inline const Aws::String& GetTapeARN() const{ return m_tapeARN; }
    inline bool TapeARNHasBeenSet() const { return m_tapeARNHasBeenSet; }
    inline void SetTapeARN(const Aws::String& value) { m_tapeARNHasBeenSet = true; m_tapeARN = value; }
    inline void SetTapeARN(Aws::String&& value) { m_tapeARNHasBeenSet = true; m_tapeARN = std::move(value); }
    inline void SetTapeARN(const char* value) { m_tapeARNHasBeenSet = true; m_tapeARN.assign(value); }
    inline TapeInfo& WithTapeARN(const Aws::String& value) { SetTapeARN(value); return *this;}
    inline TapeInfo& WithTapeARN(Aws::String&& value) { SetTapeARN(std::move(value)); return *this;}
    inline TapeInfo& WithTapeARN(const char* value) { SetTapeARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The barcode that identifies a specific virtual tape.</p>
     */
    inline const Aws::String& GetTapeBarcode() const{ return m_tapeBarcode; }
    inline bool TapeBarcodeHasBeenSet() const { return m_tapeBarcodeHasBeenSet; }
    inline void SetTapeBarcode(const Aws::String& value) { m_tapeBarcodeHasBeenSet = true; m_tapeBarcode = value; }
    inline void SetTapeBarcode(Aws::String&& value) { m_tapeBarcodeHasBeenSet = true; m_tapeBarcode = std::move(value); }
    inline void SetTapeBarcode(const char* value) { m_tapeBarcodeHasBeenSet = true; m_tapeBarcode.assign(value); }
    inline TapeInfo& WithTapeBarcode(const Aws::String& value) { SetTapeBarcode(value); return *this;}
    inline TapeInfo& WithTapeBarcode(Aws::String&& value) { SetTapeBarcode(std::move(value)); return *this;}
    inline TapeInfo& WithTapeBarcode(const char* value) { SetTapeBarcode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of a virtual tape.</p>
     */
    inline long long GetTapeSizeInBytes() const{ return m_tapeSizeInBytes; }
    inline bool TapeSizeInBytesHasBeenSet() const { return m_tapeSizeInBytesHasBeenSet; }
    inline void SetTapeSizeInBytes(long long value) { m_tapeSizeInBytesHasBeenSet = true; m_tapeSizeInBytes = value; }
    inline TapeInfo& WithTapeSizeInBytes(long long value) { SetTapeSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the tape.</p>
     */
    inline const Aws::String& GetTapeStatus() const{ return m_tapeStatus; }
    inline bool TapeStatusHasBeenSet() const { return m_tapeStatusHasBeenSet; }
    inline void SetTapeStatus(const Aws::String& value) { m_tapeStatusHasBeenSet = true; m_tapeStatus = value; }
    inline void SetTapeStatus(Aws::String&& value) { m_tapeStatusHasBeenSet = true; m_tapeStatus = std::move(value); }
    inline void SetTapeStatus(const char* value) { m_tapeStatusHasBeenSet = true; m_tapeStatus.assign(value); }
    inline TapeInfo& WithTapeStatus(const Aws::String& value) { SetTapeStatus(value); return *this;}
    inline TapeInfo& WithTapeStatus(Aws::String&& value) { SetTapeStatus(std::move(value)); return *this;}
    inline TapeInfo& WithTapeStatus(const char* value) { SetTapeStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the gateway. Use the <a>ListGateways</a>
     * operation to return a list of gateways for your account and Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }
    inline TapeInfo& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}
    inline TapeInfo& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}
    inline TapeInfo& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the pool that you want to add your tape to for archiving. The tape
     * in this pool is archived in the S3 storage class that is associated with the
     * pool. When you use your backup application to eject the tape, the tape is
     * archived directly into the storage class (S3 Glacier or S3 Glacier Deep Archive)
     * that corresponds to the pool.</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
    inline void SetPoolId(const Aws::String& value) { m_poolIdHasBeenSet = true; m_poolId = value; }
    inline void SetPoolId(Aws::String&& value) { m_poolIdHasBeenSet = true; m_poolId = std::move(value); }
    inline void SetPoolId(const char* value) { m_poolIdHasBeenSet = true; m_poolId.assign(value); }
    inline TapeInfo& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}
    inline TapeInfo& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}
    inline TapeInfo& WithPoolId(const char* value) { SetPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the tape became subject to tape retention lock.</p>
     */
    inline const Aws::Utils::DateTime& GetRetentionStartDate() const{ return m_retentionStartDate; }
    inline bool RetentionStartDateHasBeenSet() const { return m_retentionStartDateHasBeenSet; }
    inline void SetRetentionStartDate(const Aws::Utils::DateTime& value) { m_retentionStartDateHasBeenSet = true; m_retentionStartDate = value; }
    inline void SetRetentionStartDate(Aws::Utils::DateTime&& value) { m_retentionStartDateHasBeenSet = true; m_retentionStartDate = std::move(value); }
    inline TapeInfo& WithRetentionStartDate(const Aws::Utils::DateTime& value) { SetRetentionStartDate(value); return *this;}
    inline TapeInfo& WithRetentionStartDate(Aws::Utils::DateTime&& value) { SetRetentionStartDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the tape entered the custom tape pool with tape retention lock
     * enabled.</p>
     */
    inline const Aws::Utils::DateTime& GetPoolEntryDate() const{ return m_poolEntryDate; }
    inline bool PoolEntryDateHasBeenSet() const { return m_poolEntryDateHasBeenSet; }
    inline void SetPoolEntryDate(const Aws::Utils::DateTime& value) { m_poolEntryDateHasBeenSet = true; m_poolEntryDate = value; }
    inline void SetPoolEntryDate(Aws::Utils::DateTime&& value) { m_poolEntryDateHasBeenSet = true; m_poolEntryDate = std::move(value); }
    inline TapeInfo& WithPoolEntryDate(const Aws::Utils::DateTime& value) { SetPoolEntryDate(value); return *this;}
    inline TapeInfo& WithPoolEntryDate(Aws::Utils::DateTime&& value) { SetPoolEntryDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_tapeARN;
    bool m_tapeARNHasBeenSet = false;

    Aws::String m_tapeBarcode;
    bool m_tapeBarcodeHasBeenSet = false;

    long long m_tapeSizeInBytes;
    bool m_tapeSizeInBytesHasBeenSet = false;

    Aws::String m_tapeStatus;
    bool m_tapeStatusHasBeenSet = false;

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    Aws::Utils::DateTime m_retentionStartDate;
    bool m_retentionStartDateHasBeenSet = false;

    Aws::Utils::DateTime m_poolEntryDate;
    bool m_poolEntryDateHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
