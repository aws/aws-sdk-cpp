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
    AWS_TEXTRACT_API AdapterVersionEvaluationMetric() = default;
    AWS_TEXTRACT_API AdapterVersionEvaluationMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API AdapterVersionEvaluationMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TEXTRACT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The F1 score, precision, and recall metrics for the baseline model.</p>
     */
    inline const EvaluationMetric& GetBaseline() const { return m_baseline; }
    inline bool BaselineHasBeenSet() const { return m_baselineHasBeenSet; }
    template<typename BaselineT = EvaluationMetric>
    void SetBaseline(BaselineT&& value) { m_baselineHasBeenSet = true; m_baseline = std::forward<BaselineT>(value); }
    template<typename BaselineT = EvaluationMetric>
    AdapterVersionEvaluationMetric& WithBaseline(BaselineT&& value) { SetBaseline(std::forward<BaselineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The F1 score, precision, and recall metrics for the baseline model.</p>
     */
    inline const EvaluationMetric& GetAdapterVersion() const { return m_adapterVersion; }
    inline bool AdapterVersionHasBeenSet() const { return m_adapterVersionHasBeenSet; }
    template<typename AdapterVersionT = EvaluationMetric>
    void SetAdapterVersion(AdapterVersionT&& value) { m_adapterVersionHasBeenSet = true; m_adapterVersion = std::forward<AdapterVersionT>(value); }
    template<typename AdapterVersionT = EvaluationMetric>
    AdapterVersionEvaluationMetric& WithAdapterVersion(AdapterVersionT&& value) { SetAdapterVersion(std::forward<AdapterVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the feature type being analyzed by a given adapter version.</p>
     */
    inline FeatureType GetFeatureType() const { return m_featureType; }
    inline bool FeatureTypeHasBeenSet() const { return m_featureTypeHasBeenSet; }
    inline void SetFeatureType(FeatureType value) { m_featureTypeHasBeenSet = true; m_featureType = value; }
    inline AdapterVersionEvaluationMetric& WithFeatureType(FeatureType value) { SetFeatureType(value); return *this;}
    ///@}
  private:

    EvaluationMetric m_baseline;
    bool m_baselineHasBeenSet = false;

    EvaluationMetric m_adapterVersion;
    bool m_adapterVersionHasBeenSet = false;

    FeatureType m_featureType{FeatureType::NOT_SET};
    bool m_featureTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
