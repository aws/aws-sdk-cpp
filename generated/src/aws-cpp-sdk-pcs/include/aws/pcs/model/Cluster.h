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
    AWS_PCS_API Cluster() = default;
    AWS_PCS_API Cluster(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Cluster& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name that identifies the cluster.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Cluster& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The generated unique ID of the cluster.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Cluster& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) of the cluster.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Cluster& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning status of the cluster.</p>  <p>The provisioning status
     * doesn't indicate the overall health of the cluster.</p>  
     * <p>The resource enters the <code>SUSPENDING</code> and <code>SUSPENDED</code>
     * states when the scheduler is beyond end of life and we have suspended the
     * cluster. When in these states, you can't use the cluster. The cluster controller
     * is down and all compute instances are terminated. The resources still count
     * toward your service quotas. You can delete a resource if its status is
     * <code>SUSPENDED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/pcs/latest/userguide/slurm-versions_faq.html">Frequently
     * asked questions about Slurm versions in PCS</a> in the <i>PCS User
     * Guide</i>.</p> 
     */
    inline ClusterStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ClusterStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Cluster& WithStatus(ClusterStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Cluster& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const { return m_modifiedAt; }
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    void SetModifiedAt(ModifiedAtT&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::forward<ModifiedAtT>(value); }
    template<typename ModifiedAtT = Aws::Utils::DateTime>
    Cluster& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Scheduler& GetScheduler() const { return m_scheduler; }
    inline bool SchedulerHasBeenSet() const { return m_schedulerHasBeenSet; }
    template<typename SchedulerT = Scheduler>
    void SetScheduler(SchedulerT&& value) { m_schedulerHasBeenSet = true; m_scheduler = std::forward<SchedulerT>(value); }
    template<typename SchedulerT = Scheduler>
    Cluster& WithScheduler(SchedulerT&& value) { SetScheduler(std::forward<SchedulerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The size of the cluster.</p> <ul> <li> <p> <code>SMALL</code>: 32 compute
     * nodes and 256 jobs</p> </li> <li> <p> <code>MEDIUM</code>: 512 compute nodes and
     * 8192 jobs</p> </li> <li> <p> <code>LARGE</code>: 2048 compute nodes and 16,384
     * jobs</p> </li> </ul>
     */
    inline Size GetSize() const { return m_size; }
    inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
    inline void SetSize(Size value) { m_sizeHasBeenSet = true; m_size = value; }
    inline Cluster& WithSize(Size value) { SetSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional options related to the Slurm scheduler.</p>
     */
    inline const ClusterSlurmConfiguration& GetSlurmConfiguration() const { return m_slurmConfiguration; }
    inline bool SlurmConfigurationHasBeenSet() const { return m_slurmConfigurationHasBeenSet; }
    template<typename SlurmConfigurationT = ClusterSlurmConfiguration>
    void SetSlurmConfiguration(SlurmConfigurationT&& value) { m_slurmConfigurationHasBeenSet = true; m_slurmConfiguration = std::forward<SlurmConfigurationT>(value); }
    template<typename SlurmConfigurationT = ClusterSlurmConfiguration>
    Cluster& WithSlurmConfiguration(SlurmConfigurationT&& value) { SetSlurmConfiguration(std::forward<SlurmConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Networking& GetNetworking() const { return m_networking; }
    inline bool NetworkingHasBeenSet() const { return m_networkingHasBeenSet; }
    template<typename NetworkingT = Networking>
    void SetNetworking(NetworkingT&& value) { m_networkingHasBeenSet = true; m_networking = std::forward<NetworkingT>(value); }
    template<typename NetworkingT = Networking>
    Cluster& WithNetworking(NetworkingT&& value) { SetNetworking(std::forward<NetworkingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of endpoints available for interaction with the scheduler.</p>
     */
    inline const Aws::Vector<Endpoint>& GetEndpoints() const { return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    template<typename EndpointsT = Aws::Vector<Endpoint>>
    void SetEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::forward<EndpointsT>(value); }
    template<typename EndpointsT = Aws::Vector<Endpoint>>
    Cluster& WithEndpoints(EndpointsT&& value) { SetEndpoints(std::forward<EndpointsT>(value)); return *this;}
    template<typename EndpointsT = Endpoint>
    Cluster& AddEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace_back(std::forward<EndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of errors that occurred during cluster provisioning.</p>
     */
    inline const Aws::Vector<ErrorInfo>& GetErrorInfo() const { return m_errorInfo; }
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }
    template<typename ErrorInfoT = Aws::Vector<ErrorInfo>>
    void SetErrorInfo(ErrorInfoT&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::forward<ErrorInfoT>(value); }
    template<typename ErrorInfoT = Aws::Vector<ErrorInfo>>
    Cluster& WithErrorInfo(ErrorInfoT&& value) { SetErrorInfo(std::forward<ErrorInfoT>(value)); return *this;}
    template<typename ErrorInfoT = ErrorInfo>
    Cluster& AddErrorInfo(ErrorInfoT&& value) { m_errorInfoHasBeenSet = true; m_errorInfo.emplace_back(std::forward<ErrorInfoT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ClusterStatus m_status{ClusterStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    Scheduler m_scheduler;
    bool m_schedulerHasBeenSet = false;

    Size m_size{Size::NOT_SET};
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
