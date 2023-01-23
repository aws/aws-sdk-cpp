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
  class DeleteACLRequest : public MemoryDBRequest
  {
  public:
    AWS_MEMORYDB_API DeleteACLRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteACL"; }

    AWS_MEMORYDB_API Aws::String SerializePayload() const override;

    AWS_MEMORYDB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the Access Control List to delete</p>
     */
    inline const Aws::String& GetACLName() const{ return m_aCLName; }

    /**
     * <p>The name of the Access Control List to delete</p>
     */
    inline bool ACLNameHasBeenSet() const { return m_aCLNameHasBeenSet; }

    /**
     * <p>The name of the Access Control List to delete</p>
     */
    inline void SetACLName(const Aws::String& value) { m_aCLNameHasBeenSet = true; m_aCLName = value; }

    /**
     * <p>The name of the Access Control List to delete</p>
     */
    inline void SetACLName(Aws::String&& value) { m_aCLNameHasBeenSet = true; m_aCLName = std::move(value); }

    /**
     * <p>The name of the Access Control List to delete</p>
     */
    inline void SetACLName(const char* value) { m_aCLNameHasBeenSet = true; m_aCLName.assign(value); }

    /**
     * <p>The name of the Access Control List to delete</p>
     */
    inline DeleteACLRequest& WithACLName(const Aws::String& value) { SetACLName(value); return *this;}

    /**
     * <p>The name of the Access Control List to delete</p>
     */
    inline DeleteACLRequest& WithACLName(Aws::String&& value) { SetACLName(std::move(value)); return *this;}

    /**
     * <p>The name of the Access Control List to delete</p>
     */
    inline DeleteACLRequest& WithACLName(const char* value) { SetACLName(value); return *this;}

  private:

    Aws::String m_aCLName;
    bool m_aCLNameHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
