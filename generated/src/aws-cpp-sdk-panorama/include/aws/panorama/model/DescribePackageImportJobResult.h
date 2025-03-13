/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/panorama/model/PackageImportJobInputConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/panorama/model/PackageImportJobType.h>
#include <aws/panorama/model/PackageImportJobOutput.h>
#include <aws/panorama/model/PackageImportJobOutputConfig.h>
#include <aws/panorama/model/PackageImportJobStatus.h>
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
  class DescribePackageImportJobResult
  {
  public:
    AWS_PANORAMA_API DescribePackageImportJobResult() = default;
    AWS_PANORAMA_API DescribePackageImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API DescribePackageImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The job's client token.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    DescribePackageImportJobResult& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    DescribePackageImportJobResult& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's input config.</p>
     */
    inline const PackageImportJobInputConfig& GetInputConfig() const { return m_inputConfig; }
    template<typename InputConfigT = PackageImportJobInputConfig>
    void SetInputConfig(InputConfigT&& value) { m_inputConfigHasBeenSet = true; m_inputConfig = std::forward<InputConfigT>(value); }
    template<typename InputConfigT = PackageImportJobInputConfig>
    DescribePackageImportJobResult& WithInputConfig(InputConfigT&& value) { SetInputConfig(std::forward<InputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's ID.</p>
     */
    inline const Aws::String& GetJobId() const { return m_jobId; }
    template<typename JobIdT = Aws::String>
    void SetJobId(JobIdT&& value) { m_jobIdHasBeenSet = true; m_jobId = std::forward<JobIdT>(value); }
    template<typename JobIdT = Aws::String>
    DescribePackageImportJobResult& WithJobId(JobIdT&& value) { SetJobId(std::forward<JobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's tags.</p>
     */
    inline const Aws::Vector<JobResourceTags>& GetJobTags() const { return m_jobTags; }
    template<typename JobTagsT = Aws::Vector<JobResourceTags>>
    void SetJobTags(JobTagsT&& value) { m_jobTagsHasBeenSet = true; m_jobTags = std::forward<JobTagsT>(value); }
    template<typename JobTagsT = Aws::Vector<JobResourceTags>>
    DescribePackageImportJobResult& WithJobTags(JobTagsT&& value) { SetJobTags(std::forward<JobTagsT>(value)); return *this;}
    template<typename JobTagsT = JobResourceTags>
    DescribePackageImportJobResult& AddJobTags(JobTagsT&& value) { m_jobTagsHasBeenSet = true; m_jobTags.emplace_back(std::forward<JobTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The job's type.</p>
     */
    inline PackageImportJobType GetJobType() const { return m_jobType; }
    inline void SetJobType(PackageImportJobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline DescribePackageImportJobResult& WithJobType(PackageImportJobType value) { SetJobType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the job was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    DescribePackageImportJobResult& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's output.</p>
     */
    inline const PackageImportJobOutput& GetOutput() const { return m_output; }
    template<typename OutputT = PackageImportJobOutput>
    void SetOutput(OutputT&& value) { m_outputHasBeenSet = true; m_output = std::forward<OutputT>(value); }
    template<typename OutputT = PackageImportJobOutput>
    DescribePackageImportJobResult& WithOutput(OutputT&& value) { SetOutput(std::forward<OutputT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's output config.</p>
     */
    inline const PackageImportJobOutputConfig& GetOutputConfig() const { return m_outputConfig; }
    template<typename OutputConfigT = PackageImportJobOutputConfig>
    void SetOutputConfig(OutputConfigT&& value) { m_outputConfigHasBeenSet = true; m_outputConfig = std::forward<OutputConfigT>(value); }
    template<typename OutputConfigT = PackageImportJobOutputConfig>
    DescribePackageImportJobResult& WithOutputConfig(OutputConfigT&& value) { SetOutputConfig(std::forward<OutputConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's status.</p>
     */
    inline PackageImportJobStatus GetStatus() const { return m_status; }
    inline void SetStatus(PackageImportJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribePackageImportJobResult& WithStatus(PackageImportJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    DescribePackageImportJobResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePackageImportJobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    PackageImportJobInputConfig m_inputConfig;
    bool m_inputConfigHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::Vector<JobResourceTags> m_jobTags;
    bool m_jobTagsHasBeenSet = false;

    PackageImportJobType m_jobType{PackageImportJobType::NOT_SET};
    bool m_jobTypeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    PackageImportJobOutput m_output;
    bool m_outputHasBeenSet = false;

    PackageImportJobOutputConfig m_outputConfig;
    bool m_outputConfigHasBeenSet = false;

    PackageImportJobStatus m_status{PackageImportJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
