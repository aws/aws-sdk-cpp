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


    /**
     * <p>When the image was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the image was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>When the image was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the image was created.</p>
     */
    inline DescribeImageResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the image was created.</p>
     */
    inline DescribeImageResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The description of the image.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the image.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the image.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the image.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the image.</p>
     */
    inline DescribeImageResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the image.</p>
     */
    inline DescribeImageResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the image.</p>
     */
    inline DescribeImageResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The name of the image as displayed.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The name of the image as displayed.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p>The name of the image as displayed.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p>The name of the image as displayed.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p>The name of the image as displayed.</p>
     */
    inline DescribeImageResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The name of the image as displayed.</p>
     */
    inline DescribeImageResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The name of the image as displayed.</p>
     */
    inline DescribeImageResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>When a create, update, or delete operation fails, the reason for the
     * failure.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>When a create, update, or delete operation fails, the reason for the
     * failure.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>When a create, update, or delete operation fails, the reason for the
     * failure.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>When a create, update, or delete operation fails, the reason for the
     * failure.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>When a create, update, or delete operation fails, the reason for the
     * failure.</p>
     */
    inline DescribeImageResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>When a create, update, or delete operation fails, the reason for the
     * failure.</p>
     */
    inline DescribeImageResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>When a create, update, or delete operation fails, the reason for the
     * failure.</p>
     */
    inline DescribeImageResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The ARN of the image.</p>
     */
    inline const Aws::String& GetImageArn() const{ return m_imageArn; }

    /**
     * <p>The ARN of the image.</p>
     */
    inline void SetImageArn(const Aws::String& value) { m_imageArn = value; }

    /**
     * <p>The ARN of the image.</p>
     */
    inline void SetImageArn(Aws::String&& value) { m_imageArn = std::move(value); }

    /**
     * <p>The ARN of the image.</p>
     */
    inline void SetImageArn(const char* value) { m_imageArn.assign(value); }

    /**
     * <p>The ARN of the image.</p>
     */
    inline DescribeImageResult& WithImageArn(const Aws::String& value) { SetImageArn(value); return *this;}

    /**
     * <p>The ARN of the image.</p>
     */
    inline DescribeImageResult& WithImageArn(Aws::String&& value) { SetImageArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the image.</p>
     */
    inline DescribeImageResult& WithImageArn(const char* value) { SetImageArn(value); return *this;}


    /**
     * <p>The name of the image.</p>
     */
    inline const Aws::String& GetImageName() const{ return m_imageName; }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetImageName(const Aws::String& value) { m_imageName = value; }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetImageName(Aws::String&& value) { m_imageName = std::move(value); }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetImageName(const char* value) { m_imageName.assign(value); }

    /**
     * <p>The name of the image.</p>
     */
    inline DescribeImageResult& WithImageName(const Aws::String& value) { SetImageName(value); return *this;}

    /**
     * <p>The name of the image.</p>
     */
    inline DescribeImageResult& WithImageName(Aws::String&& value) { SetImageName(std::move(value)); return *this;}

    /**
     * <p>The name of the image.</p>
     */
    inline DescribeImageResult& WithImageName(const char* value) { SetImageName(value); return *this;}


    /**
     * <p>The status of the image.</p>
     */
    inline const ImageStatus& GetImageStatus() const{ return m_imageStatus; }

    /**
     * <p>The status of the image.</p>
     */
    inline void SetImageStatus(const ImageStatus& value) { m_imageStatus = value; }

    /**
     * <p>The status of the image.</p>
     */
    inline void SetImageStatus(ImageStatus&& value) { m_imageStatus = std::move(value); }

    /**
     * <p>The status of the image.</p>
     */
    inline DescribeImageResult& WithImageStatus(const ImageStatus& value) { SetImageStatus(value); return *this;}

    /**
     * <p>The status of the image.</p>
     */
    inline DescribeImageResult& WithImageStatus(ImageStatus&& value) { SetImageStatus(std::move(value)); return *this;}


    /**
     * <p>When the image was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>When the image was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>When the image was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>When the image was last modified.</p>
     */
    inline DescribeImageResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>When the image was last modified.</p>
     */
    inline DescribeImageResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The ARN of the IAM role that enables Amazon SageMaker to perform tasks on
     * your behalf.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role that enables Amazon SageMaker to perform tasks on
     * your behalf.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role that enables Amazon SageMaker to perform tasks on
     * your behalf.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that enables Amazon SageMaker to perform tasks on
     * your behalf.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that enables Amazon SageMaker to perform tasks on
     * your behalf.</p>
     */
    inline DescribeImageResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that enables Amazon SageMaker to perform tasks on
     * your behalf.</p>
     */
    inline DescribeImageResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that enables Amazon SageMaker to perform tasks on
     * your behalf.</p>
     */
    inline DescribeImageResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

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
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
