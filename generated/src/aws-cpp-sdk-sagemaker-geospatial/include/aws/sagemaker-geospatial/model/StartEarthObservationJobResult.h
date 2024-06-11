/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker-geospatial/model/InputConfigOutput.h>
#include <aws/sagemaker-geospatial/model/JobConfigInput.h>
#include <aws/sagemaker-geospatial/model/EarthObservationJobStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SageMakerGeospatial
{
namespace Model
{
  class StartEarthObservationJobResult
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API StartEarthObservationJobResult();
    AWS_SAGEMAKERGEOSPATIAL_API StartEarthObservationJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKERGEOSPATIAL_API StartEarthObservationJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Earth Observation job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline StartEarthObservationJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline StartEarthObservationJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline StartEarthObservationJobResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline StartEarthObservationJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline StartEarthObservationJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the session, in seconds.</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }
    inline void SetDurationInSeconds(int value) { m_durationInSeconds = value; }
    inline StartEarthObservationJobResult& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArn = value; }
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArn = std::move(value); }
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArn.assign(value); }
    inline StartEarthObservationJobResult& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}
    inline StartEarthObservationJobResult& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}
    inline StartEarthObservationJobResult& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input configuration information for the Earth Observation job.</p>
     */
    inline const InputConfigOutput& GetInputConfig() const{ return m_inputConfig; }
    inline void SetInputConfig(const InputConfigOutput& value) { m_inputConfig = value; }
    inline void SetInputConfig(InputConfigOutput&& value) { m_inputConfig = std::move(value); }
    inline StartEarthObservationJobResult& WithInputConfig(const InputConfigOutput& value) { SetInputConfig(value); return *this;}
    inline StartEarthObservationJobResult& WithInputConfig(InputConfigOutput&& value) { SetInputConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline const JobConfigInput& GetJobConfig() const{ return m_jobConfig; }
    inline void SetJobConfig(const JobConfigInput& value) { m_jobConfig = value; }
    inline void SetJobConfig(JobConfigInput&& value) { m_jobConfig = std::move(value); }
    inline StartEarthObservationJobResult& WithJobConfig(const JobConfigInput& value) { SetJobConfig(value); return *this;}
    inline StartEarthObservationJobResult& WithJobConfig(JobConfigInput&& value) { SetJobConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Key Management Service key ID for server-side encryption.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }
    inline StartEarthObservationJobResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline StartEarthObservationJobResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline StartEarthObservationJobResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Earth Observation job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline StartEarthObservationJobResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StartEarthObservationJobResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StartEarthObservationJobResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Earth Observation job.</p>
     */
    inline const EarthObservationJobStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const EarthObservationJobStatus& value) { m_status = value; }
    inline void SetStatus(EarthObservationJobStatus&& value) { m_status = std::move(value); }
    inline StartEarthObservationJobResult& WithStatus(const EarthObservationJobStatus& value) { SetStatus(value); return *this;}
    inline StartEarthObservationJobResult& WithStatus(EarthObservationJobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline StartEarthObservationJobResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline StartEarthObservationJobResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline StartEarthObservationJobResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline StartEarthObservationJobResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline StartEarthObservationJobResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline StartEarthObservationJobResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline StartEarthObservationJobResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline StartEarthObservationJobResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline StartEarthObservationJobResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartEarthObservationJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartEarthObservationJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartEarthObservationJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::Utils::DateTime m_creationTime;

    int m_durationInSeconds;

    Aws::String m_executionRoleArn;

    InputConfigOutput m_inputConfig;

    JobConfigInput m_jobConfig;

    Aws::String m_kmsKeyId;

    Aws::String m_name;

    EarthObservationJobStatus m_status;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
