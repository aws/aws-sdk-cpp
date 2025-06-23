/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>

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
namespace WorkspacesInstances
{
namespace Model
{

  /**
   * <p>Defines hibernation configuration for the WorkSpace Instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-instances-2022-07-26/HibernationOptionsRequest">AWS
   * API Reference</a></p>
   */
  class HibernationOptionsRequest
  {
  public:
    AWS_WORKSPACESINSTANCES_API HibernationOptionsRequest() = default;
    AWS_WORKSPACESINSTANCES_API HibernationOptionsRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API HibernationOptionsRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESINSTANCES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Enables or disables instance hibernation capability.</p>
     */
    inline bool GetConfigured() const { return m_configured; }
    inline bool ConfiguredHasBeenSet() const { return m_configuredHasBeenSet; }
    inline void SetConfigured(bool value) { m_configuredHasBeenSet = true; m_configured = value; }
    inline HibernationOptionsRequest& WithConfigured(bool value) { SetConfigured(value); return *this;}
    ///@}
  private:

    bool m_configured{false};
    bool m_configuredHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
