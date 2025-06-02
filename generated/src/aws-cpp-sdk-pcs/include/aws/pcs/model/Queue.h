/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/pcs/model/QueueStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pcs/model/ComputeNodeGroupConfiguration.h>
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
   * <p>A queue resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pcs-2023-02-10/Queue">AWS API
   * Reference</a></p>
   */
  class Queue
  {
  public:
    AWS_PCS_API Queue() = default;
    AWS_PCS_API Queue(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Queue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PCS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name that identifies the queue.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Queue& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The generated unique ID of the queue.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Queue& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) of the queue.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Queue& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the cluster of the queue.</p>
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    Queue& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
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
    Queue& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
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
    Queue& WithModifiedAt(ModifiedAtT&& value) { SetModifiedAt(std::forward<ModifiedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The provisioning status of the queue.</p>  <p>The provisioning status
     * doesn't indicate the overall health of the queue.</p>   <p>The
     * resource enters the <code>SUSPENDING</code> and <code>SUSPENDED</code> states
     * when the scheduler is beyond end of life and we have suspended the cluster. When
     * in these states, you can't use the cluster. The cluster controller is down and
     * all compute instances are terminated. The resources still count toward your
     * service quotas. You can delete a resource if its status is
     * <code>SUSPENDED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/pcs/latest/userguide/slurm-versions_faq.html">Frequently
     * asked questions about Slurm versions in PCS</a> in the <i>PCS User
     * Guide</i>.</p> 
     */
    inline QueueStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(QueueStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Queue& WithStatus(QueueStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of compute node group configurations associated with the queue.
     * Queues assign jobs to associated compute node groups.</p>
     */
    inline const Aws::Vector<ComputeNodeGroupConfiguration>& GetComputeNodeGroupConfigurations() const { return m_computeNodeGroupConfigurations; }
    inline bool ComputeNodeGroupConfigurationsHasBeenSet() const { return m_computeNodeGroupConfigurationsHasBeenSet; }
    template<typename ComputeNodeGroupConfigurationsT = Aws::Vector<ComputeNodeGroupConfiguration>>
    void SetComputeNodeGroupConfigurations(ComputeNodeGroupConfigurationsT&& value) { m_computeNodeGroupConfigurationsHasBeenSet = true; m_computeNodeGroupConfigurations = std::forward<ComputeNodeGroupConfigurationsT>(value); }
    template<typename ComputeNodeGroupConfigurationsT = Aws::Vector<ComputeNodeGroupConfiguration>>
    Queue& WithComputeNodeGroupConfigurations(ComputeNodeGroupConfigurationsT&& value) { SetComputeNodeGroupConfigurations(std::forward<ComputeNodeGroupConfigurationsT>(value)); return *this;}
    template<typename ComputeNodeGroupConfigurationsT = ComputeNodeGroupConfiguration>
    Queue& AddComputeNodeGroupConfigurations(ComputeNodeGroupConfigurationsT&& value) { m_computeNodeGroupConfigurationsHasBeenSet = true; m_computeNodeGroupConfigurations.emplace_back(std::forward<ComputeNodeGroupConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of errors that occurred during queue provisioning.</p>
     */
    inline const Aws::Vector<ErrorInfo>& GetErrorInfo() const { return m_errorInfo; }
    inline bool ErrorInfoHasBeenSet() const { return m_errorInfoHasBeenSet; }
    template<typename ErrorInfoT = Aws::Vector<ErrorInfo>>
    void SetErrorInfo(ErrorInfoT&& value) { m_errorInfoHasBeenSet = true; m_errorInfo = std::forward<ErrorInfoT>(value); }
    template<typename ErrorInfoT = Aws::Vector<ErrorInfo>>
    Queue& WithErrorInfo(ErrorInfoT&& value) { SetErrorInfo(std::forward<ErrorInfoT>(value)); return *this;}
    template<typename ErrorInfoT = ErrorInfo>
    Queue& AddErrorInfo(ErrorInfoT&& value) { m_errorInfoHasBeenSet = true; m_errorInfo.emplace_back(std::forward<ErrorInfoT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt{};
    bool m_modifiedAtHasBeenSet = false;

    QueueStatus m_status{QueueStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<ComputeNodeGroupConfiguration> m_computeNodeGroupConfigurations;
    bool m_computeNodeGroupConfigurationsHasBeenSet = false;

    Aws::Vector<ErrorInfo> m_errorInfo;
    bool m_errorInfoHasBeenSet = false;
  };

} // namespace Model
} // namespace PCS
} // namespace Aws
