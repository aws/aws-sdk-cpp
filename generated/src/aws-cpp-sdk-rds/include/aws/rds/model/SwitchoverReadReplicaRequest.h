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
  class SwitchoverReadReplicaRequest : public RDSRequest
  {
  public:
    AWS_RDS_API SwitchoverReadReplicaRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SwitchoverReadReplica"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The DB instance identifier of the current standby database. This value is
     * stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must match
     * the identiﬁer of an existing Oracle read replica DB instance.</p> </li> </ul>
     */
    inline const Aws::String& GetDBInstanceIdentifier() const{ return m_dBInstanceIdentifier; }

    /**
     * <p>The DB instance identifier of the current standby database. This value is
     * stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must match
     * the identiﬁer of an existing Oracle read replica DB instance.</p> </li> </ul>
     */
    inline bool DBInstanceIdentifierHasBeenSet() const { return m_dBInstanceIdentifierHasBeenSet; }

    /**
     * <p>The DB instance identifier of the current standby database. This value is
     * stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must match
     * the identiﬁer of an existing Oracle read replica DB instance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const Aws::String& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = value; }

    /**
     * <p>The DB instance identifier of the current standby database. This value is
     * stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must match
     * the identiﬁer of an existing Oracle read replica DB instance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(Aws::String&& value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier = std::move(value); }

    /**
     * <p>The DB instance identifier of the current standby database. This value is
     * stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must match
     * the identiﬁer of an existing Oracle read replica DB instance.</p> </li> </ul>
     */
    inline void SetDBInstanceIdentifier(const char* value) { m_dBInstanceIdentifierHasBeenSet = true; m_dBInstanceIdentifier.assign(value); }

    /**
     * <p>The DB instance identifier of the current standby database. This value is
     * stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must match
     * the identiﬁer of an existing Oracle read replica DB instance.</p> </li> </ul>
     */
    inline SwitchoverReadReplicaRequest& WithDBInstanceIdentifier(const Aws::String& value) { SetDBInstanceIdentifier(value); return *this;}

    /**
     * <p>The DB instance identifier of the current standby database. This value is
     * stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must match
     * the identiﬁer of an existing Oracle read replica DB instance.</p> </li> </ul>
     */
    inline SwitchoverReadReplicaRequest& WithDBInstanceIdentifier(Aws::String&& value) { SetDBInstanceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The DB instance identifier of the current standby database. This value is
     * stored as a lowercase string.</p> <p>Constraints:</p> <ul> <li> <p>Must match
     * the identiﬁer of an existing Oracle read replica DB instance.</p> </li> </ul>
     */
    inline SwitchoverReadReplicaRequest& WithDBInstanceIdentifier(const char* value) { SetDBInstanceIdentifier(value); return *this;}

  private:

    Aws::String m_dBInstanceIdentifier;
    bool m_dBInstanceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
