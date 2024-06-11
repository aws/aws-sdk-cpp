/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nimble/model/NewLaunchProfileMember.h>
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
  class PutLaunchProfileMembersRequest : public NimbleStudioRequest
  {
  public:
    AWS_NIMBLESTUDIO_API PutLaunchProfileMembersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutLaunchProfileMembers"; }

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
    inline PutLaunchProfileMembersRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline PutLaunchProfileMembersRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline PutLaunchProfileMembersRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the identity store.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }
    inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = value; }
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::move(value); }
    inline void SetIdentityStoreId(const char* value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId.assign(value); }
    inline PutLaunchProfileMembersRequest& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}
    inline PutLaunchProfileMembersRequest& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}
    inline PutLaunchProfileMembersRequest& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}
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
    inline PutLaunchProfileMembersRequest& WithLaunchProfileId(const Aws::String& value) { SetLaunchProfileId(value); return *this;}
    inline PutLaunchProfileMembersRequest& WithLaunchProfileId(Aws::String&& value) { SetLaunchProfileId(std::move(value)); return *this;}
    inline PutLaunchProfileMembersRequest& WithLaunchProfileId(const char* value) { SetLaunchProfileId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of members.</p>
     */
    inline const Aws::Vector<NewLaunchProfileMember>& GetMembers() const{ return m_members; }
    inline bool MembersHasBeenSet() const { return m_membersHasBeenSet; }
    inline void SetMembers(const Aws::Vector<NewLaunchProfileMember>& value) { m_membersHasBeenSet = true; m_members = value; }
    inline void SetMembers(Aws::Vector<NewLaunchProfileMember>&& value) { m_membersHasBeenSet = true; m_members = std::move(value); }
    inline PutLaunchProfileMembersRequest& WithMembers(const Aws::Vector<NewLaunchProfileMember>& value) { SetMembers(value); return *this;}
    inline PutLaunchProfileMembersRequest& WithMembers(Aws::Vector<NewLaunchProfileMember>&& value) { SetMembers(std::move(value)); return *this;}
    inline PutLaunchProfileMembersRequest& AddMembers(const NewLaunchProfileMember& value) { m_membersHasBeenSet = true; m_members.push_back(value); return *this; }
    inline PutLaunchProfileMembersRequest& AddMembers(NewLaunchProfileMember&& value) { m_membersHasBeenSet = true; m_members.push_back(std::move(value)); return *this; }
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
    inline PutLaunchProfileMembersRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}
    inline PutLaunchProfileMembersRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}
    inline PutLaunchProfileMembersRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_identityStoreId;
    bool m_identityStoreIdHasBeenSet = false;

    Aws::String m_launchProfileId;
    bool m_launchProfileIdHasBeenSet = false;

    Aws::Vector<NewLaunchProfileMember> m_members;
    bool m_membersHasBeenSet = false;

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
