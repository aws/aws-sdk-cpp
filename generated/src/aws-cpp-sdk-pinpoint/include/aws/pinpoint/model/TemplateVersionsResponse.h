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
    AWS_PINPOINT_API TemplateVersionsResponse() = default;
    AWS_PINPOINT_API TemplateVersionsResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API TemplateVersionsResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of responses, one for each version of the message template.</p>
     */
    inline const Aws::Vector<TemplateVersionResponse>& GetItem() const { return m_item; }
    inline bool ItemHasBeenSet() const { return m_itemHasBeenSet; }
    template<typename ItemT = Aws::Vector<TemplateVersionResponse>>
    void SetItem(ItemT&& value) { m_itemHasBeenSet = true; m_item = std::forward<ItemT>(value); }
    template<typename ItemT = Aws::Vector<TemplateVersionResponse>>
    TemplateVersionsResponse& WithItem(ItemT&& value) { SetItem(std::forward<ItemT>(value)); return *this;}
    template<typename ItemT = TemplateVersionResponse>
    TemplateVersionsResponse& AddItem(ItemT&& value) { m_itemHasBeenSet = true; m_item.emplace_back(std::forward<ItemT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The message that's returned from the API for the request to retrieve
     * information about all the versions of the message template.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    TemplateVersionsResponse& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    TemplateVersionsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the request to retrieve information about all the
     * versions of the message template.</p>
     */
    inline const Aws::String& GetRequestID() const { return m_requestID; }
    inline bool RequestIDHasBeenSet() const { return m_requestIDHasBeenSet; }
    template<typename RequestIDT = Aws::String>
    void SetRequestID(RequestIDT&& value) { m_requestIDHasBeenSet = true; m_requestID = std::forward<RequestIDT>(value); }
    template<typename RequestIDT = Aws::String>
    TemplateVersionsResponse& WithRequestID(RequestIDT&& value) { SetRequestID(std::forward<RequestIDT>(value)); return *this;}
    ///@}
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
