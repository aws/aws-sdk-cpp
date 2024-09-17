/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/Tag.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>CreateTapeWithBarcodeInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateTapeWithBarcodeInput">AWS
   * API Reference</a></p>
   */
  class CreateTapeWithBarcodeRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API CreateTapeWithBarcodeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTapeWithBarcode"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) that represents the gateway to
     * associate the virtual tape with. Use the <a>ListGateways</a> operation to return
     * a list of gateways for your account and Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }
    inline CreateTapeWithBarcodeRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}
    inline CreateTapeWithBarcodeRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}
    inline CreateTapeWithBarcodeRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of the virtual tape that you want to create.</p> 
     * <p>The size must be aligned by gigabyte (1024*1024*1024 bytes).</p> 
     */
    inline long long GetTapeSizeInBytes() const{ return m_tapeSizeInBytes; }
    inline bool TapeSizeInBytesHasBeenSet() const { return m_tapeSizeInBytesHasBeenSet; }
    inline void SetTapeSizeInBytes(long long value) { m_tapeSizeInBytesHasBeenSet = true; m_tapeSizeInBytes = value; }
    inline CreateTapeWithBarcodeRequest& WithTapeSizeInBytes(long long value) { SetTapeSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The barcode that you want to assign to the tape.</p>  <p>Barcodes
     * cannot be reused. This includes barcodes used for tapes that have been
     * deleted.</p> 
     */
    inline const Aws::String& GetTapeBarcode() const{ return m_tapeBarcode; }
    inline bool TapeBarcodeHasBeenSet() const { return m_tapeBarcodeHasBeenSet; }
    inline void SetTapeBarcode(const Aws::String& value) { m_tapeBarcodeHasBeenSet = true; m_tapeBarcode = value; }
    inline void SetTapeBarcode(Aws::String&& value) { m_tapeBarcodeHasBeenSet = true; m_tapeBarcode = std::move(value); }
    inline void SetTapeBarcode(const char* value) { m_tapeBarcodeHasBeenSet = true; m_tapeBarcode.assign(value); }
    inline CreateTapeWithBarcodeRequest& WithTapeBarcode(const Aws::String& value) { SetTapeBarcode(value); return *this;}
    inline CreateTapeWithBarcodeRequest& WithTapeBarcode(Aws::String&& value) { SetTapeBarcode(std::move(value)); return *this;}
    inline CreateTapeWithBarcodeRequest& WithTapeBarcode(const char* value) { SetTapeBarcode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> to use Amazon S3 server-side encryption with your
     * own KMS key, or <code>false</code> to use a key managed by Amazon S3.
     * Optional.</p> <p>Valid Values: <code>true</code> | <code>false</code> </p>
     */
    inline bool GetKMSEncrypted() const{ return m_kMSEncrypted; }
    inline bool KMSEncryptedHasBeenSet() const { return m_kMSEncryptedHasBeenSet; }
    inline void SetKMSEncrypted(bool value) { m_kMSEncryptedHasBeenSet = true; m_kMSEncrypted = value; }
    inline CreateTapeWithBarcodeRequest& WithKMSEncrypted(bool value) { SetKMSEncrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a symmetric customer master key (CMK) used
     * for Amazon S3 server-side encryption. Storage Gateway does not support
     * asymmetric CMKs. This value can only be set when <code>KMSEncrypted</code> is
     * <code>true</code>. Optional.</p>
     */
    inline const Aws::String& GetKMSKey() const{ return m_kMSKey; }
    inline bool KMSKeyHasBeenSet() const { return m_kMSKeyHasBeenSet; }
    inline void SetKMSKey(const Aws::String& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = value; }
    inline void SetKMSKey(Aws::String&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::move(value); }
    inline void SetKMSKey(const char* value) { m_kMSKeyHasBeenSet = true; m_kMSKey.assign(value); }
    inline CreateTapeWithBarcodeRequest& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}
    inline CreateTapeWithBarcodeRequest& WithKMSKey(Aws::String&& value) { SetKMSKey(std::move(value)); return *this;}
    inline CreateTapeWithBarcodeRequest& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the pool that you want to add your tape to for archiving. The tape
     * in this pool is archived in the S3 storage class that is associated with the
     * pool. When you use your backup application to eject the tape, the tape is
     * archived directly into the storage class (S3 Glacier or S3 Deep Archive) that
     * corresponds to the pool.</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
    inline void SetPoolId(const Aws::String& value) { m_poolIdHasBeenSet = true; m_poolId = value; }
    inline void SetPoolId(Aws::String&& value) { m_poolIdHasBeenSet = true; m_poolId = std::move(value); }
    inline void SetPoolId(const char* value) { m_poolIdHasBeenSet = true; m_poolId.assign(value); }
    inline CreateTapeWithBarcodeRequest& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}
    inline CreateTapeWithBarcodeRequest& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}
    inline CreateTapeWithBarcodeRequest& WithPoolId(const char* value) { SetPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>TRUE</code> if the tape you are creating is to be configured as
     * a write-once-read-many (WORM) tape.</p>
     */
    inline bool GetWorm() const{ return m_worm; }
    inline bool WormHasBeenSet() const { return m_wormHasBeenSet; }
    inline void SetWorm(bool value) { m_wormHasBeenSet = true; m_worm = value; }
    inline CreateTapeWithBarcodeRequest& WithWorm(bool value) { SetWorm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 50 tags that can be assigned to a virtual tape that has a
     * barcode. Each tag is a key-value pair.</p>  <p>Valid characters for key
     * and value are letters, spaces, and numbers representable in UTF-8 format, and
     * the following special characters: + - = . _ : / @. The maximum length of a tag's
     * key is 128 characters, and the maximum length for a tag's value is 256.</p>
     * 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateTapeWithBarcodeRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateTapeWithBarcodeRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateTapeWithBarcodeRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateTapeWithBarcodeRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    long long m_tapeSizeInBytes;
    bool m_tapeSizeInBytesHasBeenSet = false;

    Aws::String m_tapeBarcode;
    bool m_tapeBarcodeHasBeenSet = false;

    bool m_kMSEncrypted;
    bool m_kMSEncryptedHasBeenSet = false;

    Aws::String m_kMSKey;
    bool m_kMSKeyHasBeenSet = false;

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    bool m_worm;
    bool m_wormHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
