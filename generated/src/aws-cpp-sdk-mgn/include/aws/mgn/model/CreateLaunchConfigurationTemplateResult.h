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
  class CreateLaunchConfigurationTemplateResult
  {
  public:
    AWS_MGN_API CreateLaunchConfigurationTemplateResult();
    AWS_MGN_API CreateLaunchConfigurationTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API CreateLaunchConfigurationTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>ARN of the Launch Configuration Template.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateLaunchConfigurationTemplateResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateLaunchConfigurationTemplateResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateLaunchConfigurationTemplateResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Associate public Ip address.</p>
     */
    inline bool GetAssociatePublicIpAddress() const{ return m_associatePublicIpAddress; }
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddress = value; }
    inline CreateLaunchConfigurationTemplateResult& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch configuration template boot mode.</p>
     */
    inline const BootMode& GetBootMode() const{ return m_bootMode; }
    inline void SetBootMode(const BootMode& value) { m_bootMode = value; }
    inline void SetBootMode(BootMode&& value) { m_bootMode = std::move(value); }
    inline CreateLaunchConfigurationTemplateResult& WithBootMode(const BootMode& value) { SetBootMode(value); return *this;}
    inline CreateLaunchConfigurationTemplateResult& WithBootMode(BootMode&& value) { SetBootMode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Copy private Ip.</p>
     */
    inline bool GetCopyPrivateIp() const{ return m_copyPrivateIp; }
    inline void SetCopyPrivateIp(bool value) { m_copyPrivateIp = value; }
    inline CreateLaunchConfigurationTemplateResult& WithCopyPrivateIp(bool value) { SetCopyPrivateIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Copy tags.</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }
    inline void SetCopyTags(bool value) { m_copyTags = value; }
    inline CreateLaunchConfigurationTemplateResult& WithCopyTags(bool value) { SetCopyTags(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>EC2 launch template ID.</p>
     */
    inline const Aws::String& GetEc2LaunchTemplateID() const{ return m_ec2LaunchTemplateID; }
    inline void SetEc2LaunchTemplateID(const Aws::String& value) { m_ec2LaunchTemplateID = value; }
    inline void SetEc2LaunchTemplateID(Aws::String&& value) { m_ec2LaunchTemplateID = std::move(value); }
    inline void SetEc2LaunchTemplateID(const char* value) { m_ec2LaunchTemplateID.assign(value); }
    inline CreateLaunchConfigurationTemplateResult& WithEc2LaunchTemplateID(const Aws::String& value) { SetEc2LaunchTemplateID(value); return *this;}
    inline CreateLaunchConfigurationTemplateResult& WithEc2LaunchTemplateID(Aws::String&& value) { SetEc2LaunchTemplateID(std::move(value)); return *this;}
    inline CreateLaunchConfigurationTemplateResult& WithEc2LaunchTemplateID(const char* value) { SetEc2LaunchTemplateID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable map auto tagging.</p>
     */
    inline bool GetEnableMapAutoTagging() const{ return m_enableMapAutoTagging; }
    inline void SetEnableMapAutoTagging(bool value) { m_enableMapAutoTagging = value; }
    inline CreateLaunchConfigurationTemplateResult& WithEnableMapAutoTagging(bool value) { SetEnableMapAutoTagging(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Large volume config.</p>
     */
    inline const LaunchTemplateDiskConf& GetLargeVolumeConf() const{ return m_largeVolumeConf; }
    inline void SetLargeVolumeConf(const LaunchTemplateDiskConf& value) { m_largeVolumeConf = value; }
    inline void SetLargeVolumeConf(LaunchTemplateDiskConf&& value) { m_largeVolumeConf = std::move(value); }
    inline CreateLaunchConfigurationTemplateResult& WithLargeVolumeConf(const LaunchTemplateDiskConf& value) { SetLargeVolumeConf(value); return *this;}
    inline CreateLaunchConfigurationTemplateResult& WithLargeVolumeConf(LaunchTemplateDiskConf&& value) { SetLargeVolumeConf(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID of the Launch Configuration Template.</p>
     */
    inline const Aws::String& GetLaunchConfigurationTemplateID() const{ return m_launchConfigurationTemplateID; }
    inline void SetLaunchConfigurationTemplateID(const Aws::String& value) { m_launchConfigurationTemplateID = value; }
    inline void SetLaunchConfigurationTemplateID(Aws::String&& value) { m_launchConfigurationTemplateID = std::move(value); }
    inline void SetLaunchConfigurationTemplateID(const char* value) { m_launchConfigurationTemplateID.assign(value); }
    inline CreateLaunchConfigurationTemplateResult& WithLaunchConfigurationTemplateID(const Aws::String& value) { SetLaunchConfigurationTemplateID(value); return *this;}
    inline CreateLaunchConfigurationTemplateResult& WithLaunchConfigurationTemplateID(Aws::String&& value) { SetLaunchConfigurationTemplateID(std::move(value)); return *this;}
    inline CreateLaunchConfigurationTemplateResult& WithLaunchConfigurationTemplateID(const char* value) { SetLaunchConfigurationTemplateID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch disposition.</p>
     */
    inline const LaunchDisposition& GetLaunchDisposition() const{ return m_launchDisposition; }
    inline void SetLaunchDisposition(const LaunchDisposition& value) { m_launchDisposition = value; }
    inline void SetLaunchDisposition(LaunchDisposition&& value) { m_launchDisposition = std::move(value); }
    inline CreateLaunchConfigurationTemplateResult& WithLaunchDisposition(const LaunchDisposition& value) { SetLaunchDisposition(value); return *this;}
    inline CreateLaunchConfigurationTemplateResult& WithLaunchDisposition(LaunchDisposition&& value) { SetLaunchDisposition(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Licensing& GetLicensing() const{ return m_licensing; }
    inline void SetLicensing(const Licensing& value) { m_licensing = value; }
    inline void SetLicensing(Licensing&& value) { m_licensing = std::move(value); }
    inline CreateLaunchConfigurationTemplateResult& WithLicensing(const Licensing& value) { SetLicensing(value); return *this;}
    inline CreateLaunchConfigurationTemplateResult& WithLicensing(Licensing&& value) { SetLicensing(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Launch configuration template map auto tagging MPE ID.</p>
     */
    inline const Aws::String& GetMapAutoTaggingMpeID() const{ return m_mapAutoTaggingMpeID; }
    inline void SetMapAutoTaggingMpeID(const Aws::String& value) { m_mapAutoTaggingMpeID = value; }
    inline void SetMapAutoTaggingMpeID(Aws::String&& value) { m_mapAutoTaggingMpeID = std::move(value); }
    inline void SetMapAutoTaggingMpeID(const char* value) { m_mapAutoTaggingMpeID.assign(value); }
    inline CreateLaunchConfigurationTemplateResult& WithMapAutoTaggingMpeID(const Aws::String& value) { SetMapAutoTaggingMpeID(value); return *this;}
    inline CreateLaunchConfigurationTemplateResult& WithMapAutoTaggingMpeID(Aws::String&& value) { SetMapAutoTaggingMpeID(std::move(value)); return *this;}
    inline CreateLaunchConfigurationTemplateResult& WithMapAutoTaggingMpeID(const char* value) { SetMapAutoTaggingMpeID(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Post Launch Actions of the Launch Configuration Template.</p>
     */
    inline const PostLaunchActions& GetPostLaunchActions() const{ return m_postLaunchActions; }
    inline void SetPostLaunchActions(const PostLaunchActions& value) { m_postLaunchActions = value; }
    inline void SetPostLaunchActions(PostLaunchActions&& value) { m_postLaunchActions = std::move(value); }
    inline CreateLaunchConfigurationTemplateResult& WithPostLaunchActions(const PostLaunchActions& value) { SetPostLaunchActions(value); return *this;}
    inline CreateLaunchConfigurationTemplateResult& WithPostLaunchActions(PostLaunchActions&& value) { SetPostLaunchActions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Small volume config.</p>
     */
    inline const LaunchTemplateDiskConf& GetSmallVolumeConf() const{ return m_smallVolumeConf; }
    inline void SetSmallVolumeConf(const LaunchTemplateDiskConf& value) { m_smallVolumeConf = value; }
    inline void SetSmallVolumeConf(LaunchTemplateDiskConf&& value) { m_smallVolumeConf = std::move(value); }
    inline CreateLaunchConfigurationTemplateResult& WithSmallVolumeConf(const LaunchTemplateDiskConf& value) { SetSmallVolumeConf(value); return *this;}
    inline CreateLaunchConfigurationTemplateResult& WithSmallVolumeConf(LaunchTemplateDiskConf&& value) { SetSmallVolumeConf(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Small volume maximum size.</p>
     */
    inline long long GetSmallVolumeMaxSize() const{ return m_smallVolumeMaxSize; }
    inline void SetSmallVolumeMaxSize(long long value) { m_smallVolumeMaxSize = value; }
    inline CreateLaunchConfigurationTemplateResult& WithSmallVolumeMaxSize(long long value) { SetSmallVolumeMaxSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags of the Launch Configuration Template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }
    inline CreateLaunchConfigurationTemplateResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateLaunchConfigurationTemplateResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateLaunchConfigurationTemplateResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }
    inline CreateLaunchConfigurationTemplateResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateLaunchConfigurationTemplateResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateLaunchConfigurationTemplateResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateLaunchConfigurationTemplateResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateLaunchConfigurationTemplateResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }
    inline CreateLaunchConfigurationTemplateResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Target instance type right-sizing method.</p>
     */
    inline const TargetInstanceTypeRightSizingMethod& GetTargetInstanceTypeRightSizingMethod() const{ return m_targetInstanceTypeRightSizingMethod; }
    inline void SetTargetInstanceTypeRightSizingMethod(const TargetInstanceTypeRightSizingMethod& value) { m_targetInstanceTypeRightSizingMethod = value; }
    inline void SetTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod&& value) { m_targetInstanceTypeRightSizingMethod = std::move(value); }
    inline CreateLaunchConfigurationTemplateResult& WithTargetInstanceTypeRightSizingMethod(const TargetInstanceTypeRightSizingMethod& value) { SetTargetInstanceTypeRightSizingMethod(value); return *this;}
    inline CreateLaunchConfigurationTemplateResult& WithTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod&& value) { SetTargetInstanceTypeRightSizingMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateLaunchConfigurationTemplateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateLaunchConfigurationTemplateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateLaunchConfigurationTemplateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    bool m_associatePublicIpAddress;

    BootMode m_bootMode;

    bool m_copyPrivateIp;

    bool m_copyTags;

    Aws::String m_ec2LaunchTemplateID;

    bool m_enableMapAutoTagging;

    LaunchTemplateDiskConf m_largeVolumeConf;

    Aws::String m_launchConfigurationTemplateID;

    LaunchDisposition m_launchDisposition;

    Licensing m_licensing;

    Aws::String m_mapAutoTaggingMpeID;

    PostLaunchActions m_postLaunchActions;

    LaunchTemplateDiskConf m_smallVolumeConf;

    long long m_smallVolumeMaxSize;

    Aws::Map<Aws::String, Aws::String> m_tags;

    TargetInstanceTypeRightSizingMethod m_targetInstanceTypeRightSizingMethod;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
