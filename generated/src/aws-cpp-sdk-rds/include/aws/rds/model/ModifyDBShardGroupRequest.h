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
  class ModifyDBShardGroupRequest : public RDSRequest
  {
  public:
    AWS_RDS_API ModifyDBShardGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBShardGroup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the DB shard group to modify.</p>
     */
    inline const Aws::String& GetDBShardGroupIdentifier() const { return m_dBShardGroupIdentifier; }
    inline bool DBShardGroupIdentifierHasBeenSet() const { return m_dBShardGroupIdentifierHasBeenSet; }
    template<typename DBShardGroupIdentifierT = Aws::String>
    void SetDBShardGroupIdentifier(DBShardGroupIdentifierT&& value) { m_dBShardGroupIdentifierHasBeenSet = true; m_dBShardGroupIdentifier = std::forward<DBShardGroupIdentifierT>(value); }
    template<typename DBShardGroupIdentifierT = Aws::String>
    ModifyDBShardGroupRequest& WithDBShardGroupIdentifier(DBShardGroupIdentifierT&& value) { SetDBShardGroupIdentifier(std::forward<DBShardGroupIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum capacity of the DB shard group in Aurora capacity units
     * (ACUs).</p>
     */
    inline double GetMaxACU() const { return m_maxACU; }
    inline bool MaxACUHasBeenSet() const { return m_maxACUHasBeenSet; }
    inline void SetMaxACU(double value) { m_maxACUHasBeenSet = true; m_maxACU = value; }
    inline ModifyDBShardGroupRequest& WithMaxACU(double value) { SetMaxACU(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum capacity of the DB shard group in Aurora capacity units
     * (ACUs).</p>
     */
    inline double GetMinACU() const { return m_minACU; }
    inline bool MinACUHasBeenSet() const { return m_minACUHasBeenSet; }
    inline void SetMinACU(double value) { m_minACUHasBeenSet = true; m_minACU = value; }
    inline ModifyDBShardGroupRequest& WithMinACU(double value) { SetMinACU(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to create standby DB shard groups for the DB shard group.
     * Valid values are the following:</p> <ul> <li> <p>0 - Creates a DB shard group
     * without a standby DB shard group. This is the default value.</p> </li> <li> <p>1
     * - Creates a DB shard group with a standby DB shard group in a different
     * Availability Zone (AZ).</p> </li> <li> <p>2 - Creates a DB shard group with two
     * standby DB shard groups in two different AZs.</p> </li> </ul>
     */
    inline int GetComputeRedundancy() const { return m_computeRedundancy; }
    inline bool ComputeRedundancyHasBeenSet() const { return m_computeRedundancyHasBeenSet; }
    inline void SetComputeRedundancy(int value) { m_computeRedundancyHasBeenSet = true; m_computeRedundancy = value; }
    inline ModifyDBShardGroupRequest& WithComputeRedundancy(int value) { SetComputeRedundancy(value); return *this;}
    ///@}
  private:

    Aws::String m_dBShardGroupIdentifier;
    bool m_dBShardGroupIdentifierHasBeenSet = false;

    double m_maxACU{0.0};
    bool m_maxACUHasBeenSet = false;

    double m_minACU{0.0};
    bool m_minACUHasBeenSet = false;

    int m_computeRedundancy{0};
    bool m_computeRedundancyHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
