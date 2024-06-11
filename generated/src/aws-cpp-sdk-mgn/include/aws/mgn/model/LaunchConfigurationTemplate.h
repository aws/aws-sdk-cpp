/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/BootMode.h>
#include <aws/mgn/model/LaunchTemplateDiskConf.h>
#include <aws/mgn/model/LaunchDisposition.h>
#include <aws/mgn/model/Licensing.h>
#include <aws/mgn/model/PostLaunchActions.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mgn/model/TargetInstanceTypeRightSizingMethod.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace mgn
{
namespace Model
{

  class LaunchConfigurationTemplate
  {
  public:
    AWS_MGN_API LaunchConfigurationTemplate();
    AWS_MGN_API LaunchConfigurationTemplate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API LaunchConfigurationTemplate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>ARN of the Launch Configuration Template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline LaunchConfigurationTemplate& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline LaunchConfigurationTemplate& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline LaunchConfigurationTemplate& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Associate public Ip address.</p>
     */
    inline bool GetAssociatePublicIpAddress() const{ return m_associatePublicIpAddress; }
    inline bool AssociatePublicIpAddressHasBeenSet() const { return m_associatePublicIpAddressHasBeenSet; }
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }
    inline LaunchConfigurationTemplate& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch configuration template boot mode.</p>
     */
    inline const BootMode& GetBootMode() const{ return m_bootMode; }
    inline bool BootModeHasBeenSet() const { return m_bootModeHasBeenSet; }
    inline void SetBootMode(const BootMode& value) { m_bootModeHasBeenSet = true; m_bootMode = value; }
    inline void SetBootMode(BootMode&& value) { m_bootModeHasBeenSet = true; m_bootMode = std::move(value); }
    inline LaunchConfigurationTemplate& WithBootMode(const BootMode& value) { SetBootMode(value); return *this;}
    inline LaunchConfigurationTemplate& WithBootMode(BootMode&& value) { SetBootMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Copy private Ip.</p>
     */
    inline bool GetCopyPrivateIp() const{ return m_copyPrivateIp; }
    inline bool CopyPrivateIpHasBeenSet() const { return m_copyPrivateIpHasBeenSet; }
    inline void SetCopyPrivateIp(bool value) { m_copyPrivateIpHasBeenSet = true; m_copyPrivateIp = value; }
    inline LaunchConfigurationTemplate& WithCopyPrivateIp(bool value) { SetCopyPrivateIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Copy tags.</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }
    inline LaunchConfigurationTemplate& WithCopyTags(bool value) { SetCopyTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>EC2 launch template ID.</p>
     */
    inline const Aws::String& GetEc2LaunchTemplateID() const{ return m_ec2LaunchTemplateID; }
    inline bool Ec2LaunchTemplateIDHasBeenSet() const { return m_ec2LaunchTemplateIDHasBeenSet; }
    inline void SetEc2LaunchTemplateID(const Aws::String& value) { m_ec2LaunchTemplateIDHasBeenSet = true; m_ec2LaunchTemplateID = value; }
    inline void SetEc2LaunchTemplateID(Aws::String&& value) { m_ec2LaunchTemplateIDHasBeenSet = true; m_ec2LaunchTemplateID = std::move(value); }
    inline void SetEc2LaunchTemplateID(const char* value) { m_ec2LaunchTemplateIDHasBeenSet = true; m_ec2LaunchTemplateID.assign(value); }
    inline LaunchConfigurationTemplate& WithEc2LaunchTemplateID(const Aws::String& value) { SetEc2LaunchTemplateID(value); return *this;}
    inline LaunchConfigurationTemplate& WithEc2LaunchTemplateID(Aws::String&& value) { SetEc2LaunchTemplateID(std::move(value)); return *this;}
    inline LaunchConfigurationTemplate& WithEc2LaunchTemplateID(const char* value) { SetEc2LaunchTemplateID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable map auto tagging.</p>
     */
    inline bool GetEnableMapAutoTagging() const{ return m_enableMapAutoTagging; }
    inline bool EnableMapAutoTaggingHasBeenSet() const { return m_enableMapAutoTaggingHasBeenSet; }
    inline void SetEnableMapAutoTagging(bool value) { m_enableMapAutoTaggingHasBeenSet = true; m_enableMapAutoTagging = value; }
    inline LaunchConfigurationTemplate& WithEnableMapAutoTagging(bool value) { SetEnableMapAutoTagging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Large volume config.</p>
     */
    inline const LaunchTemplateDiskConf& GetLargeVolumeConf() const{ return m_largeVolumeConf; }
    inline bool LargeVolumeConfHasBeenSet() const { return m_largeVolumeConfHasBeenSet; }
    inline void SetLargeVolumeConf(const LaunchTemplateDiskConf& value) { m_largeVolumeConfHasBeenSet = true; m_largeVolumeConf = value; }
    inline void SetLargeVolumeConf(LaunchTemplateDiskConf&& value) { m_largeVolumeConfHasBeenSet = true; m_largeVolumeConf = std::move(value); }
    inline LaunchConfigurationTemplate& WithLargeVolumeConf(const LaunchTemplateDiskConf& value) { SetLargeVolumeConf(value); return *this;}
    inline LaunchConfigurationTemplate& WithLargeVolumeConf(LaunchTemplateDiskConf&& value) { SetLargeVolumeConf(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the Launch Configuration Template.</p>
     */
    inline const Aws::String& GetLaunchConfigurationTemplateID() const{ return m_launchConfigurationTemplateID; }
    inline bool LaunchConfigurationTemplateIDHasBeenSet() const { return m_launchConfigurationTemplateIDHasBeenSet; }
    inline void SetLaunchConfigurationTemplateID(const Aws::String& value) { m_launchConfigurationTemplateIDHasBeenSet = true; m_launchConfigurationTemplateID = value; }
    inline void SetLaunchConfigurationTemplateID(Aws::String&& value) { m_launchConfigurationTemplateIDHasBeenSet = true; m_launchConfigurationTemplateID = std::move(value); }
    inline void SetLaunchConfigurationTemplateID(const char* value) { m_launchConfigurationTemplateIDHasBeenSet = true; m_launchConfigurationTemplateID.assign(value); }
    inline LaunchConfigurationTemplate& WithLaunchConfigurationTemplateID(const Aws::String& value) { SetLaunchConfigurationTemplateID(value); return *this;}
    inline LaunchConfigurationTemplate& WithLaunchConfigurationTemplateID(Aws::String&& value) { SetLaunchConfigurationTemplateID(std::move(value)); return *this;}
    inline LaunchConfigurationTemplate& WithLaunchConfigurationTemplateID(const char* value) { SetLaunchConfigurationTemplateID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch disposition.</p>
     */
    inline const LaunchDisposition& GetLaunchDisposition() const{ return m_launchDisposition; }
    inline bool LaunchDispositionHasBeenSet() const { return m_launchDispositionHasBeenSet; }
    inline void SetLaunchDisposition(const LaunchDisposition& value) { m_launchDispositionHasBeenSet = true; m_launchDisposition = value; }
    inline void SetLaunchDisposition(LaunchDisposition&& value) { m_launchDispositionHasBeenSet = true; m_launchDisposition = std::move(value); }
    inline LaunchConfigurationTemplate& WithLaunchDisposition(const LaunchDisposition& value) { SetLaunchDisposition(value); return *this;}
    inline LaunchConfigurationTemplate& WithLaunchDisposition(LaunchDisposition&& value) { SetLaunchDisposition(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Licensing& GetLicensing() const{ return m_licensing; }
    inline bool LicensingHasBeenSet() const { return m_licensingHasBeenSet; }
    inline void SetLicensing(const Licensing& value) { m_licensingHasBeenSet = true; m_licensing = value; }
    inline void SetLicensing(Licensing&& value) { m_licensingHasBeenSet = true; m_licensing = std::move(value); }
    inline LaunchConfigurationTemplate& WithLicensing(const Licensing& value) { SetLicensing(value); return *this;}
    inline LaunchConfigurationTemplate& WithLicensing(Licensing&& value) { SetLicensing(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch configuration template map auto tagging MPE ID.</p>
     */
    inline const Aws::String& GetMapAutoTaggingMpeID() const{ return m_mapAutoTaggingMpeID; }
    inline bool MapAutoTaggingMpeIDHasBeenSet() const { return m_mapAutoTaggingMpeIDHasBeenSet; }
    inline void SetMapAutoTaggingMpeID(const Aws::String& value) { m_mapAutoTaggingMpeIDHasBeenSet = true; m_mapAutoTaggingMpeID = value; }
    inline void SetMapAutoTaggingMpeID(Aws::String&& value) { m_mapAutoTaggingMpeIDHasBeenSet = true; m_mapAutoTaggingMpeID = std::move(value); }
    inline void SetMapAutoTaggingMpeID(const char* value) { m_mapAutoTaggingMpeIDHasBeenSet = true; m_mapAutoTaggingMpeID.assign(value); }
    inline LaunchConfigurationTemplate& WithMapAutoTaggingMpeID(const Aws::String& value) { SetMapAutoTaggingMpeID(value); return *this;}
    inline LaunchConfigurationTemplate& WithMapAutoTaggingMpeID(Aws::String&& value) { SetMapAutoTaggingMpeID(std::move(value)); return *this;}
    inline LaunchConfigurationTemplate& WithMapAutoTaggingMpeID(const char* value) { SetMapAutoTaggingMpeID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Post Launch Actions of the Launch Configuration Template.</p>
     */
    inline const PostLaunchActions& GetPostLaunchActions() const{ return m_postLaunchActions; }
    inline bool PostLaunchActionsHasBeenSet() const { return m_postLaunchActionsHasBeenSet; }
    inline void SetPostLaunchActions(const PostLaunchActions& value) { m_postLaunchActionsHasBeenSet = true; m_postLaunchActions = value; }
    inline void SetPostLaunchActions(PostLaunchActions&& value) { m_postLaunchActionsHasBeenSet = true; m_postLaunchActions = std::move(value); }
    inline LaunchConfigurationTemplate& WithPostLaunchActions(const PostLaunchActions& value) { SetPostLaunchActions(value); return *this;}
    inline LaunchConfigurationTemplate& WithPostLaunchActions(PostLaunchActions&& value) { SetPostLaunchActions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Small volume config.</p>
     */
    inline const LaunchTemplateDiskConf& GetSmallVolumeConf() const{ return m_smallVolumeConf; }
    inline bool SmallVolumeConfHasBeenSet() const { return m_smallVolumeConfHasBeenSet; }
    inline void SetSmallVolumeConf(const LaunchTemplateDiskConf& value) { m_smallVolumeConfHasBeenSet = true; m_smallVolumeConf = value; }
    inline void SetSmallVolumeConf(LaunchTemplateDiskConf&& value) { m_smallVolumeConfHasBeenSet = true; m_smallVolumeConf = std::move(value); }
    inline LaunchConfigurationTemplate& WithSmallVolumeConf(const LaunchTemplateDiskConf& value) { SetSmallVolumeConf(value); return *this;}
    inline LaunchConfigurationTemplate& WithSmallVolumeConf(LaunchTemplateDiskConf&& value) { SetSmallVolumeConf(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Small volume maximum size.</p>
     */
    inline long long GetSmallVolumeMaxSize() const{ return m_smallVolumeMaxSize; }
    inline bool SmallVolumeMaxSizeHasBeenSet() const { return m_smallVolumeMaxSizeHasBeenSet; }
    inline void SetSmallVolumeMaxSize(long long value) { m_smallVolumeMaxSizeHasBeenSet = true; m_smallVolumeMaxSize = value; }
    inline LaunchConfigurationTemplate& WithSmallVolumeMaxSize(long long value) { SetSmallVolumeMaxSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags of the Launch Configuration Template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline LaunchConfigurationTemplate& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline LaunchConfigurationTemplate& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline LaunchConfigurationTemplate& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline LaunchConfigurationTemplate& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline LaunchConfigurationTemplate& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline LaunchConfigurationTemplate& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline LaunchConfigurationTemplate& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline LaunchConfigurationTemplate& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline LaunchConfigurationTemplate& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Target instance type right-sizing method.</p>
     */
    inline const TargetInstanceTypeRightSizingMethod& GetTargetInstanceTypeRightSizingMethod() const{ return m_targetInstanceTypeRightSizingMethod; }
    inline bool TargetInstanceTypeRightSizingMethodHasBeenSet() const { return m_targetInstanceTypeRightSizingMethodHasBeenSet; }
    inline void SetTargetInstanceTypeRightSizingMethod(const TargetInstanceTypeRightSizingMethod& value) { m_targetInstanceTypeRightSizingMethodHasBeenSet = true; m_targetInstanceTypeRightSizingMethod = value; }
    inline void SetTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod&& value) { m_targetInstanceTypeRightSizingMethodHasBeenSet = true; m_targetInstanceTypeRightSizingMethod = std::move(value); }
    inline LaunchConfigurationTemplate& WithTargetInstanceTypeRightSizingMethod(const TargetInstanceTypeRightSizingMethod& value) { SetTargetInstanceTypeRightSizingMethod(value); return *this;}
    inline LaunchConfigurationTemplate& WithTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod&& value) { SetTargetInstanceTypeRightSizingMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    inline void SetRequestId(const Aws::String& value) { m_requestIdHasBeenSet = true; m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestIdHasBeenSet = true; m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestIdHasBeenSet = true; m_requestId.assign(value); }
    inline LaunchConfigurationTemplate& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline LaunchConfigurationTemplate& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline LaunchConfigurationTemplate& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    bool m_associatePublicIpAddress;
    bool m_associatePublicIpAddressHasBeenSet = false;

    BootMode m_bootMode;
    bool m_bootModeHasBeenSet = false;

    bool m_copyPrivateIp;
    bool m_copyPrivateIpHasBeenSet = false;

    bool m_copyTags;
    bool m_copyTagsHasBeenSet = false;

    Aws::String m_ec2LaunchTemplateID;
    bool m_ec2LaunchTemplateIDHasBeenSet = false;

    bool m_enableMapAutoTagging;
    bool m_enableMapAutoTaggingHasBeenSet = false;

    LaunchTemplateDiskConf m_largeVolumeConf;
    bool m_largeVolumeConfHasBeenSet = false;

    Aws::String m_launchConfigurationTemplateID;
    bool m_launchConfigurationTemplateIDHasBeenSet = false;

    LaunchDisposition m_launchDisposition;
    bool m_launchDispositionHasBeenSet = false;

    Licensing m_licensing;
    bool m_licensingHasBeenSet = false;

    Aws::String m_mapAutoTaggingMpeID;
    bool m_mapAutoTaggingMpeIDHasBeenSet = false;

    PostLaunchActions m_postLaunchActions;
    bool m_postLaunchActionsHasBeenSet = false;

    LaunchTemplateDiskConf m_smallVolumeConf;
    bool m_smallVolumeConfHasBeenSet = false;

    long long m_smallVolumeMaxSize;
    bool m_smallVolumeMaxSizeHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    TargetInstanceTypeRightSizingMethod m_targetInstanceTypeRightSizingMethod;
    bool m_targetInstanceTypeRightSizingMethodHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
