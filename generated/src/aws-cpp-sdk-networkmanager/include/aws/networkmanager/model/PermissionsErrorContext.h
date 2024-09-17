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
    AWS_NETWORKMANAGER_API PermissionsErrorContext();
    AWS_NETWORKMANAGER_API PermissionsErrorContext(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API PermissionsErrorContext& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The missing permissions.</p>
     */
    inline const Aws::String& GetMissingPermission() const{ return m_missingPermission; }
    inline bool MissingPermissionHasBeenSet() const { return m_missingPermissionHasBeenSet; }
    inline void SetMissingPermission(const Aws::String& value) { m_missingPermissionHasBeenSet = true; m_missingPermission = value; }
    inline void SetMissingPermission(Aws::String&& value) { m_missingPermissionHasBeenSet = true; m_missingPermission = std::move(value); }
    inline void SetMissingPermission(const char* value) { m_missingPermissionHasBeenSet = true; m_missingPermission.assign(value); }
    inline PermissionsErrorContext& WithMissingPermission(const Aws::String& value) { SetMissingPermission(value); return *this;}
    inline PermissionsErrorContext& WithMissingPermission(Aws::String&& value) { SetMissingPermission(std::move(value)); return *this;}
    inline PermissionsErrorContext& WithMissingPermission(const char* value) { SetMissingPermission(value); return *this;}
    ///@}
  private:

    Aws::String m_missingPermission;
    bool m_missingPermissionHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
