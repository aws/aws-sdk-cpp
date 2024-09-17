/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/WAFRegionalRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf-regional/model/SizeConstraintSetUpdate.h>
#include <utility>

namespace Aws
{
namespace WAFRegional
{
namespace Model
{

  /**
   */
  class UpdateSizeConstraintSetRequest : public WAFRegionalRequest
  {
  public:
    AWS_WAFREGIONAL_API UpdateSizeConstraintSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSizeConstraintSet"; }

    AWS_WAFREGIONAL_API Aws::String SerializePayload() const override;

    AWS_WAFREGIONAL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>SizeConstraintSetId</code> of the <a>SizeConstraintSet</a> that you
     * want to update. <code>SizeConstraintSetId</code> is returned by
     * <a>CreateSizeConstraintSet</a> and by <a>ListSizeConstraintSets</a>.</p>
     */
    inline const Aws::String& GetSizeConstraintSetId() const{ return m_sizeConstraintSetId; }
    inline bool SizeConstraintSetIdHasBeenSet() const { return m_sizeConstraintSetIdHasBeenSet; }
    inline void SetSizeConstraintSetId(const Aws::String& value) { m_sizeConstraintSetIdHasBeenSet = true; m_sizeConstraintSetId = value; }
    inline void SetSizeConstraintSetId(Aws::String&& value) { m_sizeConstraintSetIdHasBeenSet = true; m_sizeConstraintSetId = std::move(value); }
    inline void SetSizeConstraintSetId(const char* value) { m_sizeConstraintSetIdHasBeenSet = true; m_sizeConstraintSetId.assign(value); }
    inline UpdateSizeConstraintSetRequest& WithSizeConstraintSetId(const Aws::String& value) { SetSizeConstraintSetId(value); return *this;}
    inline UpdateSizeConstraintSetRequest& WithSizeConstraintSetId(Aws::String&& value) { SetSizeConstraintSetId(std::move(value)); return *this;}
    inline UpdateSizeConstraintSetRequest& WithSizeConstraintSetId(const char* value) { SetSizeConstraintSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value returned by the most recent call to <a>GetChangeToken</a>.</p>
     */
    inline const Aws::String& GetChangeToken() const{ return m_changeToken; }
    inline bool ChangeTokenHasBeenSet() const { return m_changeTokenHasBeenSet; }
    inline void SetChangeToken(const Aws::String& value) { m_changeTokenHasBeenSet = true; m_changeToken = value; }
    inline void SetChangeToken(Aws::String&& value) { m_changeTokenHasBeenSet = true; m_changeToken = std::move(value); }
    inline void SetChangeToken(const char* value) { m_changeTokenHasBeenSet = true; m_changeToken.assign(value); }
    inline UpdateSizeConstraintSetRequest& WithChangeToken(const Aws::String& value) { SetChangeToken(value); return *this;}
    inline UpdateSizeConstraintSetRequest& WithChangeToken(Aws::String&& value) { SetChangeToken(std::move(value)); return *this;}
    inline UpdateSizeConstraintSetRequest& WithChangeToken(const char* value) { SetChangeToken(value); return *this;}
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
    inline const Aws::Vector<SizeConstraintSetUpdate>& GetUpdates() const{ return m_updates; }
    inline bool UpdatesHasBeenSet() const { return m_updatesHasBeenSet; }
    inline void SetUpdates(const Aws::Vector<SizeConstraintSetUpdate>& value) { m_updatesHasBeenSet = true; m_updates = value; }
    inline void SetUpdates(Aws::Vector<SizeConstraintSetUpdate>&& value) { m_updatesHasBeenSet = true; m_updates = std::move(value); }
    inline UpdateSizeConstraintSetRequest& WithUpdates(const Aws::Vector<SizeConstraintSetUpdate>& value) { SetUpdates(value); return *this;}
    inline UpdateSizeConstraintSetRequest& WithUpdates(Aws::Vector<SizeConstraintSetUpdate>&& value) { SetUpdates(std::move(value)); return *this;}
    inline UpdateSizeConstraintSetRequest& AddUpdates(const SizeConstraintSetUpdate& value) { m_updatesHasBeenSet = true; m_updates.push_back(value); return *this; }
    inline UpdateSizeConstraintSetRequest& AddUpdates(SizeConstraintSetUpdate&& value) { m_updatesHasBeenSet = true; m_updates.push_back(std::move(value)); return *this; }
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
} // namespace WAFRegional
} // namespace Aws
