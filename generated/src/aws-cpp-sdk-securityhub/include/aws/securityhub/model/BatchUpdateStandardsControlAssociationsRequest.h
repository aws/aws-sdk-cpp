/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/StandardsControlAssociationUpdate.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class BatchUpdateStandardsControlAssociationsRequest : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API BatchUpdateStandardsControlAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateStandardsControlAssociations"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> Updates the enablement status of a security control in a specified standard.
     * </p>
     */
    inline const Aws::Vector<StandardsControlAssociationUpdate>& GetStandardsControlAssociationUpdates() const{ return m_standardsControlAssociationUpdates; }
    inline bool StandardsControlAssociationUpdatesHasBeenSet() const { return m_standardsControlAssociationUpdatesHasBeenSet; }
    inline void SetStandardsControlAssociationUpdates(const Aws::Vector<StandardsControlAssociationUpdate>& value) { m_standardsControlAssociationUpdatesHasBeenSet = true; m_standardsControlAssociationUpdates = value; }
    inline void SetStandardsControlAssociationUpdates(Aws::Vector<StandardsControlAssociationUpdate>&& value) { m_standardsControlAssociationUpdatesHasBeenSet = true; m_standardsControlAssociationUpdates = std::move(value); }
    inline BatchUpdateStandardsControlAssociationsRequest& WithStandardsControlAssociationUpdates(const Aws::Vector<StandardsControlAssociationUpdate>& value) { SetStandardsControlAssociationUpdates(value); return *this;}
    inline BatchUpdateStandardsControlAssociationsRequest& WithStandardsControlAssociationUpdates(Aws::Vector<StandardsControlAssociationUpdate>&& value) { SetStandardsControlAssociationUpdates(std::move(value)); return *this;}
    inline BatchUpdateStandardsControlAssociationsRequest& AddStandardsControlAssociationUpdates(const StandardsControlAssociationUpdate& value) { m_standardsControlAssociationUpdatesHasBeenSet = true; m_standardsControlAssociationUpdates.push_back(value); return *this; }
    inline BatchUpdateStandardsControlAssociationsRequest& AddStandardsControlAssociationUpdates(StandardsControlAssociationUpdate&& value) { m_standardsControlAssociationUpdatesHasBeenSet = true; m_standardsControlAssociationUpdates.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<StandardsControlAssociationUpdate> m_standardsControlAssociationUpdates;
    bool m_standardsControlAssociationUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
