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
    AWS_SAGEMAKER_API SourceAlgorithm() = default;
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
    inline const Aws::String& GetModelDataUrl() const { return m_modelDataUrl; }
    inline bool ModelDataUrlHasBeenSet() const { return m_modelDataUrlHasBeenSet; }
    template<typename ModelDataUrlT = Aws::String>
    void SetModelDataUrl(ModelDataUrlT&& value) { m_modelDataUrlHasBeenSet = true; m_modelDataUrl = std::forward<ModelDataUrlT>(value); }
    template<typename ModelDataUrlT = Aws::String>
    SourceAlgorithm& WithModelDataUrl(ModelDataUrlT&& value) { SetModelDataUrl(std::forward<ModelDataUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the location of ML model data to deploy during endpoint
     * creation.</p>
     */
    inline const ModelDataSource& GetModelDataSource() const { return m_modelDataSource; }
    inline bool ModelDataSourceHasBeenSet() const { return m_modelDataSourceHasBeenSet; }
    template<typename ModelDataSourceT = ModelDataSource>
    void SetModelDataSource(ModelDataSourceT&& value) { m_modelDataSourceHasBeenSet = true; m_modelDataSource = std::forward<ModelDataSourceT>(value); }
    template<typename ModelDataSourceT = ModelDataSource>
    SourceAlgorithm& WithModelDataSource(ModelDataSourceT&& value) { SetModelDataSource(std::forward<ModelDataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ETag associated with Model Data URL.</p>
     */
    inline const Aws::String& GetModelDataETag() const { return m_modelDataETag; }
    inline bool ModelDataETagHasBeenSet() const { return m_modelDataETagHasBeenSet; }
    template<typename ModelDataETagT = Aws::String>
    void SetModelDataETag(ModelDataETagT&& value) { m_modelDataETagHasBeenSet = true; m_modelDataETag = std::forward<ModelDataETagT>(value); }
    template<typename ModelDataETagT = Aws::String>
    SourceAlgorithm& WithModelDataETag(ModelDataETagT&& value) { SetModelDataETag(std::forward<ModelDataETagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an algorithm that was used to create the model package. The
     * algorithm must be either an algorithm resource in your SageMaker account or an
     * algorithm in Amazon Web Services Marketplace that you are subscribed to.</p>
     */
    inline const Aws::String& GetAlgorithmName() const { return m_algorithmName; }
    inline bool AlgorithmNameHasBeenSet() const { return m_algorithmNameHasBeenSet; }
    template<typename AlgorithmNameT = Aws::String>
    void SetAlgorithmName(AlgorithmNameT&& value) { m_algorithmNameHasBeenSet = true; m_algorithmName = std::forward<AlgorithmNameT>(value); }
    template<typename AlgorithmNameT = Aws::String>
    SourceAlgorithm& WithAlgorithmName(AlgorithmNameT&& value) { SetAlgorithmName(std::forward<AlgorithmNameT>(value)); return *this;}
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
