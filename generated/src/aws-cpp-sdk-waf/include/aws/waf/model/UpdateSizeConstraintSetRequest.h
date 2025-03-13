/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/WAFRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/SizeConstraintSetUpdate.h>
#include <utility>

namespace Aws
{
namespace WAF
{
namespace Model
{

  /**
   */
  class UpdateSizeConstraintSetRequest : public WAFRequest
  {
  public:
    AWS_WAF_API UpdateSizeConstraintSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSizeConstraintSet"; }

    AWS_WAF_API Aws::String SerializePayload() const override;

    AWS_WAF_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>SizeConstraintSetId</code> of the <a>SizeConstraintSet</a> that you
     * want to update. <code>SizeConstraintSetId</code> is returned by
     * <a>CreateSizeConstraintSet</a> and by <a>ListSizeConstraintSets</a>.</p>
     */
    inline const Aws::String& GetSizeConstraintSetId() const { return m_sizeConstraintSetId; }
    inline bool SizeConstraintSetIdHasBeenSet() const { return m_sizeConstraintSetIdHasBeenSet; }
    template<typename SizeConstraintSetIdT = Aws::String>
    void SetSizeConstraintSetId(SizeConstraintSetIdT&& value) { m_sizeConstraintSetIdHasBeenSet = true; m_sizeConstraintSetId = std::forward<SizeConstraintSetIdT>(value); }
    template<typename SizeConstraintSetIdT = Aws::String>
    UpdateSizeConstraintSetRequest& WithSizeConstraintSetId(SizeConstraintSetIdT&& value) { SetSizeConstraintSetId(std::forward<SizeConstraintSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const { return m_changeToken; }
    inline bool ChangeTokenHasBeenSet() const { return m_changeTokenHasBeenSet; }
    template<typename ChangeTokenT = Aws::String>
    void SetChangeToken(ChangeTokenT&& value) { m_changeTokenHasBeenSet = true; m_changeToken = std::forward<ChangeTokenT>(value); }
    template<typename ChangeTokenT = Aws::String>
    UpdateSizeConstraintSetRequest& WithChangeToken(ChangeTokenT&& value) { SetChangeToken(std::forward<ChangeTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>SizeConstraintSetUpdate</code> objects that you want to
     * insert into or delete from a <a>SizeConstraintSet</a>. For more information, see
     * the applicable data types:</p> <ul> <li> <p> <a>SizeConstraintSetUpdate</a>:
     * Contains <code>Action</code> and <code>SizeConstraint</code> </p> </li> <li> <p>
     * <a>SizeConstraint</a>: Contains <code>FieldToMatch</code>,
     * <code>TextTransformation</code>, <code>ComparisonOperator</code>, and
     * <code>Size</code> </p> </li> <li> <p> <a>FieldToMatch</a>: Contains
     * <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline const Aws::Vector<SizeConstraintSetUpdate>& GetUpdates() const { return m_updates; }
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }
    template<typename UpdatesT = Aws::Vector<SizeConstraintSetUpdate>>
    void SetUpdates(UpdatesT&& value) { m_updatesHasBeenSet = true; m_updates = std::forward<UpdatesT>(value); }
    template<typename UpdatesT = Aws::Vector<SizeConstraintSetUpdate>>
    UpdateSizeConstraintSetRequest& WithUpdates(UpdatesT&& value) { SetUpdates(std::forward<UpdatesT>(value)); return *this;}
    template<typename UpdatesT = SizeConstraintSetUpdate>
    UpdateSizeConstraintSetRequest& AddUpdates(UpdatesT&& value) { m_updatesHasBeenSet = true; m_updates.emplace_back(std::forward<UpdatesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_sizeConstraintSetId;
    bool m_sizeConstraintSetIdHasBeenSet = false;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet = false;

    Aws::Vector<SizeConstraintSetUpdate> m_updates;
    bool m_updatesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
