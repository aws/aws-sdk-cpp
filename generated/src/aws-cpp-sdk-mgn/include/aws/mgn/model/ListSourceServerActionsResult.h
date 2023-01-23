/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/SourceServerActionDocument.h>
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
namespace mgn
{
namespace Model
{
  class ListSourceServerActionsResult
  {
  public:
    AWS_MGN_API ListSourceServerActionsResult();
    AWS_MGN_API ListSourceServerActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MGN_API ListSourceServerActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of source server post migration custom actions.</p>
     */
    inline const Aws::Vector<SourceServerActionDocument>& GetItems() const{ return m_items; }

    /**
     * <p>List of source server post migration custom actions.</p>
     */
    inline void SetItems(const Aws::Vector<SourceServerActionDocument>& value) { m_items = value; }

    /**
     * <p>List of source server post migration custom actions.</p>
     */
    inline void SetItems(Aws::Vector<SourceServerActionDocument>&& value) { m_items = std::move(value); }

    /**
     * <p>List of source server post migration custom actions.</p>
     */
    inline ListSourceServerActionsResult& WithItems(const Aws::Vector<SourceServerActionDocument>& value) { SetItems(value); return *this;}

    /**
     * <p>List of source server post migration custom actions.</p>
     */
    inline ListSourceServerActionsResult& WithItems(Aws::Vector<SourceServerActionDocument>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>List of source server post migration custom actions.</p>
     */
    inline ListSourceServerActionsResult& AddItems(const SourceServerActionDocument& value) { m_items.push_back(value); return *this; }

    /**
     * <p>List of source server post migration custom actions.</p>
     */
    inline ListSourceServerActionsResult& AddItems(SourceServerActionDocument&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>Next token returned when listing source server post migration custom
     * actions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Next token returned when listing source server post migration custom
     * actions.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Next token returned when listing source server post migration custom
     * actions.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Next token returned when listing source server post migration custom
     * actions.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Next token returned when listing source server post migration custom
     * actions.</p>
     */
    inline ListSourceServerActionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Next token returned when listing source server post migration custom
     * actions.</p>
     */
    inline ListSourceServerActionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Next token returned when listing source server post migration custom
     * actions.</p>
     */
    inline ListSourceServerActionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<SourceServerActionDocument> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
