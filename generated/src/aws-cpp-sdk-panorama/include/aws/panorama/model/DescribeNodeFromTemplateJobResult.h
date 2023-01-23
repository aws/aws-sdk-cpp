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


    /**
     * <p>When the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>When the job was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }

    /**
     * <p>When the job was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }

    /**
     * <p>When the job was created.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>When the job was created.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The job's ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }

    /**
     * <p>The job's ID.</p>
     */
    inline void SetJobId(const char* value) { m_jobId.assign(value); }

    /**
     * <p>The job's ID.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The job's ID.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The job's tags.</p>
     */
    inline const Aws::Vector<JobResourceTags>& GetJobTags() const{ return m_jobTags; }

    /**
     * <p>The job's tags.</p>
     */
    inline void SetJobTags(const Aws::Vector<JobResourceTags>& value) { m_jobTags = value; }

    /**
     * <p>The job's tags.</p>
     */
    inline void SetJobTags(Aws::Vector<JobResourceTags>&& value) { m_jobTags = std::move(value); }

    /**
     * <p>The job's tags.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithJobTags(const Aws::Vector<JobResourceTags>& value) { SetJobTags(value); return *this;}

    /**
     * <p>The job's tags.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithJobTags(Aws::Vector<JobResourceTags>&& value) { SetJobTags(std::move(value)); return *this;}

    /**
     * <p>The job's tags.</p>
     */
    inline DescribeNodeFromTemplateJobResult& AddJobTags(const JobResourceTags& value) { m_jobTags.push_back(value); return *this; }

    /**
     * <p>The job's tags.</p>
     */
    inline DescribeNodeFromTemplateJobResult& AddJobTags(JobResourceTags&& value) { m_jobTags.push_back(std::move(value)); return *this; }


    /**
     * <p>When the job was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>When the job was updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }

    /**
     * <p>When the job was updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }

    /**
     * <p>When the job was updated.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>When the job was updated.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The node's description.</p>
     */
    inline const Aws::String& GetNodeDescription() const{ return m_nodeDescription; }

    /**
     * <p>The node's description.</p>
     */
    inline void SetNodeDescription(const Aws::String& value) { m_nodeDescription = value; }

    /**
     * <p>The node's description.</p>
     */
    inline void SetNodeDescription(Aws::String&& value) { m_nodeDescription = std::move(value); }

    /**
     * <p>The node's description.</p>
     */
    inline void SetNodeDescription(const char* value) { m_nodeDescription.assign(value); }

    /**
     * <p>The node's description.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithNodeDescription(const Aws::String& value) { SetNodeDescription(value); return *this;}

    /**
     * <p>The node's description.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithNodeDescription(Aws::String&& value) { SetNodeDescription(std::move(value)); return *this;}

    /**
     * <p>The node's description.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithNodeDescription(const char* value) { SetNodeDescription(value); return *this;}


    /**
     * <p>The node's name.</p>
     */
    inline const Aws::String& GetNodeName() const{ return m_nodeName; }

    /**
     * <p>The node's name.</p>
     */
    inline void SetNodeName(const Aws::String& value) { m_nodeName = value; }

    /**
     * <p>The node's name.</p>
     */
    inline void SetNodeName(Aws::String&& value) { m_nodeName = std::move(value); }

    /**
     * <p>The node's name.</p>
     */
    inline void SetNodeName(const char* value) { m_nodeName.assign(value); }

    /**
     * <p>The node's name.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithNodeName(const Aws::String& value) { SetNodeName(value); return *this;}

    /**
     * <p>The node's name.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithNodeName(Aws::String&& value) { SetNodeName(std::move(value)); return *this;}

    /**
     * <p>The node's name.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithNodeName(const char* value) { SetNodeName(value); return *this;}


    /**
     * <p>The job's output package name.</p>
     */
    inline const Aws::String& GetOutputPackageName() const{ return m_outputPackageName; }

    /**
     * <p>The job's output package name.</p>
     */
    inline void SetOutputPackageName(const Aws::String& value) { m_outputPackageName = value; }

    /**
     * <p>The job's output package name.</p>
     */
    inline void SetOutputPackageName(Aws::String&& value) { m_outputPackageName = std::move(value); }

    /**
     * <p>The job's output package name.</p>
     */
    inline void SetOutputPackageName(const char* value) { m_outputPackageName.assign(value); }

    /**
     * <p>The job's output package name.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithOutputPackageName(const Aws::String& value) { SetOutputPackageName(value); return *this;}

    /**
     * <p>The job's output package name.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithOutputPackageName(Aws::String&& value) { SetOutputPackageName(std::move(value)); return *this;}

    /**
     * <p>The job's output package name.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithOutputPackageName(const char* value) { SetOutputPackageName(value); return *this;}


    /**
     * <p>The job's output package version.</p>
     */
    inline const Aws::String& GetOutputPackageVersion() const{ return m_outputPackageVersion; }

    /**
     * <p>The job's output package version.</p>
     */
    inline void SetOutputPackageVersion(const Aws::String& value) { m_outputPackageVersion = value; }

    /**
     * <p>The job's output package version.</p>
     */
    inline void SetOutputPackageVersion(Aws::String&& value) { m_outputPackageVersion = std::move(value); }

    /**
     * <p>The job's output package version.</p>
     */
    inline void SetOutputPackageVersion(const char* value) { m_outputPackageVersion.assign(value); }

    /**
     * <p>The job's output package version.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithOutputPackageVersion(const Aws::String& value) { SetOutputPackageVersion(value); return *this;}

    /**
     * <p>The job's output package version.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithOutputPackageVersion(Aws::String&& value) { SetOutputPackageVersion(std::move(value)); return *this;}

    /**
     * <p>The job's output package version.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithOutputPackageVersion(const char* value) { SetOutputPackageVersion(value); return *this;}


    /**
     * <p>The job's status.</p>
     */
    inline const NodeFromTemplateJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The job's status.</p>
     */
    inline void SetStatus(const NodeFromTemplateJobStatus& value) { m_status = value; }

    /**
     * <p>The job's status.</p>
     */
    inline void SetStatus(NodeFromTemplateJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The job's status.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithStatus(const NodeFromTemplateJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The job's status.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithStatus(NodeFromTemplateJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The job's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The job's status message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>The job's status message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>The job's status message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>The job's status message.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The job's status message.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The job's status message.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The job's template parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTemplateParameters() const{ return m_templateParameters; }

    /**
     * <p>The job's template parameters.</p>
     */
    inline void SetTemplateParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_templateParameters = value; }

    /**
     * <p>The job's template parameters.</p>
     */
    inline void SetTemplateParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_templateParameters = std::move(value); }

    /**
     * <p>The job's template parameters.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithTemplateParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetTemplateParameters(value); return *this;}

    /**
     * <p>The job's template parameters.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithTemplateParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetTemplateParameters(std::move(value)); return *this;}

    /**
     * <p>The job's template parameters.</p>
     */
    inline DescribeNodeFromTemplateJobResult& AddTemplateParameters(const Aws::String& key, const Aws::String& value) { m_templateParameters.emplace(key, value); return *this; }

    /**
     * <p>The job's template parameters.</p>
     */
    inline DescribeNodeFromTemplateJobResult& AddTemplateParameters(Aws::String&& key, const Aws::String& value) { m_templateParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The job's template parameters.</p>
     */
    inline DescribeNodeFromTemplateJobResult& AddTemplateParameters(const Aws::String& key, Aws::String&& value) { m_templateParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The job's template parameters.</p>
     */
    inline DescribeNodeFromTemplateJobResult& AddTemplateParameters(Aws::String&& key, Aws::String&& value) { m_templateParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The job's template parameters.</p>
     */
    inline DescribeNodeFromTemplateJobResult& AddTemplateParameters(const char* key, Aws::String&& value) { m_templateParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The job's template parameters.</p>
     */
    inline DescribeNodeFromTemplateJobResult& AddTemplateParameters(Aws::String&& key, const char* value) { m_templateParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The job's template parameters.</p>
     */
    inline DescribeNodeFromTemplateJobResult& AddTemplateParameters(const char* key, const char* value) { m_templateParameters.emplace(key, value); return *this; }


    /**
     * <p>The job's template type.</p>
     */
    inline const TemplateType& GetTemplateType() const{ return m_templateType; }

    /**
     * <p>The job's template type.</p>
     */
    inline void SetTemplateType(const TemplateType& value) { m_templateType = value; }

    /**
     * <p>The job's template type.</p>
     */
    inline void SetTemplateType(TemplateType&& value) { m_templateType = std::move(value); }

    /**
     * <p>The job's template type.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithTemplateType(const TemplateType& value) { SetTemplateType(value); return *this;}

    /**
     * <p>The job's template type.</p>
     */
    inline DescribeNodeFromTemplateJobResult& WithTemplateType(TemplateType&& value) { SetTemplateType(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
