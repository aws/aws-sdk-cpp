/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AccountInfo.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{
  class DescribeAccountSubscriptionResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeAccountSubscriptionResult();
    AWS_QUICKSIGHT_API DescribeAccountSubscriptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeAccountSubscriptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains the following elements:</p> <ul> <li> <p>Your
     * Amazon QuickSight account name.</p> </li> <li> <p>The edition of Amazon
     * QuickSight that your account is using.</p> </li> <li> <p>The notification email
     * address that is associated with the Amazon QuickSight account. </p> </li> <li>
     * <p>The authentication type of the Amazon QuickSight account.</p> </li> <li>
     * <p>The status of the Amazon QuickSight account's subscription.</p> </li> </ul>
     */
    inline const AccountInfo& GetAccountInfo() const{ return m_accountInfo; }

    /**
     * <p>A structure that contains the following elements:</p> <ul> <li> <p>Your
     * Amazon QuickSight account name.</p> </li> <li> <p>The edition of Amazon
     * QuickSight that your account is using.</p> </li> <li> <p>The notification email
     * address that is associated with the Amazon QuickSight account. </p> </li> <li>
     * <p>The authentication type of the Amazon QuickSight account.</p> </li> <li>
     * <p>The status of the Amazon QuickSight account's subscription.</p> </li> </ul>
     */
    inline void SetAccountInfo(const AccountInfo& value) { m_accountInfo = value; }

    /**
     * <p>A structure that contains the following elements:</p> <ul> <li> <p>Your
     * Amazon QuickSight account name.</p> </li> <li> <p>The edition of Amazon
     * QuickSight that your account is using.</p> </li> <li> <p>The notification email
     * address that is associated with the Amazon QuickSight account. </p> </li> <li>
     * <p>The authentication type of the Amazon QuickSight account.</p> </li> <li>
     * <p>The status of the Amazon QuickSight account's subscription.</p> </li> </ul>
     */
    inline void SetAccountInfo(AccountInfo&& value) { m_accountInfo = std::move(value); }

    /**
     * <p>A structure that contains the following elements:</p> <ul> <li> <p>Your
     * Amazon QuickSight account name.</p> </li> <li> <p>The edition of Amazon
     * QuickSight that your account is using.</p> </li> <li> <p>The notification email
     * address that is associated with the Amazon QuickSight account. </p> </li> <li>
     * <p>The authentication type of the Amazon QuickSight account.</p> </li> <li>
     * <p>The status of the Amazon QuickSight account's subscription.</p> </li> </ul>
     */
    inline DescribeAccountSubscriptionResult& WithAccountInfo(const AccountInfo& value) { SetAccountInfo(value); return *this;}

    /**
     * <p>A structure that contains the following elements:</p> <ul> <li> <p>Your
     * Amazon QuickSight account name.</p> </li> <li> <p>The edition of Amazon
     * QuickSight that your account is using.</p> </li> <li> <p>The notification email
     * address that is associated with the Amazon QuickSight account. </p> </li> <li>
     * <p>The authentication type of the Amazon QuickSight account.</p> </li> <li>
     * <p>The status of the Amazon QuickSight account's subscription.</p> </li> </ul>
     */
    inline DescribeAccountSubscriptionResult& WithAccountInfo(AccountInfo&& value) { SetAccountInfo(std::move(value)); return *this;}


    /**
     * <p>The HTTP status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the request.</p>
     */
    inline DescribeAccountSubscriptionResult& WithStatus(int value) { SetStatus(value); return *this;}


    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeAccountSubscriptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeAccountSubscriptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services request ID for this operation.</p>
     */
    inline DescribeAccountSubscriptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AccountInfo m_accountInfo;

    int m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
