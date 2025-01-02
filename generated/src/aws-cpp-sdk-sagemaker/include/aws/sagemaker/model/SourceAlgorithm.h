/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ModelDataSource.h>
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


    ///@{
    /**
     * <p>The Amazon S3 path where the model artifacts, which result from model
     * training, are stored. This path must point to a single <code>gzip</code>
     * compressed tar archive (<code>.tar.gz</code> suffix).</p>  <p>The model
     * artifacts must be in an S3 bucket that is in the same Amazon Web Services region
     * as the algorithm.</p> 
     */
    inline const Aws::String& GetModelDataUrl() const{ return m_modelDataUrl; }
    inline bool ModelDataUrlHasBeenSet() const { return m_modelDataUrlHasBeenSet; }
    inline void SetModelDataUrl(const Aws::String& value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl = value; }
    inline void SetModelDataUrl(Aws::String&& value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl = std::move(value); }
    inline void SetModelDataUrl(const char* value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl.assign(value); }
    inline SourceAlgorithm& WithModelDataUrl(const Aws::String& value) { SetModelDataUrl(value); return *this;}
    inline SourceAlgorithm& WithModelDataUrl(Aws::String&& value) { SetModelDataUrl(std::move(value)); return *this;}
    inline SourceAlgorithm& WithModelDataUrl(const char* value) { SetModelDataUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the location of ML model data to deploy during endpoint
     * creation.</p>
     */
    inline const ModelDataSource& GetModelDataSource() const{ return m_modelDataSource; }
    inline bool ModelDataSourceHasBeenSet() const { return m_modelDataSourceHasBeenSet; }
    inline void SetModelDataSource(const ModelDataSource& value) { m_modelDataSourceHasBeenSet = true; m_modelDataSource = value; }
    inline void SetModelDataSource(ModelDataSource&& value) { m_modelDataSourceHasBeenSet = true; m_modelDataSource = std::move(value); }
    inline SourceAlgorithm& WithModelDataSource(const ModelDataSource& value) { SetModelDataSource(value); return *this;}
    inline SourceAlgorithm& WithModelDataSource(ModelDataSource&& value) { SetModelDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ETag associated with Model Data URL.</p>
     */
    inline const Aws::String& GetModelDataETag() const{ return m_modelDataETag; }
    inline bool ModelDataETagHasBeenSet() const { return m_modelDataETagHasBeenSet; }
    inline void SetModelDataETag(const Aws::String& value) { m_modelDataETagHasBeenSet = true; m_modelDataETag = value; }
    inline void SetModelDataETag(Aws::String&& value) { m_modelDataETagHasBeenSet = true; m_modelDataETag = std::move(value); }
    inline void SetModelDataETag(const char* value) { m_modelDataETagHasBeenSet = true; m_modelDataETag.assign(value); }
    inline SourceAlgorithm& WithModelDataETag(const Aws::String& value) { SetModelDataETag(value); return *this;}
    inline SourceAlgorithm& WithModelDataETag(Aws::String&& value) { SetModelDataETag(std::move(value)); return *this;}
    inline SourceAlgorithm& WithModelDataETag(const char* value) { SetModelDataETag(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an algorithm that was used to create the model package. The
     * algorithm must be either an algorithm resource in your SageMaker account or an
     * algorithm in Amazon Web Services Marketplace that you are subscribed to.</p>
     */
    inline const Aws::String& GetAlgorithmName() const{ return m_algorithmName; }
    inline bool AlgorithmNameHasBeenSet() const { return m_algorithmNameHasBeenSet; }
    inline void SetAlgorithmName(const Aws::String& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = value; }
    inline void SetAlgorithmName(Aws::String&& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = std::move(value); }
    inline void SetAlgorithmName(const char* value) { m_algorithmNameHasBeenSet = true; m_algorithmName.assign(value); }
    inline SourceAlgorithm& WithAlgorithmName(const Aws::String& value) { SetAlgorithmName(value); return *this;}
    inline SourceAlgorithm& WithAlgorithmName(Aws::String&& value) { SetAlgorithmName(std::move(value)); return *this;}
    inline SourceAlgorithm& WithAlgorithmName(const char* value) { SetAlgorithmName(value); return *this;}
    ///@}
  private:

    Aws::String m_modelDataUrl;
    bool m_modelDataUrlHasBeenSet = false;

    ModelDataSource m_modelDataSource;
    bool m_modelDataSourceHasBeenSet = false;

    Aws::String m_modelDataETag;
    bool m_modelDataETagHasBeenSet = false;

    Aws::String m_algorithmName;
    bool m_algorithmNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
