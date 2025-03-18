/**
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
    AWS_WORKSPACES_API UserStorage() = default;
    AWS_WORKSPACES_API UserStorage(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API UserStorage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The size of the user volume.</p>
     */
    inline const Aws::String& GetCapacity() const { return m_capacity; }
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }
    template<typename CapacityT = Aws::String>
    void SetCapacity(CapacityT&& value) { m_capacityHasBeenSet = true; m_capacity = std::forward<CapacityT>(value); }
    template<typename CapacityT = Aws::String>
    UserStorage& WithCapacity(CapacityT&& value) { SetCapacity(std::forward<CapacityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_capacity;
    bool m_capacityHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
