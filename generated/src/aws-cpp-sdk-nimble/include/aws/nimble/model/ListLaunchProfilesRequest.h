﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
#include <aws/nimble/NimbleStudioRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/nimble/model/LaunchProfileState.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace NimbleStudio
{
namespace Model
{

  /**
   */
  class ListLaunchProfilesRequest : public NimbleStudioRequest
  {
  public:
    AWS_NIMBLESTUDIO_API ListLaunchProfilesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLaunchProfiles"; }

    AWS_NIMBLESTUDIO_API Aws::String SerializePayload() const override;

    AWS_NIMBLESTUDIO_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The max number of results to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListLaunchProfilesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListLaunchProfilesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListLaunchProfilesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListLaunchProfilesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The principal ID. This currently supports a IAM Identity Center UserId. </p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }
    inline ListLaunchProfilesRequest& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}
    inline ListLaunchProfilesRequest& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}
    inline ListLaunchProfilesRequest& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter this request to launch profiles in any of the given states.</p>
     */
    inline const Aws::Vector<LaunchProfileState>& GetStates() const{ return m_states; }
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }
    inline void SetStates(const Aws::Vector<LaunchProfileState>& value) { m_statesHasBeenSet = true; m_states = value; }
    inline void SetStates(Aws::Vector<LaunchProfileState>&& value) { m_statesHasBeenSet = true; m_states = std::move(value); }
    inline ListLaunchProfilesRequest& WithStates(const Aws::Vector<LaunchProfileState>& value) { SetStates(value); return *this;}
    inline ListLaunchProfilesRequest& WithStates(Aws::Vector<LaunchProfileState>&& value) { SetStates(std::move(value)); return *this;}
    inline ListLaunchProfilesRequest& AddStates(const LaunchProfileState& value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }
    inline ListLaunchProfilesRequest& AddStates(LaunchProfileState&& value) { m_statesHasBeenSet = true; m_states.push_back(std::move(value)); return *this; }
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
    inline ListLaunchProfilesRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}
    inline ListLaunchProfilesRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}
    inline ListLaunchProfilesRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}
    ///@}
  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    Aws::Vector<LaunchProfileState> m_states;
    bool m_statesHasBeenSet = false;

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
