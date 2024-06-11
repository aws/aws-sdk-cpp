﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/SpaceStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/SpaceSettings.h>
#include <aws/sagemaker/model/OwnershipSettings.h>
#include <aws/sagemaker/model/SpaceSharingSettings.h>
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


    ///@{
    /**
     * <p>The ID of the associated domain.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline DescribeSpaceResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline DescribeSpaceResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline DescribeSpaceResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The space's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetSpaceArn() const{ return m_spaceArn; }
    inline void SetSpaceArn(const Aws::String& value) { m_spaceArn = value; }
    inline void SetSpaceArn(Aws::String&& value) { m_spaceArn = std::move(value); }
    inline void SetSpaceArn(const char* value) { m_spaceArn.assign(value); }
    inline DescribeSpaceResult& WithSpaceArn(const Aws::String& value) { SetSpaceArn(value); return *this;}
    inline DescribeSpaceResult& WithSpaceArn(Aws::String&& value) { SetSpaceArn(std::move(value)); return *this;}
    inline DescribeSpaceResult& WithSpaceArn(const char* value) { SetSpaceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }
    inline void SetSpaceName(const Aws::String& value) { m_spaceName = value; }
    inline void SetSpaceName(Aws::String&& value) { m_spaceName = std::move(value); }
    inline void SetSpaceName(const char* value) { m_spaceName.assign(value); }
    inline DescribeSpaceResult& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}
    inline DescribeSpaceResult& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}
    inline DescribeSpaceResult& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the space's profile in the Amazon EFS volume.</p>
     */
    inline const Aws::String& GetHomeEfsFileSystemUid() const{ return m_homeEfsFileSystemUid; }
    inline void SetHomeEfsFileSystemUid(const Aws::String& value) { m_homeEfsFileSystemUid = value; }
    inline void SetHomeEfsFileSystemUid(Aws::String&& value) { m_homeEfsFileSystemUid = std::move(value); }
    inline void SetHomeEfsFileSystemUid(const char* value) { m_homeEfsFileSystemUid.assign(value); }
    inline DescribeSpaceResult& WithHomeEfsFileSystemUid(const Aws::String& value) { SetHomeEfsFileSystemUid(value); return *this;}
    inline DescribeSpaceResult& WithHomeEfsFileSystemUid(Aws::String&& value) { SetHomeEfsFileSystemUid(std::move(value)); return *this;}
    inline DescribeSpaceResult& WithHomeEfsFileSystemUid(const char* value) { SetHomeEfsFileSystemUid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline const SpaceStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const SpaceStatus& value) { m_status = value; }
    inline void SetStatus(SpaceStatus&& value) { m_status = std::move(value); }
    inline DescribeSpaceResult& WithStatus(const SpaceStatus& value) { SetStatus(value); return *this;}
    inline DescribeSpaceResult& WithStatus(SpaceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribeSpaceResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribeSpaceResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeSpaceResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeSpaceResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure reason.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }
    inline DescribeSpaceResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}
    inline DescribeSpaceResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}
    inline DescribeSpaceResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of space settings.</p>
     */
    inline const SpaceSettings& GetSpaceSettings() const{ return m_spaceSettings; }
    inline void SetSpaceSettings(const SpaceSettings& value) { m_spaceSettings = value; }
    inline void SetSpaceSettings(SpaceSettings&& value) { m_spaceSettings = std::move(value); }
    inline DescribeSpaceResult& WithSpaceSettings(const SpaceSettings& value) { SetSpaceSettings(value); return *this;}
    inline DescribeSpaceResult& WithSpaceSettings(SpaceSettings&& value) { SetSpaceSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of ownership settings for a space.</p>
     */
    inline const OwnershipSettings& GetOwnershipSettings() const{ return m_ownershipSettings; }
    inline void SetOwnershipSettings(const OwnershipSettings& value) { m_ownershipSettings = value; }
    inline void SetOwnershipSettings(OwnershipSettings&& value) { m_ownershipSettings = std::move(value); }
    inline DescribeSpaceResult& WithOwnershipSettings(const OwnershipSettings& value) { SetOwnershipSettings(value); return *this;}
    inline DescribeSpaceResult& WithOwnershipSettings(OwnershipSettings&& value) { SetOwnershipSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of space sharing settings for a space.</p>
     */
    inline const SpaceSharingSettings& GetSpaceSharingSettings() const{ return m_spaceSharingSettings; }
    inline void SetSpaceSharingSettings(const SpaceSharingSettings& value) { m_spaceSharingSettings = value; }
    inline void SetSpaceSharingSettings(SpaceSharingSettings&& value) { m_spaceSharingSettings = std::move(value); }
    inline DescribeSpaceResult& WithSpaceSharingSettings(const SpaceSharingSettings& value) { SetSpaceSharingSettings(value); return *this;}
    inline DescribeSpaceResult& WithSpaceSharingSettings(SpaceSharingSettings&& value) { SetSpaceSharingSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the space that appears in the Amazon SageMaker Studio UI.</p>
     */
    inline const Aws::String& GetSpaceDisplayName() const{ return m_spaceDisplayName; }
    inline void SetSpaceDisplayName(const Aws::String& value) { m_spaceDisplayName = value; }
    inline void SetSpaceDisplayName(Aws::String&& value) { m_spaceDisplayName = std::move(value); }
    inline void SetSpaceDisplayName(const char* value) { m_spaceDisplayName.assign(value); }
    inline DescribeSpaceResult& WithSpaceDisplayName(const Aws::String& value) { SetSpaceDisplayName(value); return *this;}
    inline DescribeSpaceResult& WithSpaceDisplayName(Aws::String&& value) { SetSpaceDisplayName(std::move(value)); return *this;}
    inline DescribeSpaceResult& WithSpaceDisplayName(const char* value) { SetSpaceDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the URL of the space. If the space is created with Amazon Web
     * Services IAM Identity Center (Successor to Amazon Web Services Single Sign-On)
     * authentication, users can navigate to the URL after appending the respective
     * redirect parameter for the application type to be federated through Amazon Web
     * Services IAM Identity Center.</p> <p>The following application types are
     * supported:</p> <ul> <li> <p>Studio Classic:
     * <code>&amp;redirect=JupyterServer</code> </p> </li> <li> <p>JupyterLab:
     * <code>&amp;redirect=JupyterLab</code> </p> </li> <li> <p>Code Editor, based on
     * Code-OSS, Visual Studio Code - Open Source:
     * <code>&amp;redirect=CodeEditor</code> </p> </li> </ul>
     */
    inline const Aws::String& GetUrl() const{ return m_url; }
    inline void SetUrl(const Aws::String& value) { m_url = value; }
    inline void SetUrl(Aws::String&& value) { m_url = std::move(value); }
    inline void SetUrl(const char* value) { m_url.assign(value); }
    inline DescribeSpaceResult& WithUrl(const Aws::String& value) { SetUrl(value); return *this;}
    inline DescribeSpaceResult& WithUrl(Aws::String&& value) { SetUrl(std::move(value)); return *this;}
    inline DescribeSpaceResult& WithUrl(const char* value) { SetUrl(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeSpaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeSpaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeSpaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

    OwnershipSettings m_ownershipSettings;

    SpaceSharingSettings m_spaceSharingSettings;

    Aws::String m_spaceDisplayName;

    Aws::String m_url;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
