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
    AWS_XRAY_API PutTelemetryRecordsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutTelemetryRecords"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;


    /**
     * <p/>
     */
    inline const Aws::Vector<TelemetryRecord>& GetTelemetryRecords() const{ return m_telemetryRecords; }

    /**
     * <p/>
     */
    inline bool TelemetryRecordsHasBeenSet() const { return m_telemetryRecordsHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetTelemetryRecords(const Aws::Vector<TelemetryRecord>& value) { m_telemetryRecordsHasBeenSet = true; m_telemetryRecords = value; }

    /**
     * <p/>
     */
    inline void SetTelemetryRecords(Aws::Vector<TelemetryRecord>&& value) { m_telemetryRecordsHasBeenSet = true; m_telemetryRecords = std::move(value); }

    /**
     * <p/>
     */
    inline PutTelemetryRecordsRequest& WithTelemetryRecords(const Aws::Vector<TelemetryRecord>& value) { SetTelemetryRecords(value); return *this;}

    /**
     * <p/>
     */
    inline PutTelemetryRecordsRequest& WithTelemetryRecords(Aws::Vector<TelemetryRecord>&& value) { SetTelemetryRecords(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline PutTelemetryRecordsRequest& AddTelemetryRecords(const TelemetryRecord& value) { m_telemetryRecordsHasBeenSet = true; m_telemetryRecords.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline PutTelemetryRecordsRequest& AddTelemetryRecords(TelemetryRecord&& value) { m_telemetryRecordsHasBeenSet = true; m_telemetryRecords.push_back(std::move(value)); return *this; }


    /**
     * <p/>
     */
    inline const Aws::String& GetEC2InstanceId() const{ return m_eC2InstanceId; }

    /**
     * <p/>
     */
    inline bool EC2InstanceIdHasBeenSet() const { return m_eC2InstanceIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetEC2InstanceId(const Aws::String& value) { m_eC2InstanceIdHasBeenSet = true; m_eC2InstanceId = value; }

    /**
     * <p/>
     */
    inline void SetEC2InstanceId(Aws::String&& value) { m_eC2InstanceIdHasBeenSet = true; m_eC2InstanceId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetEC2InstanceId(const char* value) { m_eC2InstanceIdHasBeenSet = true; m_eC2InstanceId.assign(value); }

    /**
     * <p/>
     */
    inline PutTelemetryRecordsRequest& WithEC2InstanceId(const Aws::String& value) { SetEC2InstanceId(value); return *this;}

    /**
     * <p/>
     */
    inline PutTelemetryRecordsRequest& WithEC2InstanceId(Aws::String&& value) { SetEC2InstanceId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline PutTelemetryRecordsRequest& WithEC2InstanceId(const char* value) { SetEC2InstanceId(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }

    /**
     * <p/>
     */
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }

    /**
     * <p/>
     */
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }

    /**
     * <p/>
     */
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }

    /**
     * <p/>
     */
    inline PutTelemetryRecordsRequest& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}

    /**
     * <p/>
     */
    inline PutTelemetryRecordsRequest& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline PutTelemetryRecordsRequest& WithHostname(const char* value) { SetHostname(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p/>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p/>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p/>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p/>
     */
    inline PutTelemetryRecordsRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p/>
     */
    inline PutTelemetryRecordsRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline PutTelemetryRecordsRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}

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
