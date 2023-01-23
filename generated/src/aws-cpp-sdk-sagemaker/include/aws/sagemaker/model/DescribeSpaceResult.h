/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/SpaceStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/SpaceSettings.h>
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
  class DescribeSpaceResult
  {
  public:
    AWS_SAGEMAKER_API DescribeSpaceResult();
    AWS_SAGEMAKER_API DescribeSpaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeSpaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline DescribeSpaceResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline DescribeSpaceResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the associated Domain.</p>
     */
    inline DescribeSpaceResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The space's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetSpaceArn() const{ return m_spaceArn; }

    /**
     * <p>The space's Amazon Resource Name (ARN).</p>
     */
    inline void SetSpaceArn(const Aws::String& value) { m_spaceArn = value; }

    /**
     * <p>The space's Amazon Resource Name (ARN).</p>
     */
    inline void SetSpaceArn(Aws::String&& value) { m_spaceArn = std::move(value); }

    /**
     * <p>The space's Amazon Resource Name (ARN).</p>
     */
    inline void SetSpaceArn(const char* value) { m_spaceArn.assign(value); }

    /**
     * <p>The space's Amazon Resource Name (ARN).</p>
     */
    inline DescribeSpaceResult& WithSpaceArn(const Aws::String& value) { SetSpaceArn(value); return *this;}

    /**
     * <p>The space's Amazon Resource Name (ARN).</p>
     */
    inline DescribeSpaceResult& WithSpaceArn(Aws::String&& value) { SetSpaceArn(std::move(value)); return *this;}

    /**
     * <p>The space's Amazon Resource Name (ARN).</p>
     */
    inline DescribeSpaceResult& WithSpaceArn(const char* value) { SetSpaceArn(value); return *this;}


    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const Aws::String& value) { m_spaceName = value; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(Aws::String&& value) { m_spaceName = std::move(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const char* value) { m_spaceName.assign(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline DescribeSpaceResult& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline DescribeSpaceResult& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline DescribeSpaceResult& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}


    /**
     * <p>The ID of the space's profile in the Amazon Elastic File System volume.</p>
     */
    inline const Aws::String& GetHomeEfsFileSystemUid() const{ return m_homeEfsFileSystemUid; }

    /**
     * <p>The ID of the space's profile in the Amazon Elastic File System volume.</p>
     */
    inline void SetHomeEfsFileSystemUid(const Aws::String& value) { m_homeEfsFileSystemUid = value; }

    /**
     * <p>The ID of the space's profile in the Amazon Elastic File System volume.</p>
     */
    inline void SetHomeEfsFileSystemUid(Aws::String&& value) { m_homeEfsFileSystemUid = std::move(value); }

    /**
     * <p>The ID of the space's profile in the Amazon Elastic File System volume.</p>
     */
    inline void SetHomeEfsFileSystemUid(const char* value) { m_homeEfsFileSystemUid.assign(value); }

    /**
     * <p>The ID of the space's profile in the Amazon Elastic File System volume.</p>
     */
    inline DescribeSpaceResult& WithHomeEfsFileSystemUid(const Aws::String& value) { SetHomeEfsFileSystemUid(value); return *this;}

    /**
     * <p>The ID of the space's profile in the Amazon Elastic File System volume.</p>
     */
    inline DescribeSpaceResult& WithHomeEfsFileSystemUid(Aws::String&& value) { SetHomeEfsFileSystemUid(std::move(value)); return *this;}

    /**
     * <p>The ID of the space's profile in the Amazon Elastic File System volume.</p>
     */
    inline DescribeSpaceResult& WithHomeEfsFileSystemUid(const char* value) { SetHomeEfsFileSystemUid(value); return *this;}


    /**
     * <p>The status.</p>
     */
    inline const SpaceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(const SpaceStatus& value) { m_status = value; }

    /**
     * <p>The status.</p>
     */
    inline void SetStatus(SpaceStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status.</p>
     */
    inline DescribeSpaceResult& WithStatus(const SpaceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status.</p>
     */
    inline DescribeSpaceResult& WithStatus(SpaceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The last modified time.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The last modified time.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The last modified time.</p>
     */
    inline DescribeSpaceResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The last modified time.</p>
     */
    inline DescribeSpaceResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


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
    inline DescribeSpaceResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time.</p>
     */
    inline DescribeSpaceResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The failure reason.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The failure reason.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>The failure reason.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>The failure reason.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>The failure reason.</p>
     */
    inline DescribeSpaceResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The failure reason.</p>
     */
    inline DescribeSpaceResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The failure reason.</p>
     */
    inline DescribeSpaceResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>A collection of space settings.</p>
     */
    inline const SpaceSettings& GetSpaceSettings() const{ return m_spaceSettings; }

    /**
     * <p>A collection of space settings.</p>
     */
    inline void SetSpaceSettings(const SpaceSettings& value) { m_spaceSettings = value; }

    /**
     * <p>A collection of space settings.</p>
     */
    inline void SetSpaceSettings(SpaceSettings&& value) { m_spaceSettings = std::move(value); }

    /**
     * <p>A collection of space settings.</p>
     */
    inline DescribeSpaceResult& WithSpaceSettings(const SpaceSettings& value) { SetSpaceSettings(value); return *this;}

    /**
     * <p>A collection of space settings.</p>
     */
    inline DescribeSpaceResult& WithSpaceSettings(SpaceSettings&& value) { SetSpaceSettings(std::move(value)); return *this;}

  private:

    Aws::String m_domainId;

    Aws::String m_spaceArn;

    Aws::String m_spaceName;

    Aws::String m_homeEfsFileSystemUid;

    SpaceStatus m_status;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_failureReason;

    SpaceSettings m_spaceSettings;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
