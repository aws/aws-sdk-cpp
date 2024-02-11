/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class DeleteRedshiftIdcApplicationRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DeleteRedshiftIdcApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRedshiftIdcApplication"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ARN for a deleted Amazon Redshift IAM Identity Center application.</p>
     */
    inline const Aws::String& GetRedshiftIdcApplicationArn() const{ return m_redshiftIdcApplicationArn; }

    /**
     * <p>The ARN for a deleted Amazon Redshift IAM Identity Center application.</p>
     */
    inline bool RedshiftIdcApplicationArnHasBeenSet() const { return m_redshiftIdcApplicationArnHasBeenSet; }

    /**
     * <p>The ARN for a deleted Amazon Redshift IAM Identity Center application.</p>
     */
    inline void SetRedshiftIdcApplicationArn(const Aws::String& value) { m_redshiftIdcApplicationArnHasBeenSet = true; m_redshiftIdcApplicationArn = value; }

    /**
     * <p>The ARN for a deleted Amazon Redshift IAM Identity Center application.</p>
     */
    inline void SetRedshiftIdcApplicationArn(Aws::String&& value) { m_redshiftIdcApplicationArnHasBeenSet = true; m_redshiftIdcApplicationArn = std::move(value); }

    /**
     * <p>The ARN for a deleted Amazon Redshift IAM Identity Center application.</p>
     */
    inline void SetRedshiftIdcApplicationArn(const char* value) { m_redshiftIdcApplicationArnHasBeenSet = true; m_redshiftIdcApplicationArn.assign(value); }

    /**
     * <p>The ARN for a deleted Amazon Redshift IAM Identity Center application.</p>
     */
    inline DeleteRedshiftIdcApplicationRequest& WithRedshiftIdcApplicationArn(const Aws::String& value) { SetRedshiftIdcApplicationArn(value); return *this;}

    /**
     * <p>The ARN for a deleted Amazon Redshift IAM Identity Center application.</p>
     */
    inline DeleteRedshiftIdcApplicationRequest& WithRedshiftIdcApplicationArn(Aws::String&& value) { SetRedshiftIdcApplicationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for a deleted Amazon Redshift IAM Identity Center application.</p>
     */
    inline DeleteRedshiftIdcApplicationRequest& WithRedshiftIdcApplicationArn(const char* value) { SetRedshiftIdcApplicationArn(value); return *this;}

  private:

    Aws::String m_redshiftIdcApplicationArn;
    bool m_redshiftIdcApplicationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
