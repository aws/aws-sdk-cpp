/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class StartAssociationsOnceRequest : public SSMRequest
  {
  public:
    AWS_SSM_API StartAssociationsOnceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAssociationsOnce"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The association IDs that you want to run immediately and only one time.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociationIds() const{ return m_associationIds; }
    inline bool AssociationIdsHasBeenSet() const { return m_associationIdsHasBeenSet; }
    inline void SetAssociationIds(const Aws::Vector<Aws::String>& value) { m_associationIdsHasBeenSet = true; m_associationIds = value; }
    inline void SetAssociationIds(Aws::Vector<Aws::String>&& value) { m_associationIdsHasBeenSet = true; m_associationIds = std::move(value); }
    inline StartAssociationsOnceRequest& WithAssociationIds(const Aws::Vector<Aws::String>& value) { SetAssociationIds(value); return *this;}
    inline StartAssociationsOnceRequest& WithAssociationIds(Aws::Vector<Aws::String>&& value) { SetAssociationIds(std::move(value)); return *this;}
    inline StartAssociationsOnceRequest& AddAssociationIds(const Aws::String& value) { m_associationIdsHasBeenSet = true; m_associationIds.push_back(value); return *this; }
    inline StartAssociationsOnceRequest& AddAssociationIds(Aws::String&& value) { m_associationIdsHasBeenSet = true; m_associationIds.push_back(std::move(value)); return *this; }
    inline StartAssociationsOnceRequest& AddAssociationIds(const char* value) { m_associationIdsHasBeenSet = true; m_associationIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_associationIds;
    bool m_associationIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
