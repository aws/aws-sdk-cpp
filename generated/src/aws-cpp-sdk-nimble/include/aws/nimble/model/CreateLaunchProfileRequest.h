/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nimble/model/StreamConfigurationCreate.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace NimbleStudio
{
namespace Model
{

  /**
   */
  class CreateLaunchProfileRequest : public NimbleStudioRequest
  {
  public:
    AWS_NIMBLESTUDIO_API CreateLaunchProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLaunchProfile"; }

    AWS_NIMBLESTUDIO_API Aws::String SerializePayload() const override;

    AWS_NIMBLESTUDIO_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline CreateLaunchProfileRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline CreateLaunchProfileRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline CreateLaunchProfileRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description.</p>
     */
    inline CreateLaunchProfileRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description.</p>
     */
    inline CreateLaunchProfileRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description.</p>
     */
    inline CreateLaunchProfileRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies the IDs of the EC2 subnets where streaming sessions will be
     * accessible from. These subnets must support the specified instance types. </p>
     */
    inline const Aws::Vector<Aws::String>& GetEc2SubnetIds() const{ return m_ec2SubnetIds; }

    /**
     * <p>Specifies the IDs of the EC2 subnets where streaming sessions will be
     * accessible from. These subnets must support the specified instance types. </p>
     */
    inline bool Ec2SubnetIdsHasBeenSet() const { return m_ec2SubnetIdsHasBeenSet; }

    /**
     * <p>Specifies the IDs of the EC2 subnets where streaming sessions will be
     * accessible from. These subnets must support the specified instance types. </p>
     */
    inline void SetEc2SubnetIds(const Aws::Vector<Aws::String>& value) { m_ec2SubnetIdsHasBeenSet = true; m_ec2SubnetIds = value; }

    /**
     * <p>Specifies the IDs of the EC2 subnets where streaming sessions will be
     * accessible from. These subnets must support the specified instance types. </p>
     */
    inline void SetEc2SubnetIds(Aws::Vector<Aws::String>&& value) { m_ec2SubnetIdsHasBeenSet = true; m_ec2SubnetIds = std::move(value); }

    /**
     * <p>Specifies the IDs of the EC2 subnets where streaming sessions will be
     * accessible from. These subnets must support the specified instance types. </p>
     */
    inline CreateLaunchProfileRequest& WithEc2SubnetIds(const Aws::Vector<Aws::String>& value) { SetEc2SubnetIds(value); return *this;}

    /**
     * <p>Specifies the IDs of the EC2 subnets where streaming sessions will be
     * accessible from. These subnets must support the specified instance types. </p>
     */
    inline CreateLaunchProfileRequest& WithEc2SubnetIds(Aws::Vector<Aws::String>&& value) { SetEc2SubnetIds(std::move(value)); return *this;}

    /**
     * <p>Specifies the IDs of the EC2 subnets where streaming sessions will be
     * accessible from. These subnets must support the specified instance types. </p>
     */
    inline CreateLaunchProfileRequest& AddEc2SubnetIds(const Aws::String& value) { m_ec2SubnetIdsHasBeenSet = true; m_ec2SubnetIds.push_back(value); return *this; }

    /**
     * <p>Specifies the IDs of the EC2 subnets where streaming sessions will be
     * accessible from. These subnets must support the specified instance types. </p>
     */
    inline CreateLaunchProfileRequest& AddEc2SubnetIds(Aws::String&& value) { m_ec2SubnetIdsHasBeenSet = true; m_ec2SubnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the IDs of the EC2 subnets where streaming sessions will be
     * accessible from. These subnets must support the specified instance types. </p>
     */
    inline CreateLaunchProfileRequest& AddEc2SubnetIds(const char* value) { m_ec2SubnetIdsHasBeenSet = true; m_ec2SubnetIds.push_back(value); return *this; }


    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline const Aws::Vector<Aws::String>& GetLaunchProfileProtocolVersions() const{ return m_launchProfileProtocolVersions; }

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline bool LaunchProfileProtocolVersionsHasBeenSet() const { return m_launchProfileProtocolVersionsHasBeenSet; }

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline void SetLaunchProfileProtocolVersions(const Aws::Vector<Aws::String>& value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions = value; }

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline void SetLaunchProfileProtocolVersions(Aws::Vector<Aws::String>&& value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions = std::move(value); }

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline CreateLaunchProfileRequest& WithLaunchProfileProtocolVersions(const Aws::Vector<Aws::String>& value) { SetLaunchProfileProtocolVersions(value); return *this;}

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline CreateLaunchProfileRequest& WithLaunchProfileProtocolVersions(Aws::Vector<Aws::String>&& value) { SetLaunchProfileProtocolVersions(std::move(value)); return *this;}

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline CreateLaunchProfileRequest& AddLaunchProfileProtocolVersions(const Aws::String& value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions.push_back(value); return *this; }

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline CreateLaunchProfileRequest& AddLaunchProfileProtocolVersions(Aws::String&& value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions.push_back(std::move(value)); return *this; }

    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline CreateLaunchProfileRequest& AddLaunchProfileProtocolVersions(const char* value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions.push_back(value); return *this; }


    /**
     * <p>The name for the launch profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the launch profile.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the launch profile.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the launch profile.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the launch profile.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the launch profile.</p>
     */
    inline CreateLaunchProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the launch profile.</p>
     */
    inline CreateLaunchProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the launch profile.</p>
     */
    inline CreateLaunchProfileRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A configuration for a streaming session.</p>
     */
    inline const StreamConfigurationCreate& GetStreamConfiguration() const{ return m_streamConfiguration; }

    /**
     * <p>A configuration for a streaming session.</p>
     */
    inline bool StreamConfigurationHasBeenSet() const { return m_streamConfigurationHasBeenSet; }

    /**
     * <p>A configuration for a streaming session.</p>
     */
    inline void SetStreamConfiguration(const StreamConfigurationCreate& value) { m_streamConfigurationHasBeenSet = true; m_streamConfiguration = value; }

    /**
     * <p>A configuration for a streaming session.</p>
     */
    inline void SetStreamConfiguration(StreamConfigurationCreate&& value) { m_streamConfigurationHasBeenSet = true; m_streamConfiguration = std::move(value); }

    /**
     * <p>A configuration for a streaming session.</p>
     */
    inline CreateLaunchProfileRequest& WithStreamConfiguration(const StreamConfigurationCreate& value) { SetStreamConfiguration(value); return *this;}

    /**
     * <p>A configuration for a streaming session.</p>
     */
    inline CreateLaunchProfileRequest& WithStreamConfiguration(StreamConfigurationCreate&& value) { SetStreamConfiguration(std::move(value)); return *this;}


    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStudioComponentIds() const{ return m_studioComponentIds; }

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline bool StudioComponentIdsHasBeenSet() const { return m_studioComponentIdsHasBeenSet; }

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline void SetStudioComponentIds(const Aws::Vector<Aws::String>& value) { m_studioComponentIdsHasBeenSet = true; m_studioComponentIds = value; }

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline void SetStudioComponentIds(Aws::Vector<Aws::String>&& value) { m_studioComponentIdsHasBeenSet = true; m_studioComponentIds = std::move(value); }

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline CreateLaunchProfileRequest& WithStudioComponentIds(const Aws::Vector<Aws::String>& value) { SetStudioComponentIds(value); return *this;}

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline CreateLaunchProfileRequest& WithStudioComponentIds(Aws::Vector<Aws::String>&& value) { SetStudioComponentIds(std::move(value)); return *this;}

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline CreateLaunchProfileRequest& AddStudioComponentIds(const Aws::String& value) { m_studioComponentIdsHasBeenSet = true; m_studioComponentIds.push_back(value); return *this; }

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline CreateLaunchProfileRequest& AddStudioComponentIds(Aws::String&& value) { m_studioComponentIdsHasBeenSet = true; m_studioComponentIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline CreateLaunchProfileRequest& AddStudioComponentIds(const char* value) { m_studioComponentIdsHasBeenSet = true; m_studioComponentIds.push_back(value); return *this; }


    /**
     * <p>The studio ID. </p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }

    /**
     * <p>The studio ID. </p>
     */
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }

    /**
     * <p>The studio ID. </p>
     */
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }

    /**
     * <p>The studio ID. </p>
     */
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }

    /**
     * <p>The studio ID. </p>
     */
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }

    /**
     * <p>The studio ID. </p>
     */
    inline CreateLaunchProfileRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}

    /**
     * <p>The studio ID. </p>
     */
    inline CreateLaunchProfileRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}

    /**
     * <p>The studio ID. </p>
     */
    inline CreateLaunchProfileRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}


    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline CreateLaunchProfileRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline CreateLaunchProfileRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline CreateLaunchProfileRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline CreateLaunchProfileRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline CreateLaunchProfileRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline CreateLaunchProfileRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline CreateLaunchProfileRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline CreateLaunchProfileRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A collection of labels, in the form of key-value pairs, that apply to this
     * resource.</p>
     */
    inline CreateLaunchProfileRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_ec2SubnetIds;
    bool m_ec2SubnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_launchProfileProtocolVersions;
    bool m_launchProfileProtocolVersionsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    StreamConfigurationCreate m_streamConfiguration;
    bool m_streamConfigurationHasBeenSet = false;

    Aws::Vector<Aws::String> m_studioComponentIds;
    bool m_studioComponentIdsHasBeenSet = false;

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
