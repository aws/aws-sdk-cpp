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
   * <p>Read-only authentication metadata for API key-based connections, containing
   * non-sensitive configuration details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ReadAPIKeyConnectionMetadata">AWS
   * API Reference</a></p>
   */
  class ReadAPIKeyConnectionMetadata
  {
  public:
    AWS_QUICKSIGHT_API ReadAPIKeyConnectionMetadata() = default;
    AWS_QUICKSIGHT_API ReadAPIKeyConnectionMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ReadAPIKeyConnectionMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The base endpoint URL for API key authentication.</p>
     */
    inline const Aws::String& GetBaseEndpoint() const { return m_baseEndpoint; }
    inline bool BaseEndpointHasBeenSet() const { return m_baseEndpointHasBeenSet; }
    template<typename BaseEndpointT = Aws::String>
    void SetBaseEndpoint(BaseEndpointT&& value) { m_baseEndpointHasBeenSet = true; m_baseEndpoint = std::forward<BaseEndpointT>(value); }
    template<typename BaseEndpointT = Aws::String>
    ReadAPIKeyConnectionMetadata& WithBaseEndpoint(BaseEndpointT&& value) { SetBaseEndpoint(std::forward<BaseEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address associated with the API key authentication.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    ReadAPIKeyConnectionMetadata& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_baseEndpoint;
    bool m_baseEndpointHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
