﻿/**
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
  class DeleteDBParameterGroupRequest : public NeptuneRequest
  {
  public:
    AWS_NEPTUNE_API DeleteDBParameterGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBParameterGroup"; }

    AWS_NEPTUNE_API Aws::String SerializePayload() const override;

  protected:
    AWS_NEPTUNE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the DB parameter group.</p> <p>Constraints:</p> <ul> <li> <p>Must
     * be the name of an existing DB parameter group</p> </li> <li> <p>You can't delete
     * a default DB parameter group</p> </li> <li> <p>Cannot be associated with any DB
     * instances</p> </li> </ul>
     */
    inline const Aws::String& GetDBParameterGroupName() const{ return m_dBParameterGroupName; }
    inline bool DBParameterGroupNameHasBeenSet() const { return m_dBParameterGroupNameHasBeenSet; }
    inline void SetDBParameterGroupName(const Aws::String& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = value; }
    inline void SetDBParameterGroupName(Aws::String&& value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName = std::move(value); }
    inline void SetDBParameterGroupName(const char* value) { m_dBParameterGroupNameHasBeenSet = true; m_dBParameterGroupName.assign(value); }
    inline DeleteDBParameterGroupRequest& WithDBParameterGroupName(const Aws::String& value) { SetDBParameterGroupName(value); return *this;}
    inline DeleteDBParameterGroupRequest& WithDBParameterGroupName(Aws::String&& value) { SetDBParameterGroupName(std::move(value)); return *this;}
    inline DeleteDBParameterGroupRequest& WithDBParameterGroupName(const char* value) { SetDBParameterGroupName(value); return *this;}
    ///@}
  private:

    Aws::String m_dBParameterGroupName;
    bool m_dBParameterGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
