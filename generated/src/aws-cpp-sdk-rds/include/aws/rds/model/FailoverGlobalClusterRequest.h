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
   */
  class FailoverGlobalClusterRequest : public RDSRequest
  {
  public:
    AWS_RDS_API FailoverGlobalClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "FailoverGlobalCluster"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the global database cluster (Aurora global database) this
     * operation should apply to. The identifier is the unique key assigned by the user
     * when the Aurora global database is created. In other words, it's the name of the
     * Aurora global database.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing global database cluster.</p> </li> </ul>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const{ return m_globalClusterIdentifier; }

    /**
     * <p>The identifier of the global database cluster (Aurora global database) this
     * operation should apply to. The identifier is the unique key assigned by the user
     * when the Aurora global database is created. In other words, it's the name of the
     * Aurora global database.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing global database cluster.</p> </li> </ul>
     */
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the global database cluster (Aurora global database) this
     * operation should apply to. The identifier is the unique key assigned by the user
     * when the Aurora global database is created. In other words, it's the name of the
     * Aurora global database.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing global database cluster.</p> </li> </ul>
     */
    inline void SetGlobalClusterIdentifier(const Aws::String& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = value; }

    /**
     * <p>The identifier of the global database cluster (Aurora global database) this
     * operation should apply to. The identifier is the unique key assigned by the user
     * when the Aurora global database is created. In other words, it's the name of the
     * Aurora global database.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing global database cluster.</p> </li> </ul>
     */
    inline void SetGlobalClusterIdentifier(Aws::String&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::move(value); }

    /**
     * <p>The identifier of the global database cluster (Aurora global database) this
     * operation should apply to. The identifier is the unique key assigned by the user
     * when the Aurora global database is created. In other words, it's the name of the
     * Aurora global database.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing global database cluster.</p> </li> </ul>
     */
    inline void SetGlobalClusterIdentifier(const char* value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the global database cluster (Aurora global database) this
     * operation should apply to. The identifier is the unique key assigned by the user
     * when the Aurora global database is created. In other words, it's the name of the
     * Aurora global database.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing global database cluster.</p> </li> </ul>
     */
    inline FailoverGlobalClusterRequest& WithGlobalClusterIdentifier(const Aws::String& value) { SetGlobalClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the global database cluster (Aurora global database) this
     * operation should apply to. The identifier is the unique key assigned by the user
     * when the Aurora global database is created. In other words, it's the name of the
     * Aurora global database.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing global database cluster.</p> </li> </ul>
     */
    inline FailoverGlobalClusterRequest& WithGlobalClusterIdentifier(Aws::String&& value) { SetGlobalClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the global database cluster (Aurora global database) this
     * operation should apply to. The identifier is the unique key assigned by the user
     * when the Aurora global database is created. In other words, it's the name of the
     * Aurora global database.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing global database cluster.</p> </li> </ul>
     */
    inline FailoverGlobalClusterRequest& WithGlobalClusterIdentifier(const char* value) { SetGlobalClusterIdentifier(value); return *this;}


    /**
     * <p>The identifier of the secondary Aurora DB cluster that you want to promote to
     * the primary for the global database cluster. Use the Amazon Resource Name (ARN)
     * for the identifier so that Aurora can locate the cluster in its Amazon Web
     * Services Region.</p>
     */
    inline const Aws::String& GetTargetDbClusterIdentifier() const{ return m_targetDbClusterIdentifier; }

    /**
     * <p>The identifier of the secondary Aurora DB cluster that you want to promote to
     * the primary for the global database cluster. Use the Amazon Resource Name (ARN)
     * for the identifier so that Aurora can locate the cluster in its Amazon Web
     * Services Region.</p>
     */
    inline bool TargetDbClusterIdentifierHasBeenSet() const { return m_targetDbClusterIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the secondary Aurora DB cluster that you want to promote to
     * the primary for the global database cluster. Use the Amazon Resource Name (ARN)
     * for the identifier so that Aurora can locate the cluster in its Amazon Web
     * Services Region.</p>
     */
    inline void SetTargetDbClusterIdentifier(const Aws::String& value) { m_targetDbClusterIdentifierHasBeenSet = true; m_targetDbClusterIdentifier = value; }

    /**
     * <p>The identifier of the secondary Aurora DB cluster that you want to promote to
     * the primary for the global database cluster. Use the Amazon Resource Name (ARN)
     * for the identifier so that Aurora can locate the cluster in its Amazon Web
     * Services Region.</p>
     */
    inline void SetTargetDbClusterIdentifier(Aws::String&& value) { m_targetDbClusterIdentifierHasBeenSet = true; m_targetDbClusterIdentifier = std::move(value); }

    /**
     * <p>The identifier of the secondary Aurora DB cluster that you want to promote to
     * the primary for the global database cluster. Use the Amazon Resource Name (ARN)
     * for the identifier so that Aurora can locate the cluster in its Amazon Web
     * Services Region.</p>
     */
    inline void SetTargetDbClusterIdentifier(const char* value) { m_targetDbClusterIdentifierHasBeenSet = true; m_targetDbClusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the secondary Aurora DB cluster that you want to promote to
     * the primary for the global database cluster. Use the Amazon Resource Name (ARN)
     * for the identifier so that Aurora can locate the cluster in its Amazon Web
     * Services Region.</p>
     */
    inline FailoverGlobalClusterRequest& WithTargetDbClusterIdentifier(const Aws::String& value) { SetTargetDbClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the secondary Aurora DB cluster that you want to promote to
     * the primary for the global database cluster. Use the Amazon Resource Name (ARN)
     * for the identifier so that Aurora can locate the cluster in its Amazon Web
     * Services Region.</p>
     */
    inline FailoverGlobalClusterRequest& WithTargetDbClusterIdentifier(Aws::String&& value) { SetTargetDbClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the secondary Aurora DB cluster that you want to promote to
     * the primary for the global database cluster. Use the Amazon Resource Name (ARN)
     * for the identifier so that Aurora can locate the cluster in its Amazon Web
     * Services Region.</p>
     */
    inline FailoverGlobalClusterRequest& WithTargetDbClusterIdentifier(const char* value) { SetTargetDbClusterIdentifier(value); return *this;}


    /**
     * <p>Specifies whether to allow data loss for this global database cluster
     * operation. Allowing data loss triggers a global failover operation.</p> <p>If
     * you don't specify <code>AllowDataLoss</code>, the global database cluster
     * operation defaults to a switchover.</p> <p>Constraints:</p> <ul> <li> <p>Can't
     * be specified together with the <code>Switchover</code> parameter.</p> </li>
     * </ul>
     */
    inline bool GetAllowDataLoss() const{ return m_allowDataLoss; }

    /**
     * <p>Specifies whether to allow data loss for this global database cluster
     * operation. Allowing data loss triggers a global failover operation.</p> <p>If
     * you don't specify <code>AllowDataLoss</code>, the global database cluster
     * operation defaults to a switchover.</p> <p>Constraints:</p> <ul> <li> <p>Can't
     * be specified together with the <code>Switchover</code> parameter.</p> </li>
     * </ul>
     */
    inline bool AllowDataLossHasBeenSet() const { return m_allowDataLossHasBeenSet; }

    /**
     * <p>Specifies whether to allow data loss for this global database cluster
     * operation. Allowing data loss triggers a global failover operation.</p> <p>If
     * you don't specify <code>AllowDataLoss</code>, the global database cluster
     * operation defaults to a switchover.</p> <p>Constraints:</p> <ul> <li> <p>Can't
     * be specified together with the <code>Switchover</code> parameter.</p> </li>
     * </ul>
     */
    inline void SetAllowDataLoss(bool value) { m_allowDataLossHasBeenSet = true; m_allowDataLoss = value; }

    /**
     * <p>Specifies whether to allow data loss for this global database cluster
     * operation. Allowing data loss triggers a global failover operation.</p> <p>If
     * you don't specify <code>AllowDataLoss</code>, the global database cluster
     * operation defaults to a switchover.</p> <p>Constraints:</p> <ul> <li> <p>Can't
     * be specified together with the <code>Switchover</code> parameter.</p> </li>
     * </ul>
     */
    inline FailoverGlobalClusterRequest& WithAllowDataLoss(bool value) { SetAllowDataLoss(value); return *this;}


    /**
     * <p>Specifies whether to switch over this global database cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be specified together with the
     * <code>AllowDataLoss</code> parameter.</p> </li> </ul>
     */
    inline bool GetSwitchover() const{ return m_switchover; }

    /**
     * <p>Specifies whether to switch over this global database cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be specified together with the
     * <code>AllowDataLoss</code> parameter.</p> </li> </ul>
     */
    inline bool SwitchoverHasBeenSet() const { return m_switchoverHasBeenSet; }

    /**
     * <p>Specifies whether to switch over this global database cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be specified together with the
     * <code>AllowDataLoss</code> parameter.</p> </li> </ul>
     */
    inline void SetSwitchover(bool value) { m_switchoverHasBeenSet = true; m_switchover = value; }

    /**
     * <p>Specifies whether to switch over this global database cluster.</p>
     * <p>Constraints:</p> <ul> <li> <p>Can't be specified together with the
     * <code>AllowDataLoss</code> parameter.</p> </li> </ul>
     */
    inline FailoverGlobalClusterRequest& WithSwitchover(bool value) { SetSwitchover(value); return *this;}

  private:

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    Aws::String m_targetDbClusterIdentifier;
    bool m_targetDbClusterIdentifierHasBeenSet = false;

    bool m_allowDataLoss;
    bool m_allowDataLossHasBeenSet = false;

    bool m_switchover;
    bool m_switchoverHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
