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
    AWS_SECURITYHUB_API BatchUpdateStandardsControlAssociationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateStandardsControlAssociations"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> Updates the enablement status of a security control in a specified standard.
     * </p> <p> Calls to this operation return a
     * <code>RESOURCE_NOT_FOUND_EXCEPTION</code> error when the standard subscription
     * for the control has <code>StandardsControlsUpdatable</code> value
     * <code>NOT_READY_FOR_UPDATES</code>. </p>
     */
    inline const Aws::Vector<StandardsControlAssociationUpdate>& GetStandardsControlAssociationUpdates() const { return m_standardsControlAssociationUpdates; }
    inline bool StandardsControlAssociationUpdatesHasBeenSet() const { return m_standardsControlAssociationUpdatesHasBeenSet; }
    template<typename StandardsControlAssociationUpdatesT = Aws::Vector<StandardsControlAssociationUpdate>>
    void SetStandardsControlAssociationUpdates(StandardsControlAssociationUpdatesT&& value) { m_standardsControlAssociationUpdatesHasBeenSet = true; m_standardsControlAssociationUpdates = std::forward<StandardsControlAssociationUpdatesT>(value); }
    template<typename StandardsControlAssociationUpdatesT = Aws::Vector<StandardsControlAssociationUpdate>>
    BatchUpdateStandardsControlAssociationsRequest& WithStandardsControlAssociationUpdates(StandardsControlAssociationUpdatesT&& value) { SetStandardsControlAssociationUpdates(std::forward<StandardsControlAssociationUpdatesT>(value)); return *this;}
    template<typename StandardsControlAssociationUpdatesT = StandardsControlAssociationUpdate>
    BatchUpdateStandardsControlAssociationsRequest& AddStandardsControlAssociationUpdates(StandardsControlAssociationUpdatesT&& value) { m_standardsControlAssociationUpdatesHasBeenSet = true; m_standardsControlAssociationUpdates.emplace_back(std::forward<StandardsControlAssociationUpdatesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<StandardsControlAssociationUpdate> m_standardsControlAssociationUpdates;
    bool m_standardsControlAssociationUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
