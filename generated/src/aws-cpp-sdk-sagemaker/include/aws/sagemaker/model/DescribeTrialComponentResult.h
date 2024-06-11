/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/TrialComponentSource.h>
#include <aws/sagemaker/model/TrialComponentStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sagemaker/model/MetadataProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/TrialComponentParameterValue.h>
#include <aws/sagemaker/model/TrialComponentArtifact.h>
#include <aws/sagemaker/model/TrialComponentMetricSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class DescribeTrialComponentResult
  {
  public:
    AWS_SAGEMAKER_API DescribeTrialComponentResult();
    AWS_SAGEMAKER_API DescribeTrialComponentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeTrialComponentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the trial component.</p>
     */
    inline const Aws::String& GetTrialComponentName() const{ return m_trialComponentName; }
    inline void SetTrialComponentName(const Aws::String& value) { m_trialComponentName = value; }
    inline void SetTrialComponentName(Aws::String&& value) { m_trialComponentName = std::move(value); }
    inline void SetTrialComponentName(const char* value) { m_trialComponentName.assign(value); }
    inline DescribeTrialComponentResult& WithTrialComponentName(const Aws::String& value) { SetTrialComponentName(value); return *this;}
    inline DescribeTrialComponentResult& WithTrialComponentName(Aws::String&& value) { SetTrialComponentName(std::move(value)); return *this;}
    inline DescribeTrialComponentResult& WithTrialComponentName(const char* value) { SetTrialComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trial component.</p>
     */
    inline const Aws::String& GetTrialComponentArn() const{ return m_trialComponentArn; }
    inline void SetTrialComponentArn(const Aws::String& value) { m_trialComponentArn = value; }
    inline void SetTrialComponentArn(Aws::String&& value) { m_trialComponentArn = std::move(value); }
    inline void SetTrialComponentArn(const char* value) { m_trialComponentArn.assign(value); }
    inline DescribeTrialComponentResult& WithTrialComponentArn(const Aws::String& value) { SetTrialComponentArn(value); return *this;}
    inline DescribeTrialComponentResult& WithTrialComponentArn(Aws::String&& value) { SetTrialComponentArn(std::move(value)); return *this;}
    inline DescribeTrialComponentResult& WithTrialComponentArn(const char* value) { SetTrialComponentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component as displayed. If <code>DisplayName</code> isn't
     * specified, <code>TrialComponentName</code> is displayed.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline DescribeTrialComponentResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline DescribeTrialComponentResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline DescribeTrialComponentResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source and, optionally, the job
     * type.</p>
     */
    inline const TrialComponentSource& GetSource() const{ return m_source; }
    inline void SetSource(const TrialComponentSource& value) { m_source = value; }
    inline void SetSource(TrialComponentSource&& value) { m_source = std::move(value); }
    inline DescribeTrialComponentResult& WithSource(const TrialComponentSource& value) { SetSource(value); return *this;}
    inline DescribeTrialComponentResult& WithSource(TrialComponentSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the component. States include:</p> <ul> <li> <p>InProgress</p>
     * </li> <li> <p>Completed</p> </li> <li> <p>Failed</p> </li> </ul>
     */
    inline const TrialComponentStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const TrialComponentStatus& value) { m_status = value; }
    inline void SetStatus(TrialComponentStatus&& value) { m_status = std::move(value); }
    inline DescribeTrialComponentResult& WithStatus(const TrialComponentStatus& value) { SetStatus(value); return *this;}
    inline DescribeTrialComponentResult& WithStatus(TrialComponentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the component started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }
    inline DescribeTrialComponentResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline DescribeTrialComponentResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the component ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTime = std::move(value); }
    inline DescribeTrialComponentResult& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline DescribeTrialComponentResult& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the component was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeTrialComponentResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeTrialComponentResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Who created the trial component.</p>
     */
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const UserContext& value) { m_createdBy = value; }
    inline void SetCreatedBy(UserContext&& value) { m_createdBy = std::move(value); }
    inline DescribeTrialComponentResult& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}
    inline DescribeTrialComponentResult& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the component was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeTrialComponentResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeTrialComponentResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Who last modified the component.</p>
     */
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedBy = std::move(value); }
    inline DescribeTrialComponentResult& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}
    inline DescribeTrialComponentResult& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hyperparameters of the component.</p>
     */
    inline const Aws::Map<Aws::String, TrialComponentParameterValue>& GetParameters() const{ return m_parameters; }
    inline void SetParameters(const Aws::Map<Aws::String, TrialComponentParameterValue>& value) { m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, TrialComponentParameterValue>&& value) { m_parameters = std::move(value); }
    inline DescribeTrialComponentResult& WithParameters(const Aws::Map<Aws::String, TrialComponentParameterValue>& value) { SetParameters(value); return *this;}
    inline DescribeTrialComponentResult& WithParameters(Aws::Map<Aws::String, TrialComponentParameterValue>&& value) { SetParameters(std::move(value)); return *this;}
    inline DescribeTrialComponentResult& AddParameters(const Aws::String& key, const TrialComponentParameterValue& value) { m_parameters.emplace(key, value); return *this; }
    inline DescribeTrialComponentResult& AddParameters(Aws::String&& key, const TrialComponentParameterValue& value) { m_parameters.emplace(std::move(key), value); return *this; }
    inline DescribeTrialComponentResult& AddParameters(const Aws::String& key, TrialComponentParameterValue&& value) { m_parameters.emplace(key, std::move(value)); return *this; }
    inline DescribeTrialComponentResult& AddParameters(Aws::String&& key, TrialComponentParameterValue&& value) { m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeTrialComponentResult& AddParameters(const char* key, TrialComponentParameterValue&& value) { m_parameters.emplace(key, std::move(value)); return *this; }
    inline DescribeTrialComponentResult& AddParameters(const char* key, const TrialComponentParameterValue& value) { m_parameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The input artifacts of the component.</p>
     */
    inline const Aws::Map<Aws::String, TrialComponentArtifact>& GetInputArtifacts() const{ return m_inputArtifacts; }
    inline void SetInputArtifacts(const Aws::Map<Aws::String, TrialComponentArtifact>& value) { m_inputArtifacts = value; }
    inline void SetInputArtifacts(Aws::Map<Aws::String, TrialComponentArtifact>&& value) { m_inputArtifacts = std::move(value); }
    inline DescribeTrialComponentResult& WithInputArtifacts(const Aws::Map<Aws::String, TrialComponentArtifact>& value) { SetInputArtifacts(value); return *this;}
    inline DescribeTrialComponentResult& WithInputArtifacts(Aws::Map<Aws::String, TrialComponentArtifact>&& value) { SetInputArtifacts(std::move(value)); return *this;}
    inline DescribeTrialComponentResult& AddInputArtifacts(const Aws::String& key, const TrialComponentArtifact& value) { m_inputArtifacts.emplace(key, value); return *this; }
    inline DescribeTrialComponentResult& AddInputArtifacts(Aws::String&& key, const TrialComponentArtifact& value) { m_inputArtifacts.emplace(std::move(key), value); return *this; }
    inline DescribeTrialComponentResult& AddInputArtifacts(const Aws::String& key, TrialComponentArtifact&& value) { m_inputArtifacts.emplace(key, std::move(value)); return *this; }
    inline DescribeTrialComponentResult& AddInputArtifacts(Aws::String&& key, TrialComponentArtifact&& value) { m_inputArtifacts.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeTrialComponentResult& AddInputArtifacts(const char* key, TrialComponentArtifact&& value) { m_inputArtifacts.emplace(key, std::move(value)); return *this; }
    inline DescribeTrialComponentResult& AddInputArtifacts(const char* key, const TrialComponentArtifact& value) { m_inputArtifacts.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The output artifacts of the component.</p>
     */
    inline const Aws::Map<Aws::String, TrialComponentArtifact>& GetOutputArtifacts() const{ return m_outputArtifacts; }
    inline void SetOutputArtifacts(const Aws::Map<Aws::String, TrialComponentArtifact>& value) { m_outputArtifacts = value; }
    inline void SetOutputArtifacts(Aws::Map<Aws::String, TrialComponentArtifact>&& value) { m_outputArtifacts = std::move(value); }
    inline DescribeTrialComponentResult& WithOutputArtifacts(const Aws::Map<Aws::String, TrialComponentArtifact>& value) { SetOutputArtifacts(value); return *this;}
    inline DescribeTrialComponentResult& WithOutputArtifacts(Aws::Map<Aws::String, TrialComponentArtifact>&& value) { SetOutputArtifacts(std::move(value)); return *this;}
    inline DescribeTrialComponentResult& AddOutputArtifacts(const Aws::String& key, const TrialComponentArtifact& value) { m_outputArtifacts.emplace(key, value); return *this; }
    inline DescribeTrialComponentResult& AddOutputArtifacts(Aws::String&& key, const TrialComponentArtifact& value) { m_outputArtifacts.emplace(std::move(key), value); return *this; }
    inline DescribeTrialComponentResult& AddOutputArtifacts(const Aws::String& key, TrialComponentArtifact&& value) { m_outputArtifacts.emplace(key, std::move(value)); return *this; }
    inline DescribeTrialComponentResult& AddOutputArtifacts(Aws::String&& key, TrialComponentArtifact&& value) { m_outputArtifacts.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeTrialComponentResult& AddOutputArtifacts(const char* key, TrialComponentArtifact&& value) { m_outputArtifacts.emplace(key, std::move(value)); return *this; }
    inline DescribeTrialComponentResult& AddOutputArtifacts(const char* key, const TrialComponentArtifact& value) { m_outputArtifacts.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const MetadataProperties& GetMetadataProperties() const{ return m_metadataProperties; }
    inline void SetMetadataProperties(const MetadataProperties& value) { m_metadataProperties = value; }
    inline void SetMetadataProperties(MetadataProperties&& value) { m_metadataProperties = std::move(value); }
    inline DescribeTrialComponentResult& WithMetadataProperties(const MetadataProperties& value) { SetMetadataProperties(value); return *this;}
    inline DescribeTrialComponentResult& WithMetadataProperties(MetadataProperties&& value) { SetMetadataProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metrics for the component.</p>
     */
    inline const Aws::Vector<TrialComponentMetricSummary>& GetMetrics() const{ return m_metrics; }
    inline void SetMetrics(const Aws::Vector<TrialComponentMetricSummary>& value) { m_metrics = value; }
    inline void SetMetrics(Aws::Vector<TrialComponentMetricSummary>&& value) { m_metrics = std::move(value); }
    inline DescribeTrialComponentResult& WithMetrics(const Aws::Vector<TrialComponentMetricSummary>& value) { SetMetrics(value); return *this;}
    inline DescribeTrialComponentResult& WithMetrics(Aws::Vector<TrialComponentMetricSummary>&& value) { SetMetrics(std::move(value)); return *this;}
    inline DescribeTrialComponentResult& AddMetrics(const TrialComponentMetricSummary& value) { m_metrics.push_back(value); return *this; }
    inline DescribeTrialComponentResult& AddMetrics(TrialComponentMetricSummary&& value) { m_metrics.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the lineage group.</p>
     */
    inline const Aws::String& GetLineageGroupArn() const{ return m_lineageGroupArn; }
    inline void SetLineageGroupArn(const Aws::String& value) { m_lineageGroupArn = value; }
    inline void SetLineageGroupArn(Aws::String&& value) { m_lineageGroupArn = std::move(value); }
    inline void SetLineageGroupArn(const char* value) { m_lineageGroupArn.assign(value); }
    inline DescribeTrialComponentResult& WithLineageGroupArn(const Aws::String& value) { SetLineageGroupArn(value); return *this;}
    inline DescribeTrialComponentResult& WithLineageGroupArn(Aws::String&& value) { SetLineageGroupArn(std::move(value)); return *this;}
    inline DescribeTrialComponentResult& WithLineageGroupArn(const char* value) { SetLineageGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of ARNs and, if applicable, job types for multiple sources of an
     * experiment run.</p>
     */
    inline const Aws::Vector<TrialComponentSource>& GetSources() const{ return m_sources; }
    inline void SetSources(const Aws::Vector<TrialComponentSource>& value) { m_sources = value; }
    inline void SetSources(Aws::Vector<TrialComponentSource>&& value) { m_sources = std::move(value); }
    inline DescribeTrialComponentResult& WithSources(const Aws::Vector<TrialComponentSource>& value) { SetSources(value); return *this;}
    inline DescribeTrialComponentResult& WithSources(Aws::Vector<TrialComponentSource>&& value) { SetSources(std::move(value)); return *this;}
    inline DescribeTrialComponentResult& AddSources(const TrialComponentSource& value) { m_sources.push_back(value); return *this; }
    inline DescribeTrialComponentResult& AddSources(TrialComponentSource&& value) { m_sources.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeTrialComponentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeTrialComponentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeTrialComponentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_trialComponentName;

    Aws::String m_trialComponentArn;

    Aws::String m_displayName;

    TrialComponentSource m_source;

    TrialComponentStatus m_status;

    Aws::Utils::DateTime m_startTime;

    Aws::Utils::DateTime m_endTime;

    Aws::Utils::DateTime m_creationTime;

    UserContext m_createdBy;

    Aws::Utils::DateTime m_lastModifiedTime;

    UserContext m_lastModifiedBy;

    Aws::Map<Aws::String, TrialComponentParameterValue> m_parameters;

    Aws::Map<Aws::String, TrialComponentArtifact> m_inputArtifacts;

    Aws::Map<Aws::String, TrialComponentArtifact> m_outputArtifacts;

    MetadataProperties m_metadataProperties;

    Aws::Vector<TrialComponentMetricSummary> m_metrics;

    Aws::String m_lineageGroupArn;

    Aws::Vector<TrialComponentSource> m_sources;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
