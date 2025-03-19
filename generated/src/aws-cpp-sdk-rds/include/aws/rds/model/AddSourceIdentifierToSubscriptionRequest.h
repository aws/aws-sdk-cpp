/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/AddSourceIdentifierToSubscriptionMessage">AWS
   * API Reference</a></p>
   */
  class AddSourceIdentifierToSubscriptionRequest : public RDSRequest
  {
  public:
    AWS_RDS_API AddSourceIdentifierToSubscriptionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AddSourceIdentifierToSubscription"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the RDS event notification subscription you want to add a source
     * identifier to.</p>
     */
    inline const Aws::String& GetSubscriptionName() const { return m_subscriptionName; }
    inline bool SubscriptionNameHasBeenSet() const { return m_subscriptionNameHasBeenSet; }
    template<typename SubscriptionNameT = Aws::String>
    void SetSubscriptionName(SubscriptionNameT&& value) { m_subscriptionNameHasBeenSet = true; m_subscriptionName = std::forward<SubscriptionNameT>(value); }
    template<typename SubscriptionNameT = Aws::String>
    AddSourceIdentifierToSubscriptionRequest& WithSubscriptionName(SubscriptionNameT&& value) { SetSubscriptionName(std::forward<SubscriptionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the event source to be added.</p> <p>Constraints:</p> <ul>
     * <li> <p>If the source type is a DB instance, a <code>DBInstanceIdentifier</code>
     * value must be supplied.</p> </li> <li> <p>If the source type is a DB cluster, a
     * <code>DBClusterIdentifier</code> value must be supplied.</p> </li> <li> <p>If
     * the source type is a DB parameter group, a <code>DBParameterGroupName</code>
     * value must be supplied.</p> </li> <li> <p>If the source type is a DB security
     * group, a <code>DBSecurityGroupName</code> value must be supplied.</p> </li> <li>
     * <p>If the source type is a DB snapshot, a <code>DBSnapshotIdentifier</code>
     * value must be supplied.</p> </li> <li> <p>If the source type is a DB cluster
     * snapshot, a <code>DBClusterSnapshotIdentifier</code> value must be supplied.</p>
     * </li> <li> <p>If the source type is an RDS Proxy, a <code>DBProxyName</code>
     * value must be supplied.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceIdentifier() const { return m_sourceIdentifier; }
    inline bool SourceIdentifierHasBeenSet() const { return m_sourceIdentifierHasBeenSet; }
    template<typename SourceIdentifierT = Aws::String>
    void SetSourceIdentifier(SourceIdentifierT&& value) { m_sourceIdentifierHasBeenSet = true; m_sourceIdentifier = std::forward<SourceIdentifierT>(value); }
    template<typename SourceIdentifierT = Aws::String>
    AddSourceIdentifierToSubscriptionRequest& WithSourceIdentifier(SourceIdentifierT&& value) { SetSourceIdentifier(std::forward<SourceIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_subscriptionName;
    bool m_subscriptionNameHasBeenSet = false;

    Aws::String m_sourceIdentifier;
    bool m_sourceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
