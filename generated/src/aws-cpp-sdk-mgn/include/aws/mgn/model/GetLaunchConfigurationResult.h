/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/BootMode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/LaunchDisposition.h>
#include <aws/mgn/model/Licensing.h>
#include <aws/mgn/model/PostLaunchActions.h>
#include <aws/mgn/model/TargetInstanceTypeRightSizingMethod.h>
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
namespace mgn
{
namespace Model
{
  class GetLaunchConfigurationResult
  {
  public:
    AWS_MGN_API GetLaunchConfigurationResult() = default;
    AWS_MGN_API GetLaunchConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API GetLaunchConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Launch configuration boot mode.</p>
     */
    inline BootMode GetBootMode() const { return m_bootMode; }
    inline void SetBootMode(BootMode value) { m_bootModeHasBeenSet = true; m_bootMode = value; }
    inline GetLaunchConfigurationResult& WithBootMode(BootMode value) { SetBootMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline bool GetCopyPrivateIp() const { return m_copyPrivateIp; }
    inline void SetCopyPrivateIp(bool value) { m_copyPrivateIpHasBeenSet = true; m_copyPrivateIp = value; }
    inline GetLaunchConfigurationResult& WithCopyPrivateIp(bool value) { SetCopyPrivateIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Copy Tags during Launch Configuration.</p>
     */
    inline bool GetCopyTags() const { return m_copyTags; }
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }
    inline GetLaunchConfigurationResult& WithCopyTags(bool value) { SetCopyTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch configuration EC2 Launch template ID.</p>
     */
    inline const Aws::String& GetEc2LaunchTemplateID() const { return m_ec2LaunchTemplateID; }
    template<typename Ec2LaunchTemplateIDT = Aws::String>
    void SetEc2LaunchTemplateID(Ec2LaunchTemplateIDT&& value) { m_ec2LaunchTemplateIDHasBeenSet = true; m_ec2LaunchTemplateID = std::forward<Ec2LaunchTemplateIDT>(value); }
    template<typename Ec2LaunchTemplateIDT = Aws::String>
    GetLaunchConfigurationResult& WithEc2LaunchTemplateID(Ec2LaunchTemplateIDT&& value) { SetEc2LaunchTemplateID(std::forward<Ec2LaunchTemplateIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable map auto tagging.</p>
     */
    inline bool GetEnableMapAutoTagging() const { return m_enableMapAutoTagging; }
    inline void SetEnableMapAutoTagging(bool value) { m_enableMapAutoTaggingHasBeenSet = true; m_enableMapAutoTagging = value; }
    inline GetLaunchConfigurationResult& WithEnableMapAutoTagging(bool value) { SetEnableMapAutoTagging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch disposition for launch configuration.</p>
     */
    inline LaunchDisposition GetLaunchDisposition() const { return m_launchDisposition; }
    inline void SetLaunchDisposition(LaunchDisposition value) { m_launchDispositionHasBeenSet = true; m_launchDisposition = value; }
    inline GetLaunchConfigurationResult& WithLaunchDisposition(LaunchDisposition value) { SetLaunchDisposition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch configuration OS licensing.</p>
     */
    inline const Licensing& GetLicensing() const { return m_licensing; }
    template<typename LicensingT = Licensing>
    void SetLicensing(LicensingT&& value) { m_licensingHasBeenSet = true; m_licensing = std::forward<LicensingT>(value); }
    template<typename LicensingT = Licensing>
    GetLaunchConfigurationResult& WithLicensing(LicensingT&& value) { SetLicensing(std::forward<LicensingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Map auto tagging MPE ID.</p>
     */
    inline const Aws::String& GetMapAutoTaggingMpeID() const { return m_mapAutoTaggingMpeID; }
    template<typename MapAutoTaggingMpeIDT = Aws::String>
    void SetMapAutoTaggingMpeID(MapAutoTaggingMpeIDT&& value) { m_mapAutoTaggingMpeIDHasBeenSet = true; m_mapAutoTaggingMpeID = std::forward<MapAutoTaggingMpeIDT>(value); }
    template<typename MapAutoTaggingMpeIDT = Aws::String>
    GetLaunchConfigurationResult& WithMapAutoTaggingMpeID(MapAutoTaggingMpeIDT&& value) { SetMapAutoTaggingMpeID(std::forward<MapAutoTaggingMpeIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch configuration name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetLaunchConfigurationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PostLaunchActions& GetPostLaunchActions() const { return m_postLaunchActions; }
    template<typename PostLaunchActionsT = PostLaunchActions>
    void SetPostLaunchActions(PostLaunchActionsT&& value) { m_postLaunchActionsHasBeenSet = true; m_postLaunchActions = std::forward<PostLaunchActionsT>(value); }
    template<typename PostLaunchActionsT = PostLaunchActions>
    GetLaunchConfigurationResult& WithPostLaunchActions(PostLaunchActionsT&& value) { SetPostLaunchActions(std::forward<PostLaunchActionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch configuration Source Server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const { return m_sourceServerID; }
    template<typename SourceServerIDT = Aws::String>
    void SetSourceServerID(SourceServerIDT&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::forward<SourceServerIDT>(value); }
    template<typename SourceServerIDT = Aws::String>
    GetLaunchConfigurationResult& WithSourceServerID(SourceServerIDT&& value) { SetSourceServerID(std::forward<SourceServerIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch configuration Target instance type right sizing method.</p>
     */
    inline TargetInstanceTypeRightSizingMethod GetTargetInstanceTypeRightSizingMethod() const { return m_targetInstanceTypeRightSizingMethod; }
    inline void SetTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod value) { m_targetInstanceTypeRightSizingMethodHasBeenSet = true; m_targetInstanceTypeRightSizingMethod = value; }
    inline GetLaunchConfigurationResult& WithTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod value) { SetTargetInstanceTypeRightSizingMethod(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLaunchConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BootMode m_bootMode{BootMode::NOT_SET};
    bool m_bootModeHasBeenSet = false;

    bool m_copyPrivateIp{false};
    bool m_copyPrivateIpHasBeenSet = false;

    bool m_copyTags{false};
    bool m_copyTagsHasBeenSet = false;

    Aws::String m_ec2LaunchTemplateID;
    bool m_ec2LaunchTemplateIDHasBeenSet = false;

    bool m_enableMapAutoTagging{false};
    bool m_enableMapAutoTaggingHasBeenSet = false;

    LaunchDisposition m_launchDisposition{LaunchDisposition::NOT_SET};
    bool m_launchDispositionHasBeenSet = false;

    Licensing m_licensing;
    bool m_licensingHasBeenSet = false;

    Aws::String m_mapAutoTaggingMpeID;
    bool m_mapAutoTaggingMpeIDHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PostLaunchActions m_postLaunchActions;
    bool m_postLaunchActionsHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;

    TargetInstanceTypeRightSizingMethod m_targetInstanceTypeRightSizingMethod{TargetInstanceTypeRightSizingMethod::NOT_SET};
    bool m_targetInstanceTypeRightSizingMethodHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
