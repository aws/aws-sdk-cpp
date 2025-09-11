/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The parameters that are required to connect to a custom connection data
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CustomConnectionParameters">AWS
   * API Reference</a></p>
   */
  class CustomConnectionParameters
  {
  public:
    AWS_QUICKSIGHT_API CustomConnectionParameters() = default;
    AWS_QUICKSIGHT_API CustomConnectionParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CustomConnectionParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of custom connector.</p>
     */
    inline const Aws::String& GetConnectionType() const { return m_connectionType; }
    inline bool ConnectionTypeHasBeenSet() const { return m_connectionTypeHasBeenSet; }
    template<typename ConnectionTypeT = Aws::String>
    void SetConnectionType(ConnectionTypeT&& value) { m_connectionTypeHasBeenSet = true; m_connectionType = std::forward<ConnectionTypeT>(value); }
    template<typename ConnectionTypeT = Aws::String>
    CustomConnectionParameters& WithConnectionType(ConnectionTypeT&& value) { SetConnectionType(std::forward<ConnectionTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionType;
    bool m_connectionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
