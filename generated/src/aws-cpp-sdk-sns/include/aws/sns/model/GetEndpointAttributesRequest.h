/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for <code>GetEndpointAttributes</code> action.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetEndpointAttributesInput">AWS
   * API Reference</a></p>
   */
  class GetEndpointAttributesRequest : public SNSRequest
  {
  public:
    AWS_SNS_API GetEndpointAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetEndpointAttributes"; }

    AWS_SNS_API Aws::String SerializePayload() const override;

  protected:
    AWS_SNS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p> <code>EndpointArn</code> for <code>GetEndpointAttributes</code> input.</p>
     */
    inline const Aws::String& GetEndpointArn() const{ return m_endpointArn; }

    /**
     * <p> <code>EndpointArn</code> for <code>GetEndpointAttributes</code> input.</p>
     */
    inline bool EndpointArnHasBeenSet() const { return m_endpointArnHasBeenSet; }

    /**
     * <p> <code>EndpointArn</code> for <code>GetEndpointAttributes</code> input.</p>
     */
    inline void SetEndpointArn(const Aws::String& value) { m_endpointArnHasBeenSet = true; m_endpointArn = value; }

    /**
     * <p> <code>EndpointArn</code> for <code>GetEndpointAttributes</code> input.</p>
     */
    inline void SetEndpointArn(Aws::String&& value) { m_endpointArnHasBeenSet = true; m_endpointArn = std::move(value); }

    /**
     * <p> <code>EndpointArn</code> for <code>GetEndpointAttributes</code> input.</p>
     */
    inline void SetEndpointArn(const char* value) { m_endpointArnHasBeenSet = true; m_endpointArn.assign(value); }

    /**
     * <p> <code>EndpointArn</code> for <code>GetEndpointAttributes</code> input.</p>
     */
    inline GetEndpointAttributesRequest& WithEndpointArn(const Aws::String& value) { SetEndpointArn(value); return *this;}

    /**
     * <p> <code>EndpointArn</code> for <code>GetEndpointAttributes</code> input.</p>
     */
    inline GetEndpointAttributesRequest& WithEndpointArn(Aws::String&& value) { SetEndpointArn(std::move(value)); return *this;}

    /**
     * <p> <code>EndpointArn</code> for <code>GetEndpointAttributes</code> input.</p>
     */
    inline GetEndpointAttributesRequest& WithEndpointArn(const char* value) { SetEndpointArn(value); return *this;}

  private:

    Aws::String m_endpointArn;
    bool m_endpointArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
