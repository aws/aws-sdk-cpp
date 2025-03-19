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
    AWS_SAGEMAKER_API DescribeSpaceResult() = default;
    AWS_SAGEMAKER_API DescribeSpaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeSpaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the associated domain.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    DescribeSpaceResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The space's Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetSpaceArn() const { return m_spaceArn; }
    template<typename SpaceArnT = Aws::String>
    void SetSpaceArn(SpaceArnT&& value) { m_spaceArnHasBeenSet = true; m_spaceArn = std::forward<SpaceArnT>(value); }
    template<typename SpaceArnT = Aws::String>
    DescribeSpaceResult& WithSpaceArn(SpaceArnT&& value) { SetSpaceArn(std::forward<SpaceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const { return m_spaceName; }
    template<typename SpaceNameT = Aws::String>
    void SetSpaceName(SpaceNameT&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::forward<SpaceNameT>(value); }
    template<typename SpaceNameT = Aws::String>
    DescribeSpaceResult& WithSpaceName(SpaceNameT&& value) { SetSpaceName(std::forward<SpaceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the space's profile in the Amazon EFS volume.</p>
     */
    inline const Aws::String& GetHomeEfsFileSystemUid() const { return m_homeEfsFileSystemUid; }
    template<typename HomeEfsFileSystemUidT = Aws::String>
    void SetHomeEfsFileSystemUid(HomeEfsFileSystemUidT&& value) { m_homeEfsFileSystemUidHasBeenSet = true; m_homeEfsFileSystemUid = std::forward<HomeEfsFileSystemUidT>(value); }
    template<typename HomeEfsFileSystemUidT = Aws::String>
    DescribeSpaceResult& WithHomeEfsFileSystemUid(HomeEfsFileSystemUidT&& value) { SetHomeEfsFileSystemUid(std::forward<HomeEfsFileSystemUidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status.</p>
     */
    inline SpaceStatus GetStatus() const { return m_status; }
    inline void SetStatus(SpaceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeSpaceResult& WithStatus(SpaceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last modified time.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribeSpaceResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeSpaceResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure reason.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribeSpaceResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of space settings.</p>
     */
    inline const SpaceSettings& GetSpaceSettings() const { return m_spaceSettings; }
    template<typename SpaceSettingsT = SpaceSettings>
    void SetSpaceSettings(SpaceSettingsT&& value) { m_spaceSettingsHasBeenSet = true; m_spaceSettings = std::forward<SpaceSettingsT>(value); }
    template<typename SpaceSettingsT = SpaceSettings>
    DescribeSpaceResult& WithSpaceSettings(SpaceSettingsT&& value) { SetSpaceSettings(std::forward<SpaceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of ownership settings for a space.</p>
     */
    inline const OwnershipSettings& GetOwnershipSettings() const { return m_ownershipSettings; }
    template<typename OwnershipSettingsT = OwnershipSettings>
    void SetOwnershipSettings(OwnershipSettingsT&& value) { m_ownershipSettingsHasBeenSet = true; m_ownershipSettings = std::forward<OwnershipSettingsT>(value); }
    template<typename OwnershipSettingsT = OwnershipSettings>
    DescribeSpaceResult& WithOwnershipSettings(OwnershipSettingsT&& value) { SetOwnershipSettings(std::forward<OwnershipSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of space sharing settings for a space.</p>
     */
    inline const SpaceSharingSettings& GetSpaceSharingSettings() const { return m_spaceSharingSettings; }
    template<typename SpaceSharingSettingsT = SpaceSharingSettings>
    void SetSpaceSharingSettings(SpaceSharingSettingsT&& value) { m_spaceSharingSettingsHasBeenSet = true; m_spaceSharingSettings = std::forward<SpaceSharingSettingsT>(value); }
    template<typename SpaceSharingSettingsT = SpaceSharingSettings>
    DescribeSpaceResult& WithSpaceSharingSettings(SpaceSharingSettingsT&& value) { SetSpaceSharingSettings(std::forward<SpaceSharingSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the space that appears in the Amazon SageMaker Studio UI.</p>
     */
    inline const Aws::String& GetSpaceDisplayName() const { return m_spaceDisplayName; }
    template<typename SpaceDisplayNameT = Aws::String>
    void SetSpaceDisplayName(SpaceDisplayNameT&& value) { m_spaceDisplayNameHasBeenSet = true; m_spaceDisplayName = std::forward<SpaceDisplayNameT>(value); }
    template<typename SpaceDisplayNameT = Aws::String>
    DescribeSpaceResult& WithSpaceDisplayName(SpaceDisplayNameT&& value) { SetSpaceDisplayName(std::forward<SpaceDisplayNameT>(value)); return *this;}
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
    inline const Aws::String& GetUrl() const { return m_url; }
    template<typename UrlT = Aws::String>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = Aws::String>
    DescribeSpaceResult& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeSpaceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_spaceArn;
    bool m_spaceArnHasBeenSet = false;

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    Aws::String m_homeEfsFileSystemUid;
    bool m_homeEfsFileSystemUidHasBeenSet = false;

    SpaceStatus m_status{SpaceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    SpaceSettings m_spaceSettings;
    bool m_spaceSettingsHasBeenSet = false;

    OwnershipSettings m_ownershipSettings;
    bool m_ownershipSettingsHasBeenSet = false;

    SpaceSharingSettings m_spaceSharingSettings;
    bool m_spaceSharingSettingsHasBeenSet = false;

    Aws::String m_spaceDisplayName;
    bool m_spaceDisplayNameHasBeenSet = false;

    Aws::String m_url;
    bool m_urlHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
