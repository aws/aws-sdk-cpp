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
   * <p>Provides information about the location that is configured for storing model
   * artifacts. </p> <p>Model artifacts are outputs that result from training a
   * model. They typically consist of trained parameters, a model definition that
   * describes how to compute inferences, and other metadata. A SageMaker container
   * stores your trained model artifacts in the <code>/opt/ml/model</code> directory.
   * After training has completed, by default, these artifacts are uploaded to your
   * Amazon S3 bucket as compressed files.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ModelArtifacts">AWS
   * API Reference</a></p>
   */
  class ModelArtifacts
  {
  public:
    AWS_SAGEMAKER_API ModelArtifacts();
    AWS_SAGEMAKER_API ModelArtifacts(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ModelArtifacts& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path of the S3 object that contains the model artifacts. For example,
     * <code>s3://bucket-name/keynameprefix/model.tar.gz</code>.</p>
     */
    inline const Aws::String& GetS3ModelArtifacts() const{ return m_s3ModelArtifacts; }

    /**
     * <p>The path of the S3 object that contains the model artifacts. For example,
     * <code>s3://bucket-name/keynameprefix/model.tar.gz</code>.</p>
     */
    inline bool S3ModelArtifactsHasBeenSet() const { return m_s3ModelArtifactsHasBeenSet; }

    /**
     * <p>The path of the S3 object that contains the model artifacts. For example,
     * <code>s3://bucket-name/keynameprefix/model.tar.gz</code>.</p>
     */
    inline void SetS3ModelArtifacts(const Aws::String& value) { m_s3ModelArtifactsHasBeenSet = true; m_s3ModelArtifacts = value; }

    /**
     * <p>The path of the S3 object that contains the model artifacts. For example,
     * <code>s3://bucket-name/keynameprefix/model.tar.gz</code>.</p>
     */
    inline void SetS3ModelArtifacts(Aws::String&& value) { m_s3ModelArtifactsHasBeenSet = true; m_s3ModelArtifacts = std::move(value); }

    /**
     * <p>The path of the S3 object that contains the model artifacts. For example,
     * <code>s3://bucket-name/keynameprefix/model.tar.gz</code>.</p>
     */
    inline void SetS3ModelArtifacts(const char* value) { m_s3ModelArtifactsHasBeenSet = true; m_s3ModelArtifacts.assign(value); }

    /**
     * <p>The path of the S3 object that contains the model artifacts. For example,
     * <code>s3://bucket-name/keynameprefix/model.tar.gz</code>.</p>
     */
    inline ModelArtifacts& WithS3ModelArtifacts(const Aws::String& value) { SetS3ModelArtifacts(value); return *this;}

    /**
     * <p>The path of the S3 object that contains the model artifacts. For example,
     * <code>s3://bucket-name/keynameprefix/model.tar.gz</code>.</p>
     */
    inline ModelArtifacts& WithS3ModelArtifacts(Aws::String&& value) { SetS3ModelArtifacts(std::move(value)); return *this;}

    /**
     * <p>The path of the S3 object that contains the model artifacts. For example,
     * <code>s3://bucket-name/keynameprefix/model.tar.gz</code>.</p>
     */
    inline ModelArtifacts& WithS3ModelArtifacts(const char* value) { SetS3ModelArtifacts(value); return *this;}

  private:

    Aws::String m_s3ModelArtifacts;
    bool m_s3ModelArtifactsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
