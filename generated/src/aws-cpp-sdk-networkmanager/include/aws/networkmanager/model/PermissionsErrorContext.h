/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes additional information about missing permissions. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/PermissionsErrorContext">AWS
   * API Reference</a></p>
   */
  class PermissionsErrorContext
  {
  public:
    AWS_NETWORKMANAGER_API PermissionsErrorContext() = default;
    AWS_NETWORKMANAGER_API PermissionsErrorContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API PermissionsErrorContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The missing permissions.</p>
     */
    inline const Aws::String& GetMissingPermission() const { return m_missingPermission; }
    inline bool MissingPermissionHasBeenSet() const { return m_missingPermissionHasBeenSet; }
    template<typename MissingPermissionT = Aws::String>
    void SetMissingPermission(MissingPermissionT&& value) { m_missingPermissionHasBeenSet = true; m_missingPermission = std::forward<MissingPermissionT>(value); }
    template<typename MissingPermissionT = Aws::String>
    PermissionsErrorContext& WithMissingPermission(MissingPermissionT&& value) { SetMissingPermission(std::forward<MissingPermissionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_missingPermission;
    bool m_missingPermissionHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
