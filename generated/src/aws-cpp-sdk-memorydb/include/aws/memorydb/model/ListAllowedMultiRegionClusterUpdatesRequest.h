/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/memorydb/MemoryDBRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

  /**
   */
  class ListAllowedMultiRegionClusterUpdatesRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API ListAllowedMultiRegionClusterUpdatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAllowedMultiRegionClusterUpdates"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the multi-Region cluster.</p>
     */
    inline const Aws::String& GetMultiRegionClusterName() const{ return m_multiRegionClusterName; }
    inline bool MultiRegionClusterNameHasBeenSet() const { return m_multiRegionClusterNameHasBeenSet; }
    inline void SetMultiRegionClusterName(const Aws::String& value) { m_multiRegionClusterNameHasBeenSet = true; m_multiRegionClusterName = value; }
    inline void SetMultiRegionClusterName(Aws::String&& value) { m_multiRegionClusterNameHasBeenSet = true; m_multiRegionClusterName = std::move(value); }
    inline void SetMultiRegionClusterName(const char* value) { m_multiRegionClusterNameHasBeenSet = true; m_multiRegionClusterName.assign(value); }
    inline ListAllowedMultiRegionClusterUpdatesRequest& WithMultiRegionClusterName(const Aws::String& value) { SetMultiRegionClusterName(value); return *this;}
    inline ListAllowedMultiRegionClusterUpdatesRequest& WithMultiRegionClusterName(Aws::String&& value) { SetMultiRegionClusterName(std::move(value)); return *this;}
    inline ListAllowedMultiRegionClusterUpdatesRequest& WithMultiRegionClusterName(const char* value) { SetMultiRegionClusterName(value); return *this;}
    ///@}
  private:

    Aws::String m_multiRegionClusterName;
    bool m_multiRegionClusterNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
