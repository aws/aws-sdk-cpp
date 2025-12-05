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
 * <p>The parameters that are required to connect to a S3 Knowledge Base data
 * source.</p><p><h3>See Also:</h3>   <a
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
   * <p>The location of metadata files within the S3 bucket that describe the
   * structure and content of the knowledge base.</p>
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
