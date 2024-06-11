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
  class GetReferenceMetadataRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API GetReferenceMetadataRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetReferenceMetadata"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The reference's ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline GetReferenceMetadataRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetReferenceMetadataRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetReferenceMetadataRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference's reference store ID.</p>
     */
    inline const Aws::String& GetReferenceStoreId() const{ return m_referenceStoreId; }
    inline bool ReferenceStoreIdHasBeenSet() const { return m_referenceStoreIdHasBeenSet; }
    inline void SetReferenceStoreId(const Aws::String& value) { m_referenceStoreIdHasBeenSet = true; m_referenceStoreId = value; }
    inline void SetReferenceStoreId(Aws::String&& value) { m_referenceStoreIdHasBeenSet = true; m_referenceStoreId = std::move(value); }
    inline void SetReferenceStoreId(const char* value) { m_referenceStoreIdHasBeenSet = true; m_referenceStoreId.assign(value); }
    inline GetReferenceMetadataRequest& WithReferenceStoreId(const Aws::String& value) { SetReferenceStoreId(value); return *this;}
    inline GetReferenceMetadataRequest& WithReferenceStoreId(Aws::String&& value) { SetReferenceStoreId(std::move(value)); return *this;}
    inline GetReferenceMetadataRequest& WithReferenceStoreId(const char* value) { SetReferenceStoreId(value); return *this;}
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
