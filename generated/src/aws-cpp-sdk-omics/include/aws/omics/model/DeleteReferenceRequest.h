/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Omics
{
namespace Model
{

  /**
   */
  class DeleteReferenceRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API DeleteReferenceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteReference"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The reference's ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DeleteReferenceRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference's store ID.</p>
     */
    inline const Aws::String& GetReferenceStoreId() const { return m_referenceStoreId; }
    inline bool ReferenceStoreIdHasBeenSet() const { return m_referenceStoreIdHasBeenSet; }
    template<typename ReferenceStoreIdT = Aws::String>
    void SetReferenceStoreId(ReferenceStoreIdT&& value) { m_referenceStoreIdHasBeenSet = true; m_referenceStoreId = std::forward<ReferenceStoreIdT>(value); }
    template<typename ReferenceStoreIdT = Aws::String>
    DeleteReferenceRequest& WithReferenceStoreId(ReferenceStoreIdT&& value) { SetReferenceStoreId(std::forward<ReferenceStoreIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_referenceStoreId;
    bool m_referenceStoreIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
