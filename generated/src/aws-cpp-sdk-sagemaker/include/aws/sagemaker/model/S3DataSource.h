/**
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
    AWS_SAGEMAKER_API S3DataSource() = default;
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
     * is <code>Pipe</code>.</p> <p>If you choose <code>Converse</code>,
     * <code>S3Uri</code> identifies an Amazon S3 location that contains data formatted
     * according to Converse format. This format structures conversational messages
     * with specific roles and content types used for training and fine-tuning
     * foundational models.</p>
     */
    inline S3DataType GetS3DataType() const { return m_s3DataType; }
    inline bool S3DataTypeHasBeenSet() const { return m_s3DataTypeHasBeenSet; }
    inline void SetS3DataType(S3DataType value) { m_s3DataTypeHasBeenSet = true; m_s3DataType = value; }
    inline S3DataSource& WithS3DataType(S3DataType value) { SetS3DataType(value); return *this;}
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
    inline const Aws::String& GetS3Uri() const { return m_s3Uri; }
    inline bool S3UriHasBeenSet() const { return m_s3UriHasBeenSet; }
    template<typename S3UriT = Aws::String>
    void SetS3Uri(S3UriT&& value) { m_s3UriHasBeenSet = true; m_s3Uri = std::forward<S3UriT>(value); }
    template<typename S3UriT = Aws::String>
    S3DataSource& WithS3Uri(S3UriT&& value) { SetS3Uri(std::forward<S3UriT>(value)); return *this;}
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
    inline S3DataDistribution GetS3DataDistributionType() const { return m_s3DataDistributionType; }
    inline bool S3DataDistributionTypeHasBeenSet() const { return m_s3DataDistributionTypeHasBeenSet; }
    inline void SetS3DataDistributionType(S3DataDistribution value) { m_s3DataDistributionTypeHasBeenSet = true; m_s3DataDistributionType = value; }
    inline S3DataSource& WithS3DataDistributionType(S3DataDistribution value) { SetS3DataDistributionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of one or more attribute names to use that are found in a specified
     * augmented manifest file.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributeNames() const { return m_attributeNames; }
    inline bool AttributeNamesHasBeenSet() const { return m_attributeNamesHasBeenSet; }
    template<typename AttributeNamesT = Aws::Vector<Aws::String>>
    void SetAttributeNames(AttributeNamesT&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames = std::forward<AttributeNamesT>(value); }
    template<typename AttributeNamesT = Aws::Vector<Aws::String>>
    S3DataSource& WithAttributeNames(AttributeNamesT&& value) { SetAttributeNames(std::forward<AttributeNamesT>(value)); return *this;}
    template<typename AttributeNamesT = Aws::String>
    S3DataSource& AddAttributeNames(AttributeNamesT&& value) { m_attributeNamesHasBeenSet = true; m_attributeNames.emplace_back(std::forward<AttributeNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of names of instance groups that get data from the S3 data source.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceGroupNames() const { return m_instanceGroupNames; }
    inline bool InstanceGroupNamesHasBeenSet() const { return m_instanceGroupNamesHasBeenSet; }
    template<typename InstanceGroupNamesT = Aws::Vector<Aws::String>>
    void SetInstanceGroupNames(InstanceGroupNamesT&& value) { m_instanceGroupNamesHasBeenSet = true; m_instanceGroupNames = std::forward<InstanceGroupNamesT>(value); }
    template<typename InstanceGroupNamesT = Aws::Vector<Aws::String>>
    S3DataSource& WithInstanceGroupNames(InstanceGroupNamesT&& value) { SetInstanceGroupNames(std::forward<InstanceGroupNamesT>(value)); return *this;}
    template<typename InstanceGroupNamesT = Aws::String>
    S3DataSource& AddInstanceGroupNames(InstanceGroupNamesT&& value) { m_instanceGroupNamesHasBeenSet = true; m_instanceGroupNames.emplace_back(std::forward<InstanceGroupNamesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ModelAccessConfig& GetModelAccessConfig() const { return m_modelAccessConfig; }
    inline bool ModelAccessConfigHasBeenSet() const { return m_modelAccessConfigHasBeenSet; }
    template<typename ModelAccessConfigT = ModelAccessConfig>
    void SetModelAccessConfig(ModelAccessConfigT&& value) { m_modelAccessConfigHasBeenSet = true; m_modelAccessConfig = std::forward<ModelAccessConfigT>(value); }
    template<typename ModelAccessConfigT = ModelAccessConfig>
    S3DataSource& WithModelAccessConfig(ModelAccessConfigT&& value) { SetModelAccessConfig(std::forward<ModelAccessConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a private hub model reference that points to a
     * SageMaker JumpStart public hub model.</p>
     */
    inline const HubAccessConfig& GetHubAccessConfig() const { return m_hubAccessConfig; }
    inline bool HubAccessConfigHasBeenSet() const { return m_hubAccessConfigHasBeenSet; }
    template<typename HubAccessConfigT = HubAccessConfig>
    void SetHubAccessConfig(HubAccessConfigT&& value) { m_hubAccessConfigHasBeenSet = true; m_hubAccessConfig = std::forward<HubAccessConfigT>(value); }
    template<typename HubAccessConfigT = HubAccessConfig>
    S3DataSource& WithHubAccessConfig(HubAccessConfigT&& value) { SetHubAccessConfig(std::forward<HubAccessConfigT>(value)); return *this;}
    ///@}
  private:

    S3DataType m_s3DataType{S3DataType::NOT_SET};
    bool m_s3DataTypeHasBeenSet = false;

    Aws::String m_s3Uri;
    bool m_s3UriHasBeenSet = false;

    S3DataDistribution m_s3DataDistributionType{S3DataDistribution::NOT_SET};
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
