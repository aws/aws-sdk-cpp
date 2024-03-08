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
   * <p>Input for <code>ListEndpointsByPlatformApplication</code>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListEndpointsByPlatformApplicationInput">AWS
   * API Reference</a></p>
   */
  class ListEndpointsByPlatformApplicationRequest : public SNSRequest
  {
  public:
    AWS_SNS_API ListEndpointsByPlatformApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEndpointsByPlatformApplication"; }

    AWS_SNS_API Aws::String SerializePayload() const override;

  protected:
    AWS_SNS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p> <code>PlatformApplicationArn</code> for
     * <code>ListEndpointsByPlatformApplicationInput</code> action.</p>
     */
    inline const Aws::String& GetPlatformApplicationArn() const{ return m_platformApplicationArn; }

    /**
     * <p> <code>PlatformApplicationArn</code> for
     * <code>ListEndpointsByPlatformApplicationInput</code> action.</p>
     */
    inline bool PlatformApplicationArnHasBeenSet() const { return m_platformApplicationArnHasBeenSet; }

    /**
     * <p> <code>PlatformApplicationArn</code> for
     * <code>ListEndpointsByPlatformApplicationInput</code> action.</p>
     */
    inline void SetPlatformApplicationArn(const Aws::String& value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn = value; }

    /**
     * <p> <code>PlatformApplicationArn</code> for
     * <code>ListEndpointsByPlatformApplicationInput</code> action.</p>
     */
    inline void SetPlatformApplicationArn(Aws::String&& value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn = std::move(value); }

    /**
     * <p> <code>PlatformApplicationArn</code> for
     * <code>ListEndpointsByPlatformApplicationInput</code> action.</p>
     */
    inline void SetPlatformApplicationArn(const char* value) { m_platformApplicationArnHasBeenSet = true; m_platformApplicationArn.assign(value); }

    /**
     * <p> <code>PlatformApplicationArn</code> for
     * <code>ListEndpointsByPlatformApplicationInput</code> action.</p>
     */
    inline ListEndpointsByPlatformApplicationRequest& WithPlatformApplicationArn(const Aws::String& value) { SetPlatformApplicationArn(value); return *this;}

    /**
     * <p> <code>PlatformApplicationArn</code> for
     * <code>ListEndpointsByPlatformApplicationInput</code> action.</p>
     */
    inline ListEndpointsByPlatformApplicationRequest& WithPlatformApplicationArn(Aws::String&& value) { SetPlatformApplicationArn(std::move(value)); return *this;}

    /**
     * <p> <code>PlatformApplicationArn</code> for
     * <code>ListEndpointsByPlatformApplicationInput</code> action.</p>
     */
    inline ListEndpointsByPlatformApplicationRequest& WithPlatformApplicationArn(const char* value) { SetPlatformApplicationArn(value); return *this;}


    /**
     * <p> <code>NextToken</code> string is used when calling
     * <code>ListEndpointsByPlatformApplication</code> action to retrieve additional
     * records that are available after the first page results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> <code>NextToken</code> string is used when calling
     * <code>ListEndpointsByPlatformApplication</code> action to retrieve additional
     * records that are available after the first page results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> <code>NextToken</code> string is used when calling
     * <code>ListEndpointsByPlatformApplication</code> action to retrieve additional
     * records that are available after the first page results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> <code>NextToken</code> string is used when calling
     * <code>ListEndpointsByPlatformApplication</code> action to retrieve additional
     * records that are available after the first page results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> <code>NextToken</code> string is used when calling
     * <code>ListEndpointsByPlatformApplication</code> action to retrieve additional
     * records that are available after the first page results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> <code>NextToken</code> string is used when calling
     * <code>ListEndpointsByPlatformApplication</code> action to retrieve additional
     * records that are available after the first page results.</p>
     */
    inline ListEndpointsByPlatformApplicationRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> <code>NextToken</code> string is used when calling
     * <code>ListEndpointsByPlatformApplication</code> action to retrieve additional
     * records that are available after the first page results.</p>
     */
    inline ListEndpointsByPlatformApplicationRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> <code>NextToken</code> string is used when calling
     * <code>ListEndpointsByPlatformApplication</code> action to retrieve additional
     * records that are available after the first page results.</p>
     */
    inline ListEndpointsByPlatformApplicationRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_platformApplicationArn;
    bool m_platformApplicationArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
