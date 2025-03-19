/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/mgn/model/BootMode.h>
#include <aws/mgn/model/LaunchTemplateDiskConf.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/LaunchDisposition.h>
#include <aws/mgn/model/Licensing.h>
#include <aws/mgn/model/PostLaunchActions.h>
#include <aws/mgn/model/TargetInstanceTypeRightSizingMethod.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class UpdateLaunchConfigurationTemplateRequest : public MgnRequest
  {
  public:
    AWS_MGN_API UpdateLaunchConfigurationTemplateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLaunchConfigurationTemplate"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Associate public Ip address.</p>
     */
    inline bool GetAssociatePublicIpAddress() const { return m_associatePublicIpAddress; }
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }
    inline UpdateLaunchConfigurationTemplateRequest& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch configuration template boot mode.</p>
     */
    inline BootMode GetBootMode() const { return m_bootMode; }
    inline bool BootModeHasBeenSet() const { return m_bootModeHasBeenSet; }
    inline void SetBootMode(BootMode value) { m_bootModeHasBeenSet = true; m_bootMode = value; }
    inline UpdateLaunchConfigurationTemplateRequest& WithBootMode(BootMode value) { SetBootMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Copy private Ip.</p>
     */
    inline bool GetCopyPrivateIp() const { return m_copyPrivateIp; }
    inline bool CopyPrivateIpHasBeenSet() const { return m_copyPrivateIpHasBeenSet; }
    inline void SetCopyPrivateIp(bool value) { m_copyPrivateIpHasBeenSet = true; m_copyPrivateIp = value; }
    inline UpdateLaunchConfigurationTemplateRequest& WithCopyPrivateIp(bool value) { SetCopyPrivateIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Copy tags.</p>
     */
    inline bool GetCopyTags() const { return m_copyTags; }
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }
    inline UpdateLaunchConfigurationTemplateRequest& WithCopyTags(bool value) { SetCopyTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable map auto tagging.</p>
     */
    inline bool GetEnableMapAutoTagging() const { return m_enableMapAutoTagging; }
    inline bool EnableMapAutoTaggingHasBeenSet() const { return m_enableMapAutoTaggingHasBeenSet; }
    inline void SetEnableMapAutoTagging(bool value) { m_enableMapAutoTaggingHasBeenSet = true; m_enableMapAutoTagging = value; }
    inline UpdateLaunchConfigurationTemplateRequest& WithEnableMapAutoTagging(bool value) { SetEnableMapAutoTagging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Large volume config.</p>
     */
    inline const LaunchTemplateDiskConf& GetLargeVolumeConf() const { return m_largeVolumeConf; }
    inline bool LargeVolumeConfHasBeenSet() const { return m_largeVolumeConfHasBeenSet; }
    template<typename LargeVolumeConfT = LaunchTemplateDiskConf>
    void SetLargeVolumeConf(LargeVolumeConfT&& value) { m_largeVolumeConfHasBeenSet = true; m_largeVolumeConf = std::forward<LargeVolumeConfT>(value); }
    template<typename LargeVolumeConfT = LaunchTemplateDiskConf>
    UpdateLaunchConfigurationTemplateRequest& WithLargeVolumeConf(LargeVolumeConfT&& value) { SetLargeVolumeConf(std::forward<LargeVolumeConfT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch Configuration Template ID.</p>
     */
    inline const Aws::String& GetLaunchConfigurationTemplateID() const { return m_launchConfigurationTemplateID; }
    inline bool LaunchConfigurationTemplateIDHasBeenSet() const { return m_launchConfigurationTemplateIDHasBeenSet; }
    template<typename LaunchConfigurationTemplateIDT = Aws::String>
    void SetLaunchConfigurationTemplateID(LaunchConfigurationTemplateIDT&& value) { m_launchConfigurationTemplateIDHasBeenSet = true; m_launchConfigurationTemplateID = std::forward<LaunchConfigurationTemplateIDT>(value); }
    template<typename LaunchConfigurationTemplateIDT = Aws::String>
    UpdateLaunchConfigurationTemplateRequest& WithLaunchConfigurationTemplateID(LaunchConfigurationTemplateIDT&& value) { SetLaunchConfigurationTemplateID(std::forward<LaunchConfigurationTemplateIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch disposition.</p>
     */
    inline LaunchDisposition GetLaunchDisposition() const { return m_launchDisposition; }
    inline bool LaunchDispositionHasBeenSet() const { return m_launchDispositionHasBeenSet; }
    inline void SetLaunchDisposition(LaunchDisposition value) { m_launchDispositionHasBeenSet = true; m_launchDisposition = value; }
    inline UpdateLaunchConfigurationTemplateRequest& WithLaunchDisposition(LaunchDisposition value) { SetLaunchDisposition(value); return *this;}
    ///@}

    ///@{
    
    inline const Licensing& GetLicensing() const { return m_licensing; }
    inline bool LicensingHasBeenSet() const { return m_licensingHasBeenSet; }
    template<typename LicensingT = Licensing>
    void SetLicensing(LicensingT&& value) { m_licensingHasBeenSet = true; m_licensing = std::forward<LicensingT>(value); }
    template<typename LicensingT = Licensing>
    UpdateLaunchConfigurationTemplateRequest& WithLicensing(LicensingT&& value) { SetLicensing(std::forward<LicensingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch configuration template map auto tagging MPE ID.</p>
     */
    inline const Aws::String& GetMapAutoTaggingMpeID() const { return m_mapAutoTaggingMpeID; }
    inline bool MapAutoTaggingMpeIDHasBeenSet() const { return m_mapAutoTaggingMpeIDHasBeenSet; }
    template<typename MapAutoTaggingMpeIDT = Aws::String>
    void SetMapAutoTaggingMpeID(MapAutoTaggingMpeIDT&& value) { m_mapAutoTaggingMpeIDHasBeenSet = true; m_mapAutoTaggingMpeID = std::forward<MapAutoTaggingMpeIDT>(value); }
    template<typename MapAutoTaggingMpeIDT = Aws::String>
    UpdateLaunchConfigurationTemplateRequest& WithMapAutoTaggingMpeID(MapAutoTaggingMpeIDT&& value) { SetMapAutoTaggingMpeID(std::forward<MapAutoTaggingMpeIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Post Launch Action to execute on the Test or Cutover instance.</p>
     */
    inline const PostLaunchActions& GetPostLaunchActions() const { return m_postLaunchActions; }
    inline bool PostLaunchActionsHasBeenSet() const { return m_postLaunchActionsHasBeenSet; }
    template<typename PostLaunchActionsT = PostLaunchActions>
    void SetPostLaunchActions(PostLaunchActionsT&& value) { m_postLaunchActionsHasBeenSet = true; m_postLaunchActions = std::forward<PostLaunchActionsT>(value); }
    template<typename PostLaunchActionsT = PostLaunchActions>
    UpdateLaunchConfigurationTemplateRequest& WithPostLaunchActions(PostLaunchActionsT&& value) { SetPostLaunchActions(std::forward<PostLaunchActionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Small volume config.</p>
     */
    inline const LaunchTemplateDiskConf& GetSmallVolumeConf() const { return m_smallVolumeConf; }
    inline bool SmallVolumeConfHasBeenSet() const { return m_smallVolumeConfHasBeenSet; }
    template<typename SmallVolumeConfT = LaunchTemplateDiskConf>
    void SetSmallVolumeConf(SmallVolumeConfT&& value) { m_smallVolumeConfHasBeenSet = true; m_smallVolumeConf = std::forward<SmallVolumeConfT>(value); }
    template<typename SmallVolumeConfT = LaunchTemplateDiskConf>
    UpdateLaunchConfigurationTemplateRequest& WithSmallVolumeConf(SmallVolumeConfT&& value) { SetSmallVolumeConf(std::forward<SmallVolumeConfT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Small volume maximum size.</p>
     */
    inline long long GetSmallVolumeMaxSize() const { return m_smallVolumeMaxSize; }
    inline bool SmallVolumeMaxSizeHasBeenSet() const { return m_smallVolumeMaxSizeHasBeenSet; }
    inline void SetSmallVolumeMaxSize(long long value) { m_smallVolumeMaxSizeHasBeenSet = true; m_smallVolumeMaxSize = value; }
    inline UpdateLaunchConfigurationTemplateRequest& WithSmallVolumeMaxSize(long long value) { SetSmallVolumeMaxSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Target instance type right-sizing method.</p>
     */
    inline TargetInstanceTypeRightSizingMethod GetTargetInstanceTypeRightSizingMethod() const { return m_targetInstanceTypeRightSizingMethod; }
    inline bool TargetInstanceTypeRightSizingMethodHasBeenSet() const { return m_targetInstanceTypeRightSizingMethodHasBeenSet; }
    inline void SetTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod value) { m_targetInstanceTypeRightSizingMethodHasBeenSet = true; m_targetInstanceTypeRightSizingMethod = value; }
    inline UpdateLaunchConfigurationTemplateRequest& WithTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod value) { SetTargetInstanceTypeRightSizingMethod(value); return *this;}
    ///@}
  private:

    bool m_associatePublicIpAddress{false};
    bool m_associatePublicIpAddressHasBeenSet = false;

    BootMode m_bootMode{BootMode::NOT_SET};
    bool m_bootModeHasBeenSet = false;

    bool m_copyPrivateIp{false};
    bool m_copyPrivateIpHasBeenSet = false;

    bool m_copyTags{false};
    bool m_copyTagsHasBeenSet = false;

    bool m_enableMapAutoTagging{false};
    bool m_enableMapAutoTaggingHasBeenSet = false;

    LaunchTemplateDiskConf m_largeVolumeConf;
    bool m_largeVolumeConfHasBeenSet = false;

    Aws::String m_launchConfigurationTemplateID;
    bool m_launchConfigurationTemplateIDHasBeenSet = false;

    LaunchDisposition m_launchDisposition{LaunchDisposition::NOT_SET};
    bool m_launchDispositionHasBeenSet = false;

    Licensing m_licensing;
    bool m_licensingHasBeenSet = false;

    Aws::String m_mapAutoTaggingMpeID;
    bool m_mapAutoTaggingMpeIDHasBeenSet = false;

    PostLaunchActions m_postLaunchActions;
    bool m_postLaunchActionsHasBeenSet = false;

    LaunchTemplateDiskConf m_smallVolumeConf;
    bool m_smallVolumeConfHasBeenSet = false;

    long long m_smallVolumeMaxSize{0};
    bool m_smallVolumeMaxSizeHasBeenSet = false;

    TargetInstanceTypeRightSizingMethod m_targetInstanceTypeRightSizingMethod{TargetInstanceTypeRightSizingMethod::NOT_SET};
    bool m_targetInstanceTypeRightSizingMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
