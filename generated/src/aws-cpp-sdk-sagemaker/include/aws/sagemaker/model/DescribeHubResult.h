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
    AWS_SAGEMAKER_API DescribeHubResult() = default;
    AWS_SAGEMAKER_API DescribeHubResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeHubResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the hub.</p>
     */
    inline const Aws::String& GetHubName() const { return m_hubName; }
    template<typename HubNameT = Aws::String>
    void SetHubName(HubNameT&& value) { m_hubNameHasBeenSet = true; m_hubName = std::forward<HubNameT>(value); }
    template<typename HubNameT = Aws::String>
    DescribeHubResult& WithHubName(HubNameT&& value) { SetHubName(std::forward<HubNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the hub.</p>
     */
    inline const Aws::String& GetHubArn() const { return m_hubArn; }
    template<typename HubArnT = Aws::String>
    void SetHubArn(HubArnT&& value) { m_hubArnHasBeenSet = true; m_hubArn = std::forward<HubArnT>(value); }
    template<typename HubArnT = Aws::String>
    DescribeHubResult& WithHubArn(HubArnT&& value) { SetHubArn(std::forward<HubArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the hub.</p>
     */
    inline const Aws::String& GetHubDisplayName() const { return m_hubDisplayName; }
    template<typename HubDisplayNameT = Aws::String>
    void SetHubDisplayName(HubDisplayNameT&& value) { m_hubDisplayNameHasBeenSet = true; m_hubDisplayName = std::forward<HubDisplayNameT>(value); }
    template<typename HubDisplayNameT = Aws::String>
    DescribeHubResult& WithHubDisplayName(HubDisplayNameT&& value) { SetHubDisplayName(std::forward<HubDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the hub.</p>
     */
    inline const Aws::String& GetHubDescription() const { return m_hubDescription; }
    template<typename HubDescriptionT = Aws::String>
    void SetHubDescription(HubDescriptionT&& value) { m_hubDescriptionHasBeenSet = true; m_hubDescription = std::forward<HubDescriptionT>(value); }
    template<typename HubDescriptionT = Aws::String>
    DescribeHubResult& WithHubDescription(HubDescriptionT&& value) { SetHubDescription(std::forward<HubDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The searchable keywords for the hub.</p>
     */
    inline const Aws::Vector<Aws::String>& GetHubSearchKeywords() const { return m_hubSearchKeywords; }
    template<typename HubSearchKeywordsT = Aws::Vector<Aws::String>>
    void SetHubSearchKeywords(HubSearchKeywordsT&& value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords = std::forward<HubSearchKeywordsT>(value); }
    template<typename HubSearchKeywordsT = Aws::Vector<Aws::String>>
    DescribeHubResult& WithHubSearchKeywords(HubSearchKeywordsT&& value) { SetHubSearchKeywords(std::forward<HubSearchKeywordsT>(value)); return *this;}
    template<typename HubSearchKeywordsT = Aws::String>
    DescribeHubResult& AddHubSearchKeywords(HubSearchKeywordsT&& value) { m_hubSearchKeywordsHasBeenSet = true; m_hubSearchKeywords.emplace_back(std::forward<HubSearchKeywordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 storage configuration for the hub.</p>
     */
    inline const HubS3StorageConfig& GetS3StorageConfig() const { return m_s3StorageConfig; }
    template<typename S3StorageConfigT = HubS3StorageConfig>
    void SetS3StorageConfig(S3StorageConfigT&& value) { m_s3StorageConfigHasBeenSet = true; m_s3StorageConfig = std::forward<S3StorageConfigT>(value); }
    template<typename S3StorageConfigT = HubS3StorageConfig>
    DescribeHubResult& WithS3StorageConfig(S3StorageConfigT&& value) { SetS3StorageConfig(std::forward<S3StorageConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the hub.</p>
     */
    inline HubStatus GetHubStatus() const { return m_hubStatus; }
    inline void SetHubStatus(HubStatus value) { m_hubStatusHasBeenSet = true; m_hubStatus = value; }
    inline DescribeHubResult& WithHubStatus(HubStatus value) { SetHubStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure reason if importing hub content failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeHubResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the hub was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeHubResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the hub was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeHubResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeHubResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hubName;
    bool m_hubNameHasBeenSet = false;

    Aws::String m_hubArn;
    bool m_hubArnHasBeenSet = false;

    Aws::String m_hubDisplayName;
    bool m_hubDisplayNameHasBeenSet = false;

    Aws::String m_hubDescription;
    bool m_hubDescriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_hubSearchKeywords;
    bool m_hubSearchKeywordsHasBeenSet = false;

    HubS3StorageConfig m_s3StorageConfig;
    bool m_s3StorageConfigHasBeenSet = false;

    HubStatus m_hubStatus{HubStatus::NOT_SET};
    bool m_hubStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
