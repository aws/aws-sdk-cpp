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
    AWS_SAGEMAKER_API PipelineDefinitionS3Location();
    AWS_SAGEMAKER_API PipelineDefinitionS3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PipelineDefinitionS3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline PipelineDefinitionS3Location& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline PipelineDefinitionS3Location& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>Name of the S3 bucket.</p>
     */
    inline PipelineDefinitionS3Location& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The object key (or key name) uniquely identifies the object in an S3 bucket.
     * </p>
     */
    inline const Aws::String& GetObjectKey() const{ return m_objectKey; }

    /**
     * <p>The object key (or key name) uniquely identifies the object in an S3 bucket.
     * </p>
     */
    inline bool ObjectKeyHasBeenSet() const { return m_objectKeyHasBeenSet; }

    /**
     * <p>The object key (or key name) uniquely identifies the object in an S3 bucket.
     * </p>
     */
    inline void SetObjectKey(const Aws::String& value) { m_objectKeyHasBeenSet = true; m_objectKey = value; }

    /**
     * <p>The object key (or key name) uniquely identifies the object in an S3 bucket.
     * </p>
     */
    inline void SetObjectKey(Aws::String&& value) { m_objectKeyHasBeenSet = true; m_objectKey = std::move(value); }

    /**
     * <p>The object key (or key name) uniquely identifies the object in an S3 bucket.
     * </p>
     */
    inline void SetObjectKey(const char* value) { m_objectKeyHasBeenSet = true; m_objectKey.assign(value); }

    /**
     * <p>The object key (or key name) uniquely identifies the object in an S3 bucket.
     * </p>
     */
    inline PipelineDefinitionS3Location& WithObjectKey(const Aws::String& value) { SetObjectKey(value); return *this;}

    /**
     * <p>The object key (or key name) uniquely identifies the object in an S3 bucket.
     * </p>
     */
    inline PipelineDefinitionS3Location& WithObjectKey(Aws::String&& value) { SetObjectKey(std::move(value)); return *this;}

    /**
     * <p>The object key (or key name) uniquely identifies the object in an S3 bucket.
     * </p>
     */
    inline PipelineDefinitionS3Location& WithObjectKey(const char* value) { SetObjectKey(value); return *this;}


    /**
     * <p>Version Id of the pipeline definition file. If not specified, Amazon
     * SageMaker will retrieve the latest version.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>Version Id of the pipeline definition file. If not specified, Amazon
     * SageMaker will retrieve the latest version.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>Version Id of the pipeline definition file. If not specified, Amazon
     * SageMaker will retrieve the latest version.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>Version Id of the pipeline definition file. If not specified, Amazon
     * SageMaker will retrieve the latest version.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>Version Id of the pipeline definition file. If not specified, Amazon
     * SageMaker will retrieve the latest version.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>Version Id of the pipeline definition file. If not specified, Amazon
     * SageMaker will retrieve the latest version.</p>
     */
    inline PipelineDefinitionS3Location& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>Version Id of the pipeline definition file. If not specified, Amazon
     * SageMaker will retrieve the latest version.</p>
     */
    inline PipelineDefinitionS3Location& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>Version Id of the pipeline definition file. If not specified, Amazon
     * SageMaker will retrieve the latest version.</p>
     */
    inline PipelineDefinitionS3Location& WithVersionId(const char* value) { SetVersionId(value); return *this;}

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
