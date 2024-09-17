/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/memorydb/MemoryDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace MemoryDB
{
namespace Model
{

  /**
   * <p>The status of the ACL update</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/memorydb-2021-01-01/ACLsUpdateStatus">AWS
   * API Reference</a></p>
   */
  class ACLsUpdateStatus
  {
  public:
    AWS_MEMORYDB_API ACLsUpdateStatus();
    AWS_MEMORYDB_API ACLsUpdateStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API ACLsUpdateStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEMORYDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of ACLs pending to be applied.</p>
     */
    inline const Aws::String& GetACLToApply() const{ return m_aCLToApply; }
    inline bool ACLToApplyHasBeenSet() const { return m_aCLToApplyHasBeenSet; }
    inline void SetACLToApply(const Aws::String& value) { m_aCLToApplyHasBeenSet = true; m_aCLToApply = value; }
    inline void SetACLToApply(Aws::String&& value) { m_aCLToApplyHasBeenSet = true; m_aCLToApply = std::move(value); }
    inline void SetACLToApply(const char* value) { m_aCLToApplyHasBeenSet = true; m_aCLToApply.assign(value); }
    inline ACLsUpdateStatus& WithACLToApply(const Aws::String& value) { SetACLToApply(value); return *this;}
    inline ACLsUpdateStatus& WithACLToApply(Aws::String&& value) { SetACLToApply(std::move(value)); return *this;}
    inline ACLsUpdateStatus& WithACLToApply(const char* value) { SetACLToApply(value); return *this;}
    ///@}
  private:

    Aws::String m_aCLToApply;
    bool m_aCLToApplyHasBeenSet = false;
  };

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
