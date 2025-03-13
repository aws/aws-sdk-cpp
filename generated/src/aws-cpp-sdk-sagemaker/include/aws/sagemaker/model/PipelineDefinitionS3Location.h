/**
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
   * <p>The location of the pipeline definition stored in Amazon S3.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PipelineDefinitionS3Location">AWS
   * API Reference</a></p>
   */
  class PipelineDefinitionS3Location
  {
  public:
    AWS_SAGEMAKER_API PipelineDefinitionS3Location() = default;
    AWS_SAGEMAKER_API PipelineDefinitionS3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PipelineDefinitionS3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    PipelineDefinitionS3Location& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object key (or key name) uniquely identifies the object in an S3 bucket.
     * </p>
     */
    inline const Aws::String& GetObjectKey() const { return m_objectKey; }
    inline bool ObjectKeyHasBeenSet() const { return m_objectKeyHasBeenSet; }
    template<typename ObjectKeyT = Aws::String>
    void SetObjectKey(ObjectKeyT&& value) { m_objectKeyHasBeenSet = true; m_objectKey = std::forward<ObjectKeyT>(value); }
    template<typename ObjectKeyT = Aws::String>
    PipelineDefinitionS3Location& WithObjectKey(ObjectKeyT&& value) { SetObjectKey(std::forward<ObjectKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version Id of the pipeline definition file. If not specified, Amazon
     * SageMaker will retrieve the latest version.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    PipelineDefinitionS3Location& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_objectKey;
    bool m_objectKeyHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
