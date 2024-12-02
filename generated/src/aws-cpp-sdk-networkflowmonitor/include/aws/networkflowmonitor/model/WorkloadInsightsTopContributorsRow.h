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
    AWS_NETWORKFLOWMONITOR_API WorkloadInsightsTopContributorsRow();
    AWS_NETWORKFLOWMONITOR_API WorkloadInsightsTopContributorsRow(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API WorkloadInsightsTopContributorsRow& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFLOWMONITOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account ID for a specific row of data.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline WorkloadInsightsTopContributorsRow& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline WorkloadInsightsTopContributorsRow& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline WorkloadInsightsTopContributorsRow& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subnet identifier for the local resource.</p>
     */
    inline const Aws::String& GetLocalSubnetId() const{ return m_localSubnetId; }
    inline bool LocalSubnetIdHasBeenSet() const { return m_localSubnetIdHasBeenSet; }
    inline void SetLocalSubnetId(const Aws::String& value) { m_localSubnetIdHasBeenSet = true; m_localSubnetId = value; }
    inline void SetLocalSubnetId(Aws::String&& value) { m_localSubnetIdHasBeenSet = true; m_localSubnetId = std::move(value); }
    inline void SetLocalSubnetId(const char* value) { m_localSubnetIdHasBeenSet = true; m_localSubnetId.assign(value); }
    inline WorkloadInsightsTopContributorsRow& WithLocalSubnetId(const Aws::String& value) { SetLocalSubnetId(value); return *this;}
    inline WorkloadInsightsTopContributorsRow& WithLocalSubnetId(Aws::String&& value) { SetLocalSubnetId(std::move(value)); return *this;}
    inline WorkloadInsightsTopContributorsRow& WithLocalSubnetId(const char* value) { SetLocalSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the Availability Zone where the local resource is
     * located.</p>
     */
    inline const Aws::String& GetLocalAz() const{ return m_localAz; }
    inline bool LocalAzHasBeenSet() const { return m_localAzHasBeenSet; }
    inline void SetLocalAz(const Aws::String& value) { m_localAzHasBeenSet = true; m_localAz = value; }
    inline void SetLocalAz(Aws::String&& value) { m_localAzHasBeenSet = true; m_localAz = std::move(value); }
    inline void SetLocalAz(const char* value) { m_localAzHasBeenSet = true; m_localAz.assign(value); }
    inline WorkloadInsightsTopContributorsRow& WithLocalAz(const Aws::String& value) { SetLocalAz(value); return *this;}
    inline WorkloadInsightsTopContributorsRow& WithLocalAz(Aws::String&& value) { SetLocalAz(std::move(value)); return *this;}
    inline WorkloadInsightsTopContributorsRow& WithLocalAz(const char* value) { SetLocalAz(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the VPC for the local resource.</p>
     */
    inline const Aws::String& GetLocalVpcId() const{ return m_localVpcId; }
    inline bool LocalVpcIdHasBeenSet() const { return m_localVpcIdHasBeenSet; }
    inline void SetLocalVpcId(const Aws::String& value) { m_localVpcIdHasBeenSet = true; m_localVpcId = value; }
    inline void SetLocalVpcId(Aws::String&& value) { m_localVpcIdHasBeenSet = true; m_localVpcId = std::move(value); }
    inline void SetLocalVpcId(const char* value) { m_localVpcIdHasBeenSet = true; m_localVpcId.assign(value); }
    inline WorkloadInsightsTopContributorsRow& WithLocalVpcId(const Aws::String& value) { SetLocalVpcId(value); return *this;}
    inline WorkloadInsightsTopContributorsRow& WithLocalVpcId(Aws::String&& value) { SetLocalVpcId(std::move(value)); return *this;}
    inline WorkloadInsightsTopContributorsRow& WithLocalVpcId(const char* value) { SetLocalVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the local resource is located.</p>
     */
    inline const Aws::String& GetLocalRegion() const{ return m_localRegion; }
    inline bool LocalRegionHasBeenSet() const { return m_localRegionHasBeenSet; }
    inline void SetLocalRegion(const Aws::String& value) { m_localRegionHasBeenSet = true; m_localRegion = value; }
    inline void SetLocalRegion(Aws::String&& value) { m_localRegionHasBeenSet = true; m_localRegion = std::move(value); }
    inline void SetLocalRegion(const char* value) { m_localRegionHasBeenSet = true; m_localRegion.assign(value); }
    inline WorkloadInsightsTopContributorsRow& WithLocalRegion(const Aws::String& value) { SetLocalRegion(value); return *this;}
    inline WorkloadInsightsTopContributorsRow& WithLocalRegion(Aws::String&& value) { SetLocalRegion(std::move(value)); return *this;}
    inline WorkloadInsightsTopContributorsRow& WithLocalRegion(const char* value) { SetLocalRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a remote resource.</p>
     */
    inline const Aws::String& GetRemoteIdentifier() const{ return m_remoteIdentifier; }
    inline bool RemoteIdentifierHasBeenSet() const { return m_remoteIdentifierHasBeenSet; }
    inline void SetRemoteIdentifier(const Aws::String& value) { m_remoteIdentifierHasBeenSet = true; m_remoteIdentifier = value; }
    inline void SetRemoteIdentifier(Aws::String&& value) { m_remoteIdentifierHasBeenSet = true; m_remoteIdentifier = std::move(value); }
    inline void SetRemoteIdentifier(const char* value) { m_remoteIdentifierHasBeenSet = true; m_remoteIdentifier.assign(value); }
    inline WorkloadInsightsTopContributorsRow& WithRemoteIdentifier(const Aws::String& value) { SetRemoteIdentifier(value); return *this;}
    inline WorkloadInsightsTopContributorsRow& WithRemoteIdentifier(Aws::String&& value) { SetRemoteIdentifier(std::move(value)); return *this;}
    inline WorkloadInsightsTopContributorsRow& WithRemoteIdentifier(const char* value) { SetRemoteIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for a metric.</p>
     */
    inline long long GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }
    inline WorkloadInsightsTopContributorsRow& WithValue(long long value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a local subnet.</p>
     */
    inline const Aws::String& GetLocalSubnetArn() const{ return m_localSubnetArn; }
    inline bool LocalSubnetArnHasBeenSet() const { return m_localSubnetArnHasBeenSet; }
    inline void SetLocalSubnetArn(const Aws::String& value) { m_localSubnetArnHasBeenSet = true; m_localSubnetArn = value; }
    inline void SetLocalSubnetArn(Aws::String&& value) { m_localSubnetArnHasBeenSet = true; m_localSubnetArn = std::move(value); }
    inline void SetLocalSubnetArn(const char* value) { m_localSubnetArnHasBeenSet = true; m_localSubnetArn.assign(value); }
    inline WorkloadInsightsTopContributorsRow& WithLocalSubnetArn(const Aws::String& value) { SetLocalSubnetArn(value); return *this;}
    inline WorkloadInsightsTopContributorsRow& WithLocalSubnetArn(Aws::String&& value) { SetLocalSubnetArn(std::move(value)); return *this;}
    inline WorkloadInsightsTopContributorsRow& WithLocalSubnetArn(const char* value) { SetLocalSubnetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of a local VPC.</p>
     */
    inline const Aws::String& GetLocalVpcArn() const{ return m_localVpcArn; }
    inline bool LocalVpcArnHasBeenSet() const { return m_localVpcArnHasBeenSet; }
    inline void SetLocalVpcArn(const Aws::String& value) { m_localVpcArnHasBeenSet = true; m_localVpcArn = value; }
    inline void SetLocalVpcArn(Aws::String&& value) { m_localVpcArnHasBeenSet = true; m_localVpcArn = std::move(value); }
    inline void SetLocalVpcArn(const char* value) { m_localVpcArnHasBeenSet = true; m_localVpcArn.assign(value); }
    inline WorkloadInsightsTopContributorsRow& WithLocalVpcArn(const Aws::String& value) { SetLocalVpcArn(value); return *this;}
    inline WorkloadInsightsTopContributorsRow& WithLocalVpcArn(Aws::String&& value) { SetLocalVpcArn(std::move(value)); return *this;}
    inline WorkloadInsightsTopContributorsRow& WithLocalVpcArn(const char* value) { SetLocalVpcArn(value); return *this;}
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

    long long m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_localSubnetArn;
    bool m_localSubnetArnHasBeenSet = false;

    Aws::String m_localVpcArn;
    bool m_localVpcArnHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFlowMonitor
} // namespace Aws
