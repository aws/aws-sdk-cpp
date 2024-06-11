/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/snowball/model/ClusterState.h>
#include <aws/core/utils/DateTime.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>Contains a cluster's state, a cluster's ID, and other important
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/ClusterListEntry">AWS
   * API Reference</a></p>
   */
  class ClusterListEntry
  {
  public:
    AWS_SNOWBALL_API ClusterListEntry();
    AWS_SNOWBALL_API ClusterListEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API ClusterListEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The 39-character ID for the cluster that you want to list, for example
     * <code>CID123e4567-e89b-12d3-a456-426655440000</code>.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }
    inline ClusterListEntry& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline ClusterListEntry& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline ClusterListEntry& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of this cluster. For information about the state of a
     * specific node, see <a>JobListEntry$JobState</a>.</p>
     */
    inline const ClusterState& GetClusterState() const{ return m_clusterState; }
    inline bool ClusterStateHasBeenSet() const { return m_clusterStateHasBeenSet; }
    inline void SetClusterState(const ClusterState& value) { m_clusterStateHasBeenSet = true; m_clusterState = value; }
    inline void SetClusterState(ClusterState&& value) { m_clusterStateHasBeenSet = true; m_clusterState = std::move(value); }
    inline ClusterListEntry& WithClusterState(const ClusterState& value) { SetClusterState(value); return *this;}
    inline ClusterListEntry& WithClusterState(ClusterState&& value) { SetClusterState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date for this cluster.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline ClusterListEntry& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline ClusterListEntry& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines an optional description of the cluster, for example
     * <code>Environmental Data Cluster-01</code>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ClusterListEntry& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ClusterListEntry& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ClusterListEntry& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    ClusterState m_clusterState;
    bool m_clusterStateHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
