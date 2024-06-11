﻿/**
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/CopyClusterSnapshotMessage">AWS
   * API Reference</a></p>
   */
  class CopyClusterSnapshotRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API CopyClusterSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopyClusterSnapshot"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The identifier for the source snapshot.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the identifier for a valid automated snapshot whose state is
     * <code>available</code>.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceSnapshotIdentifier() const{ return m_sourceSnapshotIdentifier; }
    inline bool SourceSnapshotIdentifierHasBeenSet() const { return m_sourceSnapshotIdentifierHasBeenSet; }
    inline void SetSourceSnapshotIdentifier(const Aws::String& value) { m_sourceSnapshotIdentifierHasBeenSet = true; m_sourceSnapshotIdentifier = value; }
    inline void SetSourceSnapshotIdentifier(Aws::String&& value) { m_sourceSnapshotIdentifierHasBeenSet = true; m_sourceSnapshotIdentifier = std::move(value); }
    inline void SetSourceSnapshotIdentifier(const char* value) { m_sourceSnapshotIdentifierHasBeenSet = true; m_sourceSnapshotIdentifier.assign(value); }
    inline CopyClusterSnapshotRequest& WithSourceSnapshotIdentifier(const Aws::String& value) { SetSourceSnapshotIdentifier(value); return *this;}
    inline CopyClusterSnapshotRequest& WithSourceSnapshotIdentifier(Aws::String&& value) { SetSourceSnapshotIdentifier(std::move(value)); return *this;}
    inline CopyClusterSnapshotRequest& WithSourceSnapshotIdentifier(const char* value) { SetSourceSnapshotIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the cluster the source snapshot was created from. This
     * parameter is required if your IAM user has a policy containing a snapshot
     * resource element that specifies anything other than * for the cluster name.</p>
     * <p>Constraints:</p> <ul> <li> <p>Must be the identifier for a valid cluster.</p>
     * </li> </ul>
     */
    inline const Aws::String& GetSourceSnapshotClusterIdentifier() const{ return m_sourceSnapshotClusterIdentifier; }
    inline bool SourceSnapshotClusterIdentifierHasBeenSet() const { return m_sourceSnapshotClusterIdentifierHasBeenSet; }
    inline void SetSourceSnapshotClusterIdentifier(const Aws::String& value) { m_sourceSnapshotClusterIdentifierHasBeenSet = true; m_sourceSnapshotClusterIdentifier = value; }
    inline void SetSourceSnapshotClusterIdentifier(Aws::String&& value) { m_sourceSnapshotClusterIdentifierHasBeenSet = true; m_sourceSnapshotClusterIdentifier = std::move(value); }
    inline void SetSourceSnapshotClusterIdentifier(const char* value) { m_sourceSnapshotClusterIdentifierHasBeenSet = true; m_sourceSnapshotClusterIdentifier.assign(value); }
    inline CopyClusterSnapshotRequest& WithSourceSnapshotClusterIdentifier(const Aws::String& value) { SetSourceSnapshotClusterIdentifier(value); return *this;}
    inline CopyClusterSnapshotRequest& WithSourceSnapshotClusterIdentifier(Aws::String&& value) { SetSourceSnapshotClusterIdentifier(std::move(value)); return *this;}
    inline CopyClusterSnapshotRequest& WithSourceSnapshotClusterIdentifier(const char* value) { SetSourceSnapshotClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier given to the new manual snapshot.</p> <p>Constraints:</p> <ul>
     * <li> <p>Cannot be null, empty, or blank.</p> </li> <li> <p>Must contain from 1
     * to 255 alphanumeric characters or hyphens.</p> </li> <li> <p>First character
     * must be a letter.</p> </li> <li> <p>Cannot end with a hyphen or contain two
     * consecutive hyphens.</p> </li> <li> <p>Must be unique for the Amazon Web
     * Services account that is making the request.</p> </li> </ul>
     */
    inline const Aws::String& GetTargetSnapshotIdentifier() const{ return m_targetSnapshotIdentifier; }
    inline bool TargetSnapshotIdentifierHasBeenSet() const { return m_targetSnapshotIdentifierHasBeenSet; }
    inline void SetTargetSnapshotIdentifier(const Aws::String& value) { m_targetSnapshotIdentifierHasBeenSet = true; m_targetSnapshotIdentifier = value; }
    inline void SetTargetSnapshotIdentifier(Aws::String&& value) { m_targetSnapshotIdentifierHasBeenSet = true; m_targetSnapshotIdentifier = std::move(value); }
    inline void SetTargetSnapshotIdentifier(const char* value) { m_targetSnapshotIdentifierHasBeenSet = true; m_targetSnapshotIdentifier.assign(value); }
    inline CopyClusterSnapshotRequest& WithTargetSnapshotIdentifier(const Aws::String& value) { SetTargetSnapshotIdentifier(value); return *this;}
    inline CopyClusterSnapshotRequest& WithTargetSnapshotIdentifier(Aws::String&& value) { SetTargetSnapshotIdentifier(std::move(value)); return *this;}
    inline CopyClusterSnapshotRequest& WithTargetSnapshotIdentifier(const char* value) { SetTargetSnapshotIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days that a manual snapshot is retained. If the value is -1,
     * the manual snapshot is retained indefinitely. </p> <p>The value must be either
     * -1 or an integer between 1 and 3,653.</p> <p>The default value is -1.</p>
     */
    inline int GetManualSnapshotRetentionPeriod() const{ return m_manualSnapshotRetentionPeriod; }
    inline bool ManualSnapshotRetentionPeriodHasBeenSet() const { return m_manualSnapshotRetentionPeriodHasBeenSet; }
    inline void SetManualSnapshotRetentionPeriod(int value) { m_manualSnapshotRetentionPeriodHasBeenSet = true; m_manualSnapshotRetentionPeriod = value; }
    inline CopyClusterSnapshotRequest& WithManualSnapshotRetentionPeriod(int value) { SetManualSnapshotRetentionPeriod(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceSnapshotIdentifier;
    bool m_sourceSnapshotIdentifierHasBeenSet = false;

    Aws::String m_sourceSnapshotClusterIdentifier;
    bool m_sourceSnapshotClusterIdentifierHasBeenSet = false;

    Aws::String m_targetSnapshotIdentifier;
    bool m_targetSnapshotIdentifierHasBeenSet = false;

    int m_manualSnapshotRetentionPeriod;
    bool m_manualSnapshotRetentionPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
