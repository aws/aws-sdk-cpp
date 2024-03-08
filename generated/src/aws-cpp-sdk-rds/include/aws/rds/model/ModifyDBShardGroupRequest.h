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
    AWS_RDS_API ModifyDBShardGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyDBShardGroup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the DB shard group to modify.</p>
     */
    inline const Aws::String& GetDBShardGroupIdentifier() const{ return m_dBShardGroupIdentifier; }

    /**
     * <p>The name of the DB shard group to modify.</p>
     */
    inline bool DBShardGroupIdentifierHasBeenSet() const { return m_dBShardGroupIdentifierHasBeenSet; }

    /**
     * <p>The name of the DB shard group to modify.</p>
     */
    inline void SetDBShardGroupIdentifier(const Aws::String& value) { m_dBShardGroupIdentifierHasBeenSet = true; m_dBShardGroupIdentifier = value; }

    /**
     * <p>The name of the DB shard group to modify.</p>
     */
    inline void SetDBShardGroupIdentifier(Aws::String&& value) { m_dBShardGroupIdentifierHasBeenSet = true; m_dBShardGroupIdentifier = std::move(value); }

    /**
     * <p>The name of the DB shard group to modify.</p>
     */
    inline void SetDBShardGroupIdentifier(const char* value) { m_dBShardGroupIdentifierHasBeenSet = true; m_dBShardGroupIdentifier.assign(value); }

    /**
     * <p>The name of the DB shard group to modify.</p>
     */
    inline ModifyDBShardGroupRequest& WithDBShardGroupIdentifier(const Aws::String& value) { SetDBShardGroupIdentifier(value); return *this;}

    /**
     * <p>The name of the DB shard group to modify.</p>
     */
    inline ModifyDBShardGroupRequest& WithDBShardGroupIdentifier(Aws::String&& value) { SetDBShardGroupIdentifier(std::move(value)); return *this;}

    /**
     * <p>The name of the DB shard group to modify.</p>
     */
    inline ModifyDBShardGroupRequest& WithDBShardGroupIdentifier(const char* value) { SetDBShardGroupIdentifier(value); return *this;}


    /**
     * <p>The maximum capacity of the DB shard group in Aurora capacity units
     * (ACUs).</p>
     */
    inline double GetMaxACU() const{ return m_maxACU; }

    /**
     * <p>The maximum capacity of the DB shard group in Aurora capacity units
     * (ACUs).</p>
     */
    inline bool MaxACUHasBeenSet() const { return m_maxACUHasBeenSet; }

    /**
     * <p>The maximum capacity of the DB shard group in Aurora capacity units
     * (ACUs).</p>
     */
    inline void SetMaxACU(double value) { m_maxACUHasBeenSet = true; m_maxACU = value; }

    /**
     * <p>The maximum capacity of the DB shard group in Aurora capacity units
     * (ACUs).</p>
     */
    inline ModifyDBShardGroupRequest& WithMaxACU(double value) { SetMaxACU(value); return *this;}

  private:

    Aws::String m_dBShardGroupIdentifier;
    bool m_dBShardGroupIdentifierHasBeenSet = false;

    double m_maxACU;
    bool m_maxACUHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
