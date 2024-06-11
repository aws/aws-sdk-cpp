﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>The lifecycle configuration for a SageMaker HyperPod cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterLifeCycleConfig">AWS
   * API Reference</a></p>
   */
  class ClusterLifeCycleConfig
  {
  public:
    AWS_SAGEMAKER_API ClusterLifeCycleConfig();
    AWS_SAGEMAKER_API ClusterLifeCycleConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClusterLifeCycleConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon S3 bucket path where your lifecycle scripts are stored.</p>
     *  <p>Make sure that the S3 bucket path starts with
     * <code>s3://sagemaker-</code>. The <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/sagemaker-hyperpod-prerequisites.html#sagemaker-hyperpod-prerequisites-iam-role-for-hyperpod">IAM
     * role for SageMaker HyperPod</a> has the managed <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/security-iam-awsmanpol-cluster.html">
     * <code>AmazonSageMakerClusterInstanceRolePolicy</code> </a> attached, which
     * allows access to S3 buckets with the specific prefix
     * <code>sagemaker-</code>.</p> 
     */
    inline const Aws::String& GetSourceS3Uri() const{ return m_sourceS3Uri; }
    inline bool SourceS3UriHasBeenSet() const { return m_sourceS3UriHasBeenSet; }
    inline void SetSourceS3Uri(const Aws::String& value) { m_sourceS3UriHasBeenSet = true; m_sourceS3Uri = value; }
    inline void SetSourceS3Uri(Aws::String&& value) { m_sourceS3UriHasBeenSet = true; m_sourceS3Uri = std::move(value); }
    inline void SetSourceS3Uri(const char* value) { m_sourceS3UriHasBeenSet = true; m_sourceS3Uri.assign(value); }
    inline ClusterLifeCycleConfig& WithSourceS3Uri(const Aws::String& value) { SetSourceS3Uri(value); return *this;}
    inline ClusterLifeCycleConfig& WithSourceS3Uri(Aws::String&& value) { SetSourceS3Uri(std::move(value)); return *this;}
    inline ClusterLifeCycleConfig& WithSourceS3Uri(const char* value) { SetSourceS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file name of the entrypoint script of lifecycle scripts under
     * <code>SourceS3Uri</code>. This entrypoint script runs during cluster
     * creation.</p>
     */
    inline const Aws::String& GetOnCreate() const{ return m_onCreate; }
    inline bool OnCreateHasBeenSet() const { return m_onCreateHasBeenSet; }
    inline void SetOnCreate(const Aws::String& value) { m_onCreateHasBeenSet = true; m_onCreate = value; }
    inline void SetOnCreate(Aws::String&& value) { m_onCreateHasBeenSet = true; m_onCreate = std::move(value); }
    inline void SetOnCreate(const char* value) { m_onCreateHasBeenSet = true; m_onCreate.assign(value); }
    inline ClusterLifeCycleConfig& WithOnCreate(const Aws::String& value) { SetOnCreate(value); return *this;}
    inline ClusterLifeCycleConfig& WithOnCreate(Aws::String&& value) { SetOnCreate(std::move(value)); return *this;}
    inline ClusterLifeCycleConfig& WithOnCreate(const char* value) { SetOnCreate(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceS3Uri;
    bool m_sourceS3UriHasBeenSet = false;

    Aws::String m_onCreate;
    bool m_onCreateHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
