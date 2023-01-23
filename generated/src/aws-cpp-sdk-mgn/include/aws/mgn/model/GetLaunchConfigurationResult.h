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
    AWS_MGN_API GetLaunchConfigurationResult();
    AWS_MGN_API GetLaunchConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API GetLaunchConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Launch configuration boot mode.</p>
     */
    inline const BootMode& GetBootMode() const{ return m_bootMode; }

    /**
     * <p>Launch configuration boot mode.</p>
     */
    inline void SetBootMode(const BootMode& value) { m_bootMode = value; }

    /**
     * <p>Launch configuration boot mode.</p>
     */
    inline void SetBootMode(BootMode&& value) { m_bootMode = std::move(value); }

    /**
     * <p>Launch configuration boot mode.</p>
     */
    inline GetLaunchConfigurationResult& WithBootMode(const BootMode& value) { SetBootMode(value); return *this;}

    /**
     * <p>Launch configuration boot mode.</p>
     */
    inline GetLaunchConfigurationResult& WithBootMode(BootMode&& value) { SetBootMode(std::move(value)); return *this;}


    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline bool GetCopyPrivateIp() const{ return m_copyPrivateIp; }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline void SetCopyPrivateIp(bool value) { m_copyPrivateIp = value; }

    /**
     * <p>Copy Private IP during Launch Configuration.</p>
     */
    inline GetLaunchConfigurationResult& WithCopyPrivateIp(bool value) { SetCopyPrivateIp(value); return *this;}


    /**
     * <p>Copy Tags during Launch Configuration.</p>
     */
    inline bool GetCopyTags() const{ return m_copyTags; }

    /**
     * <p>Copy Tags during Launch Configuration.</p>
     */
    inline void SetCopyTags(bool value) { m_copyTags = value; }

    /**
     * <p>Copy Tags during Launch Configuration.</p>
     */
    inline GetLaunchConfigurationResult& WithCopyTags(bool value) { SetCopyTags(value); return *this;}


    /**
     * <p>Launch configuration EC2 Launch template ID.</p>
     */
    inline const Aws::String& GetEc2LaunchTemplateID() const{ return m_ec2LaunchTemplateID; }

    /**
     * <p>Launch configuration EC2 Launch template ID.</p>
     */
    inline void SetEc2LaunchTemplateID(const Aws::String& value) { m_ec2LaunchTemplateID = value; }

    /**
     * <p>Launch configuration EC2 Launch template ID.</p>
     */
    inline void SetEc2LaunchTemplateID(Aws::String&& value) { m_ec2LaunchTemplateID = std::move(value); }

    /**
     * <p>Launch configuration EC2 Launch template ID.</p>
     */
    inline void SetEc2LaunchTemplateID(const char* value) { m_ec2LaunchTemplateID.assign(value); }

    /**
     * <p>Launch configuration EC2 Launch template ID.</p>
     */
    inline GetLaunchConfigurationResult& WithEc2LaunchTemplateID(const Aws::String& value) { SetEc2LaunchTemplateID(value); return *this;}

    /**
     * <p>Launch configuration EC2 Launch template ID.</p>
     */
    inline GetLaunchConfigurationResult& WithEc2LaunchTemplateID(Aws::String&& value) { SetEc2LaunchTemplateID(std::move(value)); return *this;}

    /**
     * <p>Launch configuration EC2 Launch template ID.</p>
     */
    inline GetLaunchConfigurationResult& WithEc2LaunchTemplateID(const char* value) { SetEc2LaunchTemplateID(value); return *this;}


    /**
     * <p>Enable map auto tagging.</p>
     */
    inline bool GetEnableMapAutoTagging() const{ return m_enableMapAutoTagging; }

    /**
     * <p>Enable map auto tagging.</p>
     */
    inline void SetEnableMapAutoTagging(bool value) { m_enableMapAutoTagging = value; }

    /**
     * <p>Enable map auto tagging.</p>
     */
    inline GetLaunchConfigurationResult& WithEnableMapAutoTagging(bool value) { SetEnableMapAutoTagging(value); return *this;}


    /**
     * <p>Launch disposition for launch configuration.</p>
     */
    inline const LaunchDisposition& GetLaunchDisposition() const{ return m_launchDisposition; }

    /**
     * <p>Launch disposition for launch configuration.</p>
     */
    inline void SetLaunchDisposition(const LaunchDisposition& value) { m_launchDisposition = value; }

    /**
     * <p>Launch disposition for launch configuration.</p>
     */
    inline void SetLaunchDisposition(LaunchDisposition&& value) { m_launchDisposition = std::move(value); }

    /**
     * <p>Launch disposition for launch configuration.</p>
     */
    inline GetLaunchConfigurationResult& WithLaunchDisposition(const LaunchDisposition& value) { SetLaunchDisposition(value); return *this;}

    /**
     * <p>Launch disposition for launch configuration.</p>
     */
    inline GetLaunchConfigurationResult& WithLaunchDisposition(LaunchDisposition&& value) { SetLaunchDisposition(std::move(value)); return *this;}


    /**
     * <p>Launch configuration OS licensing.</p>
     */
    inline const Licensing& GetLicensing() const{ return m_licensing; }

    /**
     * <p>Launch configuration OS licensing.</p>
     */
    inline void SetLicensing(const Licensing& value) { m_licensing = value; }

    /**
     * <p>Launch configuration OS licensing.</p>
     */
    inline void SetLicensing(Licensing&& value) { m_licensing = std::move(value); }

    /**
     * <p>Launch configuration OS licensing.</p>
     */
    inline GetLaunchConfigurationResult& WithLicensing(const Licensing& value) { SetLicensing(value); return *this;}

    /**
     * <p>Launch configuration OS licensing.</p>
     */
    inline GetLaunchConfigurationResult& WithLicensing(Licensing&& value) { SetLicensing(std::move(value)); return *this;}


    /**
     * <p>Map auto tagging MPE ID.</p>
     */
    inline const Aws::String& GetMapAutoTaggingMpeID() const{ return m_mapAutoTaggingMpeID; }

    /**
     * <p>Map auto tagging MPE ID.</p>
     */
    inline void SetMapAutoTaggingMpeID(const Aws::String& value) { m_mapAutoTaggingMpeID = value; }

    /**
     * <p>Map auto tagging MPE ID.</p>
     */
    inline void SetMapAutoTaggingMpeID(Aws::String&& value) { m_mapAutoTaggingMpeID = std::move(value); }

    /**
     * <p>Map auto tagging MPE ID.</p>
     */
    inline void SetMapAutoTaggingMpeID(const char* value) { m_mapAutoTaggingMpeID.assign(value); }

    /**
     * <p>Map auto tagging MPE ID.</p>
     */
    inline GetLaunchConfigurationResult& WithMapAutoTaggingMpeID(const Aws::String& value) { SetMapAutoTaggingMpeID(value); return *this;}

    /**
     * <p>Map auto tagging MPE ID.</p>
     */
    inline GetLaunchConfigurationResult& WithMapAutoTaggingMpeID(Aws::String&& value) { SetMapAutoTaggingMpeID(std::move(value)); return *this;}

    /**
     * <p>Map auto tagging MPE ID.</p>
     */
    inline GetLaunchConfigurationResult& WithMapAutoTaggingMpeID(const char* value) { SetMapAutoTaggingMpeID(value); return *this;}


    /**
     * <p>Launch configuration name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Launch configuration name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>Launch configuration name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>Launch configuration name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>Launch configuration name.</p>
     */
    inline GetLaunchConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Launch configuration name.</p>
     */
    inline GetLaunchConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Launch configuration name.</p>
     */
    inline GetLaunchConfigurationResult& WithName(const char* value) { SetName(value); return *this;}


    
    inline const PostLaunchActions& GetPostLaunchActions() const{ return m_postLaunchActions; }

    
    inline void SetPostLaunchActions(const PostLaunchActions& value) { m_postLaunchActions = value; }

    
    inline void SetPostLaunchActions(PostLaunchActions&& value) { m_postLaunchActions = std::move(value); }

    
    inline GetLaunchConfigurationResult& WithPostLaunchActions(const PostLaunchActions& value) { SetPostLaunchActions(value); return *this;}

    
    inline GetLaunchConfigurationResult& WithPostLaunchActions(PostLaunchActions&& value) { SetPostLaunchActions(std::move(value)); return *this;}


    /**
     * <p>Launch configuration Source Server ID.</p>
     */
    inline const Aws::String& GetSourceServerID() const{ return m_sourceServerID; }

    /**
     * <p>Launch configuration Source Server ID.</p>
     */
    inline void SetSourceServerID(const Aws::String& value) { m_sourceServerID = value; }

    /**
     * <p>Launch configuration Source Server ID.</p>
     */
    inline void SetSourceServerID(Aws::String&& value) { m_sourceServerID = std::move(value); }

    /**
     * <p>Launch configuration Source Server ID.</p>
     */
    inline void SetSourceServerID(const char* value) { m_sourceServerID.assign(value); }

    /**
     * <p>Launch configuration Source Server ID.</p>
     */
    inline GetLaunchConfigurationResult& WithSourceServerID(const Aws::String& value) { SetSourceServerID(value); return *this;}

    /**
     * <p>Launch configuration Source Server ID.</p>
     */
    inline GetLaunchConfigurationResult& WithSourceServerID(Aws::String&& value) { SetSourceServerID(std::move(value)); return *this;}

    /**
     * <p>Launch configuration Source Server ID.</p>
     */
    inline GetLaunchConfigurationResult& WithSourceServerID(const char* value) { SetSourceServerID(value); return *this;}


    /**
     * <p>Launch configuration Target instance type right sizing method.</p>
     */
    inline const TargetInstanceTypeRightSizingMethod& GetTargetInstanceTypeRightSizingMethod() const{ return m_targetInstanceTypeRightSizingMethod; }

    /**
     * <p>Launch configuration Target instance type right sizing method.</p>
     */
    inline void SetTargetInstanceTypeRightSizingMethod(const TargetInstanceTypeRightSizingMethod& value) { m_targetInstanceTypeRightSizingMethod = value; }

    /**
     * <p>Launch configuration Target instance type right sizing method.</p>
     */
    inline void SetTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod&& value) { m_targetInstanceTypeRightSizingMethod = std::move(value); }

    /**
     * <p>Launch configuration Target instance type right sizing method.</p>
     */
    inline GetLaunchConfigurationResult& WithTargetInstanceTypeRightSizingMethod(const TargetInstanceTypeRightSizingMethod& value) { SetTargetInstanceTypeRightSizingMethod(value); return *this;}

    /**
     * <p>Launch configuration Target instance type right sizing method.</p>
     */
    inline GetLaunchConfigurationResult& WithTargetInstanceTypeRightSizingMethod(TargetInstanceTypeRightSizingMethod&& value) { SetTargetInstanceTypeRightSizingMethod(std::move(value)); return *this;}

  private:

    BootMode m_bootMode;

    bool m_copyPrivateIp;

    bool m_copyTags;

    Aws::String m_ec2LaunchTemplateID;

    bool m_enableMapAutoTagging;

    LaunchDisposition m_launchDisposition;

    Licensing m_licensing;

    Aws::String m_mapAutoTaggingMpeID;

    Aws::String m_name;

    PostLaunchActions m_postLaunchActions;

    Aws::String m_sourceServerID;

    TargetInstanceTypeRightSizingMethod m_targetInstanceTypeRightSizingMethod;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
