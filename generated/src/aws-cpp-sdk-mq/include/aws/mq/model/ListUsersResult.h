/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mq/MQ_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mq/model/UserSummary.h>
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
namespace MQ
{
namespace Model
{
  class ListUsersResult
  {
  public:
    AWS_MQ_API ListUsersResult();
    AWS_MQ_API ListUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MQ_API ListUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline const Aws::String& GetBrokerId() const{ return m_brokerId; }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(const Aws::String& value) { m_brokerId = value; }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(Aws::String&& value) { m_brokerId = std::move(value); }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline void SetBrokerId(const char* value) { m_brokerId.assign(value); }

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline ListUsersResult& WithBrokerId(const Aws::String& value) { SetBrokerId(value); return *this;}

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline ListUsersResult& WithBrokerId(Aws::String&& value) { SetBrokerId(std::move(value)); return *this;}

    /**
     * <p>Required. The unique ID that Amazon MQ generates for the broker.</p>
     */
    inline ListUsersResult& WithBrokerId(const char* value) { SetBrokerId(value); return *this;}


    /**
     * <p>Required. The maximum number of ActiveMQ users that can be returned per page
     * (20 by default). This value must be an integer from 5 to 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Required. The maximum number of ActiveMQ users that can be returned per page
     * (20 by default). This value must be an integer from 5 to 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResults = value; }

    /**
     * <p>Required. The maximum number of ActiveMQ users that can be returned per page
     * (20 by default). This value must be an integer from 5 to 100.</p>
     */
    inline ListUsersResult& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline ListUsersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline ListUsersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that specifies the next page of results Amazon MQ should return. To
     * request the first page, leave nextToken empty.</p>
     */
    inline ListUsersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Required. The list of all ActiveMQ usernames for the specified broker. Does
     * not apply to RabbitMQ brokers.</p>
     */
    inline const Aws::Vector<UserSummary>& GetUsers() const{ return m_users; }

    /**
     * <p>Required. The list of all ActiveMQ usernames for the specified broker. Does
     * not apply to RabbitMQ brokers.</p>
     */
    inline void SetUsers(const Aws::Vector<UserSummary>& value) { m_users = value; }

    /**
     * <p>Required. The list of all ActiveMQ usernames for the specified broker. Does
     * not apply to RabbitMQ brokers.</p>
     */
    inline void SetUsers(Aws::Vector<UserSummary>&& value) { m_users = std::move(value); }

    /**
     * <p>Required. The list of all ActiveMQ usernames for the specified broker. Does
     * not apply to RabbitMQ brokers.</p>
     */
    inline ListUsersResult& WithUsers(const Aws::Vector<UserSummary>& value) { SetUsers(value); return *this;}

    /**
     * <p>Required. The list of all ActiveMQ usernames for the specified broker. Does
     * not apply to RabbitMQ brokers.</p>
     */
    inline ListUsersResult& WithUsers(Aws::Vector<UserSummary>&& value) { SetUsers(std::move(value)); return *this;}

    /**
     * <p>Required. The list of all ActiveMQ usernames for the specified broker. Does
     * not apply to RabbitMQ brokers.</p>
     */
    inline ListUsersResult& AddUsers(const UserSummary& value) { m_users.push_back(value); return *this; }

    /**
     * <p>Required. The list of all ActiveMQ usernames for the specified broker. Does
     * not apply to RabbitMQ brokers.</p>
     */
    inline ListUsersResult& AddUsers(UserSummary&& value) { m_users.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_brokerId;

    int m_maxResults;

    Aws::String m_nextToken;

    Aws::Vector<UserSummary> m_users;
  };

} // namespace Model
} // namespace MQ
} // namespace Aws
