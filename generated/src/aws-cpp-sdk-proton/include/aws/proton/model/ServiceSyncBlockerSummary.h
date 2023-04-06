/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/proton/model/SyncBlocker.h>
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
namespace Proton
{
namespace Model
{

  /**
   * <p>If a service instance is manually updated, Proton wants to prevent
   * accidentally overriding a manual change.</p> <p>A blocker is created because of
   * the manual update or deletion of a service instance. The summary describes the
   * blocker as being active or resolved.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/proton-2020-07-20/ServiceSyncBlockerSummary">AWS
   * API Reference</a></p>
   */
  class ServiceSyncBlockerSummary
  {
  public:
    AWS_PROTON_API ServiceSyncBlockerSummary();
    AWS_PROTON_API ServiceSyncBlockerSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API ServiceSyncBlockerSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PROTON_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The latest active blockers for the synced service.</p>
     */
    inline const Aws::Vector<SyncBlocker>& GetLatestBlockers() const{ return m_latestBlockers; }

    /**
     * <p>The latest active blockers for the synced service.</p>
     */
    inline bool LatestBlockersHasBeenSet() const { return m_latestBlockersHasBeenSet; }

    /**
     * <p>The latest active blockers for the synced service.</p>
     */
    inline void SetLatestBlockers(const Aws::Vector<SyncBlocker>& value) { m_latestBlockersHasBeenSet = true; m_latestBlockers = value; }

    /**
     * <p>The latest active blockers for the synced service.</p>
     */
    inline void SetLatestBlockers(Aws::Vector<SyncBlocker>&& value) { m_latestBlockersHasBeenSet = true; m_latestBlockers = std::move(value); }

    /**
     * <p>The latest active blockers for the synced service.</p>
     */
    inline ServiceSyncBlockerSummary& WithLatestBlockers(const Aws::Vector<SyncBlocker>& value) { SetLatestBlockers(value); return *this;}

    /**
     * <p>The latest active blockers for the synced service.</p>
     */
    inline ServiceSyncBlockerSummary& WithLatestBlockers(Aws::Vector<SyncBlocker>&& value) { SetLatestBlockers(std::move(value)); return *this;}

    /**
     * <p>The latest active blockers for the synced service.</p>
     */
    inline ServiceSyncBlockerSummary& AddLatestBlockers(const SyncBlocker& value) { m_latestBlockersHasBeenSet = true; m_latestBlockers.push_back(value); return *this; }

    /**
     * <p>The latest active blockers for the synced service.</p>
     */
    inline ServiceSyncBlockerSummary& AddLatestBlockers(SyncBlocker&& value) { m_latestBlockersHasBeenSet = true; m_latestBlockers.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the service instance that you want sync your service
     * configuration with.</p>
     */
    inline const Aws::String& GetServiceInstanceName() const{ return m_serviceInstanceName; }

    /**
     * <p>The name of the service instance that you want sync your service
     * configuration with.</p>
     */
    inline bool ServiceInstanceNameHasBeenSet() const { return m_serviceInstanceNameHasBeenSet; }

    /**
     * <p>The name of the service instance that you want sync your service
     * configuration with.</p>
     */
    inline void SetServiceInstanceName(const Aws::String& value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName = value; }

    /**
     * <p>The name of the service instance that you want sync your service
     * configuration with.</p>
     */
    inline void SetServiceInstanceName(Aws::String&& value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName = std::move(value); }

    /**
     * <p>The name of the service instance that you want sync your service
     * configuration with.</p>
     */
    inline void SetServiceInstanceName(const char* value) { m_serviceInstanceNameHasBeenSet = true; m_serviceInstanceName.assign(value); }

    /**
     * <p>The name of the service instance that you want sync your service
     * configuration with.</p>
     */
    inline ServiceSyncBlockerSummary& WithServiceInstanceName(const Aws::String& value) { SetServiceInstanceName(value); return *this;}

    /**
     * <p>The name of the service instance that you want sync your service
     * configuration with.</p>
     */
    inline ServiceSyncBlockerSummary& WithServiceInstanceName(Aws::String&& value) { SetServiceInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service instance that you want sync your service
     * configuration with.</p>
     */
    inline ServiceSyncBlockerSummary& WithServiceInstanceName(const char* value) { SetServiceInstanceName(value); return *this;}


    /**
     * <p>The name of the service that you want to get the sync blocker summary for. If
     * given a service instance name and a service name, it will return the blockers
     * only applying to the instance that is blocked.</p> <p>If given only a service
     * name, it will return the blockers that apply to all of the instances. In order
     * to get the blockers for a single instance, you will need to make two distinct
     * calls, one to get the sync blocker summary for the service and the other to get
     * the sync blocker for the service instance.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the service that you want to get the sync blocker summary for. If
     * given a service instance name and a service name, it will return the blockers
     * only applying to the instance that is blocked.</p> <p>If given only a service
     * name, it will return the blockers that apply to all of the instances. In order
     * to get the blockers for a single instance, you will need to make two distinct
     * calls, one to get the sync blocker summary for the service and the other to get
     * the sync blocker for the service instance.</p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the service that you want to get the sync blocker summary for. If
     * given a service instance name and a service name, it will return the blockers
     * only applying to the instance that is blocked.</p> <p>If given only a service
     * name, it will return the blockers that apply to all of the instances. In order
     * to get the blockers for a single instance, you will need to make two distinct
     * calls, one to get the sync blocker summary for the service and the other to get
     * the sync blocker for the service instance.</p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the service that you want to get the sync blocker summary for. If
     * given a service instance name and a service name, it will return the blockers
     * only applying to the instance that is blocked.</p> <p>If given only a service
     * name, it will return the blockers that apply to all of the instances. In order
     * to get the blockers for a single instance, you will need to make two distinct
     * calls, one to get the sync blocker summary for the service and the other to get
     * the sync blocker for the service instance.</p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the service that you want to get the sync blocker summary for. If
     * given a service instance name and a service name, it will return the blockers
     * only applying to the instance that is blocked.</p> <p>If given only a service
     * name, it will return the blockers that apply to all of the instances. In order
     * to get the blockers for a single instance, you will need to make two distinct
     * calls, one to get the sync blocker summary for the service and the other to get
     * the sync blocker for the service instance.</p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the service that you want to get the sync blocker summary for. If
     * given a service instance name and a service name, it will return the blockers
     * only applying to the instance that is blocked.</p> <p>If given only a service
     * name, it will return the blockers that apply to all of the instances. In order
     * to get the blockers for a single instance, you will need to make two distinct
     * calls, one to get the sync blocker summary for the service and the other to get
     * the sync blocker for the service instance.</p>
     */
    inline ServiceSyncBlockerSummary& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the service that you want to get the sync blocker summary for. If
     * given a service instance name and a service name, it will return the blockers
     * only applying to the instance that is blocked.</p> <p>If given only a service
     * name, it will return the blockers that apply to all of the instances. In order
     * to get the blockers for a single instance, you will need to make two distinct
     * calls, one to get the sync blocker summary for the service and the other to get
     * the sync blocker for the service instance.</p>
     */
    inline ServiceSyncBlockerSummary& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the service that you want to get the sync blocker summary for. If
     * given a service instance name and a service name, it will return the blockers
     * only applying to the instance that is blocked.</p> <p>If given only a service
     * name, it will return the blockers that apply to all of the instances. In order
     * to get the blockers for a single instance, you will need to make two distinct
     * calls, one to get the sync blocker summary for the service and the other to get
     * the sync blocker for the service instance.</p>
     */
    inline ServiceSyncBlockerSummary& WithServiceName(const char* value) { SetServiceName(value); return *this;}

  private:

    Aws::Vector<SyncBlocker> m_latestBlockers;
    bool m_latestBlockersHasBeenSet = false;

    Aws::String m_serviceInstanceName;
    bool m_serviceInstanceNameHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
