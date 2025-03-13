/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/PostLaunchActionsDeploymentType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mgn/model/SsmDocument.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Post Launch Actions to executed on the Test or Cutover
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/PostLaunchActions">AWS
   * API Reference</a></p>
   */
  class PostLaunchActions
  {
  public:
    AWS_MGN_API PostLaunchActions() = default;
    AWS_MGN_API PostLaunchActions(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API PostLaunchActions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>AWS Systems Manager Command's CloudWatch log group name.</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupName() const { return m_cloudWatchLogGroupName; }
    inline bool CloudWatchLogGroupNameHasBeenSet() const { return m_cloudWatchLogGroupNameHasBeenSet; }
    template<typename CloudWatchLogGroupNameT = Aws::String>
    void SetCloudWatchLogGroupName(CloudWatchLogGroupNameT&& value) { m_cloudWatchLogGroupNameHasBeenSet = true; m_cloudWatchLogGroupName = std::forward<CloudWatchLogGroupNameT>(value); }
    template<typename CloudWatchLogGroupNameT = Aws::String>
    PostLaunchActions& WithCloudWatchLogGroupName(CloudWatchLogGroupNameT&& value) { SetCloudWatchLogGroupName(std::forward<CloudWatchLogGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deployment type in which AWS Systems Manager Documents will be executed.</p>
     */
    inline PostLaunchActionsDeploymentType GetDeployment() const { return m_deployment; }
    inline bool DeploymentHasBeenSet() const { return m_deploymentHasBeenSet; }
    inline void SetDeployment(PostLaunchActionsDeploymentType value) { m_deploymentHasBeenSet = true; m_deployment = value; }
    inline PostLaunchActions& WithDeployment(PostLaunchActionsDeploymentType value) { SetDeployment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Systems Manager Command's logs S3 log bucket.</p>
     */
    inline const Aws::String& GetS3LogBucket() const { return m_s3LogBucket; }
    inline bool S3LogBucketHasBeenSet() const { return m_s3LogBucketHasBeenSet; }
    template<typename S3LogBucketT = Aws::String>
    void SetS3LogBucket(S3LogBucketT&& value) { m_s3LogBucketHasBeenSet = true; m_s3LogBucket = std::forward<S3LogBucketT>(value); }
    template<typename S3LogBucketT = Aws::String>
    PostLaunchActions& WithS3LogBucket(S3LogBucketT&& value) { SetS3LogBucket(std::forward<S3LogBucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Systems Manager Command's logs S3 output key prefix.</p>
     */
    inline const Aws::String& GetS3OutputKeyPrefix() const { return m_s3OutputKeyPrefix; }
    inline bool S3OutputKeyPrefixHasBeenSet() const { return m_s3OutputKeyPrefixHasBeenSet; }
    template<typename S3OutputKeyPrefixT = Aws::String>
    void SetS3OutputKeyPrefix(S3OutputKeyPrefixT&& value) { m_s3OutputKeyPrefixHasBeenSet = true; m_s3OutputKeyPrefix = std::forward<S3OutputKeyPrefixT>(value); }
    template<typename S3OutputKeyPrefixT = Aws::String>
    PostLaunchActions& WithS3OutputKeyPrefix(S3OutputKeyPrefixT&& value) { SetS3OutputKeyPrefix(std::forward<S3OutputKeyPrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Systems Manager Documents.</p>
     */
    inline const Aws::Vector<SsmDocument>& GetSsmDocuments() const { return m_ssmDocuments; }
    inline bool SsmDocumentsHasBeenSet() const { return m_ssmDocumentsHasBeenSet; }
    template<typename SsmDocumentsT = Aws::Vector<SsmDocument>>
    void SetSsmDocuments(SsmDocumentsT&& value) { m_ssmDocumentsHasBeenSet = true; m_ssmDocuments = std::forward<SsmDocumentsT>(value); }
    template<typename SsmDocumentsT = Aws::Vector<SsmDocument>>
    PostLaunchActions& WithSsmDocuments(SsmDocumentsT&& value) { SetSsmDocuments(std::forward<SsmDocumentsT>(value)); return *this;}
    template<typename SsmDocumentsT = SsmDocument>
    PostLaunchActions& AddSsmDocuments(SsmDocumentsT&& value) { m_ssmDocumentsHasBeenSet = true; m_ssmDocuments.emplace_back(std::forward<SsmDocumentsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_cloudWatchLogGroupName;
    bool m_cloudWatchLogGroupNameHasBeenSet = false;

    PostLaunchActionsDeploymentType m_deployment{PostLaunchActionsDeploymentType::NOT_SET};
    bool m_deploymentHasBeenSet = false;

    Aws::String m_s3LogBucket;
    bool m_s3LogBucketHasBeenSet = false;

    Aws::String m_s3OutputKeyPrefix;
    bool m_s3OutputKeyPrefixHasBeenSet = false;

    Aws::Vector<SsmDocument> m_ssmDocuments;
    bool m_ssmDocumentsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
