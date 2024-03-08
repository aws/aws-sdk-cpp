/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace QBusiness
{
namespace Model
{

  /**
   */
  class ListMessagesRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API ListMessagesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMessages"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;

    AWS_QBUSINESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier for the Amazon Q application.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The identifier for the Amazon Q application.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The identifier for the Amazon Q application.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The identifier for the Amazon Q application.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The identifier for the Amazon Q application.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The identifier for the Amazon Q application.</p>
     */
    inline ListMessagesRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The identifier for the Amazon Q application.</p>
     */
    inline ListMessagesRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the Amazon Q application.</p>
     */
    inline ListMessagesRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The identifier of the Amazon Q web experience conversation.</p>
     */
    inline const Aws::String& GetConversationId() const{ return m_conversationId; }

    /**
     * <p>The identifier of the Amazon Q web experience conversation.</p>
     */
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Q web experience conversation.</p>
     */
    inline void SetConversationId(const Aws::String& value) { m_conversationIdHasBeenSet = true; m_conversationId = value; }

    /**
     * <p>The identifier of the Amazon Q web experience conversation.</p>
     */
    inline void SetConversationId(Aws::String&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q web experience conversation.</p>
     */
    inline void SetConversationId(const char* value) { m_conversationIdHasBeenSet = true; m_conversationId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q web experience conversation.</p>
     */
    inline ListMessagesRequest& WithConversationId(const Aws::String& value) { SetConversationId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q web experience conversation.</p>
     */
    inline ListMessagesRequest& WithConversationId(Aws::String&& value) { SetConversationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q web experience conversation.</p>
     */
    inline ListMessagesRequest& WithConversationId(const char* value) { SetConversationId(value); return *this;}


    /**
     * <p>The maximum number of messages to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of messages to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of messages to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of messages to return.</p>
     */
    inline ListMessagesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the number of retrievers returned exceeds <code>maxResults</code>, Amazon
     * Q returns a next token as a pagination token to retrieve the next set of
     * messages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the number of retrievers returned exceeds <code>maxResults</code>, Amazon
     * Q returns a next token as a pagination token to retrieve the next set of
     * messages.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the number of retrievers returned exceeds <code>maxResults</code>, Amazon
     * Q returns a next token as a pagination token to retrieve the next set of
     * messages.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the number of retrievers returned exceeds <code>maxResults</code>, Amazon
     * Q returns a next token as a pagination token to retrieve the next set of
     * messages.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the number of retrievers returned exceeds <code>maxResults</code>, Amazon
     * Q returns a next token as a pagination token to retrieve the next set of
     * messages.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the number of retrievers returned exceeds <code>maxResults</code>, Amazon
     * Q returns a next token as a pagination token to retrieve the next set of
     * messages.</p>
     */
    inline ListMessagesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the number of retrievers returned exceeds <code>maxResults</code>, Amazon
     * Q returns a next token as a pagination token to retrieve the next set of
     * messages.</p>
     */
    inline ListMessagesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the number of retrievers returned exceeds <code>maxResults</code>, Amazon
     * Q returns a next token as a pagination token to retrieve the next set of
     * messages.</p>
     */
    inline ListMessagesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The identifier of the user involved in the Amazon Q web experience
     * conversation.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The identifier of the user involved in the Amazon Q web experience
     * conversation.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The identifier of the user involved in the Amazon Q web experience
     * conversation.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The identifier of the user involved in the Amazon Q web experience
     * conversation.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The identifier of the user involved in the Amazon Q web experience
     * conversation.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The identifier of the user involved in the Amazon Q web experience
     * conversation.</p>
     */
    inline ListMessagesRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifier of the user involved in the Amazon Q web experience
     * conversation.</p>
     */
    inline ListMessagesRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user involved in the Amazon Q web experience
     * conversation.</p>
     */
    inline ListMessagesRequest& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
