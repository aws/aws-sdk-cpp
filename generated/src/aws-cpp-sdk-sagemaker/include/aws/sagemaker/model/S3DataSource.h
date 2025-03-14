﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/S3DataType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/S3DataDistribution.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ModelAccessConfig.h>
#include <aws/sagemaker/model/HubAccessConfig.h>
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
   * <p>Describes the S3 data source.</p> <p>Your input bucket must be in the same
   * Amazon Web Services region as your training job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/S3DataSource">AWS
   * API Reference</a></p>
   */
  class S3DataSource
  {
  public:
    AWS_SAGEMAKER_API S3DataSource();
    AWS_SAGEMAKER_API S3DataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API S3DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If you choose <code>S3Prefix</code>, <code>S3Uri</code> identifies a key name
     * prefix. SageMaker uses all objects that match the specified key name prefix for
     * model training. </p> <p>If you choose <code>ManifestFile</code>,
     * <code>S3Uri</code> identifies an object that is a manifest file containing a
     * list of object keys that you want SageMaker to use for model training. </p>
     * <p>If you choose <code>AugmentedManifestFile</code>, <code>S3Uri</code>
     * identifies an object that is an augmented manifest file in JSON lines format.
     * This file contains the data you want to use for model training.
     * <code>AugmentedManifestFile</code> can only be used if the Channel's input mode
     * is <code>Pipe</code>.</p>
     */
    inline const S3DataType& GetS3DataType() const{ return m_s3DataType; }
    inline bool S3DataTypeHasBeenSet() const { return m_s3DataTypeHasBeenSet; }
    inline void SetS3DataType(const S3DataType& value) { m_s3DataTypeHasBeenSet = true; m_s3DataType = value; }
    inline void SetS3DataType(S3DataType&& value) { m_s3DataTypeHasBeenSet = true; m_s3DataType = std::move(value); }
    inline S3DataSource& WithS3DataType(const S3DataType& value) { SetS3DataType(value); return *this;}
    inline S3DataSource& WithS3DataType(S3DataType&& value) { SetS3DataType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Depending on the value specified for the <code>S3DataType</code>, identifies
     * either a key name prefix or a manifest. For example: </p> <ul> <li> <p> A key
     * name prefix might look like this: <code>s3://bucketname/exampleprefix/</code>
     * </p> </li> <li> <p> A manifest might look like this:
     * <code>s3://bucketname/example.manifest</code> </p> <p> A manifest is an S3
     * object which is a JSON file consisting of an array of elements. The first
     * element is a prefix which is followed by one or more suffixes. SageMaker appends
     * the suffix elements to the prefix to get a full set of <code>S3Uri</code>. Note
     * that the prefix must be a valid non-empty <code>S3Uri</code> that precludes
     * users from specifying a manifest whose individual <code>S3Uri</code> is sourced
     * from different S3 buckets.</p> <p> The following code example shows a valid
     * manifest format: </p> <p> <code>[ {"prefix":
     * "s3://customer_bucket/some/prefix/"},</code> </p> <p> <code>
     * "relative/path/to/custdata-1",</code> </p> <p> <code>
     * "relative/path/custdata-2",</code> </p> <p> <code> ...</code> </p> <p> <code>
     * "relative/path/custdata-N"</code> </p> <p> <code>]</code> </p> <p> This JSON is
     * equivalent to the following <code>S3Uri</code> list:</p> <p>
     * <code>s3://customer_bucket/some/prefix/relative/path/to/custdata-1</code> </p>
     * <p> <code>s3://customer_bucket/some/prefix/relative/path/custdata-2</code> </p>
     * <p> <code>...</code> </p> <p>
     * <code>s3://customer_bucket/some/prefix/relative/path/custdata-N</code> </p>
     * <p>The complete set of <code>S3Uri</code> in this manifest is the input data for
     * the channel for this data source. The object that each <code>S3Uri</code> points
     * to must be readable by the IAM role that SageMaker uses to perform tasks on your
     * behalf. </p> </li> </ul> <p>Your input bucket must be located in same Amazon Web
     * Services region as your training job.</p>
     */
    inline const Aws::String& GetS3Uri() const{ return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    inline void SetS3Uri(const Aws::String& value) { m_s3UriHasBeenSet = true; m_s3Uri = value; }
    inline void SetS3Uri(Aws::String&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::move(value); }
    inline void SetS3Uri(const char* value) { m_s3UriHasBeenSet = true; m_s3Uri.assign(value); }
    inline S3DataSource& WithS3Uri(const Aws::String& value) { SetS3Uri(value); return *this;}
    inline S3DataSource& WithS3Uri(Aws::String&& value) { SetS3Uri(std::move(value)); return *this;}
    inline S3DataSource& WithS3Uri(const char* value) { SetS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If you want SageMaker to replicate the entire dataset on each ML compute
     * instance that is launched for model training, specify
     * <code>FullyReplicated</code>. </p> <p>If you want SageMaker to replicate a
     * subset of data on each ML compute instance that is launched for model training,
     * specify <code>ShardedByS3Key</code>. If there are <i>n</i> ML compute instances
     * launched for a training job, each instance gets approximately 1/<i>n</i> of the
     * number of S3 objects. In this case, model training on each machine uses only the
     * subset of training data. </p> <p>Don't choose more ML compute instances for
     * training than available S3 objects. If you do, some nodes won't get any data and
     * you will pay for nodes that aren't getting any training data. This applies in
     * both File and Pipe modes. Keep this in mind when developing algorithms. </p>
     * <p>In distributed training, where you use multiple ML compute EC2 instances, you
     * might choose <code>ShardedByS3Key</code>. If the algorithm requires copying
     * training data to the ML storage volume (when <code>TrainingInputMode</code> is
     * set to <code>File</code>), this copies 1/<i>n</i> of the number of objects. </p>
     */
    inline const S3DataDistribution& GetS3DataDistributionType() const{ return m_s3DataDistributionType; }
    inline bool S3DataDistributionTypeHasBeenSet() const { return m_s3DataDistributionTypeHasBeenSet; }
    inline void SetS3DataDistributionType(const S3DataDistribution& value) { m_s3DataDistributionTypeHasBeenSet = true; m_s3DataDistributionType = value; }
    inline void SetS3DataDistributionType(S3DataDistribution&& value) { m_s3DataDistributionTypeHasBeenSet = true; m_s3DataDistributionType = std::move(value); }
    inline S3DataSource& WithS3DataDistributionType(const S3DataDistribution& value) { SetS3DataDistributionType(value); return *this;}
    inline S3DataSource& WithS3DataDistributionType(S3DataDistribution&& value) { SetS3DataDistributionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one or more attribute names to use that are found in a specified
     * augmented manifest file.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributeNames() const{ return m_attributeNames; }
    inline bool AttributeNamesHasBeenSet() const { return m_attributeNamesHasBeenSet; }
    inline void SetAttributeNames(const Aws::Vector<Aws::String>& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = value; }
    inline void SetAttributeNames(Aws::Vector<Aws::String>&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = std::move(value); }
    inline S3DataSource& WithAttributeNames(const Aws::Vector<Aws::String>& value) { SetAttributeNames(value); return *this;}
    inline S3DataSource& WithAttributeNames(Aws::Vector<Aws::String>&& value) { SetAttributeNames(std::move(value)); return *this;}
    inline S3DataSource& AddAttributeNames(const Aws::String& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }
    inline S3DataSource& AddAttributeNames(Aws::String&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(std::move(value)); return *this; }
    inline S3DataSource& AddAttributeNames(const char* value) { m_attributeNamesHasBeenSet = true; m_attributeNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of names of instance groups that get data from the S3 data source.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceGroupNames() const{ return m_instanceGroupNames; }
    inline bool InstanceGroupNamesHasBeenSet() const { return m_instanceGroupNamesHasBeenSet; }
    inline void SetInstanceGroupNames(const Aws::Vector<Aws::String>& value) { m_instanceGroupNamesHasBeenSet = true; m_instanceGroupNames = value; }
    inline void SetInstanceGroupNames(Aws::Vector<Aws::String>&& value) { m_instanceGroupNamesHasBeenSet = true; m_instanceGroupNames = std::move(value); }
    inline S3DataSource& WithInstanceGroupNames(const Aws::Vector<Aws::String>& value) { SetInstanceGroupNames(value); return *this;}
    inline S3DataSource& WithInstanceGroupNames(Aws::Vector<Aws::String>&& value) { SetInstanceGroupNames(std::move(value)); return *this;}
    inline S3DataSource& AddInstanceGroupNames(const Aws::String& value) { m_instanceGroupNamesHasBeenSet = true; m_instanceGroupNames.push_back(value); return *this; }
    inline S3DataSource& AddInstanceGroupNames(Aws::String&& value) { m_instanceGroupNamesHasBeenSet = true; m_instanceGroupNames.push_back(std::move(value)); return *this; }
    inline S3DataSource& AddInstanceGroupNames(const char* value) { m_instanceGroupNamesHasBeenSet = true; m_instanceGroupNames.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const ModelAccessConfig& GetModelAccessConfig() const{ return m_modelAccessConfig; }
    inline bool ModelAccessConfigHasBeenSet() const { return m_modelAccessConfigHasBeenSet; }
    inline void SetModelAccessConfig(const ModelAccessConfig& value) { m_modelAccessConfigHasBeenSet = true; m_modelAccessConfig = value; }
    inline void SetModelAccessConfig(ModelAccessConfig&& value) { m_modelAccessConfigHasBeenSet = true; m_modelAccessConfig = std::move(value); }
    inline S3DataSource& WithModelAccessConfig(const ModelAccessConfig& value) { SetModelAccessConfig(value); return *this;}
    inline S3DataSource& WithModelAccessConfig(ModelAccessConfig&& value) { SetModelAccessConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a private hub model reference that points to a
     * SageMaker JumpStart public hub model.</p>
     */
    inline const HubAccessConfig& GetHubAccessConfig() const{ return m_hubAccessConfig; }
    inline bool HubAccessConfigHasBeenSet() const { return m_hubAccessConfigHasBeenSet; }
    inline void SetHubAccessConfig(const HubAccessConfig& value) { m_hubAccessConfigHasBeenSet = true; m_hubAccessConfig = value; }
    inline void SetHubAccessConfig(HubAccessConfig&& value) { m_hubAccessConfigHasBeenSet = true; m_hubAccessConfig = std::move(value); }
    inline S3DataSource& WithHubAccessConfig(const HubAccessConfig& value) { SetHubAccessConfig(value); return *this;}
    inline S3DataSource& WithHubAccessConfig(HubAccessConfig&& value) { SetHubAccessConfig(std::move(value)); return *this;}
    ///@}
  private:

    S3DataType m_s3DataType;
    bool m_s3DataTypeHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    S3DataDistribution m_s3DataDistributionType;
    bool m_s3DataDistributionTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributeNames;
    bool m_attributeNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceGroupNames;
    bool m_instanceGroupNamesHasBeenSet = false;

    ModelAccessConfig m_modelAccessConfig;
    bool m_modelAccessConfigHasBeenSet = false;

    HubAccessConfig m_hubAccessConfig;
    bool m_hubAccessConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
