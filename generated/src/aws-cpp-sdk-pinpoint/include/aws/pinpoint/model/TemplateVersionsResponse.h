/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/TemplateVersionResponse.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Provides information about all the versions of a specific message
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/TemplateVersionsResponse">AWS
   * API Reference</a></p>
   */
  class TemplateVersionsResponse
  {
  public:
    AWS_PINPOINT_API TemplateVersionsResponse();
    AWS_PINPOINT_API TemplateVersionsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API TemplateVersionsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of responses, one for each version of the message template.</p>
     */
    inline const Aws::Vector<TemplateVersionResponse>& GetItem() const{ return m_item; }

    /**
     * <p>An array of responses, one for each version of the message template.</p>
     */
    inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }

    /**
     * <p>An array of responses, one for each version of the message template.</p>
     */
    inline void SetItem(const Aws::Vector<TemplateVersionResponse>& value) { m_itemHasBeenSet = true; m_item = value; }

    /**
     * <p>An array of responses, one for each version of the message template.</p>
     */
    inline void SetItem(Aws::Vector<TemplateVersionResponse>&& value) { m_itemHasBeenSet = true; m_item = std::move(value); }

    /**
     * <p>An array of responses, one for each version of the message template.</p>
     */
    inline TemplateVersionsResponse& WithItem(const Aws::Vector<TemplateVersionResponse>& value) { SetItem(value); return *this;}

    /**
     * <p>An array of responses, one for each version of the message template.</p>
     */
    inline TemplateVersionsResponse& WithItem(Aws::Vector<TemplateVersionResponse>&& value) { SetItem(std::move(value)); return *this;}

    /**
     * <p>An array of responses, one for each version of the message template.</p>
     */
    inline TemplateVersionsResponse& AddItem(const TemplateVersionResponse& value) { m_itemHasBeenSet = true; m_item.push_back(value); return *this; }

    /**
     * <p>An array of responses, one for each version of the message template.</p>
     */
    inline TemplateVersionsResponse& AddItem(TemplateVersionResponse&& value) { m_itemHasBeenSet = true; m_item.push_back(std::move(value)); return *this; }


    /**
     * <p>The message that's returned from the API for the request to retrieve
     * information about all the versions of the message template.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message that's returned from the API for the request to retrieve
     * information about all the versions of the message template.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message that's returned from the API for the request to retrieve
     * information about all the versions of the message template.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message that's returned from the API for the request to retrieve
     * information about all the versions of the message template.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message that's returned from the API for the request to retrieve
     * information about all the versions of the message template.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message that's returned from the API for the request to retrieve
     * information about all the versions of the message template.</p>
     */
    inline TemplateVersionsResponse& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message that's returned from the API for the request to retrieve
     * information about all the versions of the message template.</p>
     */
    inline TemplateVersionsResponse& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message that's returned from the API for the request to retrieve
     * information about all the versions of the message template.</p>
     */
    inline TemplateVersionsResponse& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline TemplateVersionsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline TemplateVersionsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline TemplateVersionsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The unique identifier for the request to retrieve information about all the
     * versions of the message template.</p>
     */
    inline const Aws::String& GetRequestID() const{ return m_requestID; }

    /**
     * <p>The unique identifier for the request to retrieve information about all the
     * versions of the message template.</p>
     */
    inline bool RequestIDHasBeenSet() const { return m_requestIDHasBeenSet; }

    /**
     * <p>The unique identifier for the request to retrieve information about all the
     * versions of the message template.</p>
     */
    inline void SetRequestID(const Aws::String& value) { m_requestIDHasBeenSet = true; m_requestID = value; }

    /**
     * <p>The unique identifier for the request to retrieve information about all the
     * versions of the message template.</p>
     */
    inline void SetRequestID(Aws::String&& value) { m_requestIDHasBeenSet = true; m_requestID = std::move(value); }

    /**
     * <p>The unique identifier for the request to retrieve information about all the
     * versions of the message template.</p>
     */
    inline void SetRequestID(const char* value) { m_requestIDHasBeenSet = true; m_requestID.assign(value); }

    /**
     * <p>The unique identifier for the request to retrieve information about all the
     * versions of the message template.</p>
     */
    inline TemplateVersionsResponse& WithRequestID(const Aws::String& value) { SetRequestID(value); return *this;}

    /**
     * <p>The unique identifier for the request to retrieve information about all the
     * versions of the message template.</p>
     */
    inline TemplateVersionsResponse& WithRequestID(Aws::String&& value) { SetRequestID(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the request to retrieve information about all the
     * versions of the message template.</p>
     */
    inline TemplateVersionsResponse& WithRequestID(const char* value) { SetRequestID(value); return *this;}

  private:

    Aws::Vector<TemplateVersionResponse> m_item;
    bool m_itemHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestID;
    bool m_requestIDHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
