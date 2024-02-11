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
  class DeleteStateMachineVersionRequest : public SFNRequest
  {
  public:
    AWS_SFN_API DeleteStateMachineVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteStateMachineVersion"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the state machine version to delete.</p>
     */
    inline const Aws::String& GetStateMachineVersionArn() const{ return m_stateMachineVersionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine version to delete.</p>
     */
    inline bool StateMachineVersionArnHasBeenSet() const { return m_stateMachineVersionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine version to delete.</p>
     */
    inline void SetStateMachineVersionArn(const Aws::String& value) { m_stateMachineVersionArnHasBeenSet = true; m_stateMachineVersionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine version to delete.</p>
     */
    inline void SetStateMachineVersionArn(Aws::String&& value) { m_stateMachineVersionArnHasBeenSet = true; m_stateMachineVersionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine version to delete.</p>
     */
    inline void SetStateMachineVersionArn(const char* value) { m_stateMachineVersionArnHasBeenSet = true; m_stateMachineVersionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine version to delete.</p>
     */
    inline DeleteStateMachineVersionRequest& WithStateMachineVersionArn(const Aws::String& value) { SetStateMachineVersionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine version to delete.</p>
     */
    inline DeleteStateMachineVersionRequest& WithStateMachineVersionArn(Aws::String&& value) { SetStateMachineVersionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine version to delete.</p>
     */
    inline DeleteStateMachineVersionRequest& WithStateMachineVersionArn(const char* value) { SetStateMachineVersionArn(value); return *this;}

  private:

    Aws::String m_stateMachineVersionArn;
    bool m_stateMachineVersionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
