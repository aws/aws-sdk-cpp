/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ImageStatus.h>
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
  class DescribeImageResult
  {
  public:
    AWS_SAGEMAKER_API DescribeImageResult();
    AWS_SAGEMAKER_API DescribeImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When the image was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeImageResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeImageResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the image.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeImageResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeImageResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeImageResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the image as displayed.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline DescribeImageResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline DescribeImageResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline DescribeImageResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When a create, update, or delete operation fails, the reason for the
     * failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline DescribeImageResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DescribeImageResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DescribeImageResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the image.</p>
     */
    inline const Aws::String& GetImageArn() const{ return m_imageArn; }
    inline void SetImageArn(const Aws::String& value) { m_imageArn = value; }
    inline void SetImageArn(Aws::String&& value) { m_imageArn = std::move(value); }
    inline void SetImageArn(const char* value) { m_imageArn.assign(value); }
    inline DescribeImageResult& WithImageArn(const Aws::String& value) { SetImageArn(value); return *this;}
    inline DescribeImageResult& WithImageArn(Aws::String&& value) { SetImageArn(std::move(value)); return *this;}
    inline DescribeImageResult& WithImageArn(const char* value) { SetImageArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the image.</p>
     */
    inline const Aws::String& GetImageName() const{ return m_imageName; }
    inline void SetImageName(const Aws::String& value) { m_imageName = value; }
    inline void SetImageName(Aws::String&& value) { m_imageName = std::move(value); }
    inline void SetImageName(const char* value) { m_imageName.assign(value); }
    inline DescribeImageResult& WithImageName(const Aws::String& value) { SetImageName(value); return *this;}
    inline DescribeImageResult& WithImageName(Aws::String&& value) { SetImageName(std::move(value)); return *this;}
    inline DescribeImageResult& WithImageName(const char* value) { SetImageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the image.</p>
     */
    inline const ImageStatus& GetImageStatus() const{ return m_imageStatus; }
    inline void SetImageStatus(const ImageStatus& value) { m_imageStatus = value; }
    inline void SetImageStatus(ImageStatus&& value) { m_imageStatus = std::move(value); }
    inline DescribeImageResult& WithImageStatus(const ImageStatus& value) { SetImageStatus(value); return *this;}
    inline DescribeImageResult& WithImageStatus(ImageStatus&& value) { SetImageStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the image was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeImageResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeImageResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that enables Amazon SageMaker AI to perform tasks on
     * your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribeImageResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribeImageResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribeImageResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeImageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeImageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeImageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_description;

    Aws::String m_displayName;

    Aws::String m_failureReason;

    Aws::String m_imageArn;

    Aws::String m_imageName;

    ImageStatus m_imageStatus;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::String m_roleArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
