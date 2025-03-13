/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/ShareResourceType.h>
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
   * <p>Input for List Share Invitations</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListShareInvitationsInput">AWS
   * API Reference</a></p>
   */
  class ListShareInvitationsRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API ListShareInvitationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListShareInvitations"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

    AWS_WELLARCHITECTED_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    
    inline const Aws::String& GetWorkloadNamePrefix() const { return m_workloadNamePrefix; }
    inline bool WorkloadNamePrefixHasBeenSet() const { return m_workloadNamePrefixHasBeenSet; }
    template<typename WorkloadNamePrefixT = Aws::String>
    void SetWorkloadNamePrefix(WorkloadNamePrefixT&& value) { m_workloadNamePrefixHasBeenSet = true; m_workloadNamePrefix = std::forward<WorkloadNamePrefixT>(value); }
    template<typename WorkloadNamePrefixT = Aws::String>
    ListShareInvitationsRequest& WithWorkloadNamePrefix(WorkloadNamePrefixT&& value) { SetWorkloadNamePrefix(std::forward<WorkloadNamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional string added to the beginning of each lens name returned in the
     * results.</p>
     */
    inline const Aws::String& GetLensNamePrefix() const { return m_lensNamePrefix; }
    inline bool LensNamePrefixHasBeenSet() const { return m_lensNamePrefixHasBeenSet; }
    template<typename LensNamePrefixT = Aws::String>
    void SetLensNamePrefix(LensNamePrefixT&& value) { m_lensNamePrefixHasBeenSet = true; m_lensNamePrefix = std::forward<LensNamePrefixT>(value); }
    template<typename LensNamePrefixT = Aws::String>
    ListShareInvitationsRequest& WithLensNamePrefix(LensNamePrefixT&& value) { SetLensNamePrefix(std::forward<LensNamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of share invitations to be returned.</p>
     */
    inline ShareResourceType GetShareResourceType() const { return m_shareResourceType; }
    inline bool ShareResourceTypeHasBeenSet() const { return m_shareResourceTypeHasBeenSet; }
    inline void SetShareResourceType(ShareResourceType value) { m_shareResourceTypeHasBeenSet = true; m_shareResourceType = value; }
    inline ListShareInvitationsRequest& WithShareResourceType(ShareResourceType value) { SetShareResourceType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListShareInvitationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return for this request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListShareInvitationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

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
    ListShareInvitationsRequest& WithProfileNamePrefix(ProfileNamePrefixT&& value) { SetProfileNamePrefix(std::forward<ProfileNamePrefixT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional string added to the beginning of each review template name
     * returned in the results.</p>
     */
    inline const Aws::String& GetTemplateNamePrefix() const { return m_templateNamePrefix; }
    inline bool TemplateNamePrefixHasBeenSet() const { return m_templateNamePrefixHasBeenSet; }
    template<typename TemplateNamePrefixT = Aws::String>
    void SetTemplateNamePrefix(TemplateNamePrefixT&& value) { m_templateNamePrefixHasBeenSet = true; m_templateNamePrefix = std::forward<TemplateNamePrefixT>(value); }
    template<typename TemplateNamePrefixT = Aws::String>
    ListShareInvitationsRequest& WithTemplateNamePrefix(TemplateNamePrefixT&& value) { SetTemplateNamePrefix(std::forward<TemplateNamePrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workloadNamePrefix;
    bool m_workloadNamePrefixHasBeenSet = false;

    Aws::String m_lensNamePrefix;
    bool m_lensNamePrefixHasBeenSet = false;

    ShareResourceType m_shareResourceType{ShareResourceType::NOT_SET};
    bool m_shareResourceTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_profileNamePrefix;
    bool m_profileNamePrefixHasBeenSet = false;

    Aws::String m_templateNamePrefix;
    bool m_templateNamePrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
