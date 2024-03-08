/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class RedriveExecutionRequest : public SFNRequest
  {
  public:
    AWS_SFN_API RedriveExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RedriveExecution"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the execution to be redriven.</p>
     */
    inline const Aws::String& GetExecutionArn() const{ return m_executionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution to be redriven.</p>
     */
    inline bool ExecutionArnHasBeenSet() const { return m_executionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution to be redriven.</p>
     */
    inline void SetExecutionArn(const Aws::String& value) { m_executionArnHasBeenSet = true; m_executionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution to be redriven.</p>
     */
    inline void SetExecutionArn(Aws::String&& value) { m_executionArnHasBeenSet = true; m_executionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution to be redriven.</p>
     */
    inline void SetExecutionArn(const char* value) { m_executionArnHasBeenSet = true; m_executionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the execution to be redriven.</p>
     */
    inline RedriveExecutionRequest& WithExecutionArn(const Aws::String& value) { SetExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the execution to be redriven.</p>
     */
    inline RedriveExecutionRequest& WithExecutionArn(Aws::String&& value) { SetExecutionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the execution to be redriven.</p>
     */
    inline RedriveExecutionRequest& WithExecutionArn(const char* value) { SetExecutionArn(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you don’t specify a client token, the Amazon Web
     * Services SDK automatically generates a client token and uses it for the request
     * to ensure idempotency. The API will return idempotent responses for the last 10
     * client tokens used to successfully redrive the execution. These client tokens
     * are valid for up to 15 minutes after they are first used.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you don’t specify a client token, the Amazon Web
     * Services SDK automatically generates a client token and uses it for the request
     * to ensure idempotency. The API will return idempotent responses for the last 10
     * client tokens used to successfully redrive the execution. These client tokens
     * are valid for up to 15 minutes after they are first used.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you don’t specify a client token, the Amazon Web
     * Services SDK automatically generates a client token and uses it for the request
     * to ensure idempotency. The API will return idempotent responses for the last 10
     * client tokens used to successfully redrive the execution. These client tokens
     * are valid for up to 15 minutes after they are first used.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you don’t specify a client token, the Amazon Web
     * Services SDK automatically generates a client token and uses it for the request
     * to ensure idempotency. The API will return idempotent responses for the last 10
     * client tokens used to successfully redrive the execution. These client tokens
     * are valid for up to 15 minutes after they are first used.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you don’t specify a client token, the Amazon Web
     * Services SDK automatically generates a client token and uses it for the request
     * to ensure idempotency. The API will return idempotent responses for the last 10
     * client tokens used to successfully redrive the execution. These client tokens
     * are valid for up to 15 minutes after they are first used.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you don’t specify a client token, the Amazon Web
     * Services SDK automatically generates a client token and uses it for the request
     * to ensure idempotency. The API will return idempotent responses for the last 10
     * client tokens used to successfully redrive the execution. These client tokens
     * are valid for up to 15 minutes after they are first used.</p>
     */
    inline RedriveExecutionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you don’t specify a client token, the Amazon Web
     * Services SDK automatically generates a client token and uses it for the request
     * to ensure idempotency. The API will return idempotent responses for the last 10
     * client tokens used to successfully redrive the execution. These client tokens
     * are valid for up to 15 minutes after they are first used.</p>
     */
    inline RedriveExecutionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If you don’t specify a client token, the Amazon Web
     * Services SDK automatically generates a client token and uses it for the request
     * to ensure idempotency. The API will return idempotent responses for the last 10
     * client tokens used to successfully redrive the execution. These client tokens
     * are valid for up to 15 minutes after they are first used.</p>
     */
    inline RedriveExecutionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_executionArn;
    bool m_executionArnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
