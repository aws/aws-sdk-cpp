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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DeleteClusterSubnetGroupMessage">AWS
   * API Reference</a></p>
   */
  class DeleteClusterSubnetGroupRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DeleteClusterSubnetGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteClusterSubnetGroup"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the cluster subnet group name to be deleted.</p>
     */
    inline const Aws::String& GetClusterSubnetGroupName() const{ return m_clusterSubnetGroupName; }

    /**
     * <p>The name of the cluster subnet group name to be deleted.</p>
     */
    inline bool ClusterSubnetGroupNameHasBeenSet() const { return m_clusterSubnetGroupNameHasBeenSet; }

    /**
     * <p>The name of the cluster subnet group name to be deleted.</p>
     */
    inline void SetClusterSubnetGroupName(const Aws::String& value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName = value; }

    /**
     * <p>The name of the cluster subnet group name to be deleted.</p>
     */
    inline void SetClusterSubnetGroupName(Aws::String&& value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName = std::move(value); }

    /**
     * <p>The name of the cluster subnet group name to be deleted.</p>
     */
    inline void SetClusterSubnetGroupName(const char* value) { m_clusterSubnetGroupNameHasBeenSet = true; m_clusterSubnetGroupName.assign(value); }

    /**
     * <p>The name of the cluster subnet group name to be deleted.</p>
     */
    inline DeleteClusterSubnetGroupRequest& WithClusterSubnetGroupName(const Aws::String& value) { SetClusterSubnetGroupName(value); return *this;}

    /**
     * <p>The name of the cluster subnet group name to be deleted.</p>
     */
    inline DeleteClusterSubnetGroupRequest& WithClusterSubnetGroupName(Aws::String&& value) { SetClusterSubnetGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the cluster subnet group name to be deleted.</p>
     */
    inline DeleteClusterSubnetGroupRequest& WithClusterSubnetGroupName(const char* value) { SetClusterSubnetGroupName(value); return *this;}

  private:

    Aws::String m_clusterSubnetGroupName;
    bool m_clusterSubnetGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
