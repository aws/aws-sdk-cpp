/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/textract/Textract_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/textract/model/AdapterVersionStatus.h>
#include <aws/textract/model/AdapterVersionDatasetConfig.h>
#include <aws/textract/model/OutputConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/textract/model/FeatureType.h>
#include <aws/textract/model/AdapterVersionEvaluationMetric.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Textract
{
namespace Model
{
  class GetAdapterVersionResult
  {
  public:
    AWS_TEXTRACT_API GetAdapterVersionResult() = default;
    AWS_TEXTRACT_API GetAdapterVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API GetAdapterVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A string containing a unique ID for the adapter version being retrieved.</p>
     */
    inline const Aws::String& GetAdapterId() const { return m_adapterId; }
    template<typename AdapterIdT = Aws::String>
    void SetAdapterId(AdapterIdT&& value) { m_adapterIdHasBeenSet = true; m_adapterId = std::forward<AdapterIdT>(value); }
    template<typename AdapterIdT = Aws::String>
    GetAdapterVersionResult& WithAdapterId(AdapterIdT&& value) { SetAdapterId(std::forward<AdapterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string containing the adapter version that has been retrieved.</p>
     */
    inline const Aws::String& GetAdapterVersion() const { return m_adapterVersion; }
    template<typename AdapterVersionT = Aws::String>
    void SetAdapterVersion(AdapterVersionT&& value) { m_adapterVersionHasBeenSet = true; m_adapterVersion = std::forward<AdapterVersionT>(value); }
    template<typename AdapterVersionT = Aws::String>
    GetAdapterVersionResult& WithAdapterVersion(AdapterVersionT&& value) { SetAdapterVersion(std::forward<AdapterVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the adapter version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetAdapterVersionResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of the targeted feature types for the requested adapter version.</p>
     */
    inline const Aws::Vector<FeatureType>& GetFeatureTypes() const { return m_featureTypes; }
    template<typename FeatureTypesT = Aws::Vector<FeatureType>>
    void SetFeatureTypes(FeatureTypesT&& value) { m_featureTypesHasBeenSet = true; m_featureTypes = std::forward<FeatureTypesT>(value); }
    template<typename FeatureTypesT = Aws::Vector<FeatureType>>
    GetAdapterVersionResult& WithFeatureTypes(FeatureTypesT&& value) { SetFeatureTypes(std::forward<FeatureTypesT>(value)); return *this;}
    inline GetAdapterVersionResult& AddFeatureTypes(FeatureType value) { m_featureTypesHasBeenSet = true; m_featureTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the adapter version that has been requested.</p>
     */
    inline AdapterVersionStatus GetStatus() const { return m_status; }
    inline void SetStatus(AdapterVersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetAdapterVersionResult& WithStatus(AdapterVersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message that describes the status of the requested adapter version.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    GetAdapterVersionResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a dataset used to train a new adapter version. Takes a
     * ManifestS3Objec as the value.</p>
     */
    inline const AdapterVersionDatasetConfig& GetDatasetConfig() const { return m_datasetConfig; }
    template<typename DatasetConfigT = AdapterVersionDatasetConfig>
    void SetDatasetConfig(DatasetConfigT&& value) { m_datasetConfigHasBeenSet = true; m_datasetConfig = std::forward<DatasetConfigT>(value); }
    template<typename DatasetConfigT = AdapterVersionDatasetConfig>
    GetAdapterVersionResult& WithDatasetConfig(DatasetConfigT&& value) { SetDatasetConfig(std::forward<DatasetConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). Used to
     * encrypt your documents.</p>
     */
    inline const Aws::String& GetKMSKeyId() const { return m_kMSKeyId; }
    template<typename KMSKeyIdT = Aws::String>
    void SetKMSKeyId(KMSKeyIdT&& value) { m_kMSKeyIdHasBeenSet = true; m_kMSKeyId = std::forward<KMSKeyIdT>(value); }
    template<typename KMSKeyIdT = Aws::String>
    GetAdapterVersionResult& WithKMSKeyId(KMSKeyIdT&& value) { SetKMSKeyId(std::forward<KMSKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OutputConfig& GetOutputConfig() const { return m_outputConfig; }
    template<typename OutputConfigT = OutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = OutputConfig>
    GetAdapterVersionResult& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The evaluation metrics (F1 score, Precision, and Recall) for the requested
     * version, grouped by baseline metrics and adapter version.</p>
     */
    inline const Aws::Vector<AdapterVersionEvaluationMetric>& GetEvaluationMetrics() const { return m_evaluationMetrics; }
    template<typename EvaluationMetricsT = Aws::Vector<AdapterVersionEvaluationMetric>>
    void SetEvaluationMetrics(EvaluationMetricsT&& value) { m_evaluationMetricsHasBeenSet = true; m_evaluationMetrics = std::forward<EvaluationMetricsT>(value); }
    template<typename EvaluationMetricsT = Aws::Vector<AdapterVersionEvaluationMetric>>
    GetAdapterVersionResult& WithEvaluationMetrics(EvaluationMetricsT&& value) { SetEvaluationMetrics(std::forward<EvaluationMetricsT>(value)); return *this;}
    template<typename EvaluationMetricsT = AdapterVersionEvaluationMetric>
    GetAdapterVersionResult& AddEvaluationMetrics(EvaluationMetricsT&& value) { m_evaluationMetricsHasBeenSet = true; m_evaluationMetrics.emplace_back(std::forward<EvaluationMetricsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A set of tags (key-value pairs) that are associated with the adapter
     * version.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetAdapterVersionResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetAdapterVersionResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAdapterVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_adapterId;
    bool m_adapterIdHasBeenSet = false;

    Aws::String m_adapterVersion;
    bool m_adapterVersionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Vector<FeatureType> m_featureTypes;
    bool m_featureTypesHasBeenSet = false;

    AdapterVersionStatus m_status{AdapterVersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    AdapterVersionDatasetConfig m_datasetConfig;
    bool m_datasetConfigHasBeenSet = false;

    Aws::String m_kMSKeyId;
    bool m_kMSKeyIdHasBeenSet = false;

    OutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    Aws::Vector<AdapterVersionEvaluationMetric> m_evaluationMetrics;
    bool m_evaluationMetricsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
