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
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/EnableSnapshotCopyMessage">AWS
   * API Reference</a></p>
   */
  class EnableSnapshotCopyRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API EnableSnapshotCopyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "EnableSnapshotCopy"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The unique identifier of the source cluster to copy snapshots from.</p>
     * <p>Constraints: Must be the valid name of an existing cluster that does not
     * already have cross-region snapshot copy enabled.</p>
     */
    inline const Aws::String& GetClusterIdentifier() const { return m_clusterIdentifier; }
    inline bool ClusterIdentifierHasBeenSet() const { return m_clusterIdentifierHasBeenSet; }
    template<typename ClusterIdentifierT = Aws::String>
    void SetClusterIdentifier(ClusterIdentifierT&& value) { m_clusterIdentifierHasBeenSet = true; m_clusterIdentifier = std::forward<ClusterIdentifierT>(value); }
    template<typename ClusterIdentifierT = Aws::String>
    EnableSnapshotCopyRequest& WithClusterIdentifier(ClusterIdentifierT&& value) { SetClusterIdentifier(std::forward<ClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination Amazon Web Services Region that you want to copy snapshots
     * to.</p> <p>Constraints: Must be the name of a valid Amazon Web Services Region.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande.html#redshift_region">Regions
     * and Endpoints</a> in the Amazon Web Services General Reference. </p>
     */
    inline const Aws::String& GetDestinationRegion() const { return m_destinationRegion; }
    inline bool DestinationRegionHasBeenSet() const { return m_destinationRegionHasBeenSet; }
    template<typename DestinationRegionT = Aws::String>
    void SetDestinationRegion(DestinationRegionT&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = std::forward<DestinationRegionT>(value); }
    template<typename DestinationRegionT = Aws::String>
    EnableSnapshotCopyRequest& WithDestinationRegion(DestinationRegionT&& value) { SetDestinationRegion(std::forward<DestinationRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain automated snapshots in the destination region
     * after they are copied from the source region.</p> <p>Default: 7.</p>
     * <p>Constraints: Must be at least 1 and no more than 35.</p>
     */
    inline int GetRetentionPeriod() const { return m_retentionPeriod; }
    inline bool RetentionPeriodHasBeenSet() const { return m_retentionPeriodHasBeenSet; }
    inline void SetRetentionPeriod(int value) { m_retentionPeriodHasBeenSet = true; m_retentionPeriod = value; }
    inline EnableSnapshotCopyRequest& WithRetentionPeriod(int value) { SetRetentionPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the snapshot copy grant to use when snapshots of an Amazon Web
     * Services KMS-encrypted cluster are copied to the destination region.</p>
     */
    inline const Aws::String& GetSnapshotCopyGrantName() const { return m_snapshotCopyGrantName; }
    inline bool SnapshotCopyGrantNameHasBeenSet() const { return m_snapshotCopyGrantNameHasBeenSet; }
    template<typename SnapshotCopyGrantNameT = Aws::String>
    void SetSnapshotCopyGrantName(SnapshotCopyGrantNameT&& value) { m_snapshotCopyGrantNameHasBeenSet = true; m_snapshotCopyGrantName = std::forward<SnapshotCopyGrantNameT>(value); }
    template<typename SnapshotCopyGrantNameT = Aws::String>
    EnableSnapshotCopyRequest& WithSnapshotCopyGrantName(SnapshotCopyGrantNameT&& value) { SetSnapshotCopyGrantName(std::forward<SnapshotCopyGrantNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days to retain newly copied snapshots in the destination Amazon
     * Web Services Region after they are copied from the source Amazon Web Services
     * Region. If the value is -1, the manual snapshot is retained indefinitely. </p>
     * <p>The value must be either -1 or an integer between 1 and 3,653.</p>
     */
    inline int GetManualSnapshotRetentionPeriod() const { return m_manualSnapshotRetentionPeriod; }
    inline bool ManualSnapshotRetentionPeriodHasBeenSet() const { return m_manualSnapshotRetentionPeriodHasBeenSet; }
    inline void SetManualSnapshotRetentionPeriod(int value) { m_manualSnapshotRetentionPeriodHasBeenSet = true; m_manualSnapshotRetentionPeriod = value; }
    inline EnableSnapshotCopyRequest& WithManualSnapshotRetentionPeriod(int value) { SetManualSnapshotRetentionPeriod(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterIdentifier;
    bool m_clusterIdentifierHasBeenSet = false;

    Aws::String m_destinationRegion;
    bool m_destinationRegionHasBeenSet = false;

    int m_retentionPeriod{0};
    bool m_retentionPeriodHasBeenSet = false;

    Aws::String m_snapshotCopyGrantName;
    bool m_snapshotCopyGrantNameHasBeenSet = false;

    int m_manualSnapshotRetentionPeriod{0};
    bool m_manualSnapshotRetentionPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
