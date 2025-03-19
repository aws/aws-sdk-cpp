/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAM_EXPORTS.h>
#include <aws/oam/OAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OAM
{
namespace Model
{

  /**
   */
  class GetSinkPolicyRequest : public OAMRequest
  {
  public:
    AWS_OAM_API GetSinkPolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSinkPolicy"; }

    AWS_OAM_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the sink to retrieve the policy of.</p>
     */
    inline const Aws::String& GetSinkIdentifier() const { return m_sinkIdentifier; }
    inline bool SinkIdentifierHasBeenSet() const { return m_sinkIdentifierHasBeenSet; }
    template<typename SinkIdentifierT = Aws::String>
    void SetSinkIdentifier(SinkIdentifierT&& value) { m_sinkIdentifierHasBeenSet = true; m_sinkIdentifier = std::forward<SinkIdentifierT>(value); }
    template<typename SinkIdentifierT = Aws::String>
    GetSinkPolicyRequest& WithSinkIdentifier(SinkIdentifierT&& value) { SetSinkIdentifier(std::forward<SinkIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sinkIdentifier;
    bool m_sinkIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace OAM
} // namespace Aws
