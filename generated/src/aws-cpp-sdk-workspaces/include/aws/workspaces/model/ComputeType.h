/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/Compute.h>
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
   * <p>Describes the compute type of the bundle.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-2015-04-08/ComputeType">AWS
   * API Reference</a></p>
   */
  class ComputeType
  {
  public:
    AWS_WORKSPACES_API ComputeType() = default;
    AWS_WORKSPACES_API ComputeType(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API ComputeType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The compute type.</p>
     */
    inline Compute GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(Compute value) { m_nameHasBeenSet = true; m_name = value; }
    inline ComputeType& WithName(Compute value) { SetName(value); return *this;}
    ///@}
  private:

    Compute m_name{Compute::NOT_SET};
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
