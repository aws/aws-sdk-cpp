/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resiliencehub/ResilienceHub_EXPORTS.h>
#include <aws/resiliencehub/ResilienceHubRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ResilienceHub
{
namespace Model
{

  /**
   */
  class DescribeAppVersionAppComponentRequest : public ResilienceHubRequest
  {
  public:
    AWS_RESILIENCEHUB_API DescribeAppVersionAppComponentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAppVersionAppComponent"; }

    AWS_RESILIENCEHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the Resilience Hub application. The format for
     * this ARN is:
     * arn:<code>partition</code>:resiliencehub:<code>region</code>:<code>account</code>:app/<code>app-id</code>.
     * For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">
     * Amazon Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i> guide.</p>
     */
    inline const Aws::String& GetAppArn() const{ return m_appArn; }
    inline bool AppArnHasBeenSet() const { return m_appArnHasBeenSet; }
    inline void SetAppArn(const Aws::String& value) { m_appArnHasBeenSet = true; m_appArn = value; }
    inline void SetAppArn(Aws::String&& value) { m_appArnHasBeenSet = true; m_appArn = std::move(value); }
    inline void SetAppArn(const char* value) { m_appArnHasBeenSet = true; m_appArn.assign(value); }
    inline DescribeAppVersionAppComponentRequest& WithAppArn(const Aws::String& value) { SetAppArn(value); return *this;}
    inline DescribeAppVersionAppComponentRequest& WithAppArn(Aws::String&& value) { SetAppArn(std::move(value)); return *this;}
    inline DescribeAppVersionAppComponentRequest& WithAppArn(const char* value) { SetAppArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Resilience Hub application version.</p>
     */
    inline const Aws::String& GetAppVersion() const{ return m_appVersion; }
    inline bool AppVersionHasBeenSet() const { return m_appVersionHasBeenSet; }
    inline void SetAppVersion(const Aws::String& value) { m_appVersionHasBeenSet = true; m_appVersion = value; }
    inline void SetAppVersion(Aws::String&& value) { m_appVersionHasBeenSet = true; m_appVersion = std::move(value); }
    inline void SetAppVersion(const char* value) { m_appVersionHasBeenSet = true; m_appVersion.assign(value); }
    inline DescribeAppVersionAppComponentRequest& WithAppVersion(const Aws::String& value) { SetAppVersion(value); return *this;}
    inline DescribeAppVersionAppComponentRequest& WithAppVersion(Aws::String&& value) { SetAppVersion(std::move(value)); return *this;}
    inline DescribeAppVersionAppComponentRequest& WithAppVersion(const char* value) { SetAppVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifier of the Application Component.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DescribeAppVersionAppComponentRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DescribeAppVersionAppComponentRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DescribeAppVersionAppComponentRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}
  private:

    Aws::String m_appArn;
    bool m_appArnHasBeenSet = false;

    Aws::String m_appVersion;
    bool m_appVersionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace ResilienceHub
} // namespace Aws
