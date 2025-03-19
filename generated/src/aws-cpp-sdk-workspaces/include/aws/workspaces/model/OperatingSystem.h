/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/OperatingSystemType.h>
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
   * <p>The operating system that the image is running.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/OperatingSystem">AWS
   * API Reference</a></p>
   */
  class OperatingSystem
  {
  public:
    AWS_WORKSPACES_API OperatingSystem() = default;
    AWS_WORKSPACES_API OperatingSystem(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API OperatingSystem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operating system.</p>
     */
    inline OperatingSystemType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(OperatingSystemType value) { m_typeHasBeenSet = true; m_type = value; }
    inline OperatingSystem& WithType(OperatingSystemType value) { SetType(value); return *this;}
    ///@}
  private:

    OperatingSystemType m_type{OperatingSystemType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
