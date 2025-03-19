/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/MediaLiveRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MediaLive
{
namespace Model
{

  /**
   * Placeholder documentation for DescribeInputRequest<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/DescribeInputRequest">AWS
   * API Reference</a></p>
   */
  class DescribeInputRequest : public MediaLiveRequest
  {
  public:
    AWS_MEDIALIVE_API DescribeInputRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInput"; }

    AWS_MEDIALIVE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * Unique ID of the input
     */
    inline const Aws::String& GetInputId() const { return m_inputId; }
    inline bool InputIdHasBeenSet() const { return m_inputIdHasBeenSet; }
    template<typename InputIdT = Aws::String>
    void SetInputId(InputIdT&& value) { m_inputIdHasBeenSet = true; m_inputId = std::forward<InputIdT>(value); }
    template<typename InputIdT = Aws::String>
    DescribeInputRequest& WithInputId(InputIdT&& value) { SetInputId(std::forward<InputIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_inputId;
    bool m_inputIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
