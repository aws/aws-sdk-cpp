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


    /**
     * <p>The Amazon Resource Name (ARN) of the Earth Observation job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Earth Observation job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Earth Observation job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Earth Observation job.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Earth Observation job.</p>
     */
    inline StartEarthObservationJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Earth Observation job.</p>
     */
    inline StartEarthObservationJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Earth Observation job.</p>
     */
    inline StartEarthObservationJobResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The creation time.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The creation time.</p>
     */
    inline StartEarthObservationJobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time.</p>
     */
    inline StartEarthObservationJobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The duration of the session, in seconds.</p>
     */
    inline int GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>The duration of the session, in seconds.</p>
     */
    inline void SetDurationInSeconds(int value) { m_durationInSeconds = value; }

    /**
     * <p>The duration of the session, in seconds.</p>
     */
    inline StartEarthObservationJobResult& WithDurationInSeconds(int value) { SetDurationInSeconds(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline const Aws::String& GetExecutionRoleArn() const{ return m_executionRoleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline void SetExecutionRoleArn(const Aws::String& value) { m_executionRoleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline void SetExecutionRoleArn(Aws::String&& value) { m_executionRoleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline void SetExecutionRoleArn(const char* value) { m_executionRoleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline StartEarthObservationJobResult& WithExecutionRoleArn(const Aws::String& value) { SetExecutionRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline StartEarthObservationJobResult& WithExecutionRoleArn(Aws::String&& value) { SetExecutionRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that you specified for the
     * job.</p>
     */
    inline StartEarthObservationJobResult& WithExecutionRoleArn(const char* value) { SetExecutionRoleArn(value); return *this;}


    /**
     * <p>Input configuration information for the Earth Observation job.</p>
     */
    inline const InputConfigOutput& GetInputConfig() const{ return m_inputConfig; }

    /**
     * <p>Input configuration information for the Earth Observation job.</p>
     */
    inline void SetInputConfig(const InputConfigOutput& value) { m_inputConfig = value; }

    /**
     * <p>Input configuration information for the Earth Observation job.</p>
     */
    inline void SetInputConfig(InputConfigOutput&& value) { m_inputConfig = std::move(value); }

    /**
     * <p>Input configuration information for the Earth Observation job.</p>
     */
    inline StartEarthObservationJobResult& WithInputConfig(const InputConfigOutput& value) { SetInputConfig(value); return *this;}

    /**
     * <p>Input configuration information for the Earth Observation job.</p>
     */
    inline StartEarthObservationJobResult& WithInputConfig(InputConfigOutput&& value) { SetInputConfig(std::move(value)); return *this;}


    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline const JobConfigInput& GetJobConfig() const{ return m_jobConfig; }

    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline void SetJobConfig(const JobConfigInput& value) { m_jobConfig = value; }

    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline void SetJobConfig(JobConfigInput&& value) { m_jobConfig = std::move(value); }

    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline StartEarthObservationJobResult& WithJobConfig(const JobConfigInput& value) { SetJobConfig(value); return *this;}

    /**
     * <p>An object containing information about the job configuration.</p>
     */
    inline StartEarthObservationJobResult& WithJobConfig(JobConfigInput&& value) { SetJobConfig(std::move(value)); return *this;}


    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyId = value; }

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyId = std::move(value); }

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline void SetKmsKeyId(const char* value) { m_kmsKeyId.assign(value); }

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline StartEarthObservationJobResult& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline StartEarthObservationJobResult& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Key Management Service (KMS) key ID for server-side
     * encryption.</p>
     */
    inline StartEarthObservationJobResult& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}


    /**
     * <p>The name of the Earth Observation job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the Earth Observation job.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the Earth Observation job.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the Earth Observation job.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the Earth Observation job.</p>
     */
    inline StartEarthObservationJobResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the Earth Observation job.</p>
     */
    inline StartEarthObservationJobResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the Earth Observation job.</p>
     */
    inline StartEarthObservationJobResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the Earth Observation job.</p>
     */
    inline const EarthObservationJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Earth Observation job.</p>
     */
    inline void SetStatus(const EarthObservationJobStatus& value) { m_status = value; }

    /**
     * <p>The status of the Earth Observation job.</p>
     */
    inline void SetStatus(EarthObservationJobStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the Earth Observation job.</p>
     */
    inline StartEarthObservationJobResult& WithStatus(const EarthObservationJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Earth Observation job.</p>
     */
    inline StartEarthObservationJobResult& WithStatus(EarthObservationJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartEarthObservationJobResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartEarthObservationJobResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartEarthObservationJobResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartEarthObservationJobResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartEarthObservationJobResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartEarthObservationJobResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartEarthObservationJobResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartEarthObservationJobResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Each tag consists of a key and a value.</p>
     */
    inline StartEarthObservationJobResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

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
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
