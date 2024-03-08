/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/textract/model/EvaluationMetric.h>
#include <aws/textract/model/FeatureType.h>
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
namespace Textract
{
namespace Model
{

  /**
   * <p>Contains information on the metrics used to evalute the peformance of a given
   * adapter version. Includes data for baseline model performance and individual
   * adapter version perfromance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/textract-2018-06-27/AdapterVersionEvaluationMetric">AWS
   * API Reference</a></p>
   */
  class AdapterVersionEvaluationMetric
  {
  public:
    AWS_TEXTRACT_API AdapterVersionEvaluationMetric();
    AWS_TEXTRACT_API AdapterVersionEvaluationMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API AdapterVersionEvaluationMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The F1 score, precision, and recall metrics for the baseline model.</p>
     */
    inline const EvaluationMetric& GetBaseline() const{ return m_baseline; }

    /**
     * <p>The F1 score, precision, and recall metrics for the baseline model.</p>
     */
    inline bool BaselineHasBeenSet() const { return m_baselineHasBeenSet; }

    /**
     * <p>The F1 score, precision, and recall metrics for the baseline model.</p>
     */
    inline void SetBaseline(const EvaluationMetric& value) { m_baselineHasBeenSet = true; m_baseline = value; }

    /**
     * <p>The F1 score, precision, and recall metrics for the baseline model.</p>
     */
    inline void SetBaseline(EvaluationMetric&& value) { m_baselineHasBeenSet = true; m_baseline = std::move(value); }

    /**
     * <p>The F1 score, precision, and recall metrics for the baseline model.</p>
     */
    inline AdapterVersionEvaluationMetric& WithBaseline(const EvaluationMetric& value) { SetBaseline(value); return *this;}

    /**
     * <p>The F1 score, precision, and recall metrics for the baseline model.</p>
     */
    inline AdapterVersionEvaluationMetric& WithBaseline(EvaluationMetric&& value) { SetBaseline(std::move(value)); return *this;}


    /**
     * <p>The F1 score, precision, and recall metrics for the baseline model.</p>
     */
    inline const EvaluationMetric& GetAdapterVersion() const{ return m_adapterVersion; }

    /**
     * <p>The F1 score, precision, and recall metrics for the baseline model.</p>
     */
    inline bool AdapterVersionHasBeenSet() const { return m_adapterVersionHasBeenSet; }

    /**
     * <p>The F1 score, precision, and recall metrics for the baseline model.</p>
     */
    inline void SetAdapterVersion(const EvaluationMetric& value) { m_adapterVersionHasBeenSet = true; m_adapterVersion = value; }

    /**
     * <p>The F1 score, precision, and recall metrics for the baseline model.</p>
     */
    inline void SetAdapterVersion(EvaluationMetric&& value) { m_adapterVersionHasBeenSet = true; m_adapterVersion = std::move(value); }

    /**
     * <p>The F1 score, precision, and recall metrics for the baseline model.</p>
     */
    inline AdapterVersionEvaluationMetric& WithAdapterVersion(const EvaluationMetric& value) { SetAdapterVersion(value); return *this;}

    /**
     * <p>The F1 score, precision, and recall metrics for the baseline model.</p>
     */
    inline AdapterVersionEvaluationMetric& WithAdapterVersion(EvaluationMetric&& value) { SetAdapterVersion(std::move(value)); return *this;}


    /**
     * <p>Indicates the feature type being analyzed by a given adapter version.</p>
     */
    inline const FeatureType& GetFeatureType() const{ return m_featureType; }

    /**
     * <p>Indicates the feature type being analyzed by a given adapter version.</p>
     */
    inline bool FeatureTypeHasBeenSet() const { return m_featureTypeHasBeenSet; }

    /**
     * <p>Indicates the feature type being analyzed by a given adapter version.</p>
     */
    inline void SetFeatureType(const FeatureType& value) { m_featureTypeHasBeenSet = true; m_featureType = value; }

    /**
     * <p>Indicates the feature type being analyzed by a given adapter version.</p>
     */
    inline void SetFeatureType(FeatureType&& value) { m_featureTypeHasBeenSet = true; m_featureType = std::move(value); }

    /**
     * <p>Indicates the feature type being analyzed by a given adapter version.</p>
     */
    inline AdapterVersionEvaluationMetric& WithFeatureType(const FeatureType& value) { SetFeatureType(value); return *this;}

    /**
     * <p>Indicates the feature type being analyzed by a given adapter version.</p>
     */
    inline AdapterVersionEvaluationMetric& WithFeatureType(FeatureType&& value) { SetFeatureType(std::move(value)); return *this;}

  private:

    EvaluationMetric m_baseline;
    bool m_baselineHasBeenSet = false;

    EvaluationMetric m_adapterVersion;
    bool m_adapterVersionHasBeenSet = false;

    FeatureType m_featureType;
    bool m_featureTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
