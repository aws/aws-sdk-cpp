﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/Alert.h>
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
namespace MediaTailor
{
namespace Model
{
  class ListAlertsResult
  {
  public:
    AWS_MEDIATAILOR_API ListAlertsResult();
    AWS_MEDIATAILOR_API ListAlertsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MEDIATAILOR_API ListAlertsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of alerts that are associated with this resource.</p>
     */
    inline const Aws::Vector<Alert>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<Alert>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<Alert>&& value) { m_items = std::move(value); }
    inline ListAlertsResult& WithItems(const Aws::Vector<Alert>& value) { SetItems(value); return *this;}
    inline ListAlertsResult& WithItems(Aws::Vector<Alert>&& value) { SetItems(std::move(value)); return *this;}
    inline ListAlertsResult& AddItems(const Alert& value) { m_items.push_back(value); return *this; }
    inline ListAlertsResult& AddItems(Alert&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token returned by the list request when results exceed the maximum
     * allowed. Use the token to fetch the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAlertsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAlertsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAlertsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAlertsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAlertsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAlertsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Alert> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
