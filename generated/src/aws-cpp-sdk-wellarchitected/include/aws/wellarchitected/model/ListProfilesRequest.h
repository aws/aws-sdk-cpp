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
    AWS_WELLARCHITECTED_API ListProfilesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProfiles"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

    AWS_WELLARCHITECTED_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>An optional string added to the beginning of each profile name returned in
     * the results.</p>
     */
    inline const Aws::String& GetProfileNamePrefix() const { return m_profileNamePrefix; }
    inline bool ProfileNamePrefixHasBeenSet() const { return m_profileNamePrefixHasBeenSet; }
    template<typename ProfileNamePrefixT = Aws::String>
    void SetProfileNamePrefix(ProfileNamePrefixT&& value) { m_profileNamePrefixHasBeenSet = true; m_profileNamePrefix = std::forward<ProfileNamePrefixT>(value); }
    template<typename ProfileNamePrefixT = Aws::String>
    ListProfilesRequest& WithProfileNamePrefix(ProfileNamePrefixT&& value) { SetProfileNamePrefix(std::forward<ProfileNamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Profile owner type.</p>
     */
    inline ProfileOwnerType GetProfileOwnerType() const { return m_profileOwnerType; }
    inline bool ProfileOwnerTypeHasBeenSet() const { return m_profileOwnerTypeHasBeenSet; }
    inline void SetProfileOwnerType(ProfileOwnerType value) { m_profileOwnerTypeHasBeenSet = true; m_profileOwnerType = value; }
    inline ListProfilesRequest& WithProfileOwnerType(ProfileOwnerType value) { SetProfileOwnerType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProfilesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListProfilesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_profileNamePrefix;
    bool m_profileNamePrefixHasBeenSet = false;

    ProfileOwnerType m_profileOwnerType{ProfileOwnerType::NOT_SET};
    bool m_profileOwnerTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
