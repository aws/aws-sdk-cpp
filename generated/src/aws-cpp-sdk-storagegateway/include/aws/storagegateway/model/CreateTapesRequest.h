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
   * <p>CreateTapesInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/CreateTapesInput">AWS
   * API Reference</a></p>
   */
  class CreateTapesRequest : public StorageGatewayRequest
  {
  public:
    AWS_STORAGEGATEWAY_API CreateTapesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTapes"; }

    AWS_STORAGEGATEWAY_API Aws::String SerializePayload() const override;

    AWS_STORAGEGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) that represents the gateway to
     * associate the virtual tapes with. Use the <a>ListGateways</a> operation to
     * return a list of gateways for your account and Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }
    inline bool GatewayARNHasBeenSet() const { return m_gatewayARNHasBeenSet; }
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }
    inline CreateTapesRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}
    inline CreateTapesRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}
    inline CreateTapesRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size, in bytes, of the virtual tapes that you want to create.</p> 
     * <p>The size must be aligned by gigabyte (1024*1024*1024 bytes).</p> 
     */
    inline long long GetTapeSizeInBytes() const{ return m_tapeSizeInBytes; }
    inline bool TapeSizeInBytesHasBeenSet() const { return m_tapeSizeInBytesHasBeenSet; }
    inline void SetTapeSizeInBytes(long long value) { m_tapeSizeInBytesHasBeenSet = true; m_tapeSizeInBytes = value; }
    inline CreateTapesRequest& WithTapeSizeInBytes(long long value) { SetTapeSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier that you use to retry a request. If you retry a request,
     * use the same <code>ClientToken</code> you specified in the initial request.</p>
     *  <p>Using the same <code>ClientToken</code> prevents creating the tape
     * multiple times.</p> 
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateTapesRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateTapesRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateTapesRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of virtual tapes that you want to create.</p>
     */
    inline int GetNumTapesToCreate() const{ return m_numTapesToCreate; }
    inline bool NumTapesToCreateHasBeenSet() const { return m_numTapesToCreateHasBeenSet; }
    inline void SetNumTapesToCreate(int value) { m_numTapesToCreateHasBeenSet = true; m_numTapesToCreate = value; }
    inline CreateTapesRequest& WithNumTapesToCreate(int value) { SetNumTapesToCreate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A prefix that you append to the barcode of the virtual tape you are creating.
     * This prefix makes the barcode unique.</p>  <p>The prefix must be 1-4
     * characters in length and must be one of the uppercase letters from A to Z.</p>
     * 
     */
    inline const Aws::String& GetTapeBarcodePrefix() const{ return m_tapeBarcodePrefix; }
    inline bool TapeBarcodePrefixHasBeenSet() const { return m_tapeBarcodePrefixHasBeenSet; }
    inline void SetTapeBarcodePrefix(const Aws::String& value) { m_tapeBarcodePrefixHasBeenSet = true; m_tapeBarcodePrefix = value; }
    inline void SetTapeBarcodePrefix(Aws::String&& value) { m_tapeBarcodePrefixHasBeenSet = true; m_tapeBarcodePrefix = std::move(value); }
    inline void SetTapeBarcodePrefix(const char* value) { m_tapeBarcodePrefixHasBeenSet = true; m_tapeBarcodePrefix.assign(value); }
    inline CreateTapesRequest& WithTapeBarcodePrefix(const Aws::String& value) { SetTapeBarcodePrefix(value); return *this;}
    inline CreateTapesRequest& WithTapeBarcodePrefix(Aws::String&& value) { SetTapeBarcodePrefix(std::move(value)); return *this;}
    inline CreateTapesRequest& WithTapeBarcodePrefix(const char* value) { SetTapeBarcodePrefix(value); return *this;}
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
    inline CreateTapesRequest& WithKMSEncrypted(bool value) { SetKMSEncrypted(value); return *this;}
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
    inline CreateTapesRequest& WithKMSKey(const Aws::String& value) { SetKMSKey(value); return *this;}
    inline CreateTapesRequest& WithKMSKey(Aws::String&& value) { SetKMSKey(std::move(value)); return *this;}
    inline CreateTapesRequest& WithKMSKey(const char* value) { SetKMSKey(value); return *this;}
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
    inline CreateTapesRequest& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}
    inline CreateTapesRequest& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}
    inline CreateTapesRequest& WithPoolId(const char* value) { SetPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set to <code>TRUE</code> if the tape you are creating is to be configured as
     * a write-once-read-many (WORM) tape.</p>
     */
    inline bool GetWorm() const{ return m_worm; }
    inline bool WormHasBeenSet() const { return m_wormHasBeenSet; }
    inline void SetWorm(bool value) { m_wormHasBeenSet = true; m_worm = value; }
    inline CreateTapesRequest& WithWorm(bool value) { SetWorm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 50 tags that can be assigned to a virtual tape. Each tag is a
     * key-value pair.</p>  <p>Valid characters for key and value are letters,
     * spaces, and numbers representable in UTF-8 format, and the following special
     * characters: + - = . _ : / @. The maximum length of a tag's key is 128
     * characters, and the maximum length for a tag's value is 256.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateTapesRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateTapesRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateTapesRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateTapesRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet = false;

    long long m_tapeSizeInBytes;
    bool m_tapeSizeInBytesHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    int m_numTapesToCreate;
    bool m_numTapesToCreateHasBeenSet = false;

    Aws::String m_tapeBarcodePrefix;
    bool m_tapeBarcodePrefixHasBeenSet = false;

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
