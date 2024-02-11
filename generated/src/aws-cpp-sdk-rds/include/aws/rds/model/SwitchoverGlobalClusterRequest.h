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
  class SwitchoverGlobalClusterRequest : public RDSRequest
  {
  public:
    AWS_RDS_API SwitchoverGlobalClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SwitchoverGlobalCluster"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The identifier of the global database cluster to switch over. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing global database cluster (Aurora global database).</p>
     * </li> </ul>
     */
    inline const Aws::String& GetGlobalClusterIdentifier() const{ return m_globalClusterIdentifier; }

    /**
     * <p>The identifier of the global database cluster to switch over. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing global database cluster (Aurora global database).</p>
     * </li> </ul>
     */
    inline bool GlobalClusterIdentifierHasBeenSet() const { return m_globalClusterIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the global database cluster to switch over. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing global database cluster (Aurora global database).</p>
     * </li> </ul>
     */
    inline void SetGlobalClusterIdentifier(const Aws::String& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = value; }

    /**
     * <p>The identifier of the global database cluster to switch over. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing global database cluster (Aurora global database).</p>
     * </li> </ul>
     */
    inline void SetGlobalClusterIdentifier(Aws::String&& value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier = std::move(value); }

    /**
     * <p>The identifier of the global database cluster to switch over. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing global database cluster (Aurora global database).</p>
     * </li> </ul>
     */
    inline void SetGlobalClusterIdentifier(const char* value) { m_globalClusterIdentifierHasBeenSet = true; m_globalClusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the global database cluster to switch over. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing global database cluster (Aurora global database).</p>
     * </li> </ul>
     */
    inline SwitchoverGlobalClusterRequest& WithGlobalClusterIdentifier(const Aws::String& value) { SetGlobalClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the global database cluster to switch over. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing global database cluster (Aurora global database).</p>
     * </li> </ul>
     */
    inline SwitchoverGlobalClusterRequest& WithGlobalClusterIdentifier(Aws::String&& value) { SetGlobalClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the global database cluster to switch over. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing global database cluster (Aurora global database).</p>
     * </li> </ul>
     */
    inline SwitchoverGlobalClusterRequest& WithGlobalClusterIdentifier(const char* value) { SetGlobalClusterIdentifier(value); return *this;}


    /**
     * <p>The identifier of the secondary Aurora DB cluster to promote to the new
     * primary for the global database cluster. Use the Amazon Resource Name (ARN) for
     * the identifier so that Aurora can locate the cluster in its Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetTargetDbClusterIdentifier() const{ return m_targetDbClusterIdentifier; }

    /**
     * <p>The identifier of the secondary Aurora DB cluster to promote to the new
     * primary for the global database cluster. Use the Amazon Resource Name (ARN) for
     * the identifier so that Aurora can locate the cluster in its Amazon Web Services
     * Region.</p>
     */
    inline bool TargetDbClusterIdentifierHasBeenSet() const { return m_targetDbClusterIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the secondary Aurora DB cluster to promote to the new
     * primary for the global database cluster. Use the Amazon Resource Name (ARN) for
     * the identifier so that Aurora can locate the cluster in its Amazon Web Services
     * Region.</p>
     */
    inline void SetTargetDbClusterIdentifier(const Aws::String& value) { m_targetDbClusterIdentifierHasBeenSet = true; m_targetDbClusterIdentifier = value; }

    /**
     * <p>The identifier of the secondary Aurora DB cluster to promote to the new
     * primary for the global database cluster. Use the Amazon Resource Name (ARN) for
     * the identifier so that Aurora can locate the cluster in its Amazon Web Services
     * Region.</p>
     */
    inline void SetTargetDbClusterIdentifier(Aws::String&& value) { m_targetDbClusterIdentifierHasBeenSet = true; m_targetDbClusterIdentifier = std::move(value); }

    /**
     * <p>The identifier of the secondary Aurora DB cluster to promote to the new
     * primary for the global database cluster. Use the Amazon Resource Name (ARN) for
     * the identifier so that Aurora can locate the cluster in its Amazon Web Services
     * Region.</p>
     */
    inline void SetTargetDbClusterIdentifier(const char* value) { m_targetDbClusterIdentifierHasBeenSet = true; m_targetDbClusterIdentifier.assign(value); }

    /**
     * <p>The identifier of the secondary Aurora DB cluster to promote to the new
     * primary for the global database cluster. Use the Amazon Resource Name (ARN) for
     * the identifier so that Aurora can locate the cluster in its Amazon Web Services
     * Region.</p>
     */
    inline SwitchoverGlobalClusterRequest& WithTargetDbClusterIdentifier(const Aws::String& value) { SetTargetDbClusterIdentifier(value); return *this;}

    /**
     * <p>The identifier of the secondary Aurora DB cluster to promote to the new
     * primary for the global database cluster. Use the Amazon Resource Name (ARN) for
     * the identifier so that Aurora can locate the cluster in its Amazon Web Services
     * Region.</p>
     */
    inline SwitchoverGlobalClusterRequest& WithTargetDbClusterIdentifier(Aws::String&& value) { SetTargetDbClusterIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the secondary Aurora DB cluster to promote to the new
     * primary for the global database cluster. Use the Amazon Resource Name (ARN) for
     * the identifier so that Aurora can locate the cluster in its Amazon Web Services
     * Region.</p>
     */
    inline SwitchoverGlobalClusterRequest& WithTargetDbClusterIdentifier(const char* value) { SetTargetDbClusterIdentifier(value); return *this;}

  private:

    Aws::String m_globalClusterIdentifier;
    bool m_globalClusterIdentifierHasBeenSet = false;

    Aws::String m_targetDbClusterIdentifier;
    bool m_targetDbClusterIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
