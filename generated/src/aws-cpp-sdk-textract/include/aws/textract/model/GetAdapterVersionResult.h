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
    AWS_TEXTRACT_API GetAdapterVersionResult();
    AWS_TEXTRACT_API GetAdapterVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TEXTRACT_API GetAdapterVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A string containing a unique ID for the adapter version being retrieved.</p>
     */
    inline const Aws::String& GetAdapterId() const{ return m_adapterId; }

    /**
     * <p>A string containing a unique ID for the adapter version being retrieved.</p>
     */
    inline void SetAdapterId(const Aws::String& value) { m_adapterId = value; }

    /**
     * <p>A string containing a unique ID for the adapter version being retrieved.</p>
     */
    inline void SetAdapterId(Aws::String&& value) { m_adapterId = std::move(value); }

    /**
     * <p>A string containing a unique ID for the adapter version being retrieved.</p>
     */
    inline void SetAdapterId(const char* value) { m_adapterId.assign(value); }

    /**
     * <p>A string containing a unique ID for the adapter version being retrieved.</p>
     */
    inline GetAdapterVersionResult& WithAdapterId(const Aws::String& value) { SetAdapterId(value); return *this;}

    /**
     * <p>A string containing a unique ID for the adapter version being retrieved.</p>
     */
    inline GetAdapterVersionResult& WithAdapterId(Aws::String&& value) { SetAdapterId(std::move(value)); return *this;}

    /**
     * <p>A string containing a unique ID for the adapter version being retrieved.</p>
     */
    inline GetAdapterVersionResult& WithAdapterId(const char* value) { SetAdapterId(value); return *this;}


    /**
     * <p>A string containing the adapter version that has been retrieved.</p>
     */
    inline const Aws::String& GetAdapterVersion() const{ return m_adapterVersion; }

    /**
     * <p>A string containing the adapter version that has been retrieved.</p>
     */
    inline void SetAdapterVersion(const Aws::String& value) { m_adapterVersion = value; }

    /**
     * <p>A string containing the adapter version that has been retrieved.</p>
     */
    inline void SetAdapterVersion(Aws::String&& value) { m_adapterVersion = std::move(value); }

    /**
     * <p>A string containing the adapter version that has been retrieved.</p>
     */
    inline void SetAdapterVersion(const char* value) { m_adapterVersion.assign(value); }

    /**
     * <p>A string containing the adapter version that has been retrieved.</p>
     */
    inline GetAdapterVersionResult& WithAdapterVersion(const Aws::String& value) { SetAdapterVersion(value); return *this;}

    /**
     * <p>A string containing the adapter version that has been retrieved.</p>
     */
    inline GetAdapterVersionResult& WithAdapterVersion(Aws::String&& value) { SetAdapterVersion(std::move(value)); return *this;}

    /**
     * <p>A string containing the adapter version that has been retrieved.</p>
     */
    inline GetAdapterVersionResult& WithAdapterVersion(const char* value) { SetAdapterVersion(value); return *this;}


    /**
     * <p>The time that the adapter version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the adapter version was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time that the adapter version was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time that the adapter version was created.</p>
     */
    inline GetAdapterVersionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the adapter version was created.</p>
     */
    inline GetAdapterVersionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>List of the targeted feature types for the requested adapter version.</p>
     */
    inline const Aws::Vector<FeatureType>& GetFeatureTypes() const{ return m_featureTypes; }

    /**
     * <p>List of the targeted feature types for the requested adapter version.</p>
     */
    inline void SetFeatureTypes(const Aws::Vector<FeatureType>& value) { m_featureTypes = value; }

    /**
     * <p>List of the targeted feature types for the requested adapter version.</p>
     */
    inline void SetFeatureTypes(Aws::Vector<FeatureType>&& value) { m_featureTypes = std::move(value); }

    /**
     * <p>List of the targeted feature types for the requested adapter version.</p>
     */
    inline GetAdapterVersionResult& WithFeatureTypes(const Aws::Vector<FeatureType>& value) { SetFeatureTypes(value); return *this;}

    /**
     * <p>List of the targeted feature types for the requested adapter version.</p>
     */
    inline GetAdapterVersionResult& WithFeatureTypes(Aws::Vector<FeatureType>&& value) { SetFeatureTypes(std::move(value)); return *this;}

    /**
     * <p>List of the targeted feature types for the requested adapter version.</p>
     */
    inline GetAdapterVersionResult& AddFeatureTypes(const FeatureType& value) { m_featureTypes.push_back(value); return *this; }

    /**
     * <p>List of the targeted feature types for the requested adapter version.</p>
     */
    inline GetAdapterVersionResult& AddFeatureTypes(FeatureType&& value) { m_featureTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The status of the adapter version that has been requested.</p>
     */
    inline const AdapterVersionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the adapter version that has been requested.</p>
     */
    inline void SetStatus(const AdapterVersionStatus& value) { m_status = value; }

    /**
     * <p>The status of the adapter version that has been requested.</p>
     */
    inline void SetStatus(AdapterVersionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the adapter version that has been requested.</p>
     */
    inline GetAdapterVersionResult& WithStatus(const AdapterVersionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the adapter version that has been requested.</p>
     */
    inline GetAdapterVersionResult& WithStatus(AdapterVersionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A message that describes the status of the requested adapter version.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A message that describes the status of the requested adapter version.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>A message that describes the status of the requested adapter version.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>A message that describes the status of the requested adapter version.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>A message that describes the status of the requested adapter version.</p>
     */
    inline GetAdapterVersionResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A message that describes the status of the requested adapter version.</p>
     */
    inline GetAdapterVersionResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A message that describes the status of the requested adapter version.</p>
     */
    inline GetAdapterVersionResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>Specifies a dataset used to train a new adapter version. Takes a
     * ManifestS3Objec as the value.</p>
     */
    inline const AdapterVersionDatasetConfig& GetDatasetConfig() const{ return m_datasetConfig; }

    /**
     * <p>Specifies a dataset used to train a new adapter version. Takes a
     * ManifestS3Objec as the value.</p>
     */
    inline void SetDatasetConfig(const AdapterVersionDatasetConfig& value) { m_datasetConfig = value; }

    /**
     * <p>Specifies a dataset used to train a new adapter version. Takes a
     * ManifestS3Objec as the value.</p>
     */
    inline void SetDatasetConfig(AdapterVersionDatasetConfig&& value) { m_datasetConfig = std::move(value); }

    /**
     * <p>Specifies a dataset used to train a new adapter version. Takes a
     * ManifestS3Objec as the value.</p>
     */
    inline GetAdapterVersionResult& WithDatasetConfig(const AdapterVersionDatasetConfig& value) { SetDatasetConfig(value); return *this;}

    /**
     * <p>Specifies a dataset used to train a new adapter version. Takes a
     * ManifestS3Objec as the value.</p>
     */
    inline GetAdapterVersionResult& WithDatasetConfig(AdapterVersionDatasetConfig&& value) { SetDatasetConfig(std::move(value)); return *this;}


    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). Used to
     * encrypt your documents.</p>
     */
    inline const Aws::String& GetKMSKeyId() const{ return m_kMSKeyId; }

    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). Used to
     * encrypt your documents.</p>
     */
    inline void SetKMSKeyId(const Aws::String& value) { m_kMSKeyId = value; }

    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). Used to
     * encrypt your documents.</p>
     */
    inline void SetKMSKeyId(Aws::String&& value) { m_kMSKeyId = std::move(value); }

    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). Used to
     * encrypt your documents.</p>
     */
    inline void SetKMSKeyId(const char* value) { m_kMSKeyId.assign(value); }

    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). Used to
     * encrypt your documents.</p>
     */
    inline GetAdapterVersionResult& WithKMSKeyId(const Aws::String& value) { SetKMSKeyId(value); return *this;}

    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). Used to
     * encrypt your documents.</p>
     */
    inline GetAdapterVersionResult& WithKMSKeyId(Aws::String&& value) { SetKMSKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier for your AWS Key Management Service key (AWS KMS key). Used to
     * encrypt your documents.</p>
     */
    inline GetAdapterVersionResult& WithKMSKeyId(const char* value) { SetKMSKeyId(value); return *this;}


    
    inline const OutputConfig& GetOutputConfig() const{ return m_outputConfig; }

    
    inline void SetOutputConfig(const OutputConfig& value) { m_outputConfig = value; }

    
    inline void SetOutputConfig(OutputConfig&& value) { m_outputConfig = std::move(value); }

    
    inline GetAdapterVersionResult& WithOutputConfig(const OutputConfig& value) { SetOutputConfig(value); return *this;}

    
    inline GetAdapterVersionResult& WithOutputConfig(OutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}


    /**
     * <p>The evaluation metrics (F1 score, Precision, and Recall) for the requested
     * version, grouped by baseline metrics and adapter version.</p>
     */
    inline const Aws::Vector<AdapterVersionEvaluationMetric>& GetEvaluationMetrics() const{ return m_evaluationMetrics; }

    /**
     * <p>The evaluation metrics (F1 score, Precision, and Recall) for the requested
     * version, grouped by baseline metrics and adapter version.</p>
     */
    inline void SetEvaluationMetrics(const Aws::Vector<AdapterVersionEvaluationMetric>& value) { m_evaluationMetrics = value; }

    /**
     * <p>The evaluation metrics (F1 score, Precision, and Recall) for the requested
     * version, grouped by baseline metrics and adapter version.</p>
     */
    inline void SetEvaluationMetrics(Aws::Vector<AdapterVersionEvaluationMetric>&& value) { m_evaluationMetrics = std::move(value); }

    /**
     * <p>The evaluation metrics (F1 score, Precision, and Recall) for the requested
     * version, grouped by baseline metrics and adapter version.</p>
     */
    inline GetAdapterVersionResult& WithEvaluationMetrics(const Aws::Vector<AdapterVersionEvaluationMetric>& value) { SetEvaluationMetrics(value); return *this;}

    /**
     * <p>The evaluation metrics (F1 score, Precision, and Recall) for the requested
     * version, grouped by baseline metrics and adapter version.</p>
     */
    inline GetAdapterVersionResult& WithEvaluationMetrics(Aws::Vector<AdapterVersionEvaluationMetric>&& value) { SetEvaluationMetrics(std::move(value)); return *this;}

    /**
     * <p>The evaluation metrics (F1 score, Precision, and Recall) for the requested
     * version, grouped by baseline metrics and adapter version.</p>
     */
    inline GetAdapterVersionResult& AddEvaluationMetrics(const AdapterVersionEvaluationMetric& value) { m_evaluationMetrics.push_back(value); return *this; }

    /**
     * <p>The evaluation metrics (F1 score, Precision, and Recall) for the requested
     * version, grouped by baseline metrics and adapter version.</p>
     */
    inline GetAdapterVersionResult& AddEvaluationMetrics(AdapterVersionEvaluationMetric&& value) { m_evaluationMetrics.push_back(std::move(value)); return *this; }


    /**
     * <p>A set of tags (key-value pairs) that are associated with the adapter
     * version.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A set of tags (key-value pairs) that are associated with the adapter
     * version.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A set of tags (key-value pairs) that are associated with the adapter
     * version.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A set of tags (key-value pairs) that are associated with the adapter
     * version.</p>
     */
    inline GetAdapterVersionResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A set of tags (key-value pairs) that are associated with the adapter
     * version.</p>
     */
    inline GetAdapterVersionResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A set of tags (key-value pairs) that are associated with the adapter
     * version.</p>
     */
    inline GetAdapterVersionResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A set of tags (key-value pairs) that are associated with the adapter
     * version.</p>
     */
    inline GetAdapterVersionResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of tags (key-value pairs) that are associated with the adapter
     * version.</p>
     */
    inline GetAdapterVersionResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of tags (key-value pairs) that are associated with the adapter
     * version.</p>
     */
    inline GetAdapterVersionResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A set of tags (key-value pairs) that are associated with the adapter
     * version.</p>
     */
    inline GetAdapterVersionResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A set of tags (key-value pairs) that are associated with the adapter
     * version.</p>
     */
    inline GetAdapterVersionResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A set of tags (key-value pairs) that are associated with the adapter
     * version.</p>
     */
    inline GetAdapterVersionResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAdapterVersionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAdapterVersionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAdapterVersionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_adapterId;

    Aws::String m_adapterVersion;

    Aws::Utils::DateTime m_creationTime;

    Aws::Vector<FeatureType> m_featureTypes;

    AdapterVersionStatus m_status;

    Aws::String m_statusMessage;

    AdapterVersionDatasetConfig m_datasetConfig;

    Aws::String m_kMSKeyId;

    OutputConfig m_outputConfig;

    Aws::Vector<AdapterVersionEvaluationMetric> m_evaluationMetrics;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Textract
} // namespace Aws
