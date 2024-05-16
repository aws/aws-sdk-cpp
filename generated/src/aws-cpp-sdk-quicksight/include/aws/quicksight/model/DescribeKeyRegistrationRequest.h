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
    AWS_QUICKSIGHT_API DescribeKeyRegistrationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeKeyRegistration"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

    AWS_QUICKSIGHT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the Amazon Web Services account that contains the customer managed
     * key registration that you want to describe.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the customer managed
     * key registration that you want to describe.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the customer managed
     * key registration that you want to describe.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that contains the customer managed
     * key registration that you want to describe.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the customer managed
     * key registration that you want to describe.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that contains the customer managed
     * key registration that you want to describe.</p>
     */
    inline DescribeKeyRegistrationRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the customer managed
     * key registration that you want to describe.</p>
     */
    inline DescribeKeyRegistrationRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that contains the customer managed
     * key registration that you want to describe.</p>
     */
    inline DescribeKeyRegistrationRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>Determines whether the request returns the default key only.</p>
     */
    inline bool GetDefaultKeyOnly() const{ return m_defaultKeyOnly; }

    /**
     * <p>Determines whether the request returns the default key only.</p>
     */
    inline bool DefaultKeyOnlyHasBeenSet() const { return m_defaultKeyOnlyHasBeenSet; }

    /**
     * <p>Determines whether the request returns the default key only.</p>
     */
    inline void SetDefaultKeyOnly(bool value) { m_defaultKeyOnlyHasBeenSet = true; m_defaultKeyOnly = value; }

    /**
     * <p>Determines whether the request returns the default key only.</p>
     */
    inline DescribeKeyRegistrationRequest& WithDefaultKeyOnly(bool value) { SetDefaultKeyOnly(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    bool m_defaultKeyOnly;
    bool m_defaultKeyOnlyHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
