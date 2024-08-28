/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pcs/model/ClusterStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pcs/model/Scheduler.h>
#include <aws/pcs/model/Size.h>
#include <aws/pcs/model/ClusterSlurmConfiguration.h>
#include <aws/pcs/model/Networking.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pcs/model/Endpoint.h>
#include <aws/pcs/model/ErrorInfo.h>
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
namespace PCS
{
namespace Model
{

  /**
   * <p>The cluster resource and configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/Cluster">AWS API
   * Reference</a></p>
   */
  class Cluster
  {
  public:
    AWS_PCS_API Cluster();
    AWS_PCS_API Cluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Cluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name that identifies the cluster.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Cluster& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Cluster& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Cluster& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The generated unique ID of the cluster.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Cluster& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Cluster& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Cluster& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Cluster& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Cluster& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Cluster& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning status of the cluster.</p>  <p>The provisioning status
     * doesn't indicate the overall health of the cluster.</p> 
     */
    inline const ClusterStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ClusterStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ClusterStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline Cluster& WithStatus(const ClusterStatus& value) { SetStatus(value); return *this;}
    inline Cluster& WithStatus(ClusterStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Cluster& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Cluster& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }
    inline Cluster& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}
    inline Cluster& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Scheduler& GetScheduler() const{ return m_scheduler; }
    inline bool SchedulerHasBeenSet() const { return m_schedulerHasBeenSet; }
    inline void SetScheduler(const Scheduler& value) { m_schedulerHasBeenSet = true; m_scheduler = value; }
    inline void SetScheduler(Scheduler&& value) { m_schedulerHasBeenSet = true; m_scheduler = std::move(value); }
    inline Cluster& WithScheduler(const Scheduler& value) { SetScheduler(value); return *this;}
    inline Cluster& WithScheduler(Scheduler&& value) { SetScheduler(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the cluster.</p> <ul> <li> <p> <code>SMALL</code>: 32 compute
     * nodes and 256 jobs</p> </li> <li> <p> <code>MEDIUM</code>: 512 compute nodes and
     * 8192 jobs</p> </li> <li> <p> <code>LARGE</code>: 2048 compute nodes and 16,384
     * jobs</p> </li> </ul>
     */
    inline const Size& GetSize() const{ return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(const Size& value) { m_sizeHasBeenSet = true; m_size = value; }
    inline void SetSize(Size&& value) { m_sizeHasBeenSet = true; m_size = std::move(value); }
    inline Cluster& WithSize(const Size& value) { SetSize(value); return *this;}
    inline Cluster& WithSize(Size&& value) { SetSize(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional options related to the Slurm scheduler.</p>
     */
    inline const ClusterSlurmConfiguration& GetSlurmConfiguration() const{ return m_slurmConfiguration; }
    inline bool SlurmConfigurationHasBeenSet() const { return m_slurmConfigurationHasBeenSet; }
    inline void SetSlurmConfiguration(const ClusterSlurmConfiguration& value) { m_slurmConfigurationHasBeenSet = true; m_slurmConfiguration = value; }
    inline void SetSlurmConfiguration(ClusterSlurmConfiguration&& value) { m_slurmConfigurationHasBeenSet = true; m_slurmConfiguration = std::move(value); }
    inline Cluster& WithSlurmConfiguration(const ClusterSlurmConfiguration& value) { SetSlurmConfiguration(value); return *this;}
    inline Cluster& WithSlurmConfiguration(ClusterSlurmConfiguration&& value) { SetSlurmConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Networking& GetNetworking() const{ return m_networking; }
    inline bool NetworkingHasBeenSet() const { return m_networkingHasBeenSet; }
    inline void SetNetworking(const Networking& value) { m_networkingHasBeenSet = true; m_networking = value; }
    inline void SetNetworking(Networking&& value) { m_networkingHasBeenSet = true; m_networking = std::move(value); }
    inline Cluster& WithNetworking(const Networking& value) { SetNetworking(value); return *this;}
    inline Cluster& WithNetworking(Networking&& value) { SetNetworking(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of endpoints available for interaction with the scheduler.</p>
     */
    inline const Aws::Vector<Endpoint>& GetEndpoints() const{ return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    inline void SetEndpoints(const Aws::Vector<Endpoint>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }
    inline void SetEndpoints(Aws::Vector<Endpoint>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }
    inline Cluster& WithEndpoints(const Aws::Vector<Endpoint>& value) { SetEndpoints(value); return *this;}
    inline Cluster& WithEndpoints(Aws::Vector<Endpoint>&& value) { SetEndpoints(std::move(value)); return *this;}
    inline Cluster& AddEndpoints(const Endpoint& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(value); return *this; }
    inline Cluster& AddEndpoints(Endpoint&& value) { m_endpointsHasBeenSet = true; m_endpoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of errors that occurred during cluster provisioning.</p>
     */
    inline const Aws::Vector<ErrorInfo>& GetErrorInfo() const{ return m_errorInfo; }
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }
    inline void SetErrorInfo(const Aws::Vector<ErrorInfo>& value) { m_errorInfoHasBeenSet = true; m_errorInfo = value; }
    inline void SetErrorInfo(Aws::Vector<ErrorInfo>&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::move(value); }
    inline Cluster& WithErrorInfo(const Aws::Vector<ErrorInfo>& value) { SetErrorInfo(value); return *this;}
    inline Cluster& WithErrorInfo(Aws::Vector<ErrorInfo>&& value) { SetErrorInfo(std::move(value)); return *this;}
    inline Cluster& AddErrorInfo(const ErrorInfo& value) { m_errorInfoHasBeenSet = true; m_errorInfo.push_back(value); return *this; }
    inline Cluster& AddErrorInfo(ErrorInfo&& value) { m_errorInfoHasBeenSet = true; m_errorInfo.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ClusterStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;

    Scheduler m_scheduler;
    bool m_schedulerHasBeenSet = false;

    Size m_size;
    bool m_sizeHasBeenSet = false;

    ClusterSlurmConfiguration m_slurmConfiguration;
    bool m_slurmConfigurationHasBeenSet = false;

    Networking m_networking;
    bool m_networkingHasBeenSet = false;

    Aws::Vector<Endpoint> m_endpoints;
    bool m_endpointsHasBeenSet = false;

    Aws::Vector<ErrorInfo> m_errorInfo;
    bool m_errorInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
