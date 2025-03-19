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
  class ModifyCurrentDBClusterCapacityRequest : public RDSRequest
  {
  public:
    AWS_RDS_API ModifyCurrentDBClusterCapacityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyCurrentDBClusterCapacity"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The DB cluster identifier for the cluster being modified. This parameter
     * isn't case-sensitive.</p> <p>Constraints:</p> <ul> <li> <p>Must match the
     * identifier of an existing DB cluster.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterIdentifier() const { return m_dBClusterIdentifier; }
    inline bool DBClusterIdentifierHasBeenSet() const { return m_dBClusterIdentifierHasBeenSet; }
    template<typename DBClusterIdentifierT = Aws::String>
    void SetDBClusterIdentifier(DBClusterIdentifierT&& value) { m_dBClusterIdentifierHasBeenSet = true; m_dBClusterIdentifier = std::forward<DBClusterIdentifierT>(value); }
    template<typename DBClusterIdentifierT = Aws::String>
    ModifyCurrentDBClusterCapacityRequest& WithDBClusterIdentifier(DBClusterIdentifierT&& value) { SetDBClusterIdentifier(std::forward<DBClusterIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB cluster capacity.</p> <p>When you change the capacity of a paused
     * Aurora Serverless v1 DB cluster, it automatically resumes.</p>
     * <p>Constraints:</p> <ul> <li> <p>For Aurora MySQL, valid capacity values are
     * <code>1</code>, <code>2</code>, <code>4</code>, <code>8</code>, <code>16</code>,
     * <code>32</code>, <code>64</code>, <code>128</code>, and <code>256</code>.</p>
     * </li> <li> <p>For Aurora PostgreSQL, valid capacity values are <code>2</code>,
     * <code>4</code>, <code>8</code>, <code>16</code>, <code>32</code>,
     * <code>64</code>, <code>192</code>, and <code>384</code>.</p> </li> </ul>
     */
    inline int GetCapacity() const { return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    inline void SetCapacity(int value) { m_capacityHasBeenSet = true; m_capacity = value; }
    inline ModifyCurrentDBClusterCapacityRequest& WithCapacity(int value) { SetCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, that Aurora Serverless v1 tries to find a
     * scaling point to perform seamless scaling before enforcing the timeout action.
     * The default is 300.</p> <p>Specify a value between 10 and 600 seconds.</p>
     */
    inline int GetSecondsBeforeTimeout() const { return m_secondsBeforeTimeout; }
    inline bool SecondsBeforeTimeoutHasBeenSet() const { return m_secondsBeforeTimeoutHasBeenSet; }
    inline void SetSecondsBeforeTimeout(int value) { m_secondsBeforeTimeoutHasBeenSet = true; m_secondsBeforeTimeout = value; }
    inline ModifyCurrentDBClusterCapacityRequest& WithSecondsBeforeTimeout(int value) { SetSecondsBeforeTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to take when the timeout is reached, either
     * <code>ForceApplyCapacityChange</code> or
     * <code>RollbackCapacityChange</code>.</p> <p>
     * <code>ForceApplyCapacityChange</code>, the default, sets the capacity to the
     * specified value as soon as possible.</p> <p> <code>RollbackCapacityChange</code>
     * ignores the capacity change if a scaling point isn't found in the timeout
     * period.</p>
     */
    inline const Aws::String& GetTimeoutAction() const { return m_timeoutAction; }
    inline bool TimeoutActionHasBeenSet() const { return m_timeoutActionHasBeenSet; }
    template<typename TimeoutActionT = Aws::String>
    void SetTimeoutAction(TimeoutActionT&& value) { m_timeoutActionHasBeenSet = true; m_timeoutAction = std::forward<TimeoutActionT>(value); }
    template<typename TimeoutActionT = Aws::String>
    ModifyCurrentDBClusterCapacityRequest& WithTimeoutAction(TimeoutActionT&& value) { SetTimeoutAction(std::forward<TimeoutActionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBClusterIdentifier;
    bool m_dBClusterIdentifierHasBeenSet = false;

    int m_capacity{0};
    bool m_capacityHasBeenSet = false;

    int m_secondsBeforeTimeout{0};
    bool m_secondsBeforeTimeoutHasBeenSet = false;

    Aws::String m_timeoutAction;
    bool m_timeoutActionHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
