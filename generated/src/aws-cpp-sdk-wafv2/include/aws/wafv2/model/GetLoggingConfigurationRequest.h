/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class GetLoggingConfigurationRequest : public WAFV2Request
  {
  public:
    AWS_WAFV2_API GetLoggingConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLoggingConfiguration"; }

    AWS_WAFV2_API Aws::String SerializePayload() const override;

    AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL for which you want to get the
     * <a>LoggingConfiguration</a>.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL for which you want to get the
     * <a>LoggingConfiguration</a>.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL for which you want to get the
     * <a>LoggingConfiguration</a>.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL for which you want to get the
     * <a>LoggingConfiguration</a>.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL for which you want to get the
     * <a>LoggingConfiguration</a>.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL for which you want to get the
     * <a>LoggingConfiguration</a>.</p>
     */
    inline GetLoggingConfigurationRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL for which you want to get the
     * <a>LoggingConfiguration</a>.</p>
     */
    inline GetLoggingConfigurationRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the web ACL for which you want to get the
     * <a>LoggingConfiguration</a>.</p>
     */
    inline GetLoggingConfigurationRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
