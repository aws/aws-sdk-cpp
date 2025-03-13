/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/MgnRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace mgn
{
namespace Model
{

  /**
   */
  class RemoveSourceServerActionRequest : public MgnRequest
  {
  public:
    AWS_MGN_API RemoveSourceServerActionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RemoveSourceServerAction"; }

    AWS_MGN_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Source server post migration account ID.</p>
     */
    inline const Aws::String& GetAccountID() const { return m_accountID; }
    inline bool AccountIDHasBeenSet() const { return m_accountIDHasBeenSet; }
    template<typename AccountIDT = Aws::String>
    void SetAccountID(AccountIDT&& value) { m_accountIDHasBeenSet = true; m_accountID = std::forward<AccountIDT>(value); }
    template<typename AccountIDT = Aws::String>
    RemoveSourceServerActionRequest& WithAccountID(AccountIDT&& value) { SetAccountID(std::forward<AccountIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server post migration custom action ID to remove.</p>
     */
    inline const Aws::String& GetActionID() const { return m_actionID; }
    inline bool ActionIDHasBeenSet() const { return m_actionIDHasBeenSet; }
    template<typename ActionIDT = Aws::String>
    void SetActionID(ActionIDT&& value) { m_actionIDHasBeenSet = true; m_actionID = std::forward<ActionIDT>(value); }
    template<typename ActionIDT = Aws::String>
    RemoveSourceServerActionRequest& WithActionID(ActionIDT&& value) { SetActionID(std::forward<ActionIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Source server ID of the post migration custom action to remove.</p>
     */
    inline const Aws::String& GetSourceServerID() const { return m_sourceServerID; }
    inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }
    template<typename SourceServerIDT = Aws::String>
    void SetSourceServerID(SourceServerIDT&& value) { m_sourceServerIDHasBeenSet = true; m_sourceServerID = std::forward<SourceServerIDT>(value); }
    template<typename SourceServerIDT = Aws::String>
    RemoveSourceServerActionRequest& WithSourceServerID(SourceServerIDT&& value) { SetSourceServerID(std::forward<SourceServerIDT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountID;
    bool m_accountIDHasBeenSet = false;

    Aws::String m_actionID;
    bool m_actionIDHasBeenSet = false;

    Aws::String m_sourceServerID;
    bool m_sourceServerIDHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
