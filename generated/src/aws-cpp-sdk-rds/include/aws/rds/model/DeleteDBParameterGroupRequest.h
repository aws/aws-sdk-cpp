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
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DeleteDBParameterGroupMessage">AWS
   * API Reference</a></p>
   */
  class DeleteDBParameterGroupRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DeleteDBParameterGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBParameterGroup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be the name of an existing DB parameter group</p> </li> <li> <p>You can't delete
     * a default DB parameter group</p> </li> <li> <p>Can't be associated with any DB
     * instances</p> </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be the name of an existing DB parameter group</p> </li> <li> <p>You can't delete
     * a default DB parameter group</p> </li> <li> <p>Can't be associated with any DB
     * instances</p> </li> </ul>
     */
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be the name of an existing DB parameter group</p> </li> <li> <p>You can't delete
     * a default DB parameter group</p> </li> <li> <p>Can't be associated with any DB
     * instances</p> </li> </ul>
     */
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be the name of an existing DB parameter group</p> </li> <li> <p>You can't delete
     * a default DB parameter group</p> </li> <li> <p>Can't be associated with any DB
     * instances</p> </li> </ul>
     */
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be the name of an existing DB parameter group</p> </li> <li> <p>You can't delete
     * a default DB parameter group</p> </li> <li> <p>Can't be associated with any DB
     * instances</p> </li> </ul>
     */
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be the name of an existing DB parameter group</p> </li> <li> <p>You can't delete
     * a default DB parameter group</p> </li> <li> <p>Can't be associated with any DB
     * instances</p> </li> </ul>
     */
    inline DeleteDBParameterGroupRequest& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be the name of an existing DB parameter group</p> </li> <li> <p>You can't delete
     * a default DB parameter group</p> </li> <li> <p>Can't be associated with any DB
     * instances</p> </li> </ul>
     */
    inline DeleteDBParameterGroupRequest& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be the name of an existing DB parameter group</p> </li> <li> <p>You can't delete
     * a default DB parameter group</p> </li> <li> <p>Can't be associated with any DB
     * instances</p> </li> </ul>
     */
    inline DeleteDBParameterGroupRequest& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}

  private:

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
