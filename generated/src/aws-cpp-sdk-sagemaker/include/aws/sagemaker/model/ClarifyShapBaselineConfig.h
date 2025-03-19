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
   * <p>The configuration for the <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-feature-attribute-shap-baselines.html">SHAP
   * baseline</a> (also called the background or reference dataset) of the Kernal
   * SHAP algorithm.</p>  <ul> <li> <p>The number of records in the baseline
   * data determines the size of the synthetic dataset, which has an impact on
   * latency of explainability requests. For more information, see the <b>Synthetic
   * data</b> of <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/dg/clarify-online-explainability-create-endpoint.html">Configure
   * and create an endpoint</a>.</p> </li> <li> <p> <code>ShapBaseline</code> and
   * <code>ShapBaselineUri</code> are mutually exclusive parameters. One or the
   * either is required to configure a SHAP baseline. </p> </li> </ul>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClarifyShapBaselineConfig">AWS
   * API Reference</a></p>
   */
  class ClarifyShapBaselineConfig
  {
  public:
    AWS_SAGEMAKER_API ClarifyShapBaselineConfig() = default;
    AWS_SAGEMAKER_API ClarifyShapBaselineConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClarifyShapBaselineConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The MIME type of the baseline data. Choose from <code>'text/csv'</code> or
     * <code>'application/jsonlines'</code>. Defaults to <code>'text/csv'</code>.</p>
     */
    inline const Aws::String& GetMimeType() const { return m_mimeType; }
    inline bool MimeTypeHasBeenSet() const { return m_mimeTypeHasBeenSet; }
    template<typename MimeTypeT = Aws::String>
    void SetMimeType(MimeTypeT&& value) { m_mimeTypeHasBeenSet = true; m_mimeType = std::forward<MimeTypeT>(value); }
    template<typename MimeTypeT = Aws::String>
    ClarifyShapBaselineConfig& WithMimeType(MimeTypeT&& value) { SetMimeType(std::forward<MimeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inline SHAP baseline data in string format. <code>ShapBaseline</code> can
     * have one or multiple records to be used as the baseline dataset. The format of
     * the SHAP baseline file should be the same format as the training dataset. For
     * example, if the training dataset is in CSV format and each record contains four
     * features, and all features are numerical, then the format of the baseline data
     * should also share these characteristics. For natural language processing (NLP)
     * of text columns, the baseline value should be the value used to replace the unit
     * of text specified by the <code>Granularity</code> of the <code>TextConfig</code>
     * parameter. The size limit for <code>ShapBasline</code> is 4 KB. Use the
     * <code>ShapBaselineUri</code> parameter if you want to provide more than 4 KB of
     * baseline data.</p>
     */
    inline const Aws::String& GetShapBaseline() const { return m_shapBaseline; }
    inline bool ShapBaselineHasBeenSet() const { return m_shapBaselineHasBeenSet; }
    template<typename ShapBaselineT = Aws::String>
    void SetShapBaseline(ShapBaselineT&& value) { m_shapBaselineHasBeenSet = true; m_shapBaseline = std::forward<ShapBaselineT>(value); }
    template<typename ShapBaselineT = Aws::String>
    ClarifyShapBaselineConfig& WithShapBaseline(ShapBaselineT&& value) { SetShapBaseline(std::forward<ShapBaselineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The uniform resource identifier (URI) of the S3 bucket where the SHAP
     * baseline file is stored. The format of the SHAP baseline file should be the same
     * format as the format of the training dataset. For example, if the training
     * dataset is in CSV format, and each record in the training dataset has four
     * features, and all features are numerical, then the baseline file should also
     * have this same format. Each record should contain only the features. If you are
     * using a virtual private cloud (VPC), the <code>ShapBaselineUri</code> should be
     * accessible to the VPC. For more information about setting up endpoints with
     * Amazon Virtual Private Cloud, see <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/dg/infrastructure-give-access.html">Give
     * SageMaker access to Resources in your Amazon Virtual Private Cloud</a>.</p>
     */
    inline const Aws::String& GetShapBaselineUri() const { return m_shapBaselineUri; }
    inline bool ShapBaselineUriHasBeenSet() const { return m_shapBaselineUriHasBeenSet; }
    template<typename ShapBaselineUriT = Aws::String>
    void SetShapBaselineUri(ShapBaselineUriT&& value) { m_shapBaselineUriHasBeenSet = true; m_shapBaselineUri = std::forward<ShapBaselineUriT>(value); }
    template<typename ShapBaselineUriT = Aws::String>
    ClarifyShapBaselineConfig& WithShapBaselineUri(ShapBaselineUriT&& value) { SetShapBaselineUri(std::forward<ShapBaselineUriT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mimeType;
    bool m_mimeTypeHasBeenSet = false;

    Aws::String m_shapBaseline;
    bool m_shapBaselineHasBeenSet = false;

    Aws::String m_shapBaselineUri;
    bool m_shapBaselineUriHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
