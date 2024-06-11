/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/panorama/model/NodeFromTemplateJobStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/panorama/model/TemplateType.h>
#include <aws/panorama/model/JobResourceTags.h>
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
namespace Panorama
{
namespace Model
{
  class DescribeNodeFromTemplateJobResult
  {
  public:
    AWS_PANORAMA_API DescribeNodeFromTemplateJobResult();
    AWS_PANORAMA_API DescribeNodeFromTemplateJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API DescribeNodeFromTemplateJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }
    inline DescribeNodeFromTemplateJobResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline DescribeNodeFromTemplateJobResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline DescribeNodeFromTemplateJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline DescribeNodeFromTemplateJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline DescribeNodeFromTemplateJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's tags.</p>
     */
    inline const Aws::Vector<JobResourceTags>& GetJobTags() const{ return m_jobTags; }
    inline void SetJobTags(const Aws::Vector<JobResourceTags>& value) { m_jobTags = value; }
    inline void SetJobTags(Aws::Vector<JobResourceTags>&& value) { m_jobTags = std::move(value); }
    inline DescribeNodeFromTemplateJobResult& WithJobTags(const Aws::Vector<JobResourceTags>& value) { SetJobTags(value); return *this;}
    inline DescribeNodeFromTemplateJobResult& WithJobTags(Aws::Vector<JobResourceTags>&& value) { SetJobTags(std::move(value)); return *this;}
    inline DescribeNodeFromTemplateJobResult& AddJobTags(const JobResourceTags& value) { m_jobTags.push_back(value); return *this; }
    inline DescribeNodeFromTemplateJobResult& AddJobTags(JobResourceTags&& value) { m_jobTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the job was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }
    inline DescribeNodeFromTemplateJobResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline DescribeNodeFromTemplateJobResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node's description.</p>
     */
    inline const Aws::String& GetNodeDescription() const{ return m_nodeDescription; }
    inline void SetNodeDescription(const Aws::String& value) { m_nodeDescription = value; }
    inline void SetNodeDescription(Aws::String&& value) { m_nodeDescription = std::move(value); }
    inline void SetNodeDescription(const char* value) { m_nodeDescription.assign(value); }
    inline DescribeNodeFromTemplateJobResult& WithNodeDescription(const Aws::String& value) { SetNodeDescription(value); return *this;}
    inline DescribeNodeFromTemplateJobResult& WithNodeDescription(Aws::String&& value) { SetNodeDescription(std::move(value)); return *this;}
    inline DescribeNodeFromTemplateJobResult& WithNodeDescription(const char* value) { SetNodeDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node's name.</p>
     */
    inline const Aws::String& GetNodeName() const{ return m_nodeName; }
    inline void SetNodeName(const Aws::String& value) { m_nodeName = value; }
    inline void SetNodeName(Aws::String&& value) { m_nodeName = std::move(value); }
    inline void SetNodeName(const char* value) { m_nodeName.assign(value); }
    inline DescribeNodeFromTemplateJobResult& WithNodeName(const Aws::String& value) { SetNodeName(value); return *this;}
    inline DescribeNodeFromTemplateJobResult& WithNodeName(Aws::String&& value) { SetNodeName(std::move(value)); return *this;}
    inline DescribeNodeFromTemplateJobResult& WithNodeName(const char* value) { SetNodeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's output package name.</p>
     */
    inline const Aws::String& GetOutputPackageName() const{ return m_outputPackageName; }
    inline void SetOutputPackageName(const Aws::String& value) { m_outputPackageName = value; }
    inline void SetOutputPackageName(Aws::String&& value) { m_outputPackageName = std::move(value); }
    inline void SetOutputPackageName(const char* value) { m_outputPackageName.assign(value); }
    inline DescribeNodeFromTemplateJobResult& WithOutputPackageName(const Aws::String& value) { SetOutputPackageName(value); return *this;}
    inline DescribeNodeFromTemplateJobResult& WithOutputPackageName(Aws::String&& value) { SetOutputPackageName(std::move(value)); return *this;}
    inline DescribeNodeFromTemplateJobResult& WithOutputPackageName(const char* value) { SetOutputPackageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's output package version.</p>
     */
    inline const Aws::String& GetOutputPackageVersion() const{ return m_outputPackageVersion; }
    inline void SetOutputPackageVersion(const Aws::String& value) { m_outputPackageVersion = value; }
    inline void SetOutputPackageVersion(Aws::String&& value) { m_outputPackageVersion = std::move(value); }
    inline void SetOutputPackageVersion(const char* value) { m_outputPackageVersion.assign(value); }
    inline DescribeNodeFromTemplateJobResult& WithOutputPackageVersion(const Aws::String& value) { SetOutputPackageVersion(value); return *this;}
    inline DescribeNodeFromTemplateJobResult& WithOutputPackageVersion(Aws::String&& value) { SetOutputPackageVersion(std::move(value)); return *this;}
    inline DescribeNodeFromTemplateJobResult& WithOutputPackageVersion(const char* value) { SetOutputPackageVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's status.</p>
     */
    inline const NodeFromTemplateJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const NodeFromTemplateJobStatus& value) { m_status = value; }
    inline void SetStatus(NodeFromTemplateJobStatus&& value) { m_status = std::move(value); }
    inline DescribeNodeFromTemplateJobResult& WithStatus(const NodeFromTemplateJobStatus& value) { SetStatus(value); return *this;}
    inline DescribeNodeFromTemplateJobResult& WithStatus(NodeFromTemplateJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline DescribeNodeFromTemplateJobResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline DescribeNodeFromTemplateJobResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline DescribeNodeFromTemplateJobResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's template parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTemplateParameters() const{ return m_templateParameters; }
    inline void SetTemplateParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_templateParameters = value; }
    inline void SetTemplateParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_templateParameters = std::move(value); }
    inline DescribeNodeFromTemplateJobResult& WithTemplateParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetTemplateParameters(value); return *this;}
    inline DescribeNodeFromTemplateJobResult& WithTemplateParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetTemplateParameters(std::move(value)); return *this;}
    inline DescribeNodeFromTemplateJobResult& AddTemplateParameters(const Aws::String& key, const Aws::String& value) { m_templateParameters.emplace(key, value); return *this; }
    inline DescribeNodeFromTemplateJobResult& AddTemplateParameters(Aws::String&& key, const Aws::String& value) { m_templateParameters.emplace(std::move(key), value); return *this; }
    inline DescribeNodeFromTemplateJobResult& AddTemplateParameters(const Aws::String& key, Aws::String&& value) { m_templateParameters.emplace(key, std::move(value)); return *this; }
    inline DescribeNodeFromTemplateJobResult& AddTemplateParameters(Aws::String&& key, Aws::String&& value) { m_templateParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeNodeFromTemplateJobResult& AddTemplateParameters(const char* key, Aws::String&& value) { m_templateParameters.emplace(key, std::move(value)); return *this; }
    inline DescribeNodeFromTemplateJobResult& AddTemplateParameters(Aws::String&& key, const char* value) { m_templateParameters.emplace(std::move(key), value); return *this; }
    inline DescribeNodeFromTemplateJobResult& AddTemplateParameters(const char* key, const char* value) { m_templateParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The job's template type.</p>
     */
    inline const TemplateType& GetTemplateType() const{ return m_templateType; }
    inline void SetTemplateType(const TemplateType& value) { m_templateType = value; }
    inline void SetTemplateType(TemplateType&& value) { m_templateType = std::move(value); }
    inline DescribeNodeFromTemplateJobResult& WithTemplateType(const TemplateType& value) { SetTemplateType(value); return *this;}
    inline DescribeNodeFromTemplateJobResult& WithTemplateType(TemplateType&& value) { SetTemplateType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeNodeFromTemplateJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeNodeFromTemplateJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeNodeFromTemplateJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdTime;

    Aws::String m_jobId;

    Aws::Vector<JobResourceTags> m_jobTags;

    Aws::Utils::DateTime m_lastUpdatedTime;

    Aws::String m_nodeDescription;

    Aws::String m_nodeName;

    Aws::String m_outputPackageName;

    Aws::String m_outputPackageVersion;

    NodeFromTemplateJobStatus m_status;

    Aws::String m_statusMessage;

    Aws::Map<Aws::String, Aws::String> m_templateParameters;

    TemplateType m_templateType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
