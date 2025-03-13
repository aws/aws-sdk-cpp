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
    AWS_STORAGEGATEWAY_API CreateTapeWithBarcodeRequest() = default;

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
    inline const Aws::String& GetGatewayARN() const { return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    template<typename GatewayARNT = Aws::String>
    void SetGatewayARN(GatewayARNT&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::forward<GatewayARNT>(value); }
    template<typename GatewayARNT = Aws::String>
    CreateTapeWithBarcodeRequest& WithGatewayARN(GatewayARNT&& value) { SetGatewayARN(std::forward<GatewayARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of the virtual tape that you want to create.</p> 
     * <p>The size must be aligned by gigabyte (1024*1024*1024 bytes).</p> 
     */
    inline long long GetTapeSizeInBytes() const { return m_tapeSizeInBytes; }
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
    inline const Aws::String& GetTapeBarcode() const { return m_tapeBarcode; }
    inline bool TapeBarcodeHasBeenSet() const { return m_tapeBarcodeHasBeenSet; }
    template<typename TapeBarcodeT = Aws::String>
    void SetTapeBarcode(TapeBarcodeT&& value) { m_tapeBarcodeHasBeenSet = true; m_tapeBarcode = std::forward<TapeBarcodeT>(value); }
    template<typename TapeBarcodeT = Aws::String>
    CreateTapeWithBarcodeRequest& WithTapeBarcode(TapeBarcodeT&& value) { SetTapeBarcode(std::forward<TapeBarcodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>true</code> to use Amazon S3 server-side encryption with your
     * own KMS key, or <code>false</code> to use a key managed by Amazon S3.
     * Optional.</p> <p>Valid Values: <code>true</code> | <code>false</code> </p>
     */
    inline bool GetKMSEncrypted() const { return m_kMSEncrypted; }
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
    inline const Aws::String& GetKMSKey() const { return m_kMSKey; }
    inline bool KMSKeyHasBeenSet() const { return m_kMSKeyHasBeenSet; }
    template<typename KMSKeyT = Aws::String>
    void SetKMSKey(KMSKeyT&& value) { m_kMSKeyHasBeenSet = true; m_kMSKey = std::forward<KMSKeyT>(value); }
    template<typename KMSKeyT = Aws::String>
    CreateTapeWithBarcodeRequest& WithKMSKey(KMSKeyT&& value) { SetKMSKey(std::forward<KMSKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the pool that you want to add your tape to for archiving. The tape
     * in this pool is archived in the S3 storage class that is associated with the
     * pool. When you use your backup application to eject the tape, the tape is
     * archived directly into the storage class (S3 Glacier or S3 Deep Archive) that
     * corresponds to the pool.</p>
     */
    inline const Aws::String& GetPoolId() const { return m_poolId; }
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }
    template<typename PoolIdT = Aws::String>
    void SetPoolId(PoolIdT&& value) { m_poolIdHasBeenSet = true; m_poolId = std::forward<PoolIdT>(value); }
    template<typename PoolIdT = Aws::String>
    CreateTapeWithBarcodeRequest& WithPoolId(PoolIdT&& value) { SetPoolId(std::forward<PoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>TRUE</code> if the tape you are creating is to be configured as
     * a write-once-read-many (WORM) tape.</p>
     */
    inline bool GetWorm() const { return m_worm; }
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
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateTapeWithBarcodeRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateTapeWithBarcodeRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    long long m_tapeSizeInBytes{0};
    bool m_tapeSizeInBytesHasBeenSet = false;

    Aws::String m_tapeBarcode;
    bool m_tapeBarcodeHasBeenSet = false;

    bool m_kMSEncrypted{false};
    bool m_kMSEncryptedHasBeenSet = false;

    Aws::String m_kMSKey;
    bool m_kMSKeyHasBeenSet = false;

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    bool m_worm{false};
    bool m_wormHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
