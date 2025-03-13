/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/WAFRegionalRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/ByteMatchSetUpdate.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   */
  class UpdateByteMatchSetRequest : public WAFRegionalRequest
  {
  public:
    AWS_WAFREGIONAL_API UpdateByteMatchSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateByteMatchSet"; }

    AWS_WAFREGIONAL_API Aws::String SerializePayload() const override;

    AWS_WAFREGIONAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>ByteMatchSetId</code> of the <a>ByteMatchSet</a> that you want to
     * update. <code>ByteMatchSetId</code> is returned by <a>CreateByteMatchSet</a> and
     * by <a>ListByteMatchSets</a>.</p>
     */
    inline const Aws::String& GetByteMatchSetId() const { return m_byteMatchSetId; }
    inline bool ByteMatchSetIdHasBeenSet() const { return m_byteMatchSetIdHasBeenSet; }
    template<typename ByteMatchSetIdT = Aws::String>
    void SetByteMatchSetId(ByteMatchSetIdT&& value) { m_byteMatchSetIdHasBeenSet = true; m_byteMatchSetId = std::forward<ByteMatchSetIdT>(value); }
    template<typename ByteMatchSetIdT = Aws::String>
    UpdateByteMatchSetRequest& WithByteMatchSetId(ByteMatchSetIdT&& value) { SetByteMatchSetId(std::forward<ByteMatchSetIdT>(value)); return *this;}
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
    UpdateByteMatchSetRequest& WithChangeToken(ChangeTokenT&& value) { SetChangeToken(std::forward<ChangeTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ByteMatchSetUpdate</code> objects that you want to insert
     * into or delete from a <a>ByteMatchSet</a>. For more information, see the
     * applicable data types:</p> <ul> <li> <p> <a>ByteMatchSetUpdate</a>: Contains
     * <code>Action</code> and <code>ByteMatchTuple</code> </p> </li> <li> <p>
     * <a>ByteMatchTuple</a>: Contains <code>FieldToMatch</code>,
     * <code>PositionalConstraint</code>, <code>TargetString</code>, and
     * <code>TextTransformation</code> </p> </li> <li> <p> <a>FieldToMatch</a>:
     * Contains <code>Data</code> and <code>Type</code> </p> </li> </ul>
     */
    inline const Aws::Vector<ByteMatchSetUpdate>& GetUpdates() const { return m_updates; }
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }
    template<typename UpdatesT = Aws::Vector<ByteMatchSetUpdate>>
    void SetUpdates(UpdatesT&& value) { m_updatesHasBeenSet = true; m_updates = std::forward<UpdatesT>(value); }
    template<typename UpdatesT = Aws::Vector<ByteMatchSetUpdate>>
    UpdateByteMatchSetRequest& WithUpdates(UpdatesT&& value) { SetUpdates(std::forward<UpdatesT>(value)); return *this;}
    template<typename UpdatesT = ByteMatchSetUpdate>
    UpdateByteMatchSetRequest& AddUpdates(UpdatesT&& value) { m_updatesHasBeenSet = true; m_updates.emplace_back(std::forward<UpdatesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_byteMatchSetId;
    bool m_byteMatchSetIdHasBeenSet = false;

    Aws::String m_changeToken;
    bool m_changeTokenHasBeenSet = false;

    Aws::Vector<ByteMatchSetUpdate> m_updates;
    bool m_updatesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
