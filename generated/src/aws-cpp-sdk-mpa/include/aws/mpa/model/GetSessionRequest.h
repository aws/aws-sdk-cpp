/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/mpa/MPARequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace MPA
{
namespace Model
{

  /**
   */
  class GetSessionRequest : public MPARequest
  {
  public:
    AWS_MPA_API GetSessionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSession"; }

    AWS_MPA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the session.</p>
     */
    inline const Aws::String& GetSessionArn() const { return m_sessionArn; }
    inline bool SessionArnHasBeenSet() const { return m_sessionArnHasBeenSet; }
    template<typename SessionArnT = Aws::String>
    void SetSessionArn(SessionArnT&& value) { m_sessionArnHasBeenSet = true; m_sessionArn = std::forward<SessionArnT>(value); }
    template<typename SessionArnT = Aws::String>
    GetSessionRequest& WithSessionArn(SessionArnT&& value) { SetSessionArn(std::forward<SessionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionArn;
    bool m_sessionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
