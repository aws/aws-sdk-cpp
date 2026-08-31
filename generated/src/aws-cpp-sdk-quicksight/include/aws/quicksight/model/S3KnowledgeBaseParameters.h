/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>The parameters that are required to connect to an S3 knowledge base data
 * source.</p> <p> <b>Prerequisites: Amazon S3 bucket access</b> </p> <p>Before you
 * call <code>CreateKnowledgeBase</code> for an Amazon S3 knowledge base, an
 * administrator must grant Amazon QuickSight access to the source S3 bucket. If
 * access has not been granted for the bucket, knowledge base creation fails.</p>
 * <p>To grant access, an administrator adds the bucket in the Amazon QuickSight
 * admin console, under Permissions, Amazon Web Services resources, Amazon S3,
 * Select S3 buckets. This authorizes the Amazon QuickSight service role to read
 * the bucket. The bucket can be in the same Amazon Web Services account or, when
 * the bucket owner has authorized your account, in a different account.</p> <p>The
 * service role requires at least the following permissions on the bucket:</p> <ul>
 * <li> <p> <code>s3:GetObject</code> </p> </li> <li> <p>
 * <code>s3:ListBucket</code> </p> </li> <li> <p> <code>s3:GetBucketLocation</code>
 * </p> </li> <li> <p> <code>s3:GetObjectVersion</code> </p> </li> <li> <p>
 * <code>s3:ListBucketVersions</code> </p> </li> </ul> <p>For the full procedure,
 * including cross-account buckets and KMS-encrypted buckets, see the Amazon S3
 * knowledge base administrator setup guide.</p>  <p>To grant access for a
 * specific S3 knowledge base data source without granting account-wide S3 access,
 * provide a custom IAM role on the data source by using <code>RoleArn</code>.</p>
 * <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/S3KnowledgeBaseParameters">AWS
 * API Reference</a></p>
 */
class S3KnowledgeBaseParameters {
 public:
  AWS_QUICKSIGHT_API S3KnowledgeBaseParameters() = default;
  AWS_QUICKSIGHT_API S3KnowledgeBaseParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API S3KnowledgeBaseParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Use the <code>RoleArn</code> structure to override an account-wide role for a
   * specific S3 Knowledge Base data source. For example, say an account
   * administrator has turned off all S3 access with an account-wide role. The
   * administrator can then use <code>RoleArn</code> to bypass the account-wide role
   * and allow S3 access for the single S3 Knowledge Base data source that is
   * specified in the structure, even if the account-wide role forbidding S3 access
   * is still active.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  S3KnowledgeBaseParameters& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the S3 bucket that contains the knowledge base data.</p>
   */
  inline const Aws::String& GetBucketUrl() const { return m_bucketUrl; }
  inline bool BucketUrlHasBeenSet() const { return m_bucketUrlHasBeenSet; }
  template <typename BucketUrlT = Aws::String>
  void SetBucketUrl(BucketUrlT&& value) {
    m_bucketUrlHasBeenSet = true;
    m_bucketUrl = std::forward<BucketUrlT>(value);
  }
  template <typename BucketUrlT = Aws::String>
  S3KnowledgeBaseParameters& WithBucketUrl(BucketUrlT&& value) {
    SetBucketUrl(std::forward<BucketUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 location (prefix) of per-document metadata files. Each metadata
   * file describes a single source document and its indexable attributes, such as
   * title, category, and version. This is not the global ACL configuration file. To
   * apply a single global ACL file to the entire knowledge base, use the access
   * control configuration instead.</p>
   */
  inline const Aws::String& GetMetadataFilesLocation() const { return m_metadataFilesLocation; }
  inline bool MetadataFilesLocationHasBeenSet() const { return m_metadataFilesLocationHasBeenSet; }
  template <typename MetadataFilesLocationT = Aws::String>
  void SetMetadataFilesLocation(MetadataFilesLocationT&& value) {
    m_metadataFilesLocationHasBeenSet = true;
    m_metadataFilesLocation = std::forward<MetadataFilesLocationT>(value);
  }
  template <typename MetadataFilesLocationT = Aws::String>
  S3KnowledgeBaseParameters& WithMetadataFilesLocation(MetadataFilesLocationT&& value) {
    SetMetadataFilesLocation(std::forward<MetadataFilesLocationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_roleArn;

  Aws::String m_bucketUrl;

  Aws::String m_metadataFilesLocation;
  bool m_roleArnHasBeenSet = false;
  bool m_bucketUrlHasBeenSet = false;
  bool m_metadataFilesLocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
