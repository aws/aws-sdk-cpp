/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/NeptuneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Neptune
{
namespace Model
{

  /**
   */
  class DeleteDBClusterParameterGroupRequest : public NeptuneRequest
  {
  public:
    AWS_NEPTUNE_API DeleteDBClusterParameterGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBClusterParameterGroup"; }

    AWS_NEPTUNE_API Aws::String SerializePayload() const override;

  protected:
    AWS_NEPTUNE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing DB cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default DB cluster parameter group.</p> </li> <li>
     * <p>Cannot be associated with any DB clusters.</p> </li> </ul>
     */
    inline const Aws::String& GetDBClusterParameterGroupName() const{ return m_dBClusterParameterGroupName; }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing DB cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default DB cluster parameter group.</p> </li> <li>
     * <p>Cannot be associated with any DB clusters.</p> </li> </ul>
     */
    inline bool DBClusterParameterGroupNameHasBeenSet() const { return m_dBClusterParameterGroupNameHasBeenSet; }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing DB cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default DB cluster parameter group.</p> </li> <li>
     * <p>Cannot be associated with any DB clusters.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(const Aws::String& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = value; }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing DB cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default DB cluster parameter group.</p> </li> <li>
     * <p>Cannot be associated with any DB clusters.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(Aws::String&& value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName = std::move(value); }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing DB cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default DB cluster parameter group.</p> </li> <li>
     * <p>Cannot be associated with any DB clusters.</p> </li> </ul>
     */
    inline void SetDBClusterParameterGroupName(const char* value) { m_dBClusterParameterGroupNameHasBeenSet = true; m_dBClusterParameterGroupName.assign(value); }

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing DB cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default DB cluster parameter group.</p> </li> <li>
     * <p>Cannot be associated with any DB clusters.</p> </li> </ul>
     */
    inline DeleteDBClusterParameterGroupRequest& WithDBClusterParameterGroupName(const Aws::String& value) { SetDBClusterParameterGroupName(value); return *this;}

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing DB cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default DB cluster parameter group.</p> </li> <li>
     * <p>Cannot be associated with any DB clusters.</p> </li> </ul>
     */
    inline DeleteDBClusterParameterGroupRequest& WithDBClusterParameterGroupName(Aws::String&& value) { SetDBClusterParameterGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the DB cluster parameter group.</p> <p>Constraints:</p> <ul> <li>
     * <p>Must be the name of an existing DB cluster parameter group.</p> </li> <li>
     * <p>You can't delete a default DB cluster parameter group.</p> </li> <li>
     * <p>Cannot be associated with any DB clusters.</p> </li> </ul>
     */
    inline DeleteDBClusterParameterGroupRequest& WithDBClusterParameterGroupName(const char* value) { SetDBClusterParameterGroupName(value); return *this;}

  private:

    Aws::String m_dBClusterParameterGroupName;
    bool m_dBClusterParameterGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
