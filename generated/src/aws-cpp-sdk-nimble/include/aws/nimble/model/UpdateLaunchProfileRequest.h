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
  class UpdateLaunchProfileRequest : public NimbleStudioRequest
  {
  public:
    AWS_NIMBLESTUDIO_API UpdateLaunchProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLaunchProfile"; }

    AWS_NIMBLESTUDIO_API Aws::String SerializePayload() const override;

    AWS_NIMBLESTUDIO_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. If you don’t specify a client token, the Amazon Web Services SDK
     * automatically generates a client token and uses it for the request to ensure
     * idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateLaunchProfileRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateLaunchProfileRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateLaunchProfileRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateLaunchProfileRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateLaunchProfileRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateLaunchProfileRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the launch profile used to control access from the streaming
     * session.</p>
     */
    inline const Aws::String& GetLaunchProfileId() const{ return m_launchProfileId; }
    inline bool LaunchProfileIdHasBeenSet() const { return m_launchProfileIdHasBeenSet; }
    inline void SetLaunchProfileId(const Aws::String& value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId = value; }
    inline void SetLaunchProfileId(Aws::String&& value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId = std::move(value); }
    inline void SetLaunchProfileId(const char* value) { m_launchProfileIdHasBeenSet = true; m_launchProfileId.assign(value); }
    inline UpdateLaunchProfileRequest& WithLaunchProfileId(const Aws::String& value) { SetLaunchProfileId(value); return *this;}
    inline UpdateLaunchProfileRequest& WithLaunchProfileId(Aws::String&& value) { SetLaunchProfileId(std::move(value)); return *this;}
    inline UpdateLaunchProfileRequest& WithLaunchProfileId(const char* value) { SetLaunchProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the protocol that is used by the launch profile. The
     * only valid version is "2021-03-31".</p>
     */
    inline const Aws::Vector<Aws::String>& GetLaunchProfileProtocolVersions() const{ return m_launchProfileProtocolVersions; }
    inline bool LaunchProfileProtocolVersionsHasBeenSet() const { return m_launchProfileProtocolVersionsHasBeenSet; }
    inline void SetLaunchProfileProtocolVersions(const Aws::Vector<Aws::String>& value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions = value; }
    inline void SetLaunchProfileProtocolVersions(Aws::Vector<Aws::String>&& value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions = std::move(value); }
    inline UpdateLaunchProfileRequest& WithLaunchProfileProtocolVersions(const Aws::Vector<Aws::String>& value) { SetLaunchProfileProtocolVersions(value); return *this;}
    inline UpdateLaunchProfileRequest& WithLaunchProfileProtocolVersions(Aws::Vector<Aws::String>&& value) { SetLaunchProfileProtocolVersions(std::move(value)); return *this;}
    inline UpdateLaunchProfileRequest& AddLaunchProfileProtocolVersions(const Aws::String& value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions.push_back(value); return *this; }
    inline UpdateLaunchProfileRequest& AddLaunchProfileProtocolVersions(Aws::String&& value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions.push_back(std::move(value)); return *this; }
    inline UpdateLaunchProfileRequest& AddLaunchProfileProtocolVersions(const char* value) { m_launchProfileProtocolVersionsHasBeenSet = true; m_launchProfileProtocolVersions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name for the launch profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateLaunchProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateLaunchProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateLaunchProfileRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A configuration for a streaming session.</p>
     */
    inline const StreamConfigurationCreate& GetStreamConfiguration() const{ return m_streamConfiguration; }
    inline bool StreamConfigurationHasBeenSet() const { return m_streamConfigurationHasBeenSet; }
    inline void SetStreamConfiguration(const StreamConfigurationCreate& value) { m_streamConfigurationHasBeenSet = true; m_streamConfiguration = value; }
    inline void SetStreamConfiguration(StreamConfigurationCreate&& value) { m_streamConfigurationHasBeenSet = true; m_streamConfiguration = std::move(value); }
    inline UpdateLaunchProfileRequest& WithStreamConfiguration(const StreamConfigurationCreate& value) { SetStreamConfiguration(value); return *this;}
    inline UpdateLaunchProfileRequest& WithStreamConfiguration(StreamConfigurationCreate&& value) { SetStreamConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifiers for a collection of studio components that can be used
     * with this launch profile.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStudioComponentIds() const{ return m_studioComponentIds; }
    inline bool StudioComponentIdsHasBeenSet() const { return m_studioComponentIdsHasBeenSet; }
    inline void SetStudioComponentIds(const Aws::Vector<Aws::String>& value) { m_studioComponentIdsHasBeenSet = true; m_studioComponentIds = value; }
    inline void SetStudioComponentIds(Aws::Vector<Aws::String>&& value) { m_studioComponentIdsHasBeenSet = true; m_studioComponentIds = std::move(value); }
    inline UpdateLaunchProfileRequest& WithStudioComponentIds(const Aws::Vector<Aws::String>& value) { SetStudioComponentIds(value); return *this;}
    inline UpdateLaunchProfileRequest& WithStudioComponentIds(Aws::Vector<Aws::String>&& value) { SetStudioComponentIds(std::move(value)); return *this;}
    inline UpdateLaunchProfileRequest& AddStudioComponentIds(const Aws::String& value) { m_studioComponentIdsHasBeenSet = true; m_studioComponentIds.push_back(value); return *this; }
    inline UpdateLaunchProfileRequest& AddStudioComponentIds(Aws::String&& value) { m_studioComponentIdsHasBeenSet = true; m_studioComponentIds.push_back(std::move(value)); return *this; }
    inline UpdateLaunchProfileRequest& AddStudioComponentIds(const char* value) { m_studioComponentIdsHasBeenSet = true; m_studioComponentIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The studio ID. </p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }
    inline UpdateLaunchProfileRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}
    inline UpdateLaunchProfileRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}
    inline UpdateLaunchProfileRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_launchProfileId;
    bool m_launchProfileIdHasBeenSet = false;

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
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
