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
    AWS_REDSHIFT_API DeleteRedshiftIdcApplicationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRedshiftIdcApplication"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ARN for a deleted Amazon Redshift IAM Identity Center application.</p>
     */
    inline const Aws::String& GetRedshiftIdcApplicationArn() const { return m_redshiftIdcApplicationArn; }
    inline bool RedshiftIdcApplicationArnHasBeenSet() const { return m_redshiftIdcApplicationArnHasBeenSet; }
    template<typename RedshiftIdcApplicationArnT = Aws::String>
    void SetRedshiftIdcApplicationArn(RedshiftIdcApplicationArnT&& value) { m_redshiftIdcApplicationArnHasBeenSet = true; m_redshiftIdcApplicationArn = std::forward<RedshiftIdcApplicationArnT>(value); }
    template<typename RedshiftIdcApplicationArnT = Aws::String>
    DeleteRedshiftIdcApplicationRequest& WithRedshiftIdcApplicationArn(RedshiftIdcApplicationArnT&& value) { SetRedshiftIdcApplicationArn(std::forward<RedshiftIdcApplicationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_redshiftIdcApplicationArn;
    bool m_redshiftIdcApplicationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
