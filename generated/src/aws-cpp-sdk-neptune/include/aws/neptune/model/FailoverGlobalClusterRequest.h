/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class FailoverGlobalClusterRequest : public NeptuneRequest
  {
  public:
    AWS_NEPTUNE_API FailoverGlobalClusterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "FailoverGlobalCluster"; }

    AWS_NEPTUNE_API Aws::String SerializePayload() const override;

  protected:
    AWS_NEPTUNE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Identifier of the Neptune global database that should be failed over. The
     * identifier is the unique key assigned by the user when the Neptune global
     * database was created. In other words, it's the name of the global database that
     * you want to fail over.</p> <p>Constraints: Must match the identifier of an
     * existing Neptune global database.</p>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const { return m_globalClusterIdentifier; }
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }
    template<typename GlobalClusterIdentifierT = Aws::String>
    void SetGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::forward<GlobalClusterIdentifierT>(value); }
    template<typename GlobalClusterIdentifierT = Aws::String>
    FailoverGlobalClusterRequest& WithGlobalClusterIdentifier(GlobalClusterIdentifierT&& value) { SetGlobalClusterIdentifier(std::forward<GlobalClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the secondary Neptune DB cluster that you
     * want to promote to primary for the global database.</p>
     */
    inline const Aws::String& GetTargetDbClusterIdentifier() const { return m_targetDbClusterIdentifier; }
    inline bool TargetDbClusterIdentifierHasBeenSet() const { return m_targetDbClusterIdentifierHasBeenSet; }
    template<typename TargetDbClusterIdentifierT = Aws::String>
    void SetTargetDbClusterIdentifier(TargetDbClusterIdentifierT&& value) { m_targetDbClusterIdentifierHasBeenSet = true; m_targetDbClusterIdentifier = std::forward<TargetDbClusterIdentifierT>(value); }
    template<typename TargetDbClusterIdentifierT = Aws::String>
    FailoverGlobalClusterRequest& WithTargetDbClusterIdentifier(TargetDbClusterIdentifierT&& value) { SetTargetDbClusterIdentifier(std::forward<TargetDbClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to allow data loss for this global database cluster
     * operation. Allowing data loss triggers a global failover operation.</p> <p>If
     * you don't specify <code>AllowDataLoss</code>, the global database cluster
     * operation defaults to a switchover.</p> <p>Constraints:Can't be specified
     * together with the <code>Switchover</code> parameter.</p>
     */
    inline bool GetAllowDataLoss() const { return m_allowDataLoss; }
    inline bool AllowDataLossHasBeenSet() const { return m_allowDataLossHasBeenSet; }
    inline void SetAllowDataLoss(bool value) { m_allowDataLossHasBeenSet = true; m_allowDataLoss = value; }
    inline FailoverGlobalClusterRequest& WithAllowDataLoss(bool value) { SetAllowDataLoss(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to switch over this global database cluster.</p>
     * <p>Constraints:Can't be specified together with the <code>AllowDataLoss</code>
     * parameter.</p>
     */
    inline bool GetSwitchover() const { return m_switchover; }
    inline bool SwitchoverHasBeenSet() const { return m_switchoverHasBeenSet; }
    inline void SetSwitchover(bool value) { m_switchoverHasBeenSet = true; m_switchover = value; }
    inline FailoverGlobalClusterRequest& WithSwitchover(bool value) { SetSwitchover(value); return *this;}
    ///@}
  private:

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    Aws::String m_targetDbClusterIdentifier;
    bool m_targetDbClusterIdentifierHasBeenSet = false;

    bool m_allowDataLoss{false};
    bool m_allowDataLossHasBeenSet = false;

    bool m_switchover{false};
    bool m_switchoverHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
