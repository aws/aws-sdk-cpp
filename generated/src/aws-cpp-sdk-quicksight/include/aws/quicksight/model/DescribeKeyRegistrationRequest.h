/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace QuickSight
{
namespace Model
{

  /**
   */
  class DescribeKeyRegistrationRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API DescribeKeyRegistrationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeKeyRegistration"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

    AWS_QUICKSIGHT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the Amazon Web Services account that contains the customer managed
     * key registration that you want to describe.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    DescribeKeyRegistrationRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether the request returns the default key only.</p>
     */
    inline bool GetDefaultKeyOnly() const { return m_defaultKeyOnly; }
    inline bool DefaultKeyOnlyHasBeenSet() const { return m_defaultKeyOnlyHasBeenSet; }
    inline void SetDefaultKeyOnly(bool value) { m_defaultKeyOnlyHasBeenSet = true; m_defaultKeyOnly = value; }
    inline DescribeKeyRegistrationRequest& WithDefaultKeyOnly(bool value) { SetDefaultKeyOnly(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    bool m_defaultKeyOnly{false};
    bool m_defaultKeyOnlyHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
