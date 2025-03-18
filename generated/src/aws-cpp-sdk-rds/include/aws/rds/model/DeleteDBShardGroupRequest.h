﻿/**
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
  class DeleteDBShardGroupRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DeleteDBShardGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDBShardGroup"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the DB shard group to delete.</p>
     */
    inline const Aws::String& GetDBShardGroupIdentifier() const { return m_dBShardGroupIdentifier; }
    inline bool DBShardGroupIdentifierHasBeenSet() const { return m_dBShardGroupIdentifierHasBeenSet; }
    template<typename DBShardGroupIdentifierT = Aws::String>
    void SetDBShardGroupIdentifier(DBShardGroupIdentifierT&& value) { m_dBShardGroupIdentifierHasBeenSet = true; m_dBShardGroupIdentifier = std::forward<DBShardGroupIdentifierT>(value); }
    template<typename DBShardGroupIdentifierT = Aws::String>
    DeleteDBShardGroupRequest& WithDBShardGroupIdentifier(DBShardGroupIdentifierT&& value) { SetDBShardGroupIdentifier(std::forward<DBShardGroupIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dBShardGroupIdentifier;
    bool m_dBShardGroupIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
