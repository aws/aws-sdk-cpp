/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/ShareStatus.h>
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
  class ListLensSharesRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API ListLensSharesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLensShares"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

    AWS_WELLARCHITECTED_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    
    inline const Aws::String& GetLensAlias() const { return m_lensAlias; }
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }
    template<typename LensAliasT = Aws::String>
    void SetLensAlias(LensAliasT&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::forward<LensAliasT>(value); }
    template<typename LensAliasT = Aws::String>
    ListLensSharesRequest& WithLensAlias(LensAliasT&& value) { SetLensAlias(std::forward<LensAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID, organization ID, or organizational unit
     * (OU) ID with which the lens is shared.</p>
     */
    inline const Aws::String& GetSharedWithPrefix() const { return m_sharedWithPrefix; }
    inline bool SharedWithPrefixHasBeenSet() const { return m_sharedWithPrefixHasBeenSet; }
    template<typename SharedWithPrefixT = Aws::String>
    void SetSharedWithPrefix(SharedWithPrefixT&& value) { m_sharedWithPrefixHasBeenSet = true; m_sharedWithPrefix = std::forward<SharedWithPrefixT>(value); }
    template<typename SharedWithPrefixT = Aws::String>
    ListLensSharesRequest& WithSharedWithPrefix(SharedWithPrefixT&& value) { SetSharedWithPrefix(std::forward<SharedWithPrefixT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLensSharesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return for this request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListLensSharesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    
    inline ShareStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ShareStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListLensSharesRequest& WithStatus(ShareStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_sharedWithPrefix;
    bool m_sharedWithPrefixHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    ShareStatus m_status{ShareStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
