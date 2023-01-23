/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/HubS3StorageConfig.h>
#include <aws/sagemaker/model/HubStatus.h>
#include <aws/core/utils/DateTime.h>
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
  class DescribeHubResult
  {
  public:
    AWS_SAGEMAKER_API DescribeHubResult();
    AWS_SAGEMAKER_API DescribeHubResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeHubResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the hub.</p>
     */
    inline const Aws::String& GetHubName() const{ return m_hubName; }

    /**
     * <p>The name of the hub.</p>
     */
    inline void SetHubName(const Aws::String& value) { m_hubName = value; }

    /**
     * <p>The name of the hub.</p>
     */
    inline void SetHubName(Aws::String&& value) { m_hubName = std::move(value); }

    /**
     * <p>The name of the hub.</p>
     */
    inline void SetHubName(const char* value) { m_hubName.assign(value); }

    /**
     * <p>The name of the hub.</p>
     */
    inline DescribeHubResult& WithHubName(const Aws::String& value) { SetHubName(value); return *this;}

    /**
     * <p>The name of the hub.</p>
     */
    inline DescribeHubResult& WithHubName(Aws::String&& value) { SetHubName(std::move(value)); return *this;}

    /**
     * <p>The name of the hub.</p>
     */
    inline DescribeHubResult& WithHubName(const char* value) { SetHubName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the hub.</p>
     */
    inline const Aws::String& GetHubArn() const{ return m_hubArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hub.</p>
     */
    inline void SetHubArn(const Aws::String& value) { m_hubArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hub.</p>
     */
    inline void SetHubArn(Aws::String&& value) { m_hubArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the hub.</p>
     */
    inline void SetHubArn(const char* value) { m_hubArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the hub.</p>
     */
    inline DescribeHubResult& WithHubArn(const Aws::String& value) { SetHubArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the hub.</p>
     */
    inline DescribeHubResult& WithHubArn(Aws::String&& value) { SetHubArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the hub.</p>
     */
    inline DescribeHubResult& WithHubArn(const char* value) { SetHubArn(value); return *this;}


    /**
     * <p>The display name of the hub.</p>
     */
    inline const Aws::String& GetHubDisplayName() const{ return m_hubDisplayName; }

    /**
     * <p>The display name of the hub.</p>
     */
    inline void SetHubDisplayName(const Aws::String& value) { m_hubDisplayName = value; }

    /**
     * <p>The display name of the hub.</p>
     */
    inline void SetHubDisplayName(Aws::String&& value) { m_hubDisplayName = std::move(value); }

    /**
     * <p>The display name of the hub.</p>
     */
    inline void SetHubDisplayName(const char* value) { m_hubDisplayName.assign(value); }

    /**
     * <p>The display name of the hub.</p>
     */
    inline DescribeHubResult& WithHubDisplayName(const Aws::String& value) { SetHubDisplayName(value); return *this;}

    /**
     * <p>The display name of the hub.</p>
     */
    inline DescribeHubResult& WithHubDisplayName(Aws::String&& value) { SetHubDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the hub.</p>
     */
    inline DescribeHubResult& WithHubDisplayName(const char* value) { SetHubDisplayName(value); return *this;}


    /**
     * <p>A description of the hub.</p>
     */
    inline const Aws::String& GetHubDescription() const{ return m_hubDescription; }

    /**
     * <p>A description of the hub.</p>
     */
    inline void SetHubDescription(const Aws::String& value) { m_hubDescription = value; }

    /**
     * <p>A description of the hub.</p>
     */
    inline void SetHubDescription(Aws::String&& value) { m_hubDescription = std::move(value); }

    /**
     * <p>A description of the hub.</p>
     */
    inline void SetHubDescription(const char* value) { m_hubDescription.assign(value); }

    /**
     * <p>A description of the hub.</p>
     */
    inline DescribeHubResult& WithHubDescription(const Aws::String& value) { SetHubDescription(value); return *this;}

    /**
     * <p>A description of the hub.</p>
     */
    inline DescribeHubResult& WithHubDescription(Aws::String&& value) { SetHubDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the hub.</p>
     */
    inline DescribeHubResult& WithHubDescription(const char* value) { SetHubDescription(value); return *this;}


    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHubSearchKeywords() const{ return m_hubSearchKeywords; }

    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline void SetHubSearchKeywords(const Aws::Vector<Aws::String>& value) { m_hubSearchKeywords = value; }

    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline void SetHubSearchKeywords(Aws::Vector<Aws::String>&& value) { m_hubSearchKeywords = std::move(value); }

    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline DescribeHubResult& WithHubSearchKeywords(const Aws::Vector<Aws::String>& value) { SetHubSearchKeywords(value); return *this;}

    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline DescribeHubResult& WithHubSearchKeywords(Aws::Vector<Aws::String>&& value) { SetHubSearchKeywords(std::move(value)); return *this;}

    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline DescribeHubResult& AddHubSearchKeywords(const Aws::String& value) { m_hubSearchKeywords.push_back(value); return *this; }

    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline DescribeHubResult& AddHubSearchKeywords(Aws::String&& value) { m_hubSearchKeywords.push_back(std::move(value)); return *this; }

    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline DescribeHubResult& AddHubSearchKeywords(const char* value) { m_hubSearchKeywords.push_back(value); return *this; }


    /**
     * <p>The Amazon S3 storage configuration for the hub.</p>
     */
    inline const HubS3StorageConfig& GetS3StorageConfig() const{ return m_s3StorageConfig; }

    /**
     * <p>The Amazon S3 storage configuration for the hub.</p>
     */
    inline void SetS3StorageConfig(const HubS3StorageConfig& value) { m_s3StorageConfig = value; }

    /**
     * <p>The Amazon S3 storage configuration for the hub.</p>
     */
    inline void SetS3StorageConfig(HubS3StorageConfig&& value) { m_s3StorageConfig = std::move(value); }

    /**
     * <p>The Amazon S3 storage configuration for the hub.</p>
     */
    inline DescribeHubResult& WithS3StorageConfig(const HubS3StorageConfig& value) { SetS3StorageConfig(value); return *this;}

    /**
     * <p>The Amazon S3 storage configuration for the hub.</p>
     */
    inline DescribeHubResult& WithS3StorageConfig(HubS3StorageConfig&& value) { SetS3StorageConfig(std::move(value)); return *this;}


    /**
     * <p>The status of the hub.</p>
     */
    inline const HubStatus& GetHubStatus() const{ return m_hubStatus; }

    /**
     * <p>The status of the hub.</p>
     */
    inline void SetHubStatus(const HubStatus& value) { m_hubStatus = value; }

    /**
     * <p>The status of the hub.</p>
     */
    inline void SetHubStatus(HubStatus&& value) { m_hubStatus = std::move(value); }

    /**
     * <p>The status of the hub.</p>
     */
    inline DescribeHubResult& WithHubStatus(const HubStatus& value) { SetHubStatus(value); return *this;}

    /**
     * <p>The status of the hub.</p>
     */
    inline DescribeHubResult& WithHubStatus(HubStatus&& value) { SetHubStatus(std::move(value)); return *this;}


    /**
     * <p>The failure reason if importing hub content failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The failure reason if importing hub content failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>The failure reason if importing hub content failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>The failure reason if importing hub content failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>The failure reason if importing hub content failed.</p>
     */
    inline DescribeHubResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The failure reason if importing hub content failed.</p>
     */
    inline DescribeHubResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The failure reason if importing hub content failed.</p>
     */
    inline DescribeHubResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The date and time that the hub was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that the hub was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The date and time that the hub was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The date and time that the hub was created.</p>
     */
    inline DescribeHubResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that the hub was created.</p>
     */
    inline DescribeHubResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the hub was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time that the hub was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The date and time that the hub was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time that the hub was last modified.</p>
     */
    inline DescribeHubResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time that the hub was last modified.</p>
     */
    inline DescribeHubResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_hubName;

    Aws::String m_hubArn;

    Aws::String m_hubDisplayName;

    Aws::String m_hubDescription;

    Aws::Vector<Aws::String> m_hubSearchKeywords;

    HubS3StorageConfig m_s3StorageConfig;

    HubStatus m_hubStatus;

    Aws::String m_failureReason;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
