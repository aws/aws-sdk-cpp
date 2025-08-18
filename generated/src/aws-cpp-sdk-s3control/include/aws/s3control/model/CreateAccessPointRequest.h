/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/S3ControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/VpcConfiguration.h>
#include <aws/s3control/model/PublicAccessBlockConfiguration.h>
#include <aws/s3control/model/Scope.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3control/model/Tag.h>
#include <utility>

namespace Aws
{
namespace S3Control
{
namespace Model
{

  /**
   */
  class CreateAccessPointRequest : public S3ControlRequest
  {
  public:
    AWS_S3CONTROL_API CreateAccessPointRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAccessPoint"; }

    AWS_S3CONTROL_API Aws::String SerializePayload() const override;

    AWS_S3CONTROL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
     */
    AWS_S3CONTROL_API EndpointParameters GetEndpointContextParams() const override;

    ///@{
    /**
     * <p>The Amazon Web Services account ID for the account that owns the specified
     * access point.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    CreateAccessPointRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name you want to assign to this access point.</p> <p>For directory
     * buckets, the access point name must consist of a base name that you provide and
     * suffix that includes the <code>ZoneID</code> (Amazon Web Services Availability
     * Zone or Local Zone) of your bucket location, followed by <code>--xa-s3</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points-directory-buckets.html">Managing
     * access to shared datasets in directory buckets with access points</a> in the
     * <i>Amazon S3 User Guide</i>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateAccessPointRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bucket that you want to associate this access point with.</p>
     * <p>For using this parameter with Amazon S3 on Outposts with the REST API, you
     * must specify the name and the x-amz-outpost-id as well.</p> <p>For using this
     * parameter with S3 on Outposts with the Amazon Web Services SDK and CLI, you must
     * specify the ARN of the bucket accessed in the format
     * <code>arn:aws:s3-outposts:&lt;Region&gt;:&lt;account-id&gt;:outpost/&lt;outpost-id&gt;/bucket/&lt;my-bucket-name&gt;</code>.
     * For example, to access the bucket <code>reports</code> through Outpost
     * <code>my-outpost</code> owned by account <code>123456789012</code> in Region
     * <code>us-west-2</code>, use the URL encoding of
     * <code>arn:aws:s3-outposts:us-west-2:123456789012:outpost/my-outpost/bucket/reports</code>.
     * The value must be URL encoded. </p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    CreateAccessPointRequest& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you include this field, Amazon S3 restricts access to this access point to
     * requests from the specified virtual private cloud (VPC).</p>  <p>This is
     * required for creating an access point for Amazon S3 on Outposts buckets.</p>
     * 
     */
    inline const VpcConfiguration& GetVpcConfiguration() const { return m_vpcConfiguration; }
    inline bool VpcConfigurationHasBeenSet() const { return m_vpcConfigurationHasBeenSet; }
    template<typename VpcConfigurationT = VpcConfiguration>
    void SetVpcConfiguration(VpcConfigurationT&& value) { m_vpcConfigurationHasBeenSet = true; m_vpcConfiguration = std::forward<VpcConfigurationT>(value); }
    template<typename VpcConfigurationT = VpcConfiguration>
    CreateAccessPointRequest& WithVpcConfiguration(VpcConfigurationT&& value) { SetVpcConfiguration(std::forward<VpcConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The <code>PublicAccessBlock</code> configuration that you want to apply to
     * the access point. </p>
     */
    inline const PublicAccessBlockConfiguration& GetPublicAccessBlockConfiguration() const { return m_publicAccessBlockConfiguration; }
    inline bool PublicAccessBlockConfigurationHasBeenSet() const { return m_publicAccessBlockConfigurationHasBeenSet; }
    template<typename PublicAccessBlockConfigurationT = PublicAccessBlockConfiguration>
    void SetPublicAccessBlockConfiguration(PublicAccessBlockConfigurationT&& value) { m_publicAccessBlockConfigurationHasBeenSet = true; m_publicAccessBlockConfiguration = std::forward<PublicAccessBlockConfigurationT>(value); }
    template<typename PublicAccessBlockConfigurationT = PublicAccessBlockConfiguration>
    CreateAccessPointRequest& WithPublicAccessBlockConfiguration(PublicAccessBlockConfigurationT&& value) { SetPublicAccessBlockConfiguration(std::forward<PublicAccessBlockConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the S3 bucket associated
     * with this access point.</p> <p>For same account access point when your bucket
     * and access point belong to the same account owner, the
     * <code>BucketAccountId</code> is not required. For cross-account access point
     * when your bucket and access point are not in the same account, the
     * <code>BucketAccountId</code> is required. </p>
     */
    inline const Aws::String& GetBucketAccountId() const { return m_bucketAccountId; }
    inline bool BucketAccountIdHasBeenSet() const { return m_bucketAccountIdHasBeenSet; }
    template<typename BucketAccountIdT = Aws::String>
    void SetBucketAccountId(BucketAccountIdT&& value) { m_bucketAccountIdHasBeenSet = true; m_bucketAccountId = std::forward<BucketAccountIdT>(value); }
    template<typename BucketAccountIdT = Aws::String>
    CreateAccessPointRequest& WithBucketAccountId(BucketAccountIdT&& value) { SetBucketAccountId(std::forward<BucketAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For directory buckets, you can filter access control to specific prefixes,
     * API operations, or a combination of both. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/access-points-directory-buckets.html">Managing
     * access to shared datasets in directory buckets with access points</a> in the
     * <i>Amazon S3 User Guide</i>.</p>  <p>Scope is only supported for access
     * points attached to directory buckets.</p> 
     */
    inline const Scope& GetScope() const { return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    template<typename ScopeT = Scope>
    void SetScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope = std::forward<ScopeT>(value); }
    template<typename ScopeT = Scope>
    CreateAccessPointRequest& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of tags that you can apply to an access point. Tags are key-value
     * pairs of metadata used to control access to your access points. For more
     * information about tags, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/tagging.html">Using
     * tags with Amazon S3</a>. For information about tagging access points, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/tagging.html#using-tags-for-abac">Using
     * tags for attribute-based access control (ABAC)</a>.</p>  <ul> <li> <p>You
     * must have the <code>s3:TagResource</code> permission to create an access point
     * with tags for a general purpose bucket. </p> </li> <li> <p>You must have the
     * <code>s3express:TagResource</code> permission to create an access point with
     * tags for a directory bucket.</p> </li> </ul> 
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateAccessPointRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateAccessPointRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    VpcConfiguration m_vpcConfiguration;
    bool m_vpcConfigurationHasBeenSet = false;

    PublicAccessBlockConfiguration m_publicAccessBlockConfiguration;
    bool m_publicAccessBlockConfigurationHasBeenSet = false;

    Aws::String m_bucketAccountId;
    bool m_bucketAccountIdHasBeenSet = false;

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
