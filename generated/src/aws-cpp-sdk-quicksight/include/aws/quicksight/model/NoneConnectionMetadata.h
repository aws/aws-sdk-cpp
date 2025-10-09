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
   * <p>Authentication metadata for connections that do not require authentication
   * credentials.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/NoneConnectionMetadata">AWS
   * API Reference</a></p>
   */
  class NoneConnectionMetadata
  {
  public:
    AWS_QUICKSIGHT_API NoneConnectionMetadata() = default;
    AWS_QUICKSIGHT_API NoneConnectionMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API NoneConnectionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The base endpoint URL for connections that do not require authentication.</p>
     */
    inline const Aws::String& GetBaseEndpoint() const { return m_baseEndpoint; }
    inline bool BaseEndpointHasBeenSet() const { return m_baseEndpointHasBeenSet; }
    template<typename BaseEndpointT = Aws::String>
    void SetBaseEndpoint(BaseEndpointT&& value) { m_baseEndpointHasBeenSet = true; m_baseEndpoint = std::forward<BaseEndpointT>(value); }
    template<typename BaseEndpointT = Aws::String>
    NoneConnectionMetadata& WithBaseEndpoint(BaseEndpointT&& value) { SetBaseEndpoint(std::forward<BaseEndpointT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_baseEndpoint;
    bool m_baseEndpointHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
