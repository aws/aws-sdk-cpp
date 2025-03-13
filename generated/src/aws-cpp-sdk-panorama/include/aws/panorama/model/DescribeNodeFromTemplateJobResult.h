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
    AWS_PANORAMA_API DescribeNodeFromTemplateJobResult() = default;
    AWS_PANORAMA_API DescribeNodeFromTemplateJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API DescribeNodeFromTemplateJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    DescribeNodeFromTemplateJobResult& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's ID.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    DescribeNodeFromTemplateJobResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's tags.</p>
     */
    inline const Aws::Vector<JobResourceTags>& GetJobTags() const { return m_jobTags; }
    template<typename JobTagsT = Aws::Vector<JobResourceTags>>
    void SetJobTags(JobTagsT&& value) { m_jobTagsHasBeenSet = true; m_jobTags = std::forward<JobTagsT>(value); }
    template<typename JobTagsT = Aws::Vector<JobResourceTags>>
    DescribeNodeFromTemplateJobResult& WithJobTags(JobTagsT&& value) { SetJobTags(std::forward<JobTagsT>(value)); return *this;}
    template<typename JobTagsT = JobResourceTags>
    DescribeNodeFromTemplateJobResult& AddJobTags(JobTagsT&& value) { m_jobTagsHasBeenSet = true; m_jobTags.emplace_back(std::forward<JobTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the job was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    DescribeNodeFromTemplateJobResult& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node's description.</p>
     */
    inline const Aws::String& GetNodeDescription() const { return m_nodeDescription; }
    template<typename NodeDescriptionT = Aws::String>
    void SetNodeDescription(NodeDescriptionT&& value) { m_nodeDescriptionHasBeenSet = true; m_nodeDescription = std::forward<NodeDescriptionT>(value); }
    template<typename NodeDescriptionT = Aws::String>
    DescribeNodeFromTemplateJobResult& WithNodeDescription(NodeDescriptionT&& value) { SetNodeDescription(std::forward<NodeDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node's name.</p>
     */
    inline const Aws::String& GetNodeName() const { return m_nodeName; }
    template<typename NodeNameT = Aws::String>
    void SetNodeName(NodeNameT&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::forward<NodeNameT>(value); }
    template<typename NodeNameT = Aws::String>
    DescribeNodeFromTemplateJobResult& WithNodeName(NodeNameT&& value) { SetNodeName(std::forward<NodeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's output package name.</p>
     */
    inline const Aws::String& GetOutputPackageName() const { return m_outputPackageName; }
    template<typename OutputPackageNameT = Aws::String>
    void SetOutputPackageName(OutputPackageNameT&& value) { m_outputPackageNameHasBeenSet = true; m_outputPackageName = std::forward<OutputPackageNameT>(value); }
    template<typename OutputPackageNameT = Aws::String>
    DescribeNodeFromTemplateJobResult& WithOutputPackageName(OutputPackageNameT&& value) { SetOutputPackageName(std::forward<OutputPackageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's output package version.</p>
     */
    inline const Aws::String& GetOutputPackageVersion() const { return m_outputPackageVersion; }
    template<typename OutputPackageVersionT = Aws::String>
    void SetOutputPackageVersion(OutputPackageVersionT&& value) { m_outputPackageVersionHasBeenSet = true; m_outputPackageVersion = std::forward<OutputPackageVersionT>(value); }
    template<typename OutputPackageVersionT = Aws::String>
    DescribeNodeFromTemplateJobResult& WithOutputPackageVersion(OutputPackageVersionT&& value) { SetOutputPackageVersion(std::forward<OutputPackageVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's status.</p>
     */
    inline NodeFromTemplateJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(NodeFromTemplateJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeNodeFromTemplateJobResult& WithStatus(NodeFromTemplateJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    DescribeNodeFromTemplateJobResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's template parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTemplateParameters() const { return m_templateParameters; }
    template<typename TemplateParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetTemplateParameters(TemplateParametersT&& value) { m_templateParametersHasBeenSet = true; m_templateParameters = std::forward<TemplateParametersT>(value); }
    template<typename TemplateParametersT = Aws::Map<Aws::String, Aws::String>>
    DescribeNodeFromTemplateJobResult& WithTemplateParameters(TemplateParametersT&& value) { SetTemplateParameters(std::forward<TemplateParametersT>(value)); return *this;}
    template<typename TemplateParametersKeyT = Aws::String, typename TemplateParametersValueT = Aws::String>
    DescribeNodeFromTemplateJobResult& AddTemplateParameters(TemplateParametersKeyT&& key, TemplateParametersValueT&& value) {
      m_templateParametersHasBeenSet = true; m_templateParameters.emplace(std::forward<TemplateParametersKeyT>(key), std::forward<TemplateParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The job's template type.</p>
     */
    inline TemplateType GetTemplateType() const { return m_templateType; }
    inline void SetTemplateType(TemplateType value) { m_templateTypeHasBeenSet = true; m_templateType = value; }
    inline DescribeNodeFromTemplateJobResult& WithTemplateType(TemplateType value) { SetTemplateType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeNodeFromTemplateJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::Vector<JobResourceTags> m_jobTags;
    bool m_jobTagsHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    Aws::String m_nodeDescription;
    bool m_nodeDescriptionHasBeenSet = false;

    Aws::String m_nodeName;
    bool m_nodeNameHasBeenSet = false;

    Aws::String m_outputPackageName;
    bool m_outputPackageNameHasBeenSet = false;

    Aws::String m_outputPackageVersion;
    bool m_outputPackageVersionHasBeenSet = false;

    NodeFromTemplateJobStatus m_status{NodeFromTemplateJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_templateParameters;
    bool m_templateParametersHasBeenSet = false;

    TemplateType m_templateType{TemplateType::NOT_SET};
    bool m_templateTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
