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
   * <p>Specifies an algorithm that was used to create the model package. The
   * algorithm must be either an algorithm resource in your SageMaker account or an
   * algorithm in Amazon Web Services Marketplace that you are subscribed
   * to.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SourceAlgorithm">AWS
   * API Reference</a></p>
   */
  class SourceAlgorithm
  {
  public:
    AWS_SAGEMAKER_API SourceAlgorithm();
    AWS_SAGEMAKER_API SourceAlgorithm(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SourceAlgorithm& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>  <p>The model
     * artifacts must be in an S3 bucket that is in the same region as the
     * algorithm.</p> 
     */
    inline const Aws::String& GetModelDataUrl() const{ return m_modelDataUrl; }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>  <p>The model
     * artifacts must be in an S3 bucket that is in the same region as the
     * algorithm.</p> 
     */
    inline bool ModelDataUrlHasBeenSet() const { return m_modelDataUrlHasBeenSet; }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>  <p>The model
     * artifacts must be in an S3 bucket that is in the same region as the
     * algorithm.</p> 
     */
    inline void SetModelDataUrl(const Aws::String& value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl = value; }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>  <p>The model
     * artifacts must be in an S3 bucket that is in the same region as the
     * algorithm.</p> 
     */
    inline void SetModelDataUrl(Aws::String&& value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl = std::move(value); }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>  <p>The model
     * artifacts must be in an S3 bucket that is in the same region as the
     * algorithm.</p> 
     */
    inline void SetModelDataUrl(const char* value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl.assign(value); }

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>  <p>The model
     * artifacts must be in an S3 bucket that is in the same region as the
     * algorithm.</p> 
     */
    inline SourceAlgorithm& WithModelDataUrl(const Aws::String& value) { SetModelDataUrl(value); return *this;}

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>  <p>The model
     * artifacts must be in an S3 bucket that is in the same region as the
     * algorithm.</p> 
     */
    inline SourceAlgorithm& WithModelDataUrl(Aws::String&& value) { SetModelDataUrl(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>  <p>The model
     * artifacts must be in an S3 bucket that is in the same region as the
     * algorithm.</p> 
     */
    inline SourceAlgorithm& WithModelDataUrl(const char* value) { SetModelDataUrl(value); return *this;}


    /**
     * <p>The name of an algorithm that was used to create the model package. The
     * algorithm must be either an algorithm resource in your SageMaker account or an
     * algorithm in Amazon Web Services Marketplace that you are subscribed to.</p>
     */
    inline const Aws::String& GetAlgorithmName() const{ return m_algorithmName; }

    /**
     * <p>The name of an algorithm that was used to create the model package. The
     * algorithm must be either an algorithm resource in your SageMaker account or an
     * algorithm in Amazon Web Services Marketplace that you are subscribed to.</p>
     */
    inline bool AlgorithmNameHasBeenSet() const { return m_algorithmNameHasBeenSet; }

    /**
     * <p>The name of an algorithm that was used to create the model package. The
     * algorithm must be either an algorithm resource in your SageMaker account or an
     * algorithm in Amazon Web Services Marketplace that you are subscribed to.</p>
     */
    inline void SetAlgorithmName(const Aws::String& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = value; }

    /**
     * <p>The name of an algorithm that was used to create the model package. The
     * algorithm must be either an algorithm resource in your SageMaker account or an
     * algorithm in Amazon Web Services Marketplace that you are subscribed to.</p>
     */
    inline void SetAlgorithmName(Aws::String&& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = std::move(value); }

    /**
     * <p>The name of an algorithm that was used to create the model package. The
     * algorithm must be either an algorithm resource in your SageMaker account or an
     * algorithm in Amazon Web Services Marketplace that you are subscribed to.</p>
     */
    inline void SetAlgorithmName(const char* value) { m_algorithmNameHasBeenSet = true; m_algorithmName.assign(value); }

    /**
     * <p>The name of an algorithm that was used to create the model package. The
     * algorithm must be either an algorithm resource in your SageMaker account or an
     * algorithm in Amazon Web Services Marketplace that you are subscribed to.</p>
     */
    inline SourceAlgorithm& WithAlgorithmName(const Aws::String& value) { SetAlgorithmName(value); return *this;}

    /**
     * <p>The name of an algorithm that was used to create the model package. The
     * algorithm must be either an algorithm resource in your SageMaker account or an
     * algorithm in Amazon Web Services Marketplace that you are subscribed to.</p>
     */
    inline SourceAlgorithm& WithAlgorithmName(Aws::String&& value) { SetAlgorithmName(std::move(value)); return *this;}

    /**
     * <p>The name of an algorithm that was used to create the model package. The
     * algorithm must be either an algorithm resource in your SageMaker account or an
     * algorithm in Amazon Web Services Marketplace that you are subscribed to.</p>
     */
    inline SourceAlgorithm& WithAlgorithmName(const char* value) { SetAlgorithmName(value); return *this;}

  private:

    Aws::String m_modelDataUrl;
    bool m_modelDataUrlHasBeenSet = false;

    Aws::String m_algorithmName;
    bool m_algorithmNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
