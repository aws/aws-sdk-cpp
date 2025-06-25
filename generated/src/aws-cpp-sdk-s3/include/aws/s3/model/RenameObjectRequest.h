/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/S3Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace S3
{
namespace Model
{

  /**
   */
  class RenameObjectRequest : public S3Request
  {
  public:
    AWS_S3_API RenameObjectRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RenameObject"; }

    AWS_S3_API Aws::String SerializePayload() const override;

    AWS_S3_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_S3_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The bucket name of the directory bucket containing the object.</p> <p> You
     * must use virtual-hosted-style requests in the format
     * <code>Bucket-name.s3express-zone-id.region-code.amazonaws.com</code>. Path-style
     * requests are not supported. Directory bucket names must be unique in the chosen
     * Availability Zone. Bucket names must follow the format
     * <code>bucket-base-name--zone-id--x-s3 </code> (for example,
     * <code>amzn-s3-demo-bucket--usw2-az1--x-s3</code>). For information about bucket
     * naming restrictions, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/directory-bucket-naming-rules.html">Directory
     * bucket naming rules</a> in the <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    RenameObjectRequest& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key name of the object to rename.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    RenameObjectRequest& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the source for the rename operation. The value must be URL
     * encoded.</p>
     */
    inline const Aws::String& GetRenameSource() const { return m_renameSource; }
    inline bool RenameSourceHasBeenSet() const { return m_renameSourceHasBeenSet; }
    template<typename RenameSourceT = Aws::String>
    void SetRenameSource(RenameSourceT&& value) { m_renameSourceHasBeenSet = true; m_renameSource = std::forward<RenameSourceT>(value); }
    template<typename RenameSourceT = Aws::String>
    RenameObjectRequest& WithRenameSource(RenameSourceT&& value) { SetRenameSource(std::forward<RenameSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Renames the object only if the ETag (entity tag) value provided during the
     * operation matches the ETag of the object in S3. The <code>If-Match</code> header
     * field makes the request method conditional on ETags. If the ETag values do not
     * match, the operation returns a <code>412 Precondition Failed</code> error.</p>
     * <p>Expects the ETag value as a string.</p>
     */
    inline const Aws::String& GetDestinationIfMatch() const { return m_destinationIfMatch; }
    inline bool DestinationIfMatchHasBeenSet() const { return m_destinationIfMatchHasBeenSet; }
    template<typename DestinationIfMatchT = Aws::String>
    void SetDestinationIfMatch(DestinationIfMatchT&& value) { m_destinationIfMatchHasBeenSet = true; m_destinationIfMatch = std::forward<DestinationIfMatchT>(value); }
    template<typename DestinationIfMatchT = Aws::String>
    RenameObjectRequest& WithDestinationIfMatch(DestinationIfMatchT&& value) { SetDestinationIfMatch(std::forward<DestinationIfMatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Renames the object only if the destination does not already exist in the
     * specified directory bucket. If the object does exist when you send a request
     * with <code>If-None-Match:*</code>, the S3 API will return a <code>412
     * Precondition Failed</code> error, preventing an overwrite. The
     * <code>If-None-Match</code> header prevents overwrites of existing data by
     * validating that there's not an object with the same key name already in your
     * directory bucket.</p> <p> Expects the <code>*</code> character (asterisk).</p>
     */
    inline const Aws::String& GetDestinationIfNoneMatch() const { return m_destinationIfNoneMatch; }
    inline bool DestinationIfNoneMatchHasBeenSet() const { return m_destinationIfNoneMatchHasBeenSet; }
    template<typename DestinationIfNoneMatchT = Aws::String>
    void SetDestinationIfNoneMatch(DestinationIfNoneMatchT&& value) { m_destinationIfNoneMatchHasBeenSet = true; m_destinationIfNoneMatch = std::forward<DestinationIfNoneMatchT>(value); }
    template<typename DestinationIfNoneMatchT = Aws::String>
    RenameObjectRequest& WithDestinationIfNoneMatch(DestinationIfNoneMatchT&& value) { SetDestinationIfNoneMatch(std::forward<DestinationIfNoneMatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Renames the object if the destination exists and if it has been modified
     * since the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetDestinationIfModifiedSince() const { return m_destinationIfModifiedSince; }
    inline bool DestinationIfModifiedSinceHasBeenSet() const { return m_destinationIfModifiedSinceHasBeenSet; }
    template<typename DestinationIfModifiedSinceT = Aws::Utils::DateTime>
    void SetDestinationIfModifiedSince(DestinationIfModifiedSinceT&& value) { m_destinationIfModifiedSinceHasBeenSet = true; m_destinationIfModifiedSince = std::forward<DestinationIfModifiedSinceT>(value); }
    template<typename DestinationIfModifiedSinceT = Aws::Utils::DateTime>
    RenameObjectRequest& WithDestinationIfModifiedSince(DestinationIfModifiedSinceT&& value) { SetDestinationIfModifiedSince(std::forward<DestinationIfModifiedSinceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Renames the object if it hasn't been modified since the specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetDestinationIfUnmodifiedSince() const { return m_destinationIfUnmodifiedSince; }
    inline bool DestinationIfUnmodifiedSinceHasBeenSet() const { return m_destinationIfUnmodifiedSinceHasBeenSet; }
    template<typename DestinationIfUnmodifiedSinceT = Aws::Utils::DateTime>
    void SetDestinationIfUnmodifiedSince(DestinationIfUnmodifiedSinceT&& value) { m_destinationIfUnmodifiedSinceHasBeenSet = true; m_destinationIfUnmodifiedSince = std::forward<DestinationIfUnmodifiedSinceT>(value); }
    template<typename DestinationIfUnmodifiedSinceT = Aws::Utils::DateTime>
    RenameObjectRequest& WithDestinationIfUnmodifiedSince(DestinationIfUnmodifiedSinceT&& value) { SetDestinationIfUnmodifiedSince(std::forward<DestinationIfUnmodifiedSinceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Renames the object if the source exists and if its entity tag (ETag) matches
     * the specified ETag. </p>
     */
    inline const Aws::String& GetSourceIfMatch() const { return m_sourceIfMatch; }
    inline bool SourceIfMatchHasBeenSet() const { return m_sourceIfMatchHasBeenSet; }
    template<typename SourceIfMatchT = Aws::String>
    void SetSourceIfMatch(SourceIfMatchT&& value) { m_sourceIfMatchHasBeenSet = true; m_sourceIfMatch = std::forward<SourceIfMatchT>(value); }
    template<typename SourceIfMatchT = Aws::String>
    RenameObjectRequest& WithSourceIfMatch(SourceIfMatchT&& value) { SetSourceIfMatch(std::forward<SourceIfMatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Renames the object if the source exists and if its entity tag (ETag) is
     * different than the specified ETag. If an asterisk (<code>*</code>) character is
     * provided, the operation will fail and return a <code>412 Precondition
     * Failed</code> error. </p>
     */
    inline const Aws::String& GetSourceIfNoneMatch() const { return m_sourceIfNoneMatch; }
    inline bool SourceIfNoneMatchHasBeenSet() const { return m_sourceIfNoneMatchHasBeenSet; }
    template<typename SourceIfNoneMatchT = Aws::String>
    void SetSourceIfNoneMatch(SourceIfNoneMatchT&& value) { m_sourceIfNoneMatchHasBeenSet = true; m_sourceIfNoneMatch = std::forward<SourceIfNoneMatchT>(value); }
    template<typename SourceIfNoneMatchT = Aws::String>
    RenameObjectRequest& WithSourceIfNoneMatch(SourceIfNoneMatchT&& value) { SetSourceIfNoneMatch(std::forward<SourceIfNoneMatchT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Renames the object if the source exists and if it has been modified since the
     * specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetSourceIfModifiedSince() const { return m_sourceIfModifiedSince; }
    inline bool SourceIfModifiedSinceHasBeenSet() const { return m_sourceIfModifiedSinceHasBeenSet; }
    template<typename SourceIfModifiedSinceT = Aws::Utils::DateTime>
    void SetSourceIfModifiedSince(SourceIfModifiedSinceT&& value) { m_sourceIfModifiedSinceHasBeenSet = true; m_sourceIfModifiedSince = std::forward<SourceIfModifiedSinceT>(value); }
    template<typename SourceIfModifiedSinceT = Aws::Utils::DateTime>
    RenameObjectRequest& WithSourceIfModifiedSince(SourceIfModifiedSinceT&& value) { SetSourceIfModifiedSince(std::forward<SourceIfModifiedSinceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Renames the object if the source exists and hasn't been modified since the
     * specified time.</p>
     */
    inline const Aws::Utils::DateTime& GetSourceIfUnmodifiedSince() const { return m_sourceIfUnmodifiedSince; }
    inline bool SourceIfUnmodifiedSinceHasBeenSet() const { return m_sourceIfUnmodifiedSinceHasBeenSet; }
    template<typename SourceIfUnmodifiedSinceT = Aws::Utils::DateTime>
    void SetSourceIfUnmodifiedSince(SourceIfUnmodifiedSinceT&& value) { m_sourceIfUnmodifiedSinceHasBeenSet = true; m_sourceIfUnmodifiedSince = std::forward<SourceIfUnmodifiedSinceT>(value); }
    template<typename SourceIfUnmodifiedSinceT = Aws::Utils::DateTime>
    RenameObjectRequest& WithSourceIfUnmodifiedSince(SourceIfUnmodifiedSinceT&& value) { SetSourceIfUnmodifiedSince(std::forward<SourceIfUnmodifiedSinceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A unique string with a max of 64 ASCII characters in the ASCII range of 33 -
     * 126.</p>  <p> <code>RenameObject</code> supports idempotency using a
     * client token. To make an idempotent API request using <code>RenameObject</code>,
     * specify a client token in the request. You should not reuse the same client
     * token for other API requests. If you retry a request that completed successfully
     * using the same client token and the same parameters, the retry succeeds without
     * performing any further actions. If you retry a successful request using the same
     * client token, but one or more of the parameters are different, the retry fails
     * and an <code>IdempotentParameterMismatch</code> error is returned. </p> 
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    RenameObjectRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomizedAccessLogTag() const { return m_customizedAccessLogTag; }
    inline bool CustomizedAccessLogTagHasBeenSet() const { return m_customizedAccessLogTagHasBeenSet; }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag = std::forward<CustomizedAccessLogTagT>(value); }
    template<typename CustomizedAccessLogTagT = Aws::Map<Aws::String, Aws::String>>
    RenameObjectRequest& WithCustomizedAccessLogTag(CustomizedAccessLogTagT&& value) { SetCustomizedAccessLogTag(std::forward<CustomizedAccessLogTagT>(value)); return *this;}
    template<typename CustomizedAccessLogTagKeyT = Aws::String, typename CustomizedAccessLogTagValueT = Aws::String>
    RenameObjectRequest& AddCustomizedAccessLogTag(CustomizedAccessLogTagKeyT&& key, CustomizedAccessLogTagValueT&& value) {
      m_customizedAccessLogTagHasBeenSet = true; m_customizedAccessLogTag.emplace(std::forward<CustomizedAccessLogTagKeyT>(key), std::forward<CustomizedAccessLogTagValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_renameSource;
    bool m_renameSourceHasBeenSet = false;

    Aws::String m_destinationIfMatch;
    bool m_destinationIfMatchHasBeenSet = false;

    Aws::String m_destinationIfNoneMatch;
    bool m_destinationIfNoneMatchHasBeenSet = false;

    Aws::Utils::DateTime m_destinationIfModifiedSince{};
    bool m_destinationIfModifiedSinceHasBeenSet = false;

    Aws::Utils::DateTime m_destinationIfUnmodifiedSince{};
    bool m_destinationIfUnmodifiedSinceHasBeenSet = false;

    Aws::String m_sourceIfMatch;
    bool m_sourceIfMatchHasBeenSet = false;

    Aws::String m_sourceIfNoneMatch;
    bool m_sourceIfNoneMatchHasBeenSet = false;

    Aws::Utils::DateTime m_sourceIfModifiedSince{};
    bool m_sourceIfModifiedSinceHasBeenSet = false;

    Aws::Utils::DateTime m_sourceIfUnmodifiedSince{};
    bool m_sourceIfUnmodifiedSinceHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_customizedAccessLogTag;
    bool m_customizedAccessLogTagHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
