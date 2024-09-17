/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/BootMode.h>
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
  class UpdateLaunchConfigurationRequest : public MgnRequest
  {
  public:
    AWS_MGN_API UpdateLaunchConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLaunchConfiguration"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Update Launch configuration Account ID.</p>
     */
    inline const Aws::String& GetAccountID() const{ return m_accountID; }
    inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }
    inline void SetAccountID(const Aws::String& value) { m_accountIDHasBeenSet = true; m_accountID = value; }
    inline void SetAccountID(Aws::String&& value) { m_accountIDHasBeenSet = true; m_accountID = std::move(value); }
    inline void SetAccountID(const char* value) { m_accountIDHasBeenSet = true; m_accountID.assign(value); }
    inline UpdateLaunchConfigurationRequest& WithAccountID(const Aws::String& value) { SetAccountID(value); return *this;}
    inline UpdateLaunchConfigurationRequest& WithAccountID(Aws::String&& value) { SetAccountID(std::move(value)); return *this;}
    inline UpdateLaunchConfigurationRequest& WithAccountID(const char* value) { SetAccountID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update Launch configuration boot mode request.</p>
     */
    inline const BootMode& GetBootMode() const{ return m_bootMode; }
    inline bool BootModeHasBeenSet() const { return m_bootModeHasBeenSet; }
    inline void SetBootMode(const BootMode& value) { m_bootModeHasBeenSet = true; m_bootMode = value; }
    inline void SetBootMode(BootMode&& value) { m_bootModeHasBeenSet = true; m_bootMode = std::move(value); }
    inline UpdateLaunchConfigurationRequest& WithBootMode(const BootMode& value) { SetBootMode(value); return *this;}
    inline UpdateLaunchConfigurationRequest& WithBootMode(BootMode&& value) { SetBootMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update Launch configuration copy Private IP request.</p>
     */
    inline bool GetCopyPrivateIp() const{ return m_copyPrivateIp; }
    inline bool CopyPrivateIpHasBeenSet() const { return m_copyPrivateIpHasBeenSet; }
    inline void SetCopyPrivateIp(bool value) { m_copyPrivateIpHasBeenSet = true; m_copyPrivateIp = value; }
    inline UpdateLaunchConfigurationRequest& WithCopyPrivateIp(bool value) { SetCopyPrivateIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update Launch configuration copy Tags request.</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }
    inline bool CopyTagsHasBeenSet() const { return m_copyTagsHasBeenSet; }
    inline void SetCopyTags(bool value) { m_copyTagsHasBeenSet = true; m_copyTags = value; }
    inline UpdateLaunchConfigurationRequest& WithCopyTags(bool value) { SetCopyTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable map auto tagging.</p>
     */
    inline bool GetEnableMapAutoTagging() const{ return m_enableMapAutoTagging; }
    inline bool EnableMapAutoTaggingHasBeenSet() const { return m_enableMapAutoTaggingHasBeenSet; }
    inline void SetEnableMapAutoTagging(bool value) { m_enableMapAutoTaggingHasBeenSet = true; m_enableMapAutoTagging = value; }
    inline UpdateLaunchConfigurationRequest& WithEnableMapAutoTagging(bool value) { SetEnableMapAutoTagging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update Launch configuration launch disposition request.</p>
     */
    inline const LaunchDisposition& GetLaunchDisposition() const{ return m_launchDisposition; }
    inline bool LaunchDispositionHasBeenSet() const { return m_launchDispositionHasBeenSet; }
    inline void SetLaunchDisposition(const LaunchDisposition& value) { m_launchDispositionHasBeenSet = true; m_launchDisposition = value; }
    inline void SetLaunchDisposition(LaunchDisposition&& value) { m_launchDispositionHasBeenSet = true; m_launchDisposition = std::move(value); }
    inline UpdateLaunchConfigurationRequest& WithLaunchDisposition(const LaunchDisposition& value) { SetLaunchDisposition(value); return *this;}
    inline UpdateLaunchConfigurationRequest& WithLaunchDisposition(LaunchDisposition&& value) { SetLaunchDisposition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update Launch configuration licensing request.</p>
     */
    inline const Licensing& GetLicensing() const{ return m_licensing; }
    inline bool LicensingHasBeenSet() const { return m_licensingHasBeenSet; }
    inline void SetLicensing(const Licensing& value) { m_licensingHasBeenSet = true; m_licensing = value; }
    inline void SetLicensing(Licensing&& value) { m_licensingHasBeenSet = true; m_licensing = std::move(value); }
    inline UpdateLaunchConfigurationRequest& WithLicensing(const Licensing& value) { SetLicensing(value); return *this;}
    inline UpdateLaunchConfigurationRequest& WithLicensing(Licensing&& value) { SetLicensing(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch configuration map auto tagging MPE ID.</p>
     */
    inline const Aws::String& GetMapAutoTaggingMpeID() const{ return m_mapAutoTaggingMpeID; }
    inline bool MapAutoTaggingMpeIDHasBeenSet() const { return m_mapAutoTaggingMpeIDHasBeenSet; }
    inline void SetMapAutoTaggingMpeID(const Aws::String& value) { m_mapAutoTaggingMpeIDHasBeenSet = true; m_mapAutoTaggingMpeID = value; }
    inline void SetMapAutoTaggingMpeID(Aws::String&& value) { m_mapAutoTaggingMpeIDHasBeenSet = true; m_mapAutoTaggingMpeID = std::move(value); }
    inline void SetMapAutoTaggingMpeID(const char* value) { m_mapAutoTaggingMpeIDHasBeenSet = true; m_mapAutoTaggingMpeID.assign(value); }
    inline UpdateLaunchConfigurationRequest& WithMapAutoTaggingMpeID(const Aws::String& value) { SetMapAutoTaggingMpeID(value); return *this;}
    inline UpdateLaunchConfigurationRequest& WithMapAutoTaggingMpeID(Aws::String&& value) { SetMapAutoTaggingMpeID(std::move(value)); return *this;}
    inline UpdateLaunchConfigurationRequest& WithMapAutoTaggingMpeID(const char* value) { SetMapAutoTaggingMpeID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update Launch configuration name request.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateLaunchConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateLaunchConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateLaunchConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    
    inline const PostLaunchActions& GetPostLaunchActions() const{ return m_postLaunchActions; }
    inline bool PostLaunchActionsHasBeenSet() const { return m_postLaunchActionsHasBeenSet; }
    inline void SetPostLaunchActions(const PostLaunchActions& value) { m_postLaunchActionsHasBeenSet = true; m_postLaunchActions = value; }
    inline void SetPostLaunchActions(PostLaunchActions&& value) { m_postLaunchActionsHasBeenSet = true; m_postLaunchActions = std::move(value); }
    inline UpdateLaunchConfigurationRequest& WithPostLaunchActions(const PostLaunchActions& value) { SetPostLaunchActions(value); return *this;}
    inline UpdateLaunchConfigurationRequest& WithPostLaunchActions(PostLaunchActions&& value) { SetPostLaunchActions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update Launch configuration by Source Server ID request.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = value; }
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::move(value); }
    inline void SetSourceServerID(const char* value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID.assign(value); }
    inline UpdateLaunchConfigurationRequest& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}
    inline UpdateLaunchConfigurationRequest& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}
    inline UpdateLaunchConfigurationRequest& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update Launch configuration Target instance right sizing request.</p>
     */
    inline const TargetInstanceTypeRightSizingMethod& GetTargetInstanceTypeRightSizingMethod() const{ return m_targetInstanceTypeRightSizingMethod; }
    inline bool TargetInstanceTypeRightSizingMethodHasBeenSet() const { return m_targetInstanceTypeRightSizingMethodHasBeenSet; }
    inline void SetTargetInstanceTypeRightSizingMethod(const TargetInstanceTypeRightSizingMethod& value) { m_targetInstanceTypeRightSizingMethodHasBeenSet = true; m_targetInstanceTypeRightSizingMethod = value; }
    inline void SetTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod&& value) { m_targetInstanceTypeRightSizingMethodHasBeenSet = true; m_targetInstanceTypeRightSizingMethod = std::move(value); }
    inline UpdateLaunchConfigurationRequest& WithTargetInstanceTypeRightSizingMethod(const TargetInstanceTypeRightSizingMethod& value) { SetTargetInstanceTypeRightSizingMethod(value); return *this;}
    inline UpdateLaunchConfigurationRequest& WithTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod&& value) { SetTargetInstanceTypeRightSizingMethod(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountID;
    bool m_accountIDHasBeenSet = false;

    BootMode m_bootMode;
    bool m_bootModeHasBeenSet = false;

    bool m_copyPrivateIp;
    bool m_copyPrivateIpHasBeenSet = false;

    bool m_copyTags;
    bool m_copyTagsHasBeenSet = false;

    bool m_enableMapAutoTagging;
    bool m_enableMapAutoTaggingHasBeenSet = false;

    LaunchDisposition m_launchDisposition;
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

    TargetInstanceTypeRightSizingMethod m_targetInstanceTypeRightSizingMethod;
    bool m_targetInstanceTypeRightSizingMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
