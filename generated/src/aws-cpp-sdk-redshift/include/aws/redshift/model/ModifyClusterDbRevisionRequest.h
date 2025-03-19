/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class ModifyClusterDbRevisionRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API ModifyClusterDbRevisionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyClusterDbRevision"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The unique identifier of a cluster whose database revision you want to
     * modify. </p> <p>Example: <code>examplecluster</code> </p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    ModifyClusterDbRevisionRequest& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the database revision. You can retrieve this value from the
     * response to the <a>DescribeClusterDbRevisions</a> request.</p>
     */
    inline const Aws::String& GetRevisionTarget() const { return m_revisionTarget; }
    inline bool RevisionTargetHasBeenSet() const { return m_revisionTargetHasBeenSet; }
    template<typename RevisionTargetT = Aws::String>
    void SetRevisionTarget(RevisionTargetT&& value) { m_revisionTargetHasBeenSet = true; m_revisionTarget = std::forward<RevisionTargetT>(value); }
    template<typename RevisionTargetT = Aws::String>
    ModifyClusterDbRevisionRequest& WithRevisionTarget(RevisionTargetT&& value) { SetRevisionTarget(std::forward<RevisionTargetT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_revisionTarget;
    bool m_revisionTargetHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
