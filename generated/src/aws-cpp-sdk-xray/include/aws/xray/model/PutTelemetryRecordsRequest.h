/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/xray/model/TelemetryRecord.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class PutTelemetryRecordsRequest : public XRayRequest
  {
  public:
    AWS_XRAY_API PutTelemetryRecordsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutTelemetryRecords"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::Vector<TelemetryRecord>& GetTelemetryRecords() const { return m_telemetryRecords; }
    inline bool TelemetryRecordsHasBeenSet() const { return m_telemetryRecordsHasBeenSet; }
    template<typename TelemetryRecordsT = Aws::Vector<TelemetryRecord>>
    void SetTelemetryRecords(TelemetryRecordsT&& value) { m_telemetryRecordsHasBeenSet = true; m_telemetryRecords = std::forward<TelemetryRecordsT>(value); }
    template<typename TelemetryRecordsT = Aws::Vector<TelemetryRecord>>
    PutTelemetryRecordsRequest& WithTelemetryRecords(TelemetryRecordsT&& value) { SetTelemetryRecords(std::forward<TelemetryRecordsT>(value)); return *this;}
    template<typename TelemetryRecordsT = TelemetryRecord>
    PutTelemetryRecordsRequest& AddTelemetryRecords(TelemetryRecordsT&& value) { m_telemetryRecordsHasBeenSet = true; m_telemetryRecords.emplace_back(std::forward<TelemetryRecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetEC2InstanceId() const { return m_eC2InstanceId; }
    inline bool EC2InstanceIdHasBeenSet() const { return m_eC2InstanceIdHasBeenSet; }
    template<typename EC2InstanceIdT = Aws::String>
    void SetEC2InstanceId(EC2InstanceIdT&& value) { m_eC2InstanceIdHasBeenSet = true; m_eC2InstanceId = std::forward<EC2InstanceIdT>(value); }
    template<typename EC2InstanceIdT = Aws::String>
    PutTelemetryRecordsRequest& WithEC2InstanceId(EC2InstanceIdT&& value) { SetEC2InstanceId(std::forward<EC2InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetHostname() const { return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    template<typename HostnameT = Aws::String>
    void SetHostname(HostnameT&& value) { m_hostnameHasBeenSet = true; m_hostname = std::forward<HostnameT>(value); }
    template<typename HostnameT = Aws::String>
    PutTelemetryRecordsRequest& WithHostname(HostnameT&& value) { SetHostname(std::forward<HostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetResourceARN() const { return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    template<typename ResourceARNT = Aws::String>
    void SetResourceARN(ResourceARNT&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::forward<ResourceARNT>(value); }
    template<typename ResourceARNT = Aws::String>
    PutTelemetryRecordsRequest& WithResourceARN(ResourceARNT&& value) { SetResourceARN(std::forward<ResourceARNT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TelemetryRecord> m_telemetryRecords;
    bool m_telemetryRecordsHasBeenSet = false;

    Aws::String m_eC2InstanceId;
    bool m_eC2InstanceIdHasBeenSet = false;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
