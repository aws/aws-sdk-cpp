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
    AWS_SAGEMAKER_API ClarifyShapBaselineConfig();
    AWS_SAGEMAKER_API ClarifyShapBaselineConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ClarifyShapBaselineConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The MIME type of the baseline data. Choose from <code>'text/csv'</code> or
     * <code>'application/jsonlines'</code>. Defaults to <code>'text/csv'</code>.</p>
     */
    inline const Aws::String& GetMimeType() const{ return m_mimeType; }

    /**
     * <p>The MIME type of the baseline data. Choose from <code>'text/csv'</code> or
     * <code>'application/jsonlines'</code>. Defaults to <code>'text/csv'</code>.</p>
     */
    inline bool MimeTypeHasBeenSet() const { return m_mimeTypeHasBeenSet; }

    /**
     * <p>The MIME type of the baseline data. Choose from <code>'text/csv'</code> or
     * <code>'application/jsonlines'</code>. Defaults to <code>'text/csv'</code>.</p>
     */
    inline void SetMimeType(const Aws::String& value) { m_mimeTypeHasBeenSet = true; m_mimeType = value; }

    /**
     * <p>The MIME type of the baseline data. Choose from <code>'text/csv'</code> or
     * <code>'application/jsonlines'</code>. Defaults to <code>'text/csv'</code>.</p>
     */
    inline void SetMimeType(Aws::String&& value) { m_mimeTypeHasBeenSet = true; m_mimeType = std::move(value); }

    /**
     * <p>The MIME type of the baseline data. Choose from <code>'text/csv'</code> or
     * <code>'application/jsonlines'</code>. Defaults to <code>'text/csv'</code>.</p>
     */
    inline void SetMimeType(const char* value) { m_mimeTypeHasBeenSet = true; m_mimeType.assign(value); }

    /**
     * <p>The MIME type of the baseline data. Choose from <code>'text/csv'</code> or
     * <code>'application/jsonlines'</code>. Defaults to <code>'text/csv'</code>.</p>
     */
    inline ClarifyShapBaselineConfig& WithMimeType(const Aws::String& value) { SetMimeType(value); return *this;}

    /**
     * <p>The MIME type of the baseline data. Choose from <code>'text/csv'</code> or
     * <code>'application/jsonlines'</code>. Defaults to <code>'text/csv'</code>.</p>
     */
    inline ClarifyShapBaselineConfig& WithMimeType(Aws::String&& value) { SetMimeType(std::move(value)); return *this;}

    /**
     * <p>The MIME type of the baseline data. Choose from <code>'text/csv'</code> or
     * <code>'application/jsonlines'</code>. Defaults to <code>'text/csv'</code>.</p>
     */
    inline ClarifyShapBaselineConfig& WithMimeType(const char* value) { SetMimeType(value); return *this;}


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
    inline const Aws::String& GetShapBaseline() const{ return m_shapBaseline; }

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
    inline bool ShapBaselineHasBeenSet() const { return m_shapBaselineHasBeenSet; }

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
    inline void SetShapBaseline(const Aws::String& value) { m_shapBaselineHasBeenSet = true; m_shapBaseline = value; }

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
    inline void SetShapBaseline(Aws::String&& value) { m_shapBaselineHasBeenSet = true; m_shapBaseline = std::move(value); }

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
    inline void SetShapBaseline(const char* value) { m_shapBaselineHasBeenSet = true; m_shapBaseline.assign(value); }

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
    inline ClarifyShapBaselineConfig& WithShapBaseline(const Aws::String& value) { SetShapBaseline(value); return *this;}

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
    inline ClarifyShapBaselineConfig& WithShapBaseline(Aws::String&& value) { SetShapBaseline(std::move(value)); return *this;}

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
    inline ClarifyShapBaselineConfig& WithShapBaseline(const char* value) { SetShapBaseline(value); return *this;}


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
    inline const Aws::String& GetShapBaselineUri() const{ return m_shapBaselineUri; }

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
    inline bool ShapBaselineUriHasBeenSet() const { return m_shapBaselineUriHasBeenSet; }

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
    inline void SetShapBaselineUri(const Aws::String& value) { m_shapBaselineUriHasBeenSet = true; m_shapBaselineUri = value; }

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
    inline void SetShapBaselineUri(Aws::String&& value) { m_shapBaselineUriHasBeenSet = true; m_shapBaselineUri = std::move(value); }

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
    inline void SetShapBaselineUri(const char* value) { m_shapBaselineUriHasBeenSet = true; m_shapBaselineUri.assign(value); }

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
    inline ClarifyShapBaselineConfig& WithShapBaselineUri(const Aws::String& value) { SetShapBaselineUri(value); return *this;}

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
    inline ClarifyShapBaselineConfig& WithShapBaselineUri(Aws::String&& value) { SetShapBaselineUri(std::move(value)); return *this;}

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
    inline ClarifyShapBaselineConfig& WithShapBaselineUri(const char* value) { SetShapBaselineUri(value); return *this;}

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
