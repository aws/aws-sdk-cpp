/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/ProfileOwnerType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace WellArchitected
{
namespace Model
{

  /**
   */
  class ListProfilesRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API ListProfilesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProfiles"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

    AWS_WELLARCHITECTED_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>An optional string added to the beginning of each profile name returned in
     * the results.</p>
     */
    inline const Aws::String& GetProfileNamePrefix() const{ return m_profileNamePrefix; }

    /**
     * <p>An optional string added to the beginning of each profile name returned in
     * the results.</p>
     */
    inline bool ProfileNamePrefixHasBeenSet() const { return m_profileNamePrefixHasBeenSet; }

    /**
     * <p>An optional string added to the beginning of each profile name returned in
     * the results.</p>
     */
    inline void SetProfileNamePrefix(const Aws::String& value) { m_profileNamePrefixHasBeenSet = true; m_profileNamePrefix = value; }

    /**
     * <p>An optional string added to the beginning of each profile name returned in
     * the results.</p>
     */
    inline void SetProfileNamePrefix(Aws::String&& value) { m_profileNamePrefixHasBeenSet = true; m_profileNamePrefix = std::move(value); }

    /**
     * <p>An optional string added to the beginning of each profile name returned in
     * the results.</p>
     */
    inline void SetProfileNamePrefix(const char* value) { m_profileNamePrefixHasBeenSet = true; m_profileNamePrefix.assign(value); }

    /**
     * <p>An optional string added to the beginning of each profile name returned in
     * the results.</p>
     */
    inline ListProfilesRequest& WithProfileNamePrefix(const Aws::String& value) { SetProfileNamePrefix(value); return *this;}

    /**
     * <p>An optional string added to the beginning of each profile name returned in
     * the results.</p>
     */
    inline ListProfilesRequest& WithProfileNamePrefix(Aws::String&& value) { SetProfileNamePrefix(std::move(value)); return *this;}

    /**
     * <p>An optional string added to the beginning of each profile name returned in
     * the results.</p>
     */
    inline ListProfilesRequest& WithProfileNamePrefix(const char* value) { SetProfileNamePrefix(value); return *this;}


    /**
     * <p>Profile owner type.</p>
     */
    inline const ProfileOwnerType& GetProfileOwnerType() const{ return m_profileOwnerType; }

    /**
     * <p>Profile owner type.</p>
     */
    inline bool ProfileOwnerTypeHasBeenSet() const { return m_profileOwnerTypeHasBeenSet; }

    /**
     * <p>Profile owner type.</p>
     */
    inline void SetProfileOwnerType(const ProfileOwnerType& value) { m_profileOwnerTypeHasBeenSet = true; m_profileOwnerType = value; }

    /**
     * <p>Profile owner type.</p>
     */
    inline void SetProfileOwnerType(ProfileOwnerType&& value) { m_profileOwnerTypeHasBeenSet = true; m_profileOwnerType = std::move(value); }

    /**
     * <p>Profile owner type.</p>
     */
    inline ListProfilesRequest& WithProfileOwnerType(const ProfileOwnerType& value) { SetProfileOwnerType(value); return *this;}

    /**
     * <p>Profile owner type.</p>
     */
    inline ListProfilesRequest& WithProfileOwnerType(ProfileOwnerType&& value) { SetProfileOwnerType(std::move(value)); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListProfilesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListProfilesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListProfilesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListProfilesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_profileNamePrefix;
    bool m_profileNamePrefixHasBeenSet = false;

    ProfileOwnerType m_profileOwnerType;
    bool m_profileOwnerTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
