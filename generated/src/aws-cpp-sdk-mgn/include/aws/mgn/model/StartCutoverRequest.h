/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class StartCutoverRequest : public MgnRequest
  {
  public:
    AWS_MGN_API StartCutoverRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartCutover"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Start Cutover by Account IDs</p>
     */
    inline const Aws::String& GetAccountID() const { return m_accountID; }
    inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }
    template<typename AccountIDT = Aws::String>
    void SetAccountID(AccountIDT&& value) { m_accountIDHasBeenSet = true; m_accountID = std::forward<AccountIDT>(value); }
    template<typename AccountIDT = Aws::String>
    StartCutoverRequest& WithAccountID(AccountIDT&& value) { SetAccountID(std::forward<AccountIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Start Cutover by Source Server IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSourceServerIDs() const { return m_sourceServerIDs; }
    inline bool SourceServerIDsHasBeenSet() const { return m_sourceServerIDsHasBeenSet; }
    template<typename SourceServerIDsT = Aws::Vector<Aws::String>>
    void SetSourceServerIDs(SourceServerIDsT&& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs = std::forward<SourceServerIDsT>(value); }
    template<typename SourceServerIDsT = Aws::Vector<Aws::String>>
    StartCutoverRequest& WithSourceServerIDs(SourceServerIDsT&& value) { SetSourceServerIDs(std::forward<SourceServerIDsT>(value)); return *this;}
    template<typename SourceServerIDsT = Aws::String>
    StartCutoverRequest& AddSourceServerIDs(SourceServerIDsT&& value) { m_sourceServerIDsHasBeenSet = true; m_sourceServerIDs.emplace_back(std::forward<SourceServerIDsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Start Cutover by Tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    StartCutoverRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    StartCutoverRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_accountID;
    bool m_accountIDHasBeenSet = false;

    Aws::Vector<Aws::String> m_sourceServerIDs;
    bool m_sourceServerIDsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
