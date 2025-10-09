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
   * <p>Read-only metadata for basic authentication connections, containing
   * non-sensitive configuration details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ReadBasicAuthConnectionMetadata">AWS
   * API Reference</a></p>
   */
  class ReadBasicAuthConnectionMetadata
  {
  public:
    AWS_QUICKSIGHT_API ReadBasicAuthConnectionMetadata() = default;
    AWS_QUICKSIGHT_API ReadBasicAuthConnectionMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ReadBasicAuthConnectionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The base endpoint URL for basic authentication.</p>
     */
    inline const Aws::String& GetBaseEndpoint() const { return m_baseEndpoint; }
    inline bool BaseEndpointHasBeenSet() const { return m_baseEndpointHasBeenSet; }
    template<typename BaseEndpointT = Aws::String>
    void SetBaseEndpoint(BaseEndpointT&& value) { m_baseEndpointHasBeenSet = true; m_baseEndpoint = std::forward<BaseEndpointT>(value); }
    template<typename BaseEndpointT = Aws::String>
    ReadBasicAuthConnectionMetadata& WithBaseEndpoint(BaseEndpointT&& value) { SetBaseEndpoint(std::forward<BaseEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The username used for basic authentication.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    ReadBasicAuthConnectionMetadata& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_baseEndpoint;
    bool m_baseEndpointHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
