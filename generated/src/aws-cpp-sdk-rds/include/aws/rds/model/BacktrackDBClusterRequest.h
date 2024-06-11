﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/BacktrackDBClusterMessage">AWS
   * API Reference</a></p>
   */
  class BacktrackDBClusterRequest : public RDSRequest
  {
  public:
    AWS_RDS_API BacktrackDBClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BacktrackDBCluster"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The DB cluster identifier of the DB cluster to be backtracked. This parameter
     * is stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * contain from 1 to 63 alphanumeric characters or hyphens.</p> </li> <li> <p>First
     * character must be a letter.</p> </li> <li> <p>Can't end with a hyphen or contain
     * two consecutive hyphens.</p> </li> </ul> <p>Example: <code>my-cluster1</code>
     * </p>
     */
    inline const Aws::String& GetDBClusterIdentifier() const{ return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    inline void SetDBClusterIdentifier(const Aws::String& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = value; }
    inline void SetDBClusterIdentifier(Aws::String&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::move(value); }
    inline void SetDBClusterIdentifier(const char* value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier.assign(value); }
    inline BacktrackDBClusterRequest& WithDBClusterIdentifier(const Aws::String& value) { SetDBClusterIdentifier(value); return *this;}
    inline BacktrackDBClusterRequest& WithDBClusterIdentifier(Aws::String&& value) { SetDBClusterIdentifier(std::move(value)); return *this;}
    inline BacktrackDBClusterRequest& WithDBClusterIdentifier(const char* value) { SetDBClusterIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the time to backtrack the DB cluster to, specified in ISO
     * 8601 format. For more information about ISO 8601, see the <a
     * href="http://en.wikipedia.org/wiki/ISO_8601">ISO8601 Wikipedia page.</a> </p>
     *  <p>If the specified time isn't a consistent time for the DB cluster,
     * Aurora automatically chooses the nearest possible consistent time for the DB
     * cluster.</p>  <p>Constraints:</p> <ul> <li> <p>Must contain a valid ISO
     * 8601 timestamp.</p> </li> <li> <p>Can't contain a timestamp set in the
     * future.</p> </li> </ul> <p>Example: <code>2017-07-08T18:00Z</code> </p>
     */
    inline const Aws::Utils::DateTime& GetBacktrackTo() const{ return m_backtrackTo; }
    inline bool BacktrackToHasBeenSet() const { return m_backtrackToHasBeenSet; }
    inline void SetBacktrackTo(const Aws::Utils::DateTime& value) { m_backtrackToHasBeenSet = true; m_backtrackTo = value; }
    inline void SetBacktrackTo(Aws::Utils::DateTime&& value) { m_backtrackToHasBeenSet = true; m_backtrackTo = std::move(value); }
    inline BacktrackDBClusterRequest& WithBacktrackTo(const Aws::Utils::DateTime& value) { SetBacktrackTo(value); return *this;}
    inline BacktrackDBClusterRequest& WithBacktrackTo(Aws::Utils::DateTime&& value) { SetBacktrackTo(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to force the DB cluster to backtrack when binary logging is
     * enabled. Otherwise, an error occurs when binary logging is enabled.</p>
     */
    inline bool GetForce() const{ return m_force; }
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }
    inline BacktrackDBClusterRequest& WithForce(bool value) { SetForce(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to backtrack the DB cluster to the earliest possible
     * backtrack time when <i>BacktrackTo</i> is set to a timestamp earlier than the
     * earliest backtrack time. When this parameter is disabled and <i>BacktrackTo</i>
     * is set to a timestamp earlier than the earliest backtrack time, an error
     * occurs.</p>
     */
    inline bool GetUseEarliestTimeOnPointInTimeUnavailable() const{ return m_useEarliestTimeOnPointInTimeUnavailable; }
    inline bool UseEarliestTimeOnPointInTimeUnavailableHasBeenSet() const { return m_useEarliestTimeOnPointInTimeUnavailableHasBeenSet; }
    inline void SetUseEarliestTimeOnPointInTimeUnavailable(bool value) { m_useEarliestTimeOnPointInTimeUnavailableHasBeenSet = true; m_useEarliestTimeOnPointInTimeUnavailable = value; }
    inline BacktrackDBClusterRequest& WithUseEarliestTimeOnPointInTimeUnavailable(bool value) { SetUseEarliestTimeOnPointInTimeUnavailable(value); return *this;}
    ///@}
  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_backtrackTo;
    bool m_backtrackToHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;

    bool m_useEarliestTimeOnPointInTimeUnavailable;
    bool m_useEarliestTimeOnPointInTimeUnavailableHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
