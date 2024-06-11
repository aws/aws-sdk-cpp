﻿/**
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
    AWS_MGN_API PostLaunchActions();
    AWS_MGN_API PostLaunchActions(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API PostLaunchActions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>AWS Systems Manager Command's CloudWatch log group name.</p>
     */
    inline const Aws::String& GetCloudWatchLogGroupName() const{ return m_cloudWatchLogGroupName; }
    inline bool CloudWatchLogGroupNameHasBeenSet() const { return m_cloudWatchLogGroupNameHasBeenSet; }
    inline void SetCloudWatchLogGroupName(const Aws::String& value) { m_cloudWatchLogGroupNameHasBeenSet = true; m_cloudWatchLogGroupName = value; }
    inline void SetCloudWatchLogGroupName(Aws::String&& value) { m_cloudWatchLogGroupNameHasBeenSet = true; m_cloudWatchLogGroupName = std::move(value); }
    inline void SetCloudWatchLogGroupName(const char* value) { m_cloudWatchLogGroupNameHasBeenSet = true; m_cloudWatchLogGroupName.assign(value); }
    inline PostLaunchActions& WithCloudWatchLogGroupName(const Aws::String& value) { SetCloudWatchLogGroupName(value); return *this;}
    inline PostLaunchActions& WithCloudWatchLogGroupName(Aws::String&& value) { SetCloudWatchLogGroupName(std::move(value)); return *this;}
    inline PostLaunchActions& WithCloudWatchLogGroupName(const char* value) { SetCloudWatchLogGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Deployment type in which AWS Systems Manager Documents will be executed.</p>
     */
    inline const PostLaunchActionsDeploymentType& GetDeployment() const{ return m_deployment; }
    inline bool DeploymentHasBeenSet() const { return m_deploymentHasBeenSet; }
    inline void SetDeployment(const PostLaunchActionsDeploymentType& value) { m_deploymentHasBeenSet = true; m_deployment = value; }
    inline void SetDeployment(PostLaunchActionsDeploymentType&& value) { m_deploymentHasBeenSet = true; m_deployment = std::move(value); }
    inline PostLaunchActions& WithDeployment(const PostLaunchActionsDeploymentType& value) { SetDeployment(value); return *this;}
    inline PostLaunchActions& WithDeployment(PostLaunchActionsDeploymentType&& value) { SetDeployment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Systems Manager Command's logs S3 log bucket.</p>
     */
    inline const Aws::String& GetS3LogBucket() const{ return m_s3LogBucket; }
    inline bool S3LogBucketHasBeenSet() const { return m_s3LogBucketHasBeenSet; }
    inline void SetS3LogBucket(const Aws::String& value) { m_s3LogBucketHasBeenSet = true; m_s3LogBucket = value; }
    inline void SetS3LogBucket(Aws::String&& value) { m_s3LogBucketHasBeenSet = true; m_s3LogBucket = std::move(value); }
    inline void SetS3LogBucket(const char* value) { m_s3LogBucketHasBeenSet = true; m_s3LogBucket.assign(value); }
    inline PostLaunchActions& WithS3LogBucket(const Aws::String& value) { SetS3LogBucket(value); return *this;}
    inline PostLaunchActions& WithS3LogBucket(Aws::String&& value) { SetS3LogBucket(std::move(value)); return *this;}
    inline PostLaunchActions& WithS3LogBucket(const char* value) { SetS3LogBucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Systems Manager Command's logs S3 output key prefix.</p>
     */
    inline const Aws::String& GetS3OutputKeyPrefix() const{ return m_s3OutputKeyPrefix; }
    inline bool S3OutputKeyPrefixHasBeenSet() const { return m_s3OutputKeyPrefixHasBeenSet; }
    inline void SetS3OutputKeyPrefix(const Aws::String& value) { m_s3OutputKeyPrefixHasBeenSet = true; m_s3OutputKeyPrefix = value; }
    inline void SetS3OutputKeyPrefix(Aws::String&& value) { m_s3OutputKeyPrefixHasBeenSet = true; m_s3OutputKeyPrefix = std::move(value); }
    inline void SetS3OutputKeyPrefix(const char* value) { m_s3OutputKeyPrefixHasBeenSet = true; m_s3OutputKeyPrefix.assign(value); }
    inline PostLaunchActions& WithS3OutputKeyPrefix(const Aws::String& value) { SetS3OutputKeyPrefix(value); return *this;}
    inline PostLaunchActions& WithS3OutputKeyPrefix(Aws::String&& value) { SetS3OutputKeyPrefix(std::move(value)); return *this;}
    inline PostLaunchActions& WithS3OutputKeyPrefix(const char* value) { SetS3OutputKeyPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Systems Manager Documents.</p>
     */
    inline const Aws::Vector<SsmDocument>& GetSsmDocuments() const{ return m_ssmDocuments; }
    inline bool SsmDocumentsHasBeenSet() const { return m_ssmDocumentsHasBeenSet; }
    inline void SetSsmDocuments(const Aws::Vector<SsmDocument>& value) { m_ssmDocumentsHasBeenSet = true; m_ssmDocuments = value; }
    inline void SetSsmDocuments(Aws::Vector<SsmDocument>&& value) { m_ssmDocumentsHasBeenSet = true; m_ssmDocuments = std::move(value); }
    inline PostLaunchActions& WithSsmDocuments(const Aws::Vector<SsmDocument>& value) { SetSsmDocuments(value); return *this;}
    inline PostLaunchActions& WithSsmDocuments(Aws::Vector<SsmDocument>&& value) { SetSsmDocuments(std::move(value)); return *this;}
    inline PostLaunchActions& AddSsmDocuments(const SsmDocument& value) { m_ssmDocumentsHasBeenSet = true; m_ssmDocuments.push_back(value); return *this; }
    inline PostLaunchActions& AddSsmDocuments(SsmDocument&& value) { m_ssmDocumentsHasBeenSet = true; m_ssmDocuments.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_cloudWatchLogGroupName;
    bool m_cloudWatchLogGroupNameHasBeenSet = false;

    PostLaunchActionsDeploymentType m_deployment;
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
