/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkflowmonitor/NetworkFlowMonitor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NetworkFlowMonitor
{
namespace Model
{

  /**
   * <p>A row for a top contributor for a scope.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkflowmonitor-2023-04-19/WorkloadInsightsTopContributorsRow">AWS
   * API Reference</a></p>
   */
  class WorkloadInsightsTopContributorsRow
  {
  public:
    AWS_NETWORKFLOWMONITOR_API WorkloadInsightsTopContributorsRow() = default;
    AWS_NETWORKFLOWMONITOR_API WorkloadInsightsTopContributorsRow(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API WorkloadInsightsTopContributorsRow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account ID for a specific row of data.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    WorkloadInsightsTopContributorsRow& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet identifier for the local resource.</p>
     */
    inline const Aws::String& GetLocalSubnetId() const { return m_localSubnetId; }
    inline bool LocalSubnetIdHasBeenSet() const { return m_localSubnetIdHasBeenSet; }
    template<typename LocalSubnetIdT = Aws::String>
    void SetLocalSubnetId(LocalSubnetIdT&& value) { m_localSubnetIdHasBeenSet = true; m_localSubnetId = std::forward<LocalSubnetIdT>(value); }
    template<typename LocalSubnetIdT = Aws::String>
    WorkloadInsightsTopContributorsRow& WithLocalSubnetId(LocalSubnetIdT&& value) { SetLocalSubnetId(std::forward<LocalSubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the Availability Zone where the local resource is
     * located.</p>
     */
    inline const Aws::String& GetLocalAz() const { return m_localAz; }
    inline bool LocalAzHasBeenSet() const { return m_localAzHasBeenSet; }
    template<typename LocalAzT = Aws::String>
    void SetLocalAz(LocalAzT&& value) { m_localAzHasBeenSet = true; m_localAz = std::forward<LocalAzT>(value); }
    template<typename LocalAzT = Aws::String>
    WorkloadInsightsTopContributorsRow& WithLocalAz(LocalAzT&& value) { SetLocalAz(std::forward<LocalAzT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the VPC for the local resource.</p>
     */
    inline const Aws::String& GetLocalVpcId() const { return m_localVpcId; }
    inline bool LocalVpcIdHasBeenSet() const { return m_localVpcIdHasBeenSet; }
    template<typename LocalVpcIdT = Aws::String>
    void SetLocalVpcId(LocalVpcIdT&& value) { m_localVpcIdHasBeenSet = true; m_localVpcId = std::forward<LocalVpcIdT>(value); }
    template<typename LocalVpcIdT = Aws::String>
    WorkloadInsightsTopContributorsRow& WithLocalVpcId(LocalVpcIdT&& value) { SetLocalVpcId(std::forward<LocalVpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the local resource is located.</p>
     */
    inline const Aws::String& GetLocalRegion() const { return m_localRegion; }
    inline bool LocalRegionHasBeenSet() const { return m_localRegionHasBeenSet; }
    template<typename LocalRegionT = Aws::String>
    void SetLocalRegion(LocalRegionT&& value) { m_localRegionHasBeenSet = true; m_localRegion = std::forward<LocalRegionT>(value); }
    template<typename LocalRegionT = Aws::String>
    WorkloadInsightsTopContributorsRow& WithLocalRegion(LocalRegionT&& value) { SetLocalRegion(std::forward<LocalRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a remote resource. For a VPC or subnet, this identifier is
     * the VPC Amazon Resource Name (ARN) or subnet ARN. For an Availability Zone, this
     * identifier is the AZ name, for example, us-west-2b. For an Amazon Web Services
     * Region , this identifier is the Region name, for example, us-west-2.</p>
     */
    inline const Aws::String& GetRemoteIdentifier() const { return m_remoteIdentifier; }
    inline bool RemoteIdentifierHasBeenSet() const { return m_remoteIdentifierHasBeenSet; }
    template<typename RemoteIdentifierT = Aws::String>
    void SetRemoteIdentifier(RemoteIdentifierT&& value) { m_remoteIdentifierHasBeenSet = true; m_remoteIdentifier = std::forward<RemoteIdentifierT>(value); }
    template<typename RemoteIdentifierT = Aws::String>
    WorkloadInsightsTopContributorsRow& WithRemoteIdentifier(RemoteIdentifierT&& value) { SetRemoteIdentifier(std::forward<RemoteIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for a metric.</p>
     */
    inline long long GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }
    inline WorkloadInsightsTopContributorsRow& WithValue(long long value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a local subnet.</p>
     */
    inline const Aws::String& GetLocalSubnetArn() const { return m_localSubnetArn; }
    inline bool LocalSubnetArnHasBeenSet() const { return m_localSubnetArnHasBeenSet; }
    template<typename LocalSubnetArnT = Aws::String>
    void SetLocalSubnetArn(LocalSubnetArnT&& value) { m_localSubnetArnHasBeenSet = true; m_localSubnetArn = std::forward<LocalSubnetArnT>(value); }
    template<typename LocalSubnetArnT = Aws::String>
    WorkloadInsightsTopContributorsRow& WithLocalSubnetArn(LocalSubnetArnT&& value) { SetLocalSubnetArn(std::forward<LocalSubnetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a local VPC.</p>
     */
    inline const Aws::String& GetLocalVpcArn() const { return m_localVpcArn; }
    inline bool LocalVpcArnHasBeenSet() const { return m_localVpcArnHasBeenSet; }
    template<typename LocalVpcArnT = Aws::String>
    void SetLocalVpcArn(LocalVpcArnT&& value) { m_localVpcArnHasBeenSet = true; m_localVpcArn = std::forward<LocalVpcArnT>(value); }
    template<typename LocalVpcArnT = Aws::String>
    WorkloadInsightsTopContributorsRow& WithLocalVpcArn(LocalVpcArnT&& value) { SetLocalVpcArn(std::forward<LocalVpcArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_localSubnetId;
    bool m_localSubnetIdHasBeenSet = false;

    Aws::String m_localAz;
    bool m_localAzHasBeenSet = false;

    Aws::String m_localVpcId;
    bool m_localVpcIdHasBeenSet = false;

    Aws::String m_localRegion;
    bool m_localRegionHasBeenSet = false;

    Aws::String m_remoteIdentifier;
    bool m_remoteIdentifierHasBeenSet = false;

    long long m_value{0};
    bool m_valueHasBeenSet = false;

    Aws::String m_localSubnetArn;
    bool m_localSubnetArnHasBeenSet = false;

    Aws::String m_localVpcArn;
    bool m_localVpcArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
