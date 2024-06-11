﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
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
namespace WorkSpaces
{
namespace Model
{

  /**
   * <p>Describes the user volume for a WorkSpace bundle.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/UserStorage">AWS
   * API Reference</a></p>
   */
  class UserStorage
  {
  public:
    AWS_WORKSPACES_API UserStorage();
    AWS_WORKSPACES_API UserStorage(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API UserStorage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The size of the user volume.</p>
     */
    inline const Aws::String& GetCapacity() const{ return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    inline void SetCapacity(const Aws::String& value) { m_capacityHasBeenSet = true; m_capacity = value; }
    inline void SetCapacity(Aws::String&& value) { m_capacityHasBeenSet = true; m_capacity = std::move(value); }
    inline void SetCapacity(const char* value) { m_capacityHasBeenSet = true; m_capacity.assign(value); }
    inline UserStorage& WithCapacity(const Aws::String& value) { SetCapacity(value); return *this;}
    inline UserStorage& WithCapacity(Aws::String&& value) { SetCapacity(std::move(value)); return *this;}
    inline UserStorage& WithCapacity(const char* value) { SetCapacity(value); return *this;}
    ///@}
  private:

    Aws::String m_capacity;
    bool m_capacityHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
