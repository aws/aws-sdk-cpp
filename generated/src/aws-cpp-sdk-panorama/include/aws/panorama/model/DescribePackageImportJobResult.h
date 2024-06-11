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
    AWS_PANORAMA_API DescribePackageImportJobResult();
    AWS_PANORAMA_API DescribePackageImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PANORAMA_API DescribePackageImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The job's client token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }
    inline DescribePackageImportJobResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline DescribePackageImportJobResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline DescribePackageImportJobResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTime = std::move(value); }
    inline DescribePackageImportJobResult& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline DescribePackageImportJobResult& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's input config.</p>
     */
    inline const PackageImportJobInputConfig& GetInputConfig() const{ return m_inputConfig; }
    inline void SetInputConfig(const PackageImportJobInputConfig& value) { m_inputConfig = value; }
    inline void SetInputConfig(PackageImportJobInputConfig&& value) { m_inputConfig = std::move(value); }
    inline DescribePackageImportJobResult& WithInputConfig(const PackageImportJobInputConfig& value) { SetInputConfig(value); return *this;}
    inline DescribePackageImportJobResult& WithInputConfig(PackageImportJobInputConfig&& value) { SetInputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline void SetJobId(const Aws::String& value) { m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobId.assign(value); }
    inline DescribePackageImportJobResult& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline DescribePackageImportJobResult& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline DescribePackageImportJobResult& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's tags.</p>
     */
    inline const Aws::Vector<JobResourceTags>& GetJobTags() const{ return m_jobTags; }
    inline void SetJobTags(const Aws::Vector<JobResourceTags>& value) { m_jobTags = value; }
    inline void SetJobTags(Aws::Vector<JobResourceTags>&& value) { m_jobTags = std::move(value); }
    inline DescribePackageImportJobResult& WithJobTags(const Aws::Vector<JobResourceTags>& value) { SetJobTags(value); return *this;}
    inline DescribePackageImportJobResult& WithJobTags(Aws::Vector<JobResourceTags>&& value) { SetJobTags(std::move(value)); return *this;}
    inline DescribePackageImportJobResult& AddJobTags(const JobResourceTags& value) { m_jobTags.push_back(value); return *this; }
    inline DescribePackageImportJobResult& AddJobTags(JobResourceTags&& value) { m_jobTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The job's type.</p>
     */
    inline const PackageImportJobType& GetJobType() const{ return m_jobType; }
    inline void SetJobType(const PackageImportJobType& value) { m_jobType = value; }
    inline void SetJobType(PackageImportJobType&& value) { m_jobType = std::move(value); }
    inline DescribePackageImportJobResult& WithJobType(const PackageImportJobType& value) { SetJobType(value); return *this;}
    inline DescribePackageImportJobResult& WithJobType(PackageImportJobType&& value) { SetJobType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the job was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTime = std::move(value); }
    inline DescribePackageImportJobResult& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline DescribePackageImportJobResult& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's output.</p>
     */
    inline const PackageImportJobOutput& GetOutput() const{ return m_output; }
    inline void SetOutput(const PackageImportJobOutput& value) { m_output = value; }
    inline void SetOutput(PackageImportJobOutput&& value) { m_output = std::move(value); }
    inline DescribePackageImportJobResult& WithOutput(const PackageImportJobOutput& value) { SetOutput(value); return *this;}
    inline DescribePackageImportJobResult& WithOutput(PackageImportJobOutput&& value) { SetOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's output config.</p>
     */
    inline const PackageImportJobOutputConfig& GetOutputConfig() const{ return m_outputConfig; }
    inline void SetOutputConfig(const PackageImportJobOutputConfig& value) { m_outputConfig = value; }
    inline void SetOutputConfig(PackageImportJobOutputConfig&& value) { m_outputConfig = std::move(value); }
    inline DescribePackageImportJobResult& WithOutputConfig(const PackageImportJobOutputConfig& value) { SetOutputConfig(value); return *this;}
    inline DescribePackageImportJobResult& WithOutputConfig(PackageImportJobOutputConfig&& value) { SetOutputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's status.</p>
     */
    inline const PackageImportJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const PackageImportJobStatus& value) { m_status = value; }
    inline void SetStatus(PackageImportJobStatus&& value) { m_status = std::move(value); }
    inline DescribePackageImportJobResult& WithStatus(const PackageImportJobStatus& value) { SetStatus(value); return *this;}
    inline DescribePackageImportJobResult& WithStatus(PackageImportJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }
    inline DescribePackageImportJobResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline DescribePackageImportJobResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline DescribePackageImportJobResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribePackageImportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribePackageImportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribePackageImportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;

    Aws::Utils::DateTime m_createdTime;

    PackageImportJobInputConfig m_inputConfig;

    Aws::String m_jobId;

    Aws::Vector<JobResourceTags> m_jobTags;

    PackageImportJobType m_jobType;

    Aws::Utils::DateTime m_lastUpdatedTime;

    PackageImportJobOutput m_output;

    PackageImportJobOutputConfig m_outputConfig;

    PackageImportJobStatus m_status;

    Aws::String m_statusMessage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
