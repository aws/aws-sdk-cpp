/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class DescribeStateMachineAliasRequest : public SFNRequest
  {
  public:
    AWS_SFN_API DescribeStateMachineAliasRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeStateMachineAlias"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the state machine alias.</p>
     */
    inline const Aws::String& GetStateMachineAliasArn() const { return m_stateMachineAliasArn; }
    inline bool StateMachineAliasArnHasBeenSet() const { return m_stateMachineAliasArnHasBeenSet; }
    template<typename StateMachineAliasArnT = Aws::String>
    void SetStateMachineAliasArn(StateMachineAliasArnT&& value) { m_stateMachineAliasArnHasBeenSet = true; m_stateMachineAliasArn = std::forward<StateMachineAliasArnT>(value); }
    template<typename StateMachineAliasArnT = Aws::String>
    DescribeStateMachineAliasRequest& WithStateMachineAliasArn(StateMachineAliasArnT&& value) { SetStateMachineAliasArn(std::forward<StateMachineAliasArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stateMachineAliasArn;
    bool m_stateMachineAliasArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
